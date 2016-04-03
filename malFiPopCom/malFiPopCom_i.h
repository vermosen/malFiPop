

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Sun Apr 03 15:28:54 2016
 */
/* Compiler settings for malFiPopCom.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __malFiPopCom_i_h__
#define __malFiPopCom_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ImfpDatetime_FWD_DEFINED__
#define __ImfpDatetime_FWD_DEFINED__
typedef interface ImfpDatetime ImfpDatetime;

#endif 	/* __ImfpDatetime_FWD_DEFINED__ */


#ifndef __mfpDatetime_FWD_DEFINED__
#define __mfpDatetime_FWD_DEFINED__

#ifdef __cplusplus
typedef class mfpDatetime mfpDatetime;
#else
typedef struct mfpDatetime mfpDatetime;
#endif /* __cplusplus */

#endif 	/* __mfpDatetime_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ImfpDatetime_INTERFACE_DEFINED__
#define __ImfpDatetime_INTERFACE_DEFINED__

/* interface ImfpDatetime */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ImfpDatetime;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("27E7520F-0FB3-424E-9EDA-33D9BD7CAE9C")
    ImfpDatetime : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct ImfpDatetimeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ImfpDatetime * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ImfpDatetime * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ImfpDatetime * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ImfpDatetime * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ImfpDatetime * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ImfpDatetime * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ImfpDatetime * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } ImfpDatetimeVtbl;

    interface ImfpDatetime
    {
        CONST_VTBL struct ImfpDatetimeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ImfpDatetime_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ImfpDatetime_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ImfpDatetime_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ImfpDatetime_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ImfpDatetime_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ImfpDatetime_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ImfpDatetime_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ImfpDatetime_INTERFACE_DEFINED__ */



#ifndef __malFiPopComLib_LIBRARY_DEFINED__
#define __malFiPopComLib_LIBRARY_DEFINED__

/* library malFiPopComLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_malFiPopComLib;

EXTERN_C const CLSID CLSID_mfpDatetime;

#ifdef __cplusplus

class DECLSPEC_UUID("A2C8D989-557A-43DE-8A56-C15C84E09EA1")
mfpDatetime;
#endif
#endif /* __malFiPopComLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


