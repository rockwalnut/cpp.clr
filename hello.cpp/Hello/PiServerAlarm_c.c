

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Mon Jun 06 11:40:50 2016
 */
/* Compiler settings for PiServerAlarm.idl:
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

#include "PiServerAlarm_h.h"

#define TYPE_FORMAT_STRING_SIZE   27                                
#define PROC_FORMAT_STRING_SIZE   133                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _PiServerAlarm_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } PiServerAlarm_MIDL_TYPE_FORMAT_STRING;

typedef struct _PiServerAlarm_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } PiServerAlarm_MIDL_PROC_FORMAT_STRING;

typedef struct _PiServerAlarm_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } PiServerAlarm_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const PiServerAlarm_MIDL_TYPE_FORMAT_STRING PiServerAlarm__MIDL_TypeFormatString;
extern const PiServerAlarm_MIDL_PROC_FORMAT_STRING PiServerAlarm__MIDL_ProcFormatString;
extern const PiServerAlarm_MIDL_EXPR_FORMAT_STRING PiServerAlarm__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: PISerAlarmInterface, ver. 1.0,
   GUID={0x1f2680dd,0x7ac1,0x4b03,{0xbd,0x41,0x5a,0xb1,0xf9,0x07,0x77,0x1b}} */



static const RPC_CLIENT_INTERFACE PISerAlarmInterface___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x1f2680dd,0x7ac1,0x4b03,{0xbd,0x41,0x5a,0xb1,0xf9,0x07,0x77,0x1b}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0x00000000
    };
RPC_IF_HANDLE PISerAlarmInterface_v1_0_c_ifspec = (RPC_IF_HANDLE)& PISerAlarmInterface___RpcClientInterface;

extern const MIDL_STUB_DESC PISerAlarmInterface_StubDesc;

static RPC_BINDING_HANDLE PISerAlarmInterface__MIDL_AutoBindHandle;


void RpcBMPostAlarm( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [in] */ EPIAlarmSeverity eAlarmSeverity,
    /* [in] */ short sAlarmMessageLen,
    /* [size_is][in] */ unsigned short usAlarmMessage[  ],
    /* [in] */ hyper i64UserData,
    /* [out] */ long *plAlarmId,
    /* [out] */ EPICallStatus *peCallStatus)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PISerAlarmInterface_StubDesc,
                  (PFORMAT_STRING) &PiServerAlarm__MIDL_ProcFormatString.Format[0],
                  ( unsigned char * )&phContext);
    
}


void RpcBMGetAlarmSysState( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [out] */ EPIAlarmSysState *peAlarmSysState,
    /* [out] */ EPICallStatus *peCallStatus)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PISerAlarmInterface_StubDesc,
                  (PFORMAT_STRING) &PiServerAlarm__MIDL_ProcFormatString.Format[78],
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


static const PiServerAlarm_MIDL_PROC_FORMAT_STRING PiServerAlarm__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure RpcBMPostAlarm */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 10 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 12 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 14 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 16 */	NdrFcShort( 0x50 ),	/* 80 */
/* 18 */	NdrFcShort( 0x36 ),	/* 54 */
/* 20 */	0x42,		/* Oi2 Flags:  clt must size, has ext, */
			0x8,		/* 8 */
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

	/* Parameter eAlarmSeverity */

/* 42 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 44 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 46 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter sAlarmMessageLen */

/* 48 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 50 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 52 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter usAlarmMessage */

/* 54 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 56 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 58 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter i64UserData */

/* 60 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 62 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 64 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter plAlarmId */

/* 66 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 68 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 70 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter peCallStatus */

/* 72 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 74 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 76 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

	/* Procedure RpcBMGetAlarmSysState */

/* 78 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 80 */	NdrFcLong( 0x0 ),	/* 0 */
/* 84 */	NdrFcShort( 0x1 ),	/* 1 */
/* 86 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 88 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 90 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 92 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 94 */	NdrFcShort( 0x34 ),	/* 52 */
/* 96 */	NdrFcShort( 0x34 ),	/* 52 */
/* 98 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 100 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 106 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 108 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 110 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 112 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 114 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 116 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 118 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter peAlarmSysState */

/* 120 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 122 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 124 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

	/* Parameter peCallStatus */

/* 126 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 128 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 130 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

			0x0
        }
    };

static const PiServerAlarm_MIDL_TYPE_FORMAT_STRING PiServerAlarm__MIDL_TypeFormatString =
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
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 20 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 22 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 24 */	0xd,		/* FC_ENUM16 */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

static const unsigned short PISerAlarmInterface_FormatStringOffsetTable[] =
    {
    0,
    78
    };


static const MIDL_STUB_DESC PISerAlarmInterface_StubDesc = 
    {
    (void *)& PISerAlarmInterface___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &PISerAlarmInterface__MIDL_AutoBindHandle,
    0,
    0,
    0,
    0,
    PiServerAlarm__MIDL_TypeFormatString.Format,
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

