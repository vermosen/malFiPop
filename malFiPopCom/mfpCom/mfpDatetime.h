// mfpDatetime.h : Declaration of the CmfpDatetime

#pragma once
#include "resource.h"       // main symbols



#include "malFiPopCom_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CmfpDatetime

class ATL_NO_VTABLE CmfpDatetime :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CmfpDatetime, &CLSID_mfpDatetime>,
	public IDispatchImpl<ImfpDatetime, &IID_ImfpDatetime, &LIBID_malFiPopComLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CmfpDatetime()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_MFPDATETIME)


BEGIN_COM_MAP(CmfpDatetime)
	COM_INTERFACE_ENTRY(ImfpDatetime)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:



};

OBJECT_ENTRY_AUTO(__uuidof(mfpDatetime), CmfpDatetime)
