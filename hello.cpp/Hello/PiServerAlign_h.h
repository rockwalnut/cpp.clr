

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Tue Jan 10 09:34:34 2017
 */
/* Compiler settings for PiServerAlign.idl:
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


#ifndef __PiServerAlign_h_h__
#define __PiServerAlign_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

/* header files for imported files */
#include "PiDefine.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __PISerAlignInterface_INTERFACE_DEFINED__
#define __PISerAlignInterface_INTERFACE_DEFINED__

/* interface PISerAlignInterface */
/* [version][uuid] */ 

void RpcBMSetBoardXYTData( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [in] */ long lBoardId,
    /* [in] */ short sBarcodeLen,
    /* [size_is][in] */ unsigned short usBarcode[  ],
    /* [in] */ EPIProcessedStatus eProcessedStatus,
    /* [in] */ double dXCorrectionMm,
    /* [in] */ double dYCorrectionMm,
    /* [in] */ double dThetaCorrectionDeg,
    /* [in] */ double dXCenterRotationMm,
    /* [in] */ double dYCenterRotation,
    /* [in] */ long lPackagedDataLength,
    /* [size_is][in] */ byte packagedData[  ],
    /* [out] */ EPICallStatus *peCallStatus);



extern RPC_IF_HANDLE PISerAlignInterface_v1_0_c_ifspec;
extern RPC_IF_HANDLE PISerAlignInterface_v1_0_s_ifspec;
#endif /* __PISerAlignInterface_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

void __RPC_USER PCONTEXT_HDL_TYPE_rundown( PCONTEXT_HDL_TYPE );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


