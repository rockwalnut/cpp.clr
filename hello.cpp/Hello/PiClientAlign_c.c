

/* this ALWAYS GENERATED file contains the RPC client stubs */


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

#include "PiClientAlign_h.h"

#define TYPE_FORMAT_STRING_SIZE   163                               
#define PROC_FORMAT_STRING_SIZE   481                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _PiClientAlign_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } PiClientAlign_MIDL_TYPE_FORMAT_STRING;

typedef struct _PiClientAlign_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } PiClientAlign_MIDL_PROC_FORMAT_STRING;

typedef struct _PiClientAlign_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } PiClientAlign_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const PiClientAlign_MIDL_TYPE_FORMAT_STRING PiClientAlign__MIDL_TypeFormatString;
extern const PiClientAlign_MIDL_PROC_FORMAT_STRING PiClientAlign__MIDL_ProcFormatString;
extern const PiClientAlign_MIDL_EXPR_FORMAT_STRING PiClientAlign__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: PICliAlignInterface, ver. 1.0,
   GUID={0x5a97b60b,0x9972,0x4e6e,{0x81,0x80,0x4f,0xc9,0xc0,0x86,0x4c,0xb8}} */



static const RPC_CLIENT_INTERFACE PICliAlignInterface___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x5a97b60b,0x9972,0x4e6e,{0x81,0x80,0x4f,0xc9,0xc0,0x86,0x4c,0xb8}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0x00000000
    };
RPC_IF_HANDLE PICliAlignInterface_v1_0_c_ifspec = (RPC_IF_HANDLE)& PICliAlignInterface___RpcClientInterface;

extern const MIDL_STUB_DESC PICliAlignInterface_StubDesc;

static RPC_BINDING_HANDLE PICliAlignInterface__MIDL_AutoBindHandle;


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
    /* [size_is][in] */ double dStretchYmm[  ])
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PICliAlignInterface_StubDesc,
                  (PFORMAT_STRING) &PiClientAlign__MIDL_ProcFormatString.Format[0],
                  ( unsigned char * )&phContext);
    
}


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
    /* [size_is][in] */ double dStencilFidLocatedPosY[  ])
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PICliAlignInterface_StubDesc,
                  (PFORMAT_STRING) &PiClientAlign__MIDL_ProcFormatString.Format[144],
                  ( unsigned char * )&phContext);
    
}


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
    /* [in] */ double dYCenterRotationMm)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PICliAlignInterface_StubDesc,
                  (PFORMAT_STRING) &PiClientAlign__MIDL_ProcFormatString.Format[270],
                  ( unsigned char * )&phContext);
    
}


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
    /* [size_is][in] */ double arrStencilFidFoundOffsetYmm[  ])
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PICliAlignInterface_StubDesc,
                  (PFORMAT_STRING) &PiClientAlign__MIDL_ProcFormatString.Format[372],
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


static const PiClientAlign_MIDL_PROC_FORMAT_STRING PiClientAlign__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure RpcPIPostAlignData */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x5c ),	/* x86 Stack size/offset = 92 */
/* 10 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 12 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 14 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 16 */	NdrFcShort( 0x78 ),	/* 120 */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	0x42,		/* Oi2 Flags:  clt must size, has ext, */
			0x13,		/* 19 */
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

	/* Parameter dCorrXmm */

/* 48 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 50 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 52 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dCorrYmm */

/* 54 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 56 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 58 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dCorrTdeg */

/* 60 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 62 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 64 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter sNumAlignFids */

/* 66 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 68 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 70 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bIsBoardFid */

/* 72 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 74 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 76 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter usAlignFidName */

/* 78 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 80 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 82 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Parameter dAlignFidScore */

/* 84 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 86 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 88 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Parameter dAlignFidTaughtPosXmm */

/* 90 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 92 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 94 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Parameter dAlignFidTaughtPosYmm */

/* 96 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 98 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 100 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Parameter sNumStretchFids */

/* 102 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 104 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 106 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter usStretchBoardFidName */

/* 108 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 110 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 112 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter usStretchStencilFidName */

/* 114 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 116 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 118 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter dStretchFidTaughtPosXmm */

/* 120 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 122 */	NdrFcShort( 0x4c ),	/* x86 Stack size/offset = 76 */
/* 124 */	NdrFcShort( 0x5c ),	/* Type Offset=92 */

	/* Parameter dStretchFidTaughtPosYmm */

/* 126 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 128 */	NdrFcShort( 0x50 ),	/* x86 Stack size/offset = 80 */
/* 130 */	NdrFcShort( 0x5c ),	/* Type Offset=92 */

	/* Parameter dStretchXmm */

/* 132 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 134 */	NdrFcShort( 0x54 ),	/* x86 Stack size/offset = 84 */
/* 136 */	NdrFcShort( 0x5c ),	/* Type Offset=92 */

	/* Parameter dStretchYmm */

/* 138 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 140 */	NdrFcShort( 0x58 ),	/* x86 Stack size/offset = 88 */
/* 142 */	NdrFcShort( 0x5c ),	/* Type Offset=92 */

	/* Procedure RpcPIPostRegistrationVerificationData */

/* 144 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0x1 ),	/* 1 */
/* 152 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 154 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 156 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 158 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 160 */	NdrFcShort( 0x42 ),	/* 66 */
/* 162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 164 */	0x42,		/* Oi2 Flags:  clt must size, has ext, */
			0x10,		/* 16 */
/* 166 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 170 */	NdrFcShort( 0x1 ),	/* 1 */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 174 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 176 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 178 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 180 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 182 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 184 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter lBoardId */

/* 186 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 188 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter sNumFids */

/* 192 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 194 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 196 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter dFidTaughtPosXmm */

/* 198 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 200 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 202 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter dFidTaughtPosYmm */

/* 204 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 206 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 208 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter dRegistrationErrorXmm */

/* 210 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 212 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 214 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter dRegistrationErrorYmm */

/* 216 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 218 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 220 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter usBoardFidName */

/* 222 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 224 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 226 */	NdrFcShort( 0x74 ),	/* Type Offset=116 */

	/* Parameter dBoardFidScore */

/* 228 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 230 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 232 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter dBoardFidLocatedPosX */

/* 234 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 236 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 238 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter dBoardFidLocatedPosY */

/* 240 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 242 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 244 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter usStencilFidName */

/* 246 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 248 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 250 */	NdrFcShort( 0x74 ),	/* Type Offset=116 */

	/* Parameter dStencilFidScore */

/* 252 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 254 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 256 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter dStencilFidLocatedPosX */

/* 258 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 260 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 262 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter dStencilFidLocatedPosY */

/* 264 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 266 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 268 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Procedure RpcPICorrectionReceived */

/* 270 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 272 */	NdrFcLong( 0x0 ),	/* 0 */
/* 276 */	NdrFcShort( 0x2 ),	/* 2 */
/* 278 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 280 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 282 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 284 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 286 */	NdrFcShort( 0x9c ),	/* 156 */
/* 288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 290 */	0x42,		/* Oi2 Flags:  clt must size, has ext, */
			0xc,		/* 12 */
/* 292 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 296 */	NdrFcShort( 0x1 ),	/* 1 */
/* 298 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 300 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 302 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 304 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 306 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 308 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 310 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter sCorrectorNameLen */

/* 312 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 314 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 316 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter usCorrectorName */

/* 318 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 320 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 322 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Parameter lBoardId */

/* 324 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 326 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bValidData */

/* 330 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 332 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 334 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter bFrontToRear */

/* 336 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 338 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 340 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter dXCorrectionMm */

/* 342 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 344 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 346 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dYCorrectionMm */

/* 348 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 350 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 352 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dThetaCorrectionDeg */

/* 354 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 356 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 358 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dXCenterRotationMm */

/* 360 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 362 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 364 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dYCenterRotationMm */

/* 366 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 368 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 370 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Procedure RpcPIPostFidFoundData */

/* 372 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 374 */	NdrFcLong( 0x0 ),	/* 0 */
/* 378 */	NdrFcShort( 0x3 ),	/* 3 */
/* 380 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 382 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 384 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 386 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 388 */	NdrFcShort( 0x48 ),	/* 72 */
/* 390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 392 */	0x42,		/* Oi2 Flags:  clt must size, has ext, */
			0xd,		/* 13 */
/* 394 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 398 */	NdrFcShort( 0x1 ),	/* 1 */
/* 400 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 402 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 404 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 406 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 408 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 410 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 412 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter lBoardId */

/* 414 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 416 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter sNumBoardFids */

/* 420 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 422 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 424 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter arrBoardFidTaughtPosXmm */

/* 426 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 428 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 430 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter arrBoardFidTaughtPosYmm */

/* 432 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 434 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 436 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter arrBoardFidFoundOffsetXmm */

/* 438 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 440 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 442 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter arrBoardFidFoundOffsetYmm */

/* 444 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 446 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 448 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter sNumStencilFids */

/* 450 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 452 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 454 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter arrStencilFidTaughtPosXmm */

/* 456 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 458 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 460 */	NdrFcShort( 0x96 ),	/* Type Offset=150 */

	/* Parameter arrStencilFidTaughtPosYmm */

/* 462 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 464 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 466 */	NdrFcShort( 0x96 ),	/* Type Offset=150 */

	/* Parameter arrStencilFidFoundOffsetXmm */

/* 468 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 470 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 472 */	NdrFcShort( 0x96 ),	/* Type Offset=150 */

	/* Parameter arrStencilFidFoundOffsetYmm */

/* 474 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 476 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 478 */	NdrFcShort( 0x96 ),	/* Type Offset=150 */

			0x0
        }
    };

static const PiClientAlign_MIDL_TYPE_FORMAT_STRING PiClientAlign__MIDL_TypeFormatString =
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
			0x0,		/* 0 */
/*  8 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 12 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 14 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 16 */	0x3,		/* FC_SMALL */
			0x5b,		/* FC_END */
/* 18 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x1,		/* 1 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	0x40,		/* Corr desc:  constant, val=64 */
			0x0,		/* 0 */
/* 24 */	NdrFcShort( 0x40 ),	/* 64 */
/* 26 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 28 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 32 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 34 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 36 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x1,		/* 1 */
/* 38 */	NdrFcShort( 0x0 ),	/* 0 */
/* 40 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 42 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 44 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 46 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 50 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 52 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 54 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (18) */
/* 56 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 58 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 60 */	NdrFcShort( 0x8 ),	/* 8 */
/* 62 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 64 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 66 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 68 */	0xc,		/* FC_DOUBLE */
			0x5b,		/* FC_END */
/* 70 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x1,		/* 1 */
/* 72 */	NdrFcShort( 0x0 ),	/* 0 */
/* 74 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 76 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 78 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 80 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 84 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 86 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 88 */	NdrFcShort( 0xffba ),	/* Offset= -70 (18) */
/* 90 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 92 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 94 */	NdrFcShort( 0x8 ),	/* 8 */
/* 96 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 98 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 100 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 102 */	0xc,		/* FC_DOUBLE */
			0x5b,		/* FC_END */
/* 104 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 106 */	NdrFcShort( 0x8 ),	/* 8 */
/* 108 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 110 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 112 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 114 */	0xc,		/* FC_DOUBLE */
			0x5b,		/* FC_END */
/* 116 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x1,		/* 1 */
/* 118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 120 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 122 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 124 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 126 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 130 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 132 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 134 */	NdrFcShort( 0xff8c ),	/* Offset= -116 (18) */
/* 136 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 138 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 140 */	NdrFcShort( 0x2 ),	/* 2 */
/* 142 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 144 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 146 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 148 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 150 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 152 */	NdrFcShort( 0x8 ),	/* 8 */
/* 154 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 156 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 158 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 160 */	0xc,		/* FC_DOUBLE */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const unsigned short PICliAlignInterface_FormatStringOffsetTable[] =
    {
    0,
    144,
    270,
    372
    };


static const MIDL_STUB_DESC PICliAlignInterface_StubDesc = 
    {
    (void *)& PICliAlignInterface___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &PICliAlignInterface__MIDL_AutoBindHandle,
    0,
    0,
    0,
    0,
    PiClientAlign__MIDL_TypeFormatString.Format,
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

