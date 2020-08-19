

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Mon Jun 06 11:45:15 2016
 */
/* Compiler settings for PiServer.idl:
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

#include "PiServer_h.h"

#define TYPE_FORMAT_STRING_SIZE   91                                
#define PROC_FORMAT_STRING_SIZE   287                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _PiServer_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } PiServer_MIDL_TYPE_FORMAT_STRING;

typedef struct _PiServer_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } PiServer_MIDL_PROC_FORMAT_STRING;

typedef struct _PiServer_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } PiServer_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const PiServer_MIDL_TYPE_FORMAT_STRING PiServer__MIDL_TypeFormatString;
extern const PiServer_MIDL_PROC_FORMAT_STRING PiServer__MIDL_ProcFormatString;
extern const PiServer_MIDL_EXPR_FORMAT_STRING PiServer__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: PISerConnectInterface, ver. 1.0,
   GUID={0x55da2909,0x0843,0x4e35,{0xa2,0xd4,0x29,0x03,0x62,0x9c,0x3c,0x98}} */



static const RPC_CLIENT_INTERFACE PISerConnectInterface___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x55da2909,0x0843,0x4e35,{0xa2,0xd4,0x29,0x03,0x62,0x9c,0x3c,0x98}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0x00000000
    };
RPC_IF_HANDLE PISerConnectInterface_v1_0_c_ifspec = (RPC_IF_HANDLE)& PISerConnectInterface___RpcClientInterface;

extern const MIDL_STUB_DESC PISerConnectInterface_StubDesc;

static RPC_BINDING_HANDLE PISerConnectInterface__MIDL_AutoBindHandle;


void RpcBMConnect( 
    /* [in] */ handle_t hdl,
    /* [in] */ short sStringBindingLen,
    /* [size_is][in] */ unsigned short usStringBinding[  ],
    /* [size_is][in] */ unsigned short usGUID[  ],
    /* [in] */ short sNameLen,
    /* [size_is][in] */ unsigned short usName[  ],
    /* [out] */ PCONTEXT_HDL_TYPE *pphContext,
    /* [out] */ EPICallStatus *peCallStatus)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PISerConnectInterface_StubDesc,
                  (PFORMAT_STRING) &PiServer__MIDL_ProcFormatString.Format[0],
                  ( unsigned char * )&hdl);
    
}


void RpcBMDisconnect( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [out] */ EPICallStatus *peCallStatus)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PISerConnectInterface_StubDesc,
                  (PFORMAT_STRING) &PiServer__MIDL_ProcFormatString.Format[70],
                  ( unsigned char * )&phContext);
    
}


void RpcBMPing( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [out] */ EPICallStatus *peCallStatus)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PISerConnectInterface_StubDesc,
                  (PFORMAT_STRING) &PiServer__MIDL_ProcFormatString.Format[118],
                  ( unsigned char * )&phContext);
    
}


void RpcBMGetVersionInfo( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [out][in] */ long *sSoftwareVersionLen,
    /* [size_is][out] */ unsigned short usSoftwareVersion[  ],
    /* [out] */ long *lSchema)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PISerConnectInterface_StubDesc,
                  (PFORMAT_STRING) &PiServer__MIDL_ProcFormatString.Format[166],
                  ( unsigned char * )&phContext);
    
}


void RpcBMGetMachineInfo( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [out][in] */ short *sMachineIdLen,
    /* [size_is][out] */ unsigned short usMachineId[  ],
    /* [out] */ EPIMachineType *eMachineType)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PISerConnectInterface_StubDesc,
                  (PFORMAT_STRING) &PiServer__MIDL_ProcFormatString.Format[226],
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


static const PiServer_MIDL_PROC_FORMAT_STRING PiServer__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure RpcBMConnect */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0xc ),	/* 12 */
/* 16 */	NdrFcShort( 0x52 ),	/* 82 */
/* 18 */	0x42,		/* Oi2 Flags:  clt must size, has ext, */
			0x7,		/* 7 */
/* 20 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x1 ),	/* 1 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hdl */

/* 28 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 30 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 32 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter sStringBindingLen */

/* 34 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 36 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 38 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter usStringBinding */

/* 40 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 42 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 44 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter usGUID */

/* 46 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 48 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 50 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter sNameLen */

/* 52 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 54 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 56 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Parameter usName */

/* 58 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 60 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 62 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter pphContext */

/* 64 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 66 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 68 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Procedure RpcBMDisconnect */


	/* Parameter peCallStatus */

/* 70 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 72 */	NdrFcLong( 0x0 ),	/* 0 */
/* 76 */	NdrFcShort( 0x1 ),	/* 1 */
/* 78 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 80 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 82 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 84 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 86 */	NdrFcShort( 0x34 ),	/* 52 */
/* 88 */	NdrFcShort( 0x1a ),	/* 26 */
/* 90 */	0x40,		/* Oi2 Flags:  has ext, */
			0x3,		/* 3 */
/* 92 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */
/* 96 */	NdrFcShort( 0x0 ),	/* 0 */
/* 98 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 100 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 102 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 104 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Parameter i64Timestamp */

/* 106 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 108 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 110 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter peCallStatus */

/* 112 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 114 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 116 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Procedure RpcBMPing */

/* 118 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 120 */	NdrFcLong( 0x0 ),	/* 0 */
/* 124 */	NdrFcShort( 0x2 ),	/* 2 */
/* 126 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 128 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 130 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 132 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 134 */	NdrFcShort( 0x34 ),	/* 52 */
/* 136 */	NdrFcShort( 0x1a ),	/* 26 */
/* 138 */	0x40,		/* Oi2 Flags:  has ext, */
			0x3,		/* 3 */
/* 140 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 146 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 148 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 150 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 152 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Parameter i64Timestamp */

/* 154 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 156 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 158 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter peCallStatus */

/* 160 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 162 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 164 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Procedure RpcBMGetVersionInfo */

/* 166 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 168 */	NdrFcLong( 0x0 ),	/* 0 */
/* 172 */	NdrFcShort( 0x3 ),	/* 3 */
/* 174 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 176 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 178 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 180 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 182 */	NdrFcShort( 0x50 ),	/* 80 */
/* 184 */	NdrFcShort( 0x38 ),	/* 56 */
/* 186 */	0x41,		/* Oi2 Flags:  srv must size, has ext, */
			0x5,		/* 5 */
/* 188 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 190 */	NdrFcShort( 0x1 ),	/* 1 */
/* 192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 194 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 196 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 198 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 200 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Parameter i64Timestamp */

/* 202 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 204 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 206 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter sSoftwareVersionLen */

/* 208 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 210 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter usSoftwareVersion */

/* 214 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 216 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 218 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Parameter lSchema */

/* 220 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 222 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcBMGetMachineInfo */

/* 226 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 232 */	NdrFcShort( 0x4 ),	/* 4 */
/* 234 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 236 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 238 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 240 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 242 */	NdrFcShort( 0x4e ),	/* 78 */
/* 244 */	NdrFcShort( 0x34 ),	/* 52 */
/* 246 */	0x41,		/* Oi2 Flags:  srv must size, has ext, */
			0x5,		/* 5 */
/* 248 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 250 */	NdrFcShort( 0x1 ),	/* 1 */
/* 252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 254 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 256 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 258 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 260 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Parameter i64Timestamp */

/* 262 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 264 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 266 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter sMachineIdLen */

/* 268 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 270 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 272 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter usMachineId */

/* 274 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 276 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 278 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter eMachineType */

/* 280 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 282 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 284 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

			0x0
        }
    };

static const PiServer_MIDL_TYPE_FORMAT_STRING PiServer__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/*  4 */	NdrFcShort( 0x2 ),	/* 2 */
/*  6 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/*  8 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 12 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 14 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 16 */	NdrFcShort( 0x2 ),	/* 2 */
/* 18 */	0x40,		/* Corr desc:  constant, val=39 */
			0x0,		/* 0 */
/* 20 */	NdrFcShort( 0x27 ),	/* 39 */
/* 22 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 24 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 26 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 28 */	NdrFcShort( 0x2 ),	/* 2 */
/* 30 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 32 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 34 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 36 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 38 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 40 */	NdrFcShort( 0x2 ),	/* Offset= 2 (42) */
/* 42 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 44 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 46 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 48 */	0xd,		/* FC_ENUM16 */
			0x5c,		/* FC_PAD */
/* 50 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 52 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 54 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 56 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 58 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 60 */	NdrFcShort( 0x2 ),	/* 2 */
/* 62 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 64 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 66 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 68 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 70 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 72 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 74 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 76 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 78 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 80 */	NdrFcShort( 0x2 ),	/* 2 */
/* 82 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x54,		/* FC_DEREFERENCE */
/* 84 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 86 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 88 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const unsigned short PISerConnectInterface_FormatStringOffsetTable[] =
    {
    0,
    70,
    118,
    166,
    226
    };


static const MIDL_STUB_DESC PISerConnectInterface_StubDesc = 
    {
    (void *)& PISerConnectInterface___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &PISerConnectInterface__MIDL_AutoBindHandle,
    0,
    0,
    0,
    0,
    PiServer__MIDL_TypeFormatString.Format,
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

