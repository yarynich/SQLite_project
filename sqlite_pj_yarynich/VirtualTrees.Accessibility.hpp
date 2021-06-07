﻿// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'VirtualTrees.Accessibility.pas' rev: 34.00 (Windows)

#ifndef Virtualtrees_AccessibilityHPP
#define Virtualtrees_AccessibilityHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <Winapi.ActiveX.hpp>
#include <System.Types.hpp>
#include <Winapi.oleacc.hpp>
#include <VirtualTrees.hpp>
#include <VirtualTrees.AccessibilityFactory.hpp>
#include <Vcl.Controls.hpp>

//-- user supplied -----------------------------------------------------------

namespace Virtualtrees
{
namespace Accessibility
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TVirtualTreeAccessibility;
class DELPHICLASS TVirtualTreeItemAccessibility;
class DELPHICLASS TVTMultiColumnItemAccessibility;
class DELPHICLASS TVTDefaultAccessibleProvider;
class DELPHICLASS TVTDefaultAccessibleItemProvider;
class DELPHICLASS TVTMultiColumnAccessibleItemProvider;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TVirtualTreeAccessibility : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	Virtualtrees::TVirtualStringTree* FVirtualTree;
	
public:
	__fastcall TVirtualTreeAccessibility(Virtualtrees::TVirtualStringTree* AVirtualTree);
	__classmethod void __fastcall RegisterDefaultAccessibleProviders();
	HRESULT __stdcall Get_accParent(/* out */ _di_IDispatch &ppdispParent);
	HRESULT __stdcall Get_accChildCount(/* out */ int &pcountChildren);
	HRESULT __stdcall Get_accChild(System::OleVariant varChild, /* out */ _di_IDispatch &ppdispChild);
	HRESULT __stdcall Get_accName(System::OleVariant varChild, /* out */ System::WideString &pszName);
	HRESULT __stdcall Get_accValue(System::OleVariant varChild, /* out */ System::WideString &pszValue);
	HRESULT __stdcall Get_accDescription(System::OleVariant varChild, /* out */ System::WideString &pszDescription);
	HRESULT __stdcall Get_accRole(System::OleVariant varChild, /* out */ System::OleVariant &pvarRole);
	HRESULT __stdcall Get_accState(System::OleVariant varChild, /* out */ System::OleVariant &pvarState);
	HRESULT __stdcall Get_accHelp(System::OleVariant varChild, /* out */ System::WideString &pszHelp);
	HRESULT __stdcall Get_accHelpTopic(/* out */ System::WideString &pszHelpFile, System::OleVariant varChild, /* out */ int &pidTopic);
	HRESULT __stdcall Get_accKeyboardShortcut(System::OleVariant varChild, /* out */ System::WideString &pszKeyboardShortcut);
	HRESULT __stdcall Get_accFocus(/* out */ System::OleVariant &pvarChild);
	HRESULT __stdcall Get_accSelection(/* out */ System::OleVariant &pvarChildren);
	HRESULT __stdcall Get_accDefaultAction(System::OleVariant varChild, /* out */ System::WideString &pszDefaultAction);
	HRESULT __stdcall accSelect(int flagsSelect, System::OleVariant varChild);
	HRESULT __stdcall accLocation(/* out */ int &pxLeft, /* out */ int &pyTop, /* out */ int &pcxWidth, /* out */ int &pcyHeight, System::OleVariant varChild);
	HRESULT __stdcall accNavigate(int navDir, System::OleVariant varStart, /* out */ System::OleVariant &pvarEndUpAt);
	HRESULT __stdcall accHitTest(int xLeft, int yTop, /* out */ System::OleVariant &pvarChild);
	HRESULT __stdcall accDoDefaultAction(System::OleVariant varChild);
	HRESULT __stdcall Set_accName(System::OleVariant varChild, const System::WideString pszName);
	HRESULT __stdcall Set_accValue(System::OleVariant varChild, const System::WideString pszValue);
	HRESULT __stdcall GetIDsOfNames(const GUID &IID, void * Names, int NameCount, int LocaleID, void * DispIDs);
	HRESULT __stdcall GetTypeInfo(int Index, int LocaleID, /* out */ void *TypeInfo);
	HRESULT __stdcall GetTypeInfoCount(/* out */ int &Count);
	HRESULT __stdcall Invoke(int DispID, const GUID &IID, int LocaleID, System::Word Flags, void *Params, void * VarResult, void * ExcepInfo, void * ArgErr);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TVirtualTreeAccessibility() { }
	
private:
	void *__IAccessible;	// IAccessible 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {618736E0-3C3D-11CF-810C-00AA00389B71}
	operator _di_IAccessible()
	{
		_di_IAccessible intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IAccessible*(void) { return (IAccessible*)&__IAccessible; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00020400-0000-0000-C000-000000000046}
	operator _di_IDispatch()
	{
		_di_IDispatch intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IDispatch*(void) { return (IDispatch*)&__IAccessible; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TVirtualTreeItemAccessibility : public TVirtualTreeAccessibility
{
	typedef TVirtualTreeAccessibility inherited;
	
public:
	HIDESBASE HRESULT __stdcall Get_accParent(/* out */ _di_IDispatch &ppdispParent);
	HIDESBASE HRESULT __stdcall Get_accChildCount(/* out */ int &pcountChildren);
	HIDESBASE HRESULT __stdcall Get_accChild(System::OleVariant varChild, /* out */ _di_IDispatch &ppdispChild);
	HIDESBASE HRESULT __stdcall Get_accName(System::OleVariant varChild, /* out */ System::WideString &pszName);
	HIDESBASE HRESULT __stdcall Get_accValue(System::OleVariant varChild, /* out */ System::WideString &pszValue);
	HIDESBASE HRESULT __stdcall Get_accDescription(System::OleVariant varChild, /* out */ System::WideString &pszDescription);
	HIDESBASE HRESULT __stdcall Get_accRole(System::OleVariant varChild, /* out */ System::OleVariant &pvarRole);
	HIDESBASE HRESULT __stdcall Get_accState(System::OleVariant varChild, /* out */ System::OleVariant &pvarState);
	HIDESBASE HRESULT __stdcall accLocation(/* out */ int &pxLeft, /* out */ int &pyTop, /* out */ int &pcxWidth, /* out */ int &pcyHeight, System::OleVariant varChild);
	HIDESBASE HRESULT __stdcall Get_accFocus(/* out */ System::OleVariant &pvarChild);
public:
	/* TVirtualTreeAccessibility.Create */ inline __fastcall TVirtualTreeItemAccessibility(Virtualtrees::TVirtualStringTree* AVirtualTree) : TVirtualTreeAccessibility(AVirtualTree) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TVirtualTreeItemAccessibility() { }
	
private:
	void *__IAccessible;	// IAccessible 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {618736E0-3C3D-11CF-810C-00AA00389B71}
	operator _di_IAccessible()
	{
		_di_IAccessible intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IAccessible*(void) { return (IAccessible*)&__IAccessible; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TVTMultiColumnItemAccessibility : public TVirtualTreeItemAccessibility
{
	typedef TVirtualTreeItemAccessibility inherited;
	
private:
	HRESULT __stdcall GetItemDescription(System::OleVariant varChild, /* out */ System::WideString &pszDescription, bool IncludeMainColumn);
	
public:
	HIDESBASE HRESULT __stdcall Get_accName(System::OleVariant varChild, /* out */ System::WideString &pszName);
	HIDESBASE HRESULT __stdcall Get_accDescription(System::OleVariant varChild, /* out */ System::WideString &pszDescription);
public:
	/* TVirtualTreeAccessibility.Create */ inline __fastcall TVTMultiColumnItemAccessibility(Virtualtrees::TVirtualStringTree* AVirtualTree) : TVirtualTreeItemAccessibility(AVirtualTree) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TVTMultiColumnItemAccessibility() { }
	
private:
	void *__IAccessible;	// IAccessible 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {618736E0-3C3D-11CF-810C-00AA00389B71}
	operator _di_IAccessible()
	{
		_di_IAccessible intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IAccessible*(void) { return (IAccessible*)&__IAccessible; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TVTDefaultAccessibleProvider : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
public:
	_di_IAccessible __fastcall CreateIAccessible(Virtualtrees::TBaseVirtualTree* ATree);
public:
	/* TObject.Create */ inline __fastcall TVTDefaultAccessibleProvider() : System::TInterfacedObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TVTDefaultAccessibleProvider() { }
	
private:
	void *__IVTAccessibleProvider;	// Virtualtrees::Accessibilityfactory::IVTAccessibleProvider 
	
public:
	operator Virtualtrees::Accessibilityfactory::IVTAccessibleProvider*(void) { return (Virtualtrees::Accessibilityfactory::IVTAccessibleProvider*)&__IVTAccessibleProvider; }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TVTDefaultAccessibleItemProvider : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
public:
	_di_IAccessible __fastcall CreateIAccessible(Virtualtrees::TBaseVirtualTree* ATree);
public:
	/* TObject.Create */ inline __fastcall TVTDefaultAccessibleItemProvider() : System::TInterfacedObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TVTDefaultAccessibleItemProvider() { }
	
private:
	void *__IVTAccessibleProvider;	// Virtualtrees::Accessibilityfactory::IVTAccessibleProvider 
	
public:
	operator Virtualtrees::Accessibilityfactory::IVTAccessibleProvider*(void) { return (Virtualtrees::Accessibilityfactory::IVTAccessibleProvider*)&__IVTAccessibleProvider; }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TVTMultiColumnAccessibleItemProvider : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
public:
	_di_IAccessible __fastcall CreateIAccessible(Virtualtrees::TBaseVirtualTree* ATree);
public:
	/* TObject.Create */ inline __fastcall TVTMultiColumnAccessibleItemProvider() : System::TInterfacedObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TVTMultiColumnAccessibleItemProvider() { }
	
private:
	void *__IVTAccessibleProvider;	// Virtualtrees::Accessibilityfactory::IVTAccessibleProvider 
	
public:
	operator Virtualtrees::Accessibilityfactory::IVTAccessibleProvider*(void) { return (Virtualtrees::Accessibilityfactory::IVTAccessibleProvider*)&__IVTAccessibleProvider; }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Accessibility */
}	/* namespace Virtualtrees */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VIRTUALTREES_ACCESSIBILITY)
using namespace Virtualtrees::Accessibility;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VIRTUALTREES)
using namespace Virtualtrees;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Virtualtrees_AccessibilityHPP
