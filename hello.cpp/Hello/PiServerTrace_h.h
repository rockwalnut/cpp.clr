

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Mon Jun 06 11:40:51 2016
 */
/* Compiler settings for PiServerTrace.idl:
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


#ifndef __PiServerTrace_h_h__
#define __PiServerTrace_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

/* header files for imported files */
#include "PiDefine.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __PISerTraceInterface_INTERFACE_DEFINED__
#define __PISerTraceInterface_INTERFACE_DEFINED__

/* interface PISerTraceInterface */
/* [version][uuid] */ 

void RpcBMSetSystemBarcodes( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [in] */ short sStencilBarcodeLen,
    /* [size_is][in] */ unsigned short usStencilBarcode[  ],
    /* [in] */ short sPasteBarcodeLen,
    /* [size_is][in] */ unsigned short usPasteBarcode[  ],
    /* [in] */ short sFrontBladeBarcodeLen,
    /* [size_is][in] */ unsigned short usFrontBladeBarcode[  ],
    /* [in] */ short sRearBladeBarcodeLen,
    /* [size_is][in] */ unsigned short usRearBladeBarcode[  ],
    /* [in] */ short sPumpBarcodeLen,
    /* [size_is][in] */ unsigned short usPumpBarcode[  ],
    /* [in] */ short sWorkholderBarcodeLen,
    /* [size_is][in] */ unsigned short usWorkholderBarcode[  ],
    /* [out] */ EPICallStatus *peCallStatus);

void RpcBMGetSystemBarcodes( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [out][in] */ short *psStencilBarcodeLen,
    /* [size_is][out] */ unsigned short usStencilBarcode[  ],
    /* [out][in] */ short *psPasteBarcodeLen,
    /* [size_is][out] */ unsigned short usPasteBarcode[  ],
    /* [out][in] */ short *psFrontBladeBarcodeLen,
    /* [size_is][out] */ unsigned short usFrontBladeBarcode[  ],
    /* [out][in] */ short *psRearBladeBarcodeLen,
    /* [size_is][out] */ unsigned short usRearBladeBarcode[  ],
    /* [out][in] */ short *psPumpBarcodeLen,
    /* [size_is][out] */ unsigned short usPumpBarcode[  ],
    /* [out][in] */ short *psWorkholderBarcodeLen,
    /* [size_is][out] */ unsigned short usWorkholderBarcode[  ],
    /* [out] */ EPICallStatus *peCallStatus);



extern RPC_IF_HANDLE PISerTraceInterface_v1_0_c_ifspec;
extern RPC_IF_HANDLE PISerTraceInterface_v1_0_s_ifspec;
#endif /* __PISerTraceInterface_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

void __RPC_USER PCONTEXT_HDL_TYPE_rundown( PCONTEXT_HDL_TYPE );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


