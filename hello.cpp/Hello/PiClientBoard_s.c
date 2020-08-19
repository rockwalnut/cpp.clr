

/* this ALWAYS GENERATED file contains the RPC server stubs */


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
#include "PiClientBoard_h.h"

#define TYPE_FORMAT_STRING_SIZE   71                                
#define PROC_FORMAT_STRING_SIZE   517                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _PiClientBoard_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } PiClientBoard_MIDL_TYPE_FORMAT_STRING;

typedef struct _PiClientBoard_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } PiClientBoard_MIDL_PROC_FORMAT_STRING;

typedef struct _PiClientBoard_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } PiClientBoard_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

extern const PiClientBoard_MIDL_TYPE_FORMAT_STRING PiClientBoard__MIDL_TypeFormatString;
extern const PiClientBoard_MIDL_PROC_FORMAT_STRING PiClientBoard__MIDL_ProcFormatString;
extern const PiClientBoard_MIDL_EXPR_FORMAT_STRING PiClientBoard__MIDL_ExprFormatString;

/* Standard interface: PICliBoardInterface, ver. 1.0,
   GUID={0x425b3eaa,0x78b6,0x4329,{0x9d,0x42,0x2a,0x25,0xf0,0x18,0xbb,0x3c}} */


extern const MIDL_SERVER_INFO PICliBoardInterface_ServerInfo;

extern const RPC_DISPATCH_TABLE PICliBoardInterface_v1_0_DispatchTable;

static const RPC_SERVER_INTERFACE PICliBoardInterface___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x425b3eaa,0x78b6,0x4329,{0x9d,0x42,0x2a,0x25,0xf0,0x18,0xbb,0x3c}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    (RPC_DISPATCH_TABLE*)&PICliBoardInterface_v1_0_DispatchTable,
    0,
    0,
    0,
    &PICliBoardInterface_ServerInfo,
    0x04000000
    };
RPC_IF_HANDLE PICliBoardInterface_v1_0_s_ifspec = (RPC_IF_HANDLE)& PICliBoardInterface___RpcServerInterface;

extern const MIDL_STUB_DESC PICliBoardInterface_StubDesc;

extern const NDR_RUNDOWN RundownRoutines[];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const PiClientBoard_MIDL_PROC_FORMAT_STRING PiClientBoard__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure RpcPIBoardProcgStarted */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 12 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 14 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 16 */	NdrFcShort( 0x3c ),	/* 60 */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	0x40,		/* Oi2 Flags:  has ext, */
			0x3,		/* 3 */
/* 22 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */
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

	/* Procedure RpcPIBoardProcgCompleted */

/* 48 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 50 */	NdrFcLong( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x1 ),	/* 1 */
/* 56 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 58 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 60 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 62 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 64 */	NdrFcShort( 0x44 ),	/* 68 */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 70 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 72 */	NdrFcShort( 0x0 ),	/* 0 */
/* 74 */	NdrFcShort( 0x0 ),	/* 0 */
/* 76 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 78 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 80 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 82 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 84 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 86 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 88 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter lBoardId */

/* 90 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 92 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 94 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lBoardCount */

/* 96 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 98 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcPIBoardPrinted */

/* 102 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 104 */	NdrFcLong( 0x0 ),	/* 0 */
/* 108 */	NdrFcShort( 0x2 ),	/* 2 */
/* 110 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 112 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 114 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 116 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 118 */	NdrFcShort( 0x5b ),	/* 91 */
/* 120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 122 */	0x42,		/* Oi2 Flags:  clt must size, has ext, */
			0xa,		/* 10 */
/* 124 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 128 */	NdrFcShort( 0x1 ),	/* 1 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 132 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 134 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 136 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 138 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 140 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 142 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter lBoardId */

/* 144 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 146 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter sBarcodeLen */

/* 150 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 152 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 154 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter usBarcode */

/* 156 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 158 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 160 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter bInitStrokeF2R */

/* 162 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 164 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 166 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter sNumStrokes */

/* 168 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 170 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 172 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter eProcessedStatus */

/* 174 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 176 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 178 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter lPackagedDataLength */

/* 180 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 182 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter packagedData */

/* 186 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 188 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 190 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Procedure RpcPIBoardAccepted */

/* 192 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 198 */	NdrFcShort( 0x3 ),	/* 3 */
/* 200 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 202 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 204 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 206 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 208 */	NdrFcShort( 0x3c ),	/* 60 */
/* 210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 212 */	0x40,		/* Oi2 Flags:  has ext, */
			0x3,		/* 3 */
/* 214 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 220 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 222 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 224 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 226 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 228 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 230 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 232 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter lBoardId */

/* 234 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 236 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcPIBoardRejected */

/* 240 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 242 */	NdrFcLong( 0x0 ),	/* 0 */
/* 246 */	NdrFcShort( 0x4 ),	/* 4 */
/* 248 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 250 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 252 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 254 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 256 */	NdrFcShort( 0x3c ),	/* 60 */
/* 258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 260 */	0x40,		/* Oi2 Flags:  has ext, */
			0x3,		/* 3 */
/* 262 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 268 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 270 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 272 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 274 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 276 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 278 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 280 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter lBoardId */

/* 282 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 284 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcPIPostPanelData */

/* 288 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 290 */	NdrFcLong( 0x0 ),	/* 0 */
/* 294 */	NdrFcShort( 0x5 ),	/* 5 */
/* 296 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 298 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 300 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 302 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 304 */	NdrFcShort( 0x42 ),	/* 66 */
/* 306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 308 */	0x42,		/* Oi2 Flags:  clt must size, has ext, */
			0x6,		/* 6 */
/* 310 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 314 */	NdrFcShort( 0x1 ),	/* 1 */
/* 316 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 318 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 320 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 322 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 324 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 326 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 328 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter lBoardId */

/* 330 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 332 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter sNumPanels */

/* 336 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 338 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 340 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter sPanelIdList */

/* 342 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 344 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 346 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter usBarcodeList */

/* 348 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 350 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 352 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Procedure RpcPIClearQueue */

/* 354 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0x6 ),	/* 6 */
/* 362 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 364 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 366 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 368 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 370 */	NdrFcShort( 0x34 ),	/* 52 */
/* 372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 374 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 376 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 382 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 384 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 386 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 388 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 390 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 392 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 394 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Procedure RpcPIPostPasteHeightData */

/* 396 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 398 */	NdrFcLong( 0x0 ),	/* 0 */
/* 402 */	NdrFcShort( 0x7 ),	/* 7 */
/* 404 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 406 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 408 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 410 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 412 */	NdrFcShort( 0x5c ),	/* 92 */
/* 414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 416 */	0x40,		/* Oi2 Flags:  has ext, */
			0x5,		/* 5 */
/* 418 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 424 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 426 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 428 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 430 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 432 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 434 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 436 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter lBoardId */

/* 438 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 440 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dPasteHeightMinMm */

/* 444 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 446 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 448 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dPasteHeightMeasuredMm */

/* 450 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 452 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 454 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Procedure RpcPIBoardBarcodeNotification */

/* 456 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 458 */	NdrFcLong( 0x0 ),	/* 0 */
/* 462 */	NdrFcShort( 0x8 ),	/* 8 */
/* 464 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 466 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 468 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 470 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 472 */	NdrFcShort( 0x40 ),	/* 64 */
/* 474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 476 */	0x42,		/* Oi2 Flags:  clt must size, has ext, */
			0x5,		/* 5 */
/* 478 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 482 */	NdrFcShort( 0x1 ),	/* 1 */
/* 484 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 486 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 488 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 490 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 492 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 494 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 496 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter eBarcodeSource */

/* 498 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 500 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 502 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter sBarcodeLen */

/* 504 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 506 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 508 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter usBarcode */

/* 510 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 512 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 514 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

			0x0
        }
    };

static const PiClientBoard_MIDL_TYPE_FORMAT_STRING PiClientBoard__MIDL_TypeFormatString =
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
/* 24 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 26 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 28 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 30 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x1,		/* 1 */
/* 32 */	NdrFcShort( 0x0 ),	/* 0 */
/* 34 */	0x40,		/* Corr desc:  constant, val=100 */
			0x0,		/* 0 */
/* 36 */	NdrFcShort( 0x64 ),	/* 100 */
/* 38 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 40 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 44 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 46 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 48 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x1,		/* 1 */
/* 50 */	NdrFcShort( 0x0 ),	/* 0 */
/* 52 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 54 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 56 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 58 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 62 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 64 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 66 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (30) */
/* 68 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const NDR_RUNDOWN RundownRoutines[] = 
    {
    PCONTEXT_HDL_TYPE_rundown
    };


static const unsigned short PICliBoardInterface_FormatStringOffsetTable[] =
    {
    0,
    48,
    102,
    192,
    240,
    288,
    354,
    396,
    456
    };


static const MIDL_STUB_DESC PICliBoardInterface_StubDesc = 
    {
    (void *)& PICliBoardInterface___RpcServerInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    0,
    RundownRoutines,
    0,
    0,
    0,
    PiClientBoard__MIDL_TypeFormatString.Format,
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

static const RPC_DISPATCH_FUNCTION PICliBoardInterface_table[] =
    {
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    0
    };
static const RPC_DISPATCH_TABLE PICliBoardInterface_v1_0_DispatchTable = 
    {
    9,
    (RPC_DISPATCH_FUNCTION*)PICliBoardInterface_table
    };

static const SERVER_ROUTINE PICliBoardInterface_ServerRoutineTable[] = 
    {
    (SERVER_ROUTINE)RpcPIBoardProcgStarted,
    (SERVER_ROUTINE)RpcPIBoardProcgCompleted,
    (SERVER_ROUTINE)RpcPIBoardPrinted,
    (SERVER_ROUTINE)RpcPIBoardAccepted,
    (SERVER_ROUTINE)RpcPIBoardRejected,
    (SERVER_ROUTINE)RpcPIPostPanelData,
    (SERVER_ROUTINE)RpcPIClearQueue,
    (SERVER_ROUTINE)RpcPIPostPasteHeightData,
    (SERVER_ROUTINE)RpcPIBoardBarcodeNotification
    };

static const MIDL_SERVER_INFO PICliBoardInterface_ServerInfo = 
    {
    &PICliBoardInterface_StubDesc,
    PICliBoardInterface_ServerRoutineTable,
    PiClientBoard__MIDL_ProcFormatString.Format,
    PICliBoardInterface_FormatStringOffsetTable,
    0,
    0,
    0,
    0};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

