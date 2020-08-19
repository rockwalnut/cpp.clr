

/* this ALWAYS GENERATED file contains the RPC client stubs */


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

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#include <string.h>

#include "PiServerTrace_h.h"

#define TYPE_FORMAT_STRING_SIZE   159                               
#define PROC_FORMAT_STRING_SIZE   241                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _PiServerTrace_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } PiServerTrace_MIDL_TYPE_FORMAT_STRING;

typedef struct _PiServerTrace_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } PiServerTrace_MIDL_PROC_FORMAT_STRING;

typedef struct _PiServerTrace_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } PiServerTrace_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const PiServerTrace_MIDL_TYPE_FORMAT_STRING PiServerTrace__MIDL_TypeFormatString;
extern const PiServerTrace_MIDL_PROC_FORMAT_STRING PiServerTrace__MIDL_ProcFormatString;
extern const PiServerTrace_MIDL_EXPR_FORMAT_STRING PiServerTrace__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: PISerTraceInterface, ver. 1.0,
   GUID={0xff4ae995,0x6aec,0x4a08,{0xa3,0x0e,0x00,0x35,0x6a,0x33,0x1f,0x8a}} */



static const RPC_CLIENT_INTERFACE PISerTraceInterface___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0xff4ae995,0x6aec,0x4a08,{0xa3,0x0e,0x00,0x35,0x6a,0x33,0x1f,0x8a}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0x00000000
    };
RPC_IF_HANDLE PISerTraceInterface_v1_0_c_ifspec = (RPC_IF_HANDLE)& PISerTraceInterface___RpcClientInterface;

extern const MIDL_STUB_DESC PISerTraceInterface_StubDesc;

static RPC_BINDING_HANDLE PISerTraceInterface__MIDL_AutoBindHandle;


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
    /* [out] */ EPICallStatus *peCallStatus)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PISerTraceInterface_StubDesc,
                  (PFORMAT_STRING) &PiServerTrace__MIDL_ProcFormatString.Format[0],
                  ( unsigned char * )&phContext);
    
}


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
    /* [out] */ EPICallStatus *peCallStatus)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PISerTraceInterface_StubDesc,
                  (PFORMAT_STRING) &PiServerTrace__MIDL_ProcFormatString.Format[120],
                  ( unsigned char * )&phContext);
    
}


#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const PiServerTrace_MIDL_PROC_FORMAT_STRING PiServerTrace__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure RpcBMSetSystemBarcodes */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 10 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 12 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 14 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 16 */	NdrFcShort( 0x58 ),	/* 88 */
/* 18 */	NdrFcShort( 0x1a ),	/* 26 */
/* 20 */	0x42,		/* Oi2 Flags:  clt must size, has ext, */
			0xf,		/* 15 */
/* 22 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x1 ),	/* 1 */
/* 28 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 30 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 32 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 34 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 36 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 38 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 40 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter sStencilBarcodeLen */

/* 42 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 44 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 46 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter usStencilBarcode */

/* 48 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 50 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 52 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter sPasteBarcodeLen */

/* 54 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 56 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 58 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter usPasteBarcode */

/* 60 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 62 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 64 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter sFrontBladeBarcodeLen */

/* 66 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 68 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 70 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter usFrontBladeBarcode */

/* 72 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 74 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 76 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */

	/* Parameter sRearBladeBarcodeLen */

/* 78 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 80 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 82 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter usRearBladeBarcode */

/* 84 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 86 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 88 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter sPumpBarcodeLen */

/* 90 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 92 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 94 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter usPumpBarcode */

/* 96 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 98 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 100 */	NdrFcShort( 0x36 ),	/* Type Offset=54 */

	/* Parameter sWorkholderBarcodeLen */

/* 102 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 104 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 106 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter usWorkholderBarcode */

/* 108 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 110 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 112 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */

	/* Parameter peCallStatus */

/* 114 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 116 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 118 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Procedure RpcBMGetSystemBarcodes */

/* 120 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x1 ),	/* 1 */
/* 128 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 130 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 132 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 134 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 136 */	NdrFcShort( 0xd0 ),	/* 208 */
/* 138 */	NdrFcShort( 0xb6 ),	/* 182 */
/* 140 */	0x41,		/* Oi2 Flags:  srv must size, has ext, */
			0xf,		/* 15 */
/* 142 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 144 */	NdrFcShort( 0x1 ),	/* 1 */
/* 146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 148 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 150 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 152 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 154 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 156 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 158 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 160 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter psStencilBarcodeLen */

/* 162 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 164 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 166 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter usStencilBarcode */

/* 168 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 170 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 172 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter psPasteBarcodeLen */

/* 174 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 176 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 178 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter usPasteBarcode */

/* 180 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 182 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 184 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Parameter psFrontBladeBarcodeLen */

/* 186 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 188 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 190 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter usFrontBladeBarcode */

/* 192 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 194 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 196 */	NdrFcShort( 0x6e ),	/* Type Offset=110 */

	/* Parameter psRearBladeBarcodeLen */

/* 198 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 200 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 202 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter usRearBladeBarcode */

/* 204 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 206 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 208 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Parameter psPumpBarcodeLen */

/* 210 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 212 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 214 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter usPumpBarcode */

/* 216 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 218 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 220 */	NdrFcShort( 0x86 ),	/* Type Offset=134 */

	/* Parameter psWorkholderBarcodeLen */

/* 222 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 224 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 226 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter usWorkholderBarcode */

/* 228 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 230 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 232 */	NdrFcShort( 0x92 ),	/* Type Offset=146 */

	/* Parameter peCallStatus */

/* 234 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 236 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 238 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

			0x0
        }
    };

static const PiServerTrace_MIDL_TYPE_FORMAT_STRING PiServerTrace__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/*  4 */	0x0,		/* 0 */
			0x0,		/* 0 */
/*  6 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/*  8 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 12 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 16 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 18 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 20 */	NdrFcShort( 0x2 ),	/* 2 */
/* 22 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 24 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 26 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 28 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 30 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 32 */	NdrFcShort( 0x2 ),	/* 2 */
/* 34 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 36 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 38 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 40 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 42 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 44 */	NdrFcShort( 0x2 ),	/* 2 */
/* 46 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 48 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 50 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 52 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 54 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 56 */	NdrFcShort( 0x2 ),	/* 2 */
/* 58 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 60 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 62 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 64 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 66 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 68 */	NdrFcShort( 0x2 ),	/* 2 */
/* 70 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 72 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 74 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 76 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 78 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 80 */	0xd,		/* FC_ENUM16 */
			0x5c,		/* FC_PAD */
/* 82 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 84 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 86 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 88 */	NdrFcShort( 0x2 ),	/* 2 */
/* 90 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x54,		/* FC_DEREFERENCE */
/* 92 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 94 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 96 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 98 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 100 */	NdrFcShort( 0x2 ),	/* 2 */
/* 102 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x54,		/* FC_DEREFERENCE */
/* 104 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 106 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 108 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 110 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 112 */	NdrFcShort( 0x2 ),	/* 2 */
/* 114 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x54,		/* FC_DEREFERENCE */
/* 116 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 118 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 120 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 122 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 124 */	NdrFcShort( 0x2 ),	/* 2 */
/* 126 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x54,		/* FC_DEREFERENCE */
/* 128 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 130 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 132 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 134 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 136 */	NdrFcShort( 0x2 ),	/* 2 */
/* 138 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x54,		/* FC_DEREFERENCE */
/* 140 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 142 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 144 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 146 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 148 */	NdrFcShort( 0x2 ),	/* 2 */
/* 150 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x54,		/* FC_DEREFERENCE */
/* 152 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 154 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 156 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const unsigned short PISerTraceInterface_FormatStringOffsetTable[] =
    {
    0,
    120
    };


static const MIDL_STUB_DESC PISerTraceInterface_StubDesc = 
    {
    (void *)& PISerTraceInterface___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &PISerTraceInterface__MIDL_AutoBindHandle,
    0,
    0,
    0,
    0,
    PiServerTrace__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x800025b, /* MIDL Version 8.0.603 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

