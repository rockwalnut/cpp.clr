

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Mon Jun 06 11:40:51 2016
 */
/* Compiler settings for PiServerState.idl:
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

#include "PiServerState_h.h"

#define TYPE_FORMAT_STRING_SIZE   11                                
#define PROC_FORMAT_STRING_SIZE   397                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _PiServerState_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } PiServerState_MIDL_TYPE_FORMAT_STRING;

typedef struct _PiServerState_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } PiServerState_MIDL_PROC_FORMAT_STRING;

typedef struct _PiServerState_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } PiServerState_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const PiServerState_MIDL_TYPE_FORMAT_STRING PiServerState__MIDL_TypeFormatString;
extern const PiServerState_MIDL_PROC_FORMAT_STRING PiServerState__MIDL_ProcFormatString;
extern const PiServerState_MIDL_EXPR_FORMAT_STRING PiServerState__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: PISerStateInterface, ver. 1.0,
   GUID={0x82f2c890,0x4f25,0x4216,{0x9c,0x3a,0xa4,0x4b,0xe1,0x82,0xdd,0xab}} */



static const RPC_CLIENT_INTERFACE PISerStateInterface___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x82f2c890,0x4f25,0x4216,{0x9c,0x3a,0xa4,0x4b,0xe1,0x82,0xdd,0xab}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0x00000000
    };
RPC_IF_HANDLE PISerStateInterface_v1_0_c_ifspec = (RPC_IF_HANDLE)& PISerStateInterface___RpcClientInterface;

extern const MIDL_STUB_DESC PISerStateInterface_StubDesc;

static RPC_BINDING_HANDLE PISerStateInterface__MIDL_AutoBindHandle;


void RpcBMGetState( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [out] */ EPISysMachineState *peSysMachineState,
    /* [out] */ EPICallStatus *peCallStatus)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PISerStateInterface_StubDesc,
                  (PFORMAT_STRING) &PiServerState__MIDL_ProcFormatString.Format[0],
                  ( unsigned char * )&phContext);
    
}


void RpcBMTriggerWipe( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [out] */ EPICallStatus *peCallStatus)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PISerStateInterface_StubDesc,
                  (PFORMAT_STRING) &PiServerState__MIDL_ProcFormatString.Format[54],
                  ( unsigned char * )&phContext);
    
}


void RpcBMTriggerManualInspection( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [out] */ EPICallStatus *peCallStatus)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PISerStateInterface_StubDesc,
                  (PFORMAT_STRING) &PiServerState__MIDL_ProcFormatString.Format[102],
                  ( unsigned char * )&phContext);
    
}


void RpcBMTriggerManualCleanStencil( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [out] */ EPICallStatus *peCallStatus)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PISerStateInterface_StubDesc,
                  (PFORMAT_STRING) &PiServerState__MIDL_ProcFormatString.Format[150],
                  ( unsigned char * )&phContext);
    
}


void RpcBMTriggerAutoAddPaste( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [out] */ EPICallStatus *peCallStatus)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PISerStateInterface_StubDesc,
                  (PFORMAT_STRING) &PiServerState__MIDL_ProcFormatString.Format[198],
                  ( unsigned char * )&phContext);
    
}


void RpcBMTriggerManualAddPaste( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [out] */ EPICallStatus *peCallStatus)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PISerStateInterface_StubDesc,
                  (PFORMAT_STRING) &PiServerState__MIDL_ProcFormatString.Format[246],
                  ( unsigned char * )&phContext);
    
}


void RpcBMPauseProduction( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [out] */ EPICallStatus *peCallStatus)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PISerStateInterface_StubDesc,
                  (PFORMAT_STRING) &PiServerState__MIDL_ProcFormatString.Format[294],
                  ( unsigned char * )&phContext);
    
}


void RpcBMStopProduction( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [in] */ boolean bProcessAllBoards,
    /* [out] */ EPICallStatus *peCallStatus)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PISerStateInterface_StubDesc,
                  (PFORMAT_STRING) &PiServerState__MIDL_ProcFormatString.Format[342],
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


static const PiServerState_MIDL_PROC_FORMAT_STRING PiServerState__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure RpcBMGetState */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 12 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 14 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 16 */	NdrFcShort( 0x34 ),	/* 52 */
/* 18 */	NdrFcShort( 0x34 ),	/* 52 */
/* 20 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
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

	/* Parameter peSysMachineState */

/* 42 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 44 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 46 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter peCallStatus */

/* 48 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 50 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 52 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Procedure RpcBMTriggerWipe */

/* 54 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 56 */	NdrFcLong( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x1 ),	/* 1 */
/* 62 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 64 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 66 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 68 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 70 */	NdrFcShort( 0x34 ),	/* 52 */
/* 72 */	NdrFcShort( 0x1a ),	/* 26 */
/* 74 */	0x40,		/* Oi2 Flags:  has ext, */
			0x3,		/* 3 */
/* 76 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 78 */	NdrFcShort( 0x0 ),	/* 0 */
/* 80 */	NdrFcShort( 0x0 ),	/* 0 */
/* 82 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 84 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 86 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 88 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 90 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 92 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 94 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter peCallStatus */

/* 96 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 98 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 100 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Procedure RpcBMTriggerManualInspection */

/* 102 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 104 */	NdrFcLong( 0x0 ),	/* 0 */
/* 108 */	NdrFcShort( 0x2 ),	/* 2 */
/* 110 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 112 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 114 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 116 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 118 */	NdrFcShort( 0x34 ),	/* 52 */
/* 120 */	NdrFcShort( 0x1a ),	/* 26 */
/* 122 */	0x40,		/* Oi2 Flags:  has ext, */
			0x3,		/* 3 */
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

	/* Parameter peCallStatus */

/* 144 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 146 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 148 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Procedure RpcBMTriggerManualCleanStencil */

/* 150 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 156 */	NdrFcShort( 0x3 ),	/* 3 */
/* 158 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 160 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 162 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 164 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 166 */	NdrFcShort( 0x34 ),	/* 52 */
/* 168 */	NdrFcShort( 0x1a ),	/* 26 */
/* 170 */	0x40,		/* Oi2 Flags:  has ext, */
			0x3,		/* 3 */
/* 172 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 178 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 180 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 182 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 184 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 186 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 188 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 190 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter peCallStatus */

/* 192 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 194 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 196 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Procedure RpcBMTriggerAutoAddPaste */

/* 198 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 200 */	NdrFcLong( 0x0 ),	/* 0 */
/* 204 */	NdrFcShort( 0x4 ),	/* 4 */
/* 206 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 208 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 210 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 212 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 214 */	NdrFcShort( 0x34 ),	/* 52 */
/* 216 */	NdrFcShort( 0x1a ),	/* 26 */
/* 218 */	0x40,		/* Oi2 Flags:  has ext, */
			0x3,		/* 3 */
/* 220 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 226 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 228 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 230 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 232 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 234 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 236 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 238 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter peCallStatus */

/* 240 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 242 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 244 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Procedure RpcBMTriggerManualAddPaste */

/* 246 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 248 */	NdrFcLong( 0x0 ),	/* 0 */
/* 252 */	NdrFcShort( 0x5 ),	/* 5 */
/* 254 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 256 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 258 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 260 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 262 */	NdrFcShort( 0x34 ),	/* 52 */
/* 264 */	NdrFcShort( 0x1a ),	/* 26 */
/* 266 */	0x40,		/* Oi2 Flags:  has ext, */
			0x3,		/* 3 */
/* 268 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 274 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 276 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 278 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 280 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 282 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 284 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 286 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter peCallStatus */

/* 288 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 290 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 292 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Procedure RpcBMPauseProduction */

/* 294 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 296 */	NdrFcLong( 0x0 ),	/* 0 */
/* 300 */	NdrFcShort( 0x6 ),	/* 6 */
/* 302 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 304 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 306 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 308 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 310 */	NdrFcShort( 0x34 ),	/* 52 */
/* 312 */	NdrFcShort( 0x1a ),	/* 26 */
/* 314 */	0x40,		/* Oi2 Flags:  has ext, */
			0x3,		/* 3 */
/* 316 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 322 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 324 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 326 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 328 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 330 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 332 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 334 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter peCallStatus */

/* 336 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 338 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 340 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Procedure RpcBMStopProduction */

/* 342 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 344 */	NdrFcLong( 0x0 ),	/* 0 */
/* 348 */	NdrFcShort( 0x7 ),	/* 7 */
/* 350 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 352 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 354 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 356 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 358 */	NdrFcShort( 0x39 ),	/* 57 */
/* 360 */	NdrFcShort( 0x1a ),	/* 26 */
/* 362 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 364 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 370 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 372 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 374 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 376 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 378 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 380 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 382 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter bProcessAllBoards */

/* 384 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 386 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 388 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter peCallStatus */

/* 390 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 392 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 394 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

			0x0
        }
    };

static const PiServerState_MIDL_TYPE_FORMAT_STRING PiServerState__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/*  4 */	0x0,		/* 0 */
			0x0,		/* 0 */
/*  6 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/*  8 */	0xd,		/* FC_ENUM16 */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

static const unsigned short PISerStateInterface_FormatStringOffsetTable[] =
    {
    0,
    54,
    102,
    150,
    198,
    246,
    294,
    342
    };


static const MIDL_STUB_DESC PISerStateInterface_StubDesc = 
    {
    (void *)& PISerStateInterface___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &PISerStateInterface__MIDL_AutoBindHandle,
    0,
    0,
    0,
    0,
    PiServerState__MIDL_TypeFormatString.Format,
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

