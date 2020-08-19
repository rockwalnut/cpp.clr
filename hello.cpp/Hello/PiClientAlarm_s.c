

/* this ALWAYS GENERATED file contains the RPC server stubs */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Mon Jun 06 11:40:49 2016
 */
/* Compiler settings for PiClientAlarm.idl:
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
#include "PiClientAlarm_h.h"

#define TYPE_FORMAT_STRING_SIZE   43                                
#define PROC_FORMAT_STRING_SIZE   211                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _PiClientAlarm_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } PiClientAlarm_MIDL_TYPE_FORMAT_STRING;

typedef struct _PiClientAlarm_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } PiClientAlarm_MIDL_PROC_FORMAT_STRING;

typedef struct _PiClientAlarm_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } PiClientAlarm_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

extern const PiClientAlarm_MIDL_TYPE_FORMAT_STRING PiClientAlarm__MIDL_TypeFormatString;
extern const PiClientAlarm_MIDL_PROC_FORMAT_STRING PiClientAlarm__MIDL_ProcFormatString;
extern const PiClientAlarm_MIDL_EXPR_FORMAT_STRING PiClientAlarm__MIDL_ExprFormatString;

/* Standard interface: PICliAlarmInterface, ver. 1.0,
   GUID={0x0ce5b325,0xf62c,0x4270,{0xbe,0xa3,0x55,0x8f,0xdf,0xd5,0x56,0x83}} */


extern const MIDL_SERVER_INFO PICliAlarmInterface_ServerInfo;

extern const RPC_DISPATCH_TABLE PICliAlarmInterface_v1_0_DispatchTable;

static const RPC_SERVER_INTERFACE PICliAlarmInterface___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x0ce5b325,0xf62c,0x4270,{0xbe,0xa3,0x55,0x8f,0xdf,0xd5,0x56,0x83}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    (RPC_DISPATCH_TABLE*)&PICliAlarmInterface_v1_0_DispatchTable,
    0,
    0,
    0,
    &PICliAlarmInterface_ServerInfo,
    0x04000000
    };
RPC_IF_HANDLE PICliAlarmInterface_v1_0_s_ifspec = (RPC_IF_HANDLE)& PICliAlarmInterface___RpcServerInterface;

extern const MIDL_STUB_DESC PICliAlarmInterface_StubDesc;

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


static const PiClientAlarm_MIDL_PROC_FORMAT_STRING PiClientAlarm__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure RpcPIAlarmTriggered */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 10 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 12 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 14 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 16 */	NdrFcShort( 0x70 ),	/* 112 */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	0x42,		/* Oi2 Flags:  clt must size, has ext, */
			0xd,		/* 13 */
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

	/* Parameter lAlarmId */

/* 42 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 44 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 46 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eAlarmType */

/* 48 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 50 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 52 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter eAlarmSubType */

/* 54 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 56 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 58 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter eSeverity */

/* 60 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 62 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 64 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter sTextLen */

/* 66 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 68 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 70 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter usText */

/* 72 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 74 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 76 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter sPluginBindingLen */

/* 78 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 80 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 82 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter usPluginBinding */

/* 84 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 86 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 88 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter sPluginNameLen */

/* 90 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 92 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 94 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter usPluginName */

/* 96 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 98 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 100 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */

	/* Parameter i64UserData */

/* 102 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 104 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 106 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Procedure RpcPIAlarmChange */

/* 108 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 114 */	NdrFcShort( 0x1 ),	/* 1 */
/* 116 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 118 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 120 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 122 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 124 */	NdrFcShort( 0x42 ),	/* 66 */
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 128 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 130 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 136 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 138 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 140 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 142 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 144 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 146 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 148 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter lAlarmId */

/* 150 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 152 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eAction */

/* 156 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 158 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 160 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Procedure RpcPIAlarmSysStateChange */

/* 162 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 164 */	NdrFcLong( 0x0 ),	/* 0 */
/* 168 */	NdrFcShort( 0x2 ),	/* 2 */
/* 170 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 172 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 174 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 176 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 178 */	NdrFcShort( 0x3a ),	/* 58 */
/* 180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 182 */	0x40,		/* Oi2 Flags:  has ext, */
			0x3,		/* 3 */
/* 184 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 190 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 192 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 194 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 196 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 198 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 200 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 202 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter eNewState */

/* 204 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 206 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 208 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

			0x0
        }
    };

static const PiClientAlarm_MIDL_TYPE_FORMAT_STRING PiClientAlarm__MIDL_TypeFormatString =
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
/* 12 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 14 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 16 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 18 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 20 */	NdrFcShort( 0x2 ),	/* 2 */
/* 22 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 24 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 26 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 28 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 30 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 32 */	NdrFcShort( 0x2 ),	/* 2 */
/* 34 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 36 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 38 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 40 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const NDR_RUNDOWN RundownRoutines[] = 
    {
    PCONTEXT_HDL_TYPE_rundown
    };


static const unsigned short PICliAlarmInterface_FormatStringOffsetTable[] =
    {
    0,
    108,
    162
    };


static const MIDL_STUB_DESC PICliAlarmInterface_StubDesc = 
    {
    (void *)& PICliAlarmInterface___RpcServerInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    0,
    RundownRoutines,
    0,
    0,
    0,
    PiClientAlarm__MIDL_TypeFormatString.Format,
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

static const RPC_DISPATCH_FUNCTION PICliAlarmInterface_table[] =
    {
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    0
    };
static const RPC_DISPATCH_TABLE PICliAlarmInterface_v1_0_DispatchTable = 
    {
    3,
    (RPC_DISPATCH_FUNCTION*)PICliAlarmInterface_table
    };

static const SERVER_ROUTINE PICliAlarmInterface_ServerRoutineTable[] = 
    {
    (SERVER_ROUTINE)RpcPIAlarmTriggered,
    (SERVER_ROUTINE)RpcPIAlarmChange,
    (SERVER_ROUTINE)RpcPIAlarmSysStateChange
    };

static const MIDL_SERVER_INFO PICliAlarmInterface_ServerInfo = 
    {
    &PICliAlarmInterface_StubDesc,
    PICliAlarmInterface_ServerRoutineTable,
    PiClientAlarm__MIDL_ProcFormatString.Format,
    PICliAlarmInterface_FormatStringOffsetTable,
    0,
    0,
    0,
    0};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

