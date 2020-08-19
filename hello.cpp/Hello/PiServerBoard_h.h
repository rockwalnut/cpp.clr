

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Mon Jun 06 11:40:50 2016
 */
/* Compiler settings for PiServerBoard.idl:
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


#ifndef __PiServerBoard_h_h__
#define __PiServerBoard_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

/* header files for imported files */
#include "PiDefine.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __PISerBoardInterface_INTERFACE_DEFINED__
#define __PISerBoardInterface_INTERFACE_DEFINED__

/* interface PISerBoardInterface */
/* [version][uuid] */ 

void RpcBMGetNextBoardId( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [out] */ long *plBoardId,
    /* [out] */ EPICallStatus *peCallStatus);

void RpcBMSetBoardBarcode( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [in] */ long lBoardId,
    /* [in] */ short sBarcodeLen,
    /* [size_is][in] */ unsigned short usBarcode[  ],
    /* [out] */ EPICallStatus *peCallStatus);

void RpcBMGetBoardBarcode( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [in] */ long lBoardId,
    /* [out][in] */ short *psBarcodeLen,
    /* [size_is][out] */ unsigned short usBarcode[  ],
    /* [out] */ EPICallStatus *peCallStatus);

void RpcBMSetPanelData( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [in] */ long lBoardId,
    /* [in] */ short sNumPanels,
    /* [size_is][in] */ short sPanelIdList[  ],
    /* [size_is][in] */ unsigned short usBarcodeList[  ][ 100 ],
    /* [out] */ EPICallStatus *peCallStatus);

void RpcBMGetPanelData( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [in] */ long lBoardId,
    /* [out][in] */ short *sNumPanels,
    /* [size_is][out] */ short sPanelIdList[  ],
    /* [size_is][out] */ unsigned short usBarcodeList[  ][ 100 ],
    /* [out] */ EPICallStatus *peCallStatus);

void RpcBMSetBatchLimit( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [in] */ long lBatchLimit,
    /* [out] */ EPICallStatus *peCallStatus);

void RpcBMGetBatchCount( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [out] */ long *plBatchCount,
    /* [out] */ EPICallStatus *peCallStatus);

void RpcBMSetBatchCount( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [in] */ long lBatchCount,
    /* [out] */ EPICallStatus *peCallStatus);

void RpcBMSetIgnoreBoard( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [in] */ long lBoardId,
    /* [out] */ EPICallStatus *peCallStatus);



extern RPC_IF_HANDLE PISerBoardInterface_v1_0_c_ifspec;
extern RPC_IF_HANDLE PISerBoardInterface_v1_0_s_ifspec;
#endif /* __PISerBoardInterface_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

void __RPC_USER PCONTEXT_HDL_TYPE_rundown( PCONTEXT_HDL_TYPE );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


