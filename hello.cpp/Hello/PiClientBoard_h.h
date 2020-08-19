

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Thu Oct 20 12:51:55 2016
 */
/* Compiler settings for PiClientBoard.idl:
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


#ifndef __PiClientBoard_h_h__
#define __PiClientBoard_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

/* header files for imported files */
#include "PiDefine.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __PICliBoardInterface_INTERFACE_DEFINED__
#define __PICliBoardInterface_INTERFACE_DEFINED__

/* interface PICliBoardInterface */
/* [version][uuid] */ 

void RpcPIBoardProcgStarted( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [in] */ long lBoardId);

void RpcPIBoardProcgCompleted( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [in] */ long lBoardId,
    /* [in] */ long lBoardCount);

void RpcPIBoardPrinted( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [in] */ long lBoardId,
    /* [in] */ short sBarcodeLen,
    /* [size_is][in] */ unsigned short usBarcode[  ],
    /* [in] */ boolean bInitStrokeF2R,
    /* [in] */ short sNumStrokes,
    /* [in] */ EPIProcessedStatus eProcessedStatus,
    /* [in] */ long lPackagedDataLength,
    /* [size_is][in] */ byte packagedData[  ]);

void RpcPIBoardAccepted( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [in] */ long lBoardId);

void RpcPIBoardRejected( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [in] */ long lBoardId);

void RpcPIPostPanelData( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [in] */ long lBoardId,
    /* [in] */ short sNumPanels,
    /* [size_is][in] */ short sPanelIdList[  ],
    /* [size_is][in] */ unsigned short usBarcodeList[  ][ 100 ]);

void RpcPIClearQueue( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp);

void RpcPIPostPasteHeightData( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [in] */ long lBoardId,
    /* [in] */ double dPasteHeightMinMm,
    /* [in] */ double dPasteHeightMeasuredMm);

void RpcPIBoardBarcodeNotification( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [in] */ EPIBarcodeSource eBarcodeSource,
    /* [in] */ short sBarcodeLen,
    /* [size_is][in] */ unsigned short usBarcode[  ]);



extern RPC_IF_HANDLE PICliBoardInterface_v1_0_c_ifspec;
extern RPC_IF_HANDLE PICliBoardInterface_v1_0_s_ifspec;
#endif /* __PICliBoardInterface_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

void __RPC_USER PCONTEXT_HDL_TYPE_rundown( PCONTEXT_HDL_TYPE );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


