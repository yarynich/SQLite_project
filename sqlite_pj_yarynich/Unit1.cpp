//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "sqlite3.h"
#include "Unit1.h"
#include "string.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "VirtualTrees"
#pragma resource "*.dfm"

TForm1 *Form1;
sqlite3* Database;
int status;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
sqlite3_stmt *pStatement;

PVirtualNode selectedNode = VirtualStringTree1->FocusedNode;
TBaseNode *nodeData = (TBaseNode*)VirtualStringTree1->GetNodeData(selectedNode);

int selectedNodeIndex = nodeData->index;

UnicodeString test = "DELETE FROM main WHERE id="+IntToStr(selectedNodeIndex);
wchar_t *wc = test.t_str();
char c[100];
wcstombs(c, wc, wcslen(wc)+1);

int result = sqlite3_prepare_v2(Database,c,-1,&pStatement,NULL);
result = sqlite3_step(pStatement);
ShowMessage(IntToStr(result));
sqlite3_finalize(pStatement);
VirtualStringTree1->DeleteNode(selectedNode);

}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormCreate(TObject *Sender)
{
sqlite3_open("yarynich.db", &Database);
VirtualStringTree1->NodeDataSize = sizeof(TBaseNode);
loadbase() ;
}

void __fastcall TForm1::loadbase()
{
char *errmsg;
sqlite3_stmt *pStatement;
int result = sqlite3_prepare_v2(Database,"SELECT id, car, malfunction FROM main",-1,&pStatement,NULL);
while(true)
{
	result = sqlite3_step(pStatement);
	if(result != SQLITE_ROW) break;

	int n = sqlite3_column_int(pStatement, 0);
	unsigned char *str = (unsigned char *)sqlite3_column_text(pStatement, 1);
	unsigned char *str1 = (unsigned char *)sqlite3_column_text(pStatement, 2);
	unsigned char *str2 = (unsigned char *)sqlite3_column_text(pStatement, 3);
	unsigned char *str3 = (unsigned char *)sqlite3_column_text(pStatement, 4);

	PVirtualNode entryNode = (PVirtualNode)VirtualStringTree1->AddChild(VirtualStringTree1->RootNode);
	TBaseNode *nodeData = (TBaseNode*)VirtualStringTree1->GetNodeData(entryNode);
	nodeData->index=n;
	nodeData->FirstName=(UnicodeString)(char*)str;
	nodeData->LastName=(UnicodeString)(char*)str1;
}

sqlite3_finalize(pStatement);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::VirtualStringTree1GetText(TBaseVirtualTree *Sender, PVirtualNode Node,
          TColumnIndex Column, TVSTTextType TextType, UnicodeString &CellText)

{
TBaseNode *nodeData = (TBaseNode*)Sender->GetNodeData(Node);
switch(Column)
{
	case 0: CellText = nodeData->index; break;
	case 1: CellText = nodeData->FirstName; break;
	case 2: CellText = nodeData->LastName; break;
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::VirtualStringTree1AddToSelection(TBaseVirtualTree *Sender,
		  PVirtualNode Node)
{
sqlite3_stmt *pStatement;
if(!Node) return;

TBaseNode *nodeData = (TBaseNode*)Sender->GetNodeData(Node);

UnicodeString test = "SELECT repair_cost FROM main WHERE id="+IntToStr(nodeData->index);
wchar_t *wc = test.t_str();
char c[100];
wcstombs(c, wc, wcslen(wc)+1);

int result = sqlite3_prepare_v2(Database,c,-1,&pStatement,NULL);
result = sqlite3_step(pStatement);
unsigned char *str = (unsigned char *)sqlite3_column_text(pStatement, 0);
unsigned char *str1 = (unsigned char *)sqlite3_column_text(pStatement, 1);
unsigned char *str2 = (unsigned char *)sqlite3_column_text(pStatement, 2);
Label1->Caption = "????? ???????: "+(UnicodeString)(char*)str;
sqlite3_finalize(pStatement);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
sqlite3_close(Database);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
sqlite3_stmt *pStatement;
const char* c = "DELETE FROM main";
int result = sqlite3_prepare_v2(Database,c,-1,&pStatement,NULL);
result = sqlite3_step(pStatement);
sqlite3_finalize(pStatement);
VirtualStringTree1->Clear();
Label1->Caption ="???? ????????? ???????";
}
//---------------------------------------------------------------------------

