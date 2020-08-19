

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Thu Oct 20 12:51:56 2016
 */
/* Compiler settings for PiServerProgram.idl:
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


#ifndef __PiServerProgram_h_h__
#define __PiServerProgram_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

/* header files for imported files */
#include "PiDefine.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __PISerProgramInterface_INTERFACE_DEFINED__
#define __PISerProgramInterface_INTERFACE_DEFINED__

/* interface PISerProgramInterface */
/* [version][uuid] */ 

void RpcBMGetLoadedProcProgramName( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [out][in] */ short *sPPNameLen,
    /* [size_is][out] */ unsigned short usPPName[  ],
    /* [out] */ EPICallStatus *peCallStatus);

void RpcBMGetProcProgram( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [in] */ short sPPNameLen,
    /* [size_is][in] */ unsigned short usPPName[  ],
    /* [out][in] */ short *sXMLNameLen,
    /* [size_is][out] */ unsigned short usXMLName[  ],
    /* [out] */ EPICallStatus *peCallStatus);

void RpcBMLoadProcProgram( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [in] */ short sPPNameLen,
    /* [size_is][in] */ unsigned short usPPName[  ],
    /* [out] */ EPICallStatus *peCallStatus);

void RpcPIGetAssemblyPartNumber( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [out][in] */ short *sAssemblyPartNumLen,
    /* [size_is][out] */ unsigned short usAssemblyPartNum[  ],
    /* [out] */ EPICallStatus *peCallStatus);

void RpcPIGetWorkOrderNumber( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [out][in] */ short *sWorkOrderNumLen,
    /* [size_is][out] */ unsigned short usWorkOrderNum[  ],
    /* [out] */ EPICallStatus *peCallStatus);

void RpcBMGetBoardSeparationValues( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [out] */ double *pdDistBaseMm,
    /* [out] */ double *pdDistOffsetMm,
    /* [out] */ double *pdSpeedBaseMmSec,
    /* [out] */ double *pdSpeedOffsetMmSec,
    /* [out] */ EPICallStatus *peCallStatus);

void RpcBMSetBoardSeparationOffsets( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [in] */ double dDistOffsetMm,
    /* [in] */ double dSpeedOffsetMmSec,
    /* [out] */ EPICallStatus *peCallStatus);

void RpcBMGetSqueegeeValues( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [out] */ boolean *bSeparateStrokesEnabled,
    /* [out] */ double *pdForceBaseKg,
    /* [out] */ double *pdForceOffsetKg,
    /* [out] */ double *pdSpeedBaseMmSec,
    /* [out] */ double *pdSpeedOffsetMmSec,
    /* [out] */ double *pdR2FForceBaseKg,
    /* [out] */ double *pdR2FForceOffsetKg,
    /* [out] */ double *pdR2FSpeedBaseMmSec,
    /* [out] */ double *pdR2FSpeedOffsetMmSec,
    /* [out] */ EPICallStatus *peCallStatus);

void RpcBMSetSqueegeeOffsets( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [in] */ boolean bRearToFront,
    /* [in] */ double dForceOffsetKg,
    /* [in] */ double dSpeedOffsetMmSec,
    /* [out] */ EPICallStatus *peCallStatus);

void RpcBMGetProcProgramDir( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [out][in] */ short *sPPDirLen,
    /* [size_is][out] */ unsigned short usPPDir[  ],
    /* [out] */ EPICallStatus *peCallStatus);



extern RPC_IF_HANDLE PISerProgramInterface_v1_0_c_ifspec;
extern RPC_IF_HANDLE PISerProgramInterface_v1_0_s_ifspec;
#endif /* __PISerProgramInterface_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

void __RPC_USER PCONTEXT_HDL_TYPE_rundown( PCONTEXT_HDL_TYPE );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


