

/* this ALWAYS GENERATED file contains the RPC server stubs */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Mon Jun 06 11:40:50 2016
 */
/* Compiler settings for PiClientState.idl:
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
#include "PiClientState_h.h"

#define TYPE_FORMAT_STRING_SIZE   19                                
#define PROC_FORMAT_STRING_SIZE   721                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _PiClientState_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } PiClientState_MIDL_TYPE_FORMAT_STRING;

typedef struct _PiClientState_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } PiClientState_MIDL_PROC_FORMAT_STRING;

typedef struct _PiClientState_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } PiClientState_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

extern const PiClientState_MIDL_TYPE_FORMAT_STRING PiClientState__MIDL_TypeFormatString;
extern const PiClientState_MIDL_PROC_FORMAT_STRING PiClientState__MIDL_ProcFormatString;
extern const PiClientState_MIDL_EXPR_FORMAT_STRING PiClientState__MIDL_ExprFormatString;

/* Standard interface: PICliStateInterface, ver. 1.0,
   GUID={0xbd2bc8ba,0x4b62,0x4e88,{0xac,0x29,0x02,0x10,0x59,0x5e,0xcd,0xfb}} */


extern const MIDL_SERVER_INFO PICliStateInterface_ServerInfo;

extern const RPC_DISPATCH_TABLE PICliStateInterface_v1_0_DispatchTable;

static const RPC_SERVER_INTERFACE PICliStateInterface___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0xbd2bc8ba,0x4b62,0x4e88,{0xac,0x29,0x02,0x10,0x59,0x5e,0xcd,0xfb}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    (RPC_DISPATCH_TABLE*)&PICliStateInterface_v1_0_DispatchTable,
    0,
    0,
    0,
    &PICliStateInterface_ServerInfo,
    0x04000000
    };
RPC_IF_HANDLE PICliStateInterface_v1_0_s_ifspec = (RPC_IF_HANDLE)& PICliStateInterface___RpcServerInterface;

extern const MIDL_STUB_DESC PICliStateInterface_StubDesc;

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


static const PiClientState_MIDL_PROC_FORMAT_STRING PiClientState__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure RpcPIMachineStateChange */

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
/* 16 */	NdrFcShort( 0x3a ),	/* 58 */
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

	/* Parameter eNewState */

/* 42 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 44 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 46 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Procedure RpcPIWipeStarted */

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
/* 64 */	NdrFcShort( 0x3a ),	/* 58 */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	0x42,		/* Oi2 Flags:  clt must size, has ext, */
			0x4,		/* 4 */
/* 70 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 72 */	NdrFcShort( 0x0 ),	/* 0 */
/* 74 */	NdrFcShort( 0x1 ),	/* 1 */
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

	/* Parameter sProfileNameLen */

/* 90 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 92 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 94 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter usProfileName */

/* 96 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 98 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 100 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Procedure RpcPIWipeComplete */

/* 102 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 104 */	NdrFcLong( 0x0 ),	/* 0 */
/* 108 */	NdrFcShort( 0x2 ),	/* 2 */
/* 110 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 112 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 114 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 116 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 118 */	NdrFcShort( 0x34 ),	/* 52 */
/* 120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 122 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 124 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */
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

	/* Procedure RpcPIManualStencilCleanStarted */

/* 144 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0x3 ),	/* 3 */
/* 152 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 154 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 156 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 158 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 160 */	NdrFcShort( 0x34 ),	/* 52 */
/* 162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 164 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 166 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 170 */	NdrFcShort( 0x0 ),	/* 0 */
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

	/* Procedure RpcPIManualStencilCleanComplete */

/* 186 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 188 */	NdrFcLong( 0x0 ),	/* 0 */
/* 192 */	NdrFcShort( 0x4 ),	/* 4 */
/* 194 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 196 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 198 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 200 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 202 */	NdrFcShort( 0x34 ),	/* 52 */
/* 204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 206 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 208 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 214 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 216 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 218 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 220 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 222 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 224 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 226 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Procedure RpcPIDispenseStarted */

/* 228 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0x5 ),	/* 5 */
/* 236 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 238 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 240 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 242 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 244 */	NdrFcShort( 0x3a ),	/* 58 */
/* 246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 248 */	0x42,		/* Oi2 Flags:  clt must size, has ext, */
			0x4,		/* 4 */
/* 250 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 254 */	NdrFcShort( 0x1 ),	/* 1 */
/* 256 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 258 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 260 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 262 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 264 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 266 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 268 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter sProfileNameLen */

/* 270 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 272 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 274 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter usProfileName */

/* 276 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 278 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 280 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Procedure RpcPIDispenseComplete */

/* 282 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 288 */	NdrFcShort( 0x6 ),	/* 6 */
/* 290 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 292 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 294 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 296 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 298 */	NdrFcShort( 0x34 ),	/* 52 */
/* 300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 302 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 304 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 310 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 312 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 314 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 316 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 318 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 320 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 322 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Procedure RpcPIManualAddPasteStarted */

/* 324 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 326 */	NdrFcLong( 0x0 ),	/* 0 */
/* 330 */	NdrFcShort( 0x7 ),	/* 7 */
/* 332 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 334 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 336 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 338 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 340 */	NdrFcShort( 0x34 ),	/* 52 */
/* 342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 344 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 346 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 352 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 354 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 356 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 358 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 360 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 362 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 364 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Procedure RpcPIManualAddPasteComplete */

/* 366 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 368 */	NdrFcLong( 0x0 ),	/* 0 */
/* 372 */	NdrFcShort( 0x8 ),	/* 8 */
/* 374 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 376 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 378 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 380 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 382 */	NdrFcShort( 0x34 ),	/* 52 */
/* 384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 386 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 388 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 394 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 396 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 398 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 400 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 402 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 404 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 406 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Procedure RpcPIChangePasteStarted */

/* 408 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 414 */	NdrFcShort( 0x9 ),	/* 9 */
/* 416 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 418 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 420 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 422 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 424 */	NdrFcShort( 0x34 ),	/* 52 */
/* 426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 428 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 430 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 436 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 438 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 440 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 442 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 444 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 446 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 448 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Procedure RpcPIChangePasteComplete */

/* 450 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 456 */	NdrFcShort( 0xa ),	/* 10 */
/* 458 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 460 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 462 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 464 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 466 */	NdrFcShort( 0x34 ),	/* 52 */
/* 468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 470 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 472 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 478 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 480 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 482 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 484 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 486 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 488 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 490 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Procedure RpcPIStencilRemoved */

/* 492 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 494 */	NdrFcLong( 0x0 ),	/* 0 */
/* 498 */	NdrFcShort( 0xb ),	/* 11 */
/* 500 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 502 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 504 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 506 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 508 */	NdrFcShort( 0x34 ),	/* 52 */
/* 510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 512 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 514 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 520 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 522 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 524 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 526 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 528 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 530 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 532 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Procedure RpcPIStencilInserted */

/* 534 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 536 */	NdrFcLong( 0x0 ),	/* 0 */
/* 540 */	NdrFcShort( 0xc ),	/* 12 */
/* 542 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 544 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 546 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 548 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 550 */	NdrFcShort( 0x34 ),	/* 52 */
/* 552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 554 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 556 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 562 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 564 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 566 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 568 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 570 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 572 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 574 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Procedure RpcPIPrintStrokeStarted */

/* 576 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 578 */	NdrFcLong( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0xd ),	/* 13 */
/* 584 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 586 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 588 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 590 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 592 */	NdrFcShort( 0x3f ),	/* 63 */
/* 594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 596 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 598 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 604 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 606 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 608 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 610 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 612 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 614 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 616 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter bIsFrontToRear */

/* 618 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 620 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 622 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter sStrokeNumber */

/* 624 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 626 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 628 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure RpcPIPrintStrokeEnded */

/* 630 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 632 */	NdrFcLong( 0x0 ),	/* 0 */
/* 636 */	NdrFcShort( 0xe ),	/* 14 */
/* 638 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 640 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 642 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 644 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 646 */	NdrFcShort( 0x34 ),	/* 52 */
/* 648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 650 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 652 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 658 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 660 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 662 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 664 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 666 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 668 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 670 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Procedure RpcPIKneadNotification */

/* 672 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 674 */	NdrFcLong( 0x0 ),	/* 0 */
/* 678 */	NdrFcShort( 0xf ),	/* 15 */
/* 680 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 682 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 684 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 686 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 688 */	NdrFcShort( 0x3c ),	/* 60 */
/* 690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 692 */	0x40,		/* Oi2 Flags:  has ext, */
			0x3,		/* 3 */
/* 694 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 700 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 702 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 704 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 706 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 708 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 710 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 712 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter lBoardId */

/* 714 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 716 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const PiClientState_MIDL_TYPE_FORMAT_STRING PiClientState__MIDL_TypeFormatString =
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

			0x0
        }
    };

static const NDR_RUNDOWN RundownRoutines[] = 
    {
    PCONTEXT_HDL_TYPE_rundown
    };


static const unsigned short PICliStateInterface_FormatStringOffsetTable[] =
    {
    0,
    48,
    102,
    144,
    186,
    228,
    282,
    324,
    366,
    408,
    450,
    492,
    534,
    576,
    630,
    672
    };


static const MIDL_STUB_DESC PICliStateInterface_StubDesc = 
    {
    (void *)& PICliStateInterface___RpcServerInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    0,
    RundownRoutines,
    0,
    0,
    0,
    PiClientState__MIDL_TypeFormatString.Format,
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

static const RPC_DISPATCH_FUNCTION PICliStateInterface_table[] =
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
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    0
    };
static const RPC_DISPATCH_TABLE PICliStateInterface_v1_0_DispatchTable = 
    {
    16,
    (RPC_DISPATCH_FUNCTION*)PICliStateInterface_table
    };

static const SERVER_ROUTINE PICliStateInterface_ServerRoutineTable[] = 
    {
    (SERVER_ROUTINE)RpcPIMachineStateChange,
    (SERVER_ROUTINE)RpcPIWipeStarted,
    (SERVER_ROUTINE)RpcPIWipeComplete,
    (SERVER_ROUTINE)RpcPIManualStencilCleanStarted,
    (SERVER_ROUTINE)RpcPIManualStencilCleanComplete,
    (SERVER_ROUTINE)RpcPIDispenseStarted,
    (SERVER_ROUTINE)RpcPIDispenseComplete,
    (SERVER_ROUTINE)RpcPIManualAddPasteStarted,
    (SERVER_ROUTINE)RpcPIManualAddPasteComplete,
    (SERVER_ROUTINE)RpcPIChangePasteStarted,
    (SERVER_ROUTINE)RpcPIChangePasteComplete,
    (SERVER_ROUTINE)RpcPIStencilRemoved,
    (SERVER_ROUTINE)RpcPIStencilInserted,
    (SERVER_ROUTINE)RpcPIPrintStrokeStarted,
    (SERVER_ROUTINE)RpcPIPrintStrokeEnded,
    (SERVER_ROUTINE)RpcPIKneadNotification
    };

static const MIDL_SERVER_INFO PICliStateInterface_ServerInfo = 
    {
    &PICliStateInterface_StubDesc,
    PICliStateInterface_ServerRoutineTable,
    PiClientState__MIDL_ProcFormatString.Format,
    PICliStateInterface_FormatStringOffsetTable,
    0,
    0,
    0,
    0};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

