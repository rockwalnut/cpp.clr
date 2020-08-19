

/* this ALWAYS GENERATED file contains the RPC server stubs */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Mon Jun 06 11:40:49 2016
 */
/* Compiler settings for PiClient.idl:
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
#include "PiClient_h.h"

#define TYPE_FORMAT_STRING_SIZE   65                                
#define PROC_FORMAT_STRING_SIZE   201                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _PiClient_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } PiClient_MIDL_TYPE_FORMAT_STRING;

typedef struct _PiClient_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } PiClient_MIDL_PROC_FORMAT_STRING;

typedef struct _PiClient_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } PiClient_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

extern const PiClient_MIDL_TYPE_FORMAT_STRING PiClient__MIDL_TypeFormatString;
extern const PiClient_MIDL_PROC_FORMAT_STRING PiClient__MIDL_ProcFormatString;
extern const PiClient_MIDL_EXPR_FORMAT_STRING PiClient__MIDL_ExprFormatString;

/* Standard interface: PICliConnectInterface, ver. 1.0,
   GUID={0x2dce1642,0xf02e,0x4486,{0xb2,0xdc,0xe7,0xb1,0x5e,0x97,0xf6,0xa0}} */


extern const MIDL_SERVER_INFO PICliConnectInterface_ServerInfo;

extern const RPC_DISPATCH_TABLE PICliConnectInterface_v1_0_DispatchTable;

static const RPC_SERVER_INTERFACE PICliConnectInterface___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x2dce1642,0xf02e,0x4486,{0xb2,0xdc,0xe7,0xb1,0x5e,0x97,0xf6,0xa0}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    (RPC_DISPATCH_TABLE*)&PICliConnectInterface_v1_0_DispatchTable,
    0,
    0,
    0,
    &PICliConnectInterface_ServerInfo,
    0x04000000
    };
RPC_IF_HANDLE PICliConnectInterface_v1_0_s_ifspec = (RPC_IF_HANDLE)& PICliConnectInterface___RpcServerInterface;

extern const MIDL_STUB_DESC PICliConnectInterface_StubDesc;

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


static const PiClient_MIDL_PROC_FORMAT_STRING PiClient__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure RpcPIDisconnect */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 12 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 14 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 16 */	NdrFcShort( 0x34 ),	/* 52 */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
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

	/* Procedure RpcPIPing */

/* 42 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 44 */	NdrFcLong( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x1 ),	/* 1 */
/* 50 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 52 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 54 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 56 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 58 */	NdrFcShort( 0x34 ),	/* 52 */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 64 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */
/* 70 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 72 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 74 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 76 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 78 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 80 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 82 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Procedure RpcPIGetVersionInfo */

/* 84 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 86 */	NdrFcLong( 0x0 ),	/* 0 */
/* 90 */	NdrFcShort( 0x2 ),	/* 2 */
/* 92 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 94 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 96 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 98 */	NdrFcShort( 0x44 ),	/* 68 */
/* 100 */	NdrFcShort( 0x50 ),	/* 80 */
/* 102 */	0x41,		/* Oi2 Flags:  srv must size, has ext, */
			0x6,		/* 6 */
/* 104 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 106 */	NdrFcShort( 0x1 ),	/* 1 */
/* 108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 110 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hdl */

/* 112 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 114 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 116 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter i64Timestamp */

/* 118 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 120 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 122 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter sNameLen */

/* 124 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 126 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 128 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter usName */

/* 130 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 132 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 134 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter sSoftwareVersionLen */

/* 136 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 138 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 140 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

	/* Parameter usSoftwareVersion */

/* 142 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 144 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 146 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcPIGetNotificationList */


	/* Parameter lSchema */

/* 148 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 150 */	NdrFcLong( 0x0 ),	/* 0 */
/* 154 */	NdrFcShort( 0x3 ),	/* 3 */
/* 156 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 158 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 160 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 162 */	NdrFcShort( 0x2a ),	/* 42 */
/* 164 */	NdrFcShort( 0x52 ),	/* 82 */
/* 166 */	0x41,		/* Oi2 Flags:  srv must size, has ext, */
			0x4,		/* 4 */
/* 168 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 170 */	NdrFcShort( 0x1 ),	/* 1 */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 174 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hdl */

/* 176 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 178 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 180 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter i64Timestamp */

/* 182 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 184 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 186 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter sListLen */

/* 188 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 190 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 192 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter eNotifyList */

/* 194 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 196 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 198 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

			0x0
        }
    };

static const PiClient_MIDL_TYPE_FORMAT_STRING PiClient__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/*  4 */	0x0,		/* 0 */
			0x0,		/* 0 */
/*  6 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/*  8 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 10 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 12 */	NdrFcShort( 0x2 ),	/* 2 */
/* 14 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x54,		/* FC_DEREFERENCE */
/* 16 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 18 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 20 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 22 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 24 */	NdrFcShort( 0x2 ),	/* 2 */
/* 26 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x54,		/* FC_DEREFERENCE */
/* 28 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 30 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 32 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 34 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 36 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 38 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x1,		/* 1 */
/* 40 */	NdrFcShort( 0x0 ),	/* 0 */
/* 42 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x54,		/* FC_DEREFERENCE */
/* 44 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 46 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 48 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 52 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 54 */	0xd,		/* FC_ENUM16 */
			0x5b,		/* FC_END */
/* 56 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 58 */	NdrFcShort( 0x2 ),	/* Offset= 2 (60) */
/* 60 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 62 */	0x0,		/* 0 */
			0x0,		/* 0 */

			0x0
        }
    };

static const NDR_RUNDOWN RundownRoutines[] = 
    {
    PCONTEXT_HDL_TYPE_rundown
    };


static const unsigned short PICliConnectInterface_FormatStringOffsetTable[] =
    {
    0,
    42,
    84,
    148
    };


static const MIDL_STUB_DESC PICliConnectInterface_StubDesc = 
    {
    (void *)& PICliConnectInterface___RpcServerInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    0,
    RundownRoutines,
    0,
    0,
    0,
    PiClient__MIDL_TypeFormatString.Format,
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

static const RPC_DISPATCH_FUNCTION PICliConnectInterface_table[] =
    {
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    0
    };
static const RPC_DISPATCH_TABLE PICliConnectInterface_v1_0_DispatchTable = 
    {
    4,
    (RPC_DISPATCH_FUNCTION*)PICliConnectInterface_table
    };

static const SERVER_ROUTINE PICliConnectInterface_ServerRoutineTable[] = 
    {
    (SERVER_ROUTINE)RpcPIDisconnect,
    (SERVER_ROUTINE)RpcPIPing,
    (SERVER_ROUTINE)RpcPIGetVersionInfo,
    (SERVER_ROUTINE)RpcPIGetNotificationList
    };

static const MIDL_SERVER_INFO PICliConnectInterface_ServerInfo = 
    {
    &PICliConnectInterface_StubDesc,
    PICliConnectInterface_ServerRoutineTable,
    PiClient__MIDL_ProcFormatString.Format,
    PICliConnectInterface_FormatStringOffsetTable,
    0,
    0,
    0,
    0};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

