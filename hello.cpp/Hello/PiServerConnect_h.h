

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Tue Jan 10 12:16:06 2017
 */
/* Compiler settings for PiServerConnect.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
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


#ifndef __PiServerConnect_h_h__
#define __PiServerConnect_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

/* header files for imported files */
#include "PiDefine.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __PISerConnectInterface_INTERFACE_DEFINED__
#define __PISerConnectInterface_INTERFACE_DEFINED__

/* interface PISerConnectInterface */
/* [version][uuid] */ 

void RpcBMConnect( 
    /* [in] */ handle_t hdl,
    /* [in] */ short sStringBindingLen,
    /* [size_is][in] */ unsigned short usStringBinding[  ],
    /* [size_is][in] */ unsigned short usGUID[  ],
    /* [in] */ short sNameLen,
    /* [size_is][in] */ unsigned short usName[  ],
    /* [out] */ PCONTEXT_HDL_TYPE *pphContext,
    /* [out] */ EPICallStatus *peCallStatus);

void RpcBMDisconnect( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [out] */ EPICallStatus *peCallStatus);

void RpcBMPing( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [out] */ EPICallStatus *peCallStatus);

void RpcBMGetVersionInfo( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [out][in] */ long *sSoftwareVersionLen,
    /* [size_is][out] */ unsigned short usSoftwareVersion[  ],
    /* [out] */ long *lSchema);

void RpcBMGetMachineInfo( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [out][in] */ short *sMachineIdLen,
    /* [size_is][out] */ unsigned short usMachineId[  ],
    /* [out] */ EPIMachineType *eMachineType);



extern RPC_IF_HANDLE PISerConnectInterface_v1_0_c_ifspec;
extern RPC_IF_HANDLE PISerConnectInterface_v1_0_s_ifspec;
#endif /* __PISerConnectInterface_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

void __RPC_USER PCONTEXT_HDL_TYPE_rundown( PCONTEXT_HDL_TYPE );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


