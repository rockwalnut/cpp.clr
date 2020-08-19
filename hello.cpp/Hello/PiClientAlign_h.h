

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Tue Jan 10 14:59:16 2017
 */
/* Compiler settings for PiClientAlign.idl:
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


#ifndef __PiClientAlign_h_h__
#define __PiClientAlign_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

/* header files for imported files */
#include "PiDefine.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __PICliAlignInterface_INTERFACE_DEFINED__
#define __PICliAlignInterface_INTERFACE_DEFINED__

/* interface PICliAlignInterface */
/* [version][uuid] */ 

void RpcPIPostAlignData( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [in] */ long lBoardId,
    /* [in] */ double dCorrXmm,
    /* [in] */ double dCorrYmm,
    /* [in] */ double dCorrTdeg,
    /* [in] */ short sNumAlignFids,
    /* [size_is][in] */ boolean bIsBoardFid[  ],
    /* [size_is][in] */ unsigned short usAlignFidName[  ][ 64 ],
    /* [size_is][in] */ double dAlignFidScore[  ],
    /* [size_is][in] */ double dAlignFidTaughtPosXmm[  ],
    /* [size_is][in] */ double dAlignFidTaughtPosYmm[  ],
    /* [in] */ short sNumStretchFids,
    /* [size_is][in] */ unsigned short usStretchBoardFidName[  ][ 64 ],
    /* [size_is][in] */ unsigned short usStretchStencilFidName[  ][ 64 ],
    /* [size_is][in] */ double dStretchFidTaughtPosXmm[  ],
    /* [size_is][in] */ double dStretchFidTaughtPosYmm[  ],
    /* [size_is][in] */ double dStretchXmm[  ],
    /* [size_is][in] */ double dStretchYmm[  ]);

void RpcPIPostRegistrationVerificationData( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [in] */ long lBoardId,
    /* [in] */ short sNumFids,
    /* [size_is][in] */ double dFidTaughtPosXmm[  ],
    /* [size_is][in] */ double dFidTaughtPosYmm[  ],
    /* [size_is][in] */ double dRegistrationErrorXmm[  ],
    /* [size_is][in] */ double dRegistrationErrorYmm[  ],
    /* [size_is][in] */ unsigned short usBoardFidName[  ][ 64 ],
    /* [size_is][in] */ double dBoardFidScore[  ],
    /* [size_is][in] */ double dBoardFidLocatedPosX[  ],
    /* [size_is][in] */ double dBoardFidLocatedPosY[  ],
    /* [size_is][in] */ unsigned short usStencilFidName[  ][ 64 ],
    /* [size_is][in] */ double dStencilFidScore[  ],
    /* [size_is][in] */ double dStencilFidLocatedPosX[  ],
    /* [size_is][in] */ double dStencilFidLocatedPosY[  ]);

void RpcPICorrectionReceived( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [in] */ short sCorrectorNameLen,
    /* [size_is][in] */ unsigned short usCorrectorName[  ],
    /* [in] */ long lBoardId,
    /* [in] */ boolean bValidData,
    /* [in] */ boolean bFrontToRear,
    /* [in] */ double dXCorrectionMm,
    /* [in] */ double dYCorrectionMm,
    /* [in] */ double dThetaCorrectionDeg,
    /* [in] */ double dXCenterRotationMm,
    /* [in] */ double dYCenterRotationMm);

void RpcPIPostFidFoundData( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [in] */ long lBoardId,
    /* [in] */ short sNumBoardFids,
    /* [size_is][in] */ double arrBoardFidTaughtPosXmm[  ],
    /* [size_is][in] */ double arrBoardFidTaughtPosYmm[  ],
    /* [size_is][in] */ double arrBoardFidFoundOffsetXmm[  ],
    /* [size_is][in] */ double arrBoardFidFoundOffsetYmm[  ],
    /* [in] */ short sNumStencilFids,
    /* [size_is][in] */ double arrStencilFidTaughtPosXmm[  ],
    /* [size_is][in] */ double arrStencilFidTaughtPosYmm[  ],
    /* [size_is][in] */ double arrStencilFidFoundOffsetXmm[  ],
    /* [size_is][in] */ double arrStencilFidFoundOffsetYmm[  ]);



extern RPC_IF_HANDLE PICliAlignInterface_v1_0_c_ifspec;
extern RPC_IF_HANDLE PICliAlignInterface_v1_0_s_ifspec;
#endif /* __PICliAlignInterface_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

void __RPC_USER PCONTEXT_HDL_TYPE_rundown( PCONTEXT_HDL_TYPE );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


