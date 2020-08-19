

/* this ALWAYS GENERATED file contains the RPC client stubs */


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

#include "PiServerAlign_h.h"

#define TYPE_FORMAT_STRING_SIZE   35                                
#define PROC_FORMAT_STRING_SIZE   115                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _PiServerAlign_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } PiServerAlign_MIDL_TYPE_FORMAT_STRING;

typedef struct _PiServerAlign_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } PiServerAlign_MIDL_PROC_FORMAT_STRING;

typedef struct _PiServerAlign_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } PiServerAlign_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const PiServerAlign_MIDL_TYPE_FORMAT_STRING PiServerAlign__MIDL_TypeFormatString;
extern const PiServerAlign_MIDL_PROC_FORMAT_STRING PiServerAlign__MIDL_ProcFormatString;
extern const PiServerAlign_MIDL_EXPR_FORMAT_STRING PiServerAlign__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: PISerAlignInterface, ver. 1.0,
   GUID={0x7ff81f3d,0x3f99,0x49c1,{0xaa,0xba,0x69,0x36,0x45,0xf2,0x79,0x26}} */



static const RPC_CLIENT_INTERFACE PISerAlignInterface___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x7ff81f3d,0x3f99,0x49c1,{0xaa,0xba,0x69,0x36,0x45,0xf2,0x79,0x26}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0x00000000
    };
RPC_IF_HANDLE PISerAlignInterface_v1_0_c_ifspec = (RPC_IF_HANDLE)& PISerAlignInterface___RpcClientInterface;

extern const MIDL_STUB_DESC PISerAlignInterface_StubDesc;

static RPC_BINDING_HANDLE PISerAlignInterface__MIDL_AutoBindHandle;


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
    /* [out] */ EPICallStatus *peCallStatus)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PISerAlignInterface_StubDesc,
                  (PFORMAT_STRING) &PiServerAlign__MIDL_ProcFormatString.Format[0],
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


static const PiServerAlign_MIDL_PROC_FORMAT_STRING PiServerAlign__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure RpcBMSetBoardXYTData */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x50 ),	/* x86 Stack size/offset = 80 */
/* 10 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 12 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 14 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 16 */	NdrFcShort( 0xa0 ),	/* 160 */
/* 18 */	NdrFcShort( 0x1a ),	/* 26 */
/* 20 */	0x42,		/* Oi2 Flags:  clt must size, has ext, */
			0xe,		/* 14 */
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

	/* Parameter lBoardId */

/* 42 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 44 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 46 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter sBarcodeLen */

/* 48 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 50 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 52 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter usBarcode */

/* 54 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 56 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 58 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter eProcessedStatus */

/* 60 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 62 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 64 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter dXCorrectionMm */

/* 66 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 68 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 70 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dYCorrectionMm */

/* 72 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 74 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 76 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dThetaCorrectionDeg */

/* 78 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 80 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 82 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dXCenterRotationMm */

/* 84 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 86 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 88 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dYCenterRotation */

/* 90 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 92 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 94 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter lPackagedDataLength */

/* 96 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 98 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter packagedData */

/* 102 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 104 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 106 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter peCallStatus */

/* 108 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 110 */	NdrFcShort( 0x4c ),	/* x86 Stack size/offset = 76 */
/* 112 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */

			0x0
        }
    };

static const PiServerAlign_MIDL_TYPE_FORMAT_STRING PiServerAlign__MIDL_TypeFormatString =
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
/* 12 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 16 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 18 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 20 */	NdrFcShort( 0x1 ),	/* 1 */
/* 22 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 24 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 26 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 28 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 30 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 32 */	0xd,		/* FC_ENUM16 */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

static const unsigned short PISerAlignInterface_FormatStringOffsetTable[] =
    {
    0
    };


static const MIDL_STUB_DESC PISerAlignInterface_StubDesc = 
    {
    (void *)& PISerAlignInterface___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &PISerAlignInterface__MIDL_AutoBindHandle,
    0,
    0,
    0,
    0,
    PiServerAlign__MIDL_TypeFormatString.Format,
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

