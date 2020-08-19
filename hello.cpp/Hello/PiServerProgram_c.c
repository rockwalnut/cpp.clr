

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Thu Oct 20 12:51:56 2016
 */
/* Compiler settings for PiServerProgram.idl:
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

#include "PiServerProgram_h.h"

#define TYPE_FORMAT_STRING_SIZE   59                                
#define PROC_FORMAT_STRING_SIZE   673                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _PiServerProgram_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } PiServerProgram_MIDL_TYPE_FORMAT_STRING;

typedef struct _PiServerProgram_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } PiServerProgram_MIDL_PROC_FORMAT_STRING;

typedef struct _PiServerProgram_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } PiServerProgram_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const PiServerProgram_MIDL_TYPE_FORMAT_STRING PiServerProgram__MIDL_TypeFormatString;
extern const PiServerProgram_MIDL_PROC_FORMAT_STRING PiServerProgram__MIDL_ProcFormatString;
extern const PiServerProgram_MIDL_EXPR_FORMAT_STRING PiServerProgram__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: PISerProgramInterface, ver. 1.0,
   GUID={0xd978d27d,0xd768,0x44c9,{0x9a,0x7a,0x6b,0x2e,0xce,0x3b,0x0e,0x24}} */



static const RPC_CLIENT_INTERFACE PISerProgramInterface___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0xd978d27d,0xd768,0x44c9,{0x9a,0x7a,0x6b,0x2e,0xce,0x3b,0x0e,0x24}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0x00000000
    };
RPC_IF_HANDLE PISerProgramInterface_v1_0_c_ifspec = (RPC_IF_HANDLE)& PISerProgramInterface___RpcClientInterface;

extern const MIDL_STUB_DESC PISerProgramInterface_StubDesc;

static RPC_BINDING_HANDLE PISerProgramInterface__MIDL_AutoBindHandle;


void RpcBMGetLoadedProcProgramName( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [out][in] */ short *sPPNameLen,
    /* [size_is][out] */ unsigned short usPPName[  ],
    /* [out] */ EPICallStatus *peCallStatus)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PISerProgramInterface_StubDesc,
                  (PFORMAT_STRING) &PiServerProgram__MIDL_ProcFormatString.Format[0],
                  ( unsigned char * )&phContext);
    
}


void RpcBMGetProcProgram( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [in] */ short sPPNameLen,
    /* [size_is][in] */ unsigned short usPPName[  ],
    /* [out][in] */ short *sXMLNameLen,
    /* [size_is][out] */ unsigned short usXMLName[  ],
    /* [out] */ EPICallStatus *peCallStatus)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PISerProgramInterface_StubDesc,
                  (PFORMAT_STRING) &PiServerProgram__MIDL_ProcFormatString.Format[60],
                  ( unsigned char * )&phContext);
    
}


void RpcBMLoadProcProgram( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [in] */ short sPPNameLen,
    /* [size_is][in] */ unsigned short usPPName[  ],
    /* [out] */ EPICallStatus *peCallStatus)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PISerProgramInterface_StubDesc,
                  (PFORMAT_STRING) &PiServerProgram__MIDL_ProcFormatString.Format[132],
                  ( unsigned char * )&phContext);
    
}


void RpcPIGetAssemblyPartNumber( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [out][in] */ short *sAssemblyPartNumLen,
    /* [size_is][out] */ unsigned short usAssemblyPartNum[  ],
    /* [out] */ EPICallStatus *peCallStatus)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PISerProgramInterface_StubDesc,
                  (PFORMAT_STRING) &PiServerProgram__MIDL_ProcFormatString.Format[192],
                  ( unsigned char * )&phContext);
    
}


void RpcPIGetWorkOrderNumber( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [out][in] */ short *sWorkOrderNumLen,
    /* [size_is][out] */ unsigned short usWorkOrderNum[  ],
    /* [out] */ EPICallStatus *peCallStatus)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PISerProgramInterface_StubDesc,
                  (PFORMAT_STRING) &PiServerProgram__MIDL_ProcFormatString.Format[252],
                  ( unsigned char * )&phContext);
    
}


void RpcBMGetBoardSeparationValues( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [out] */ double *pdDistBaseMm,
    /* [out] */ double *pdDistOffsetMm,
    /* [out] */ double *pdSpeedBaseMmSec,
    /* [out] */ double *pdSpeedOffsetMmSec,
    /* [out] */ EPICallStatus *peCallStatus)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PISerProgramInterface_StubDesc,
                  (PFORMAT_STRING) &PiServerProgram__MIDL_ProcFormatString.Format[312],
                  ( unsigned char * )&phContext);
    
}


void RpcBMSetBoardSeparationOffsets( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [in] */ double dDistOffsetMm,
    /* [in] */ double dSpeedOffsetMmSec,
    /* [out] */ EPICallStatus *peCallStatus)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PISerProgramInterface_StubDesc,
                  (PFORMAT_STRING) &PiServerProgram__MIDL_ProcFormatString.Format[384],
                  ( unsigned char * )&phContext);
    
}


void RpcBMGetSqueegeeValues( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [out] */ boolean *bSeparateStrokesEnabled,
    /* [out] */ double *pdForceBaseKg,
    /* [out] */ double *pdForceOffsetKg,
    /* [out] */ double *pdSpeedBaseMmSec,
    /* [out] */ double *pdSpeedOffsetMmSec,
    /* [out] */ double *pdR2FForceBaseKg,
    /* [out] */ double *pdR2FForceOffsetKg,
    /* [out] */ double *pdR2FSpeedBaseMmSec,
    /* [out] */ double *pdR2FSpeedOffsetMmSec,
    /* [out] */ EPICallStatus *peCallStatus)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PISerProgramInterface_StubDesc,
                  (PFORMAT_STRING) &PiServerProgram__MIDL_ProcFormatString.Format[444],
                  ( unsigned char * )&phContext);
    
}


void RpcBMSetSqueegeeOffsets( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [in] */ boolean bRearToFront,
    /* [in] */ double dForceOffsetKg,
    /* [in] */ double dSpeedOffsetMmSec,
    /* [out] */ EPICallStatus *peCallStatus)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PISerProgramInterface_StubDesc,
                  (PFORMAT_STRING) &PiServerProgram__MIDL_ProcFormatString.Format[546],
                  ( unsigned char * )&phContext);
    
}


void RpcBMGetProcProgramDir( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [out][in] */ short *sPPDirLen,
    /* [size_is][out] */ unsigned short usPPDir[  ],
    /* [out] */ EPICallStatus *peCallStatus)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PISerProgramInterface_StubDesc,
                  (PFORMAT_STRING) &PiServerProgram__MIDL_ProcFormatString.Format[612],
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


static const PiServerProgram_MIDL_PROC_FORMAT_STRING PiServerProgram__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure RpcBMGetLoadedProcProgramName */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 10 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 12 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 14 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 16 */	NdrFcShort( 0x4e ),	/* 78 */
/* 18 */	NdrFcShort( 0x34 ),	/* 52 */
/* 20 */	0x41,		/* Oi2 Flags:  srv must size, has ext, */
			0x5,		/* 5 */
/* 22 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 24 */	NdrFcShort( 0x1 ),	/* 1 */
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

	/* Parameter sPPNameLen */

/* 42 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 44 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 46 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter usPPName */

/* 48 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 50 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 52 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter peCallStatus */

/* 54 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 56 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 58 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

	/* Procedure RpcBMGetProcProgram */

/* 60 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 62 */	NdrFcLong( 0x0 ),	/* 0 */
/* 66 */	NdrFcShort( 0x1 ),	/* 1 */
/* 68 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 70 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 72 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 74 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 76 */	NdrFcShort( 0x54 ),	/* 84 */
/* 78 */	NdrFcShort( 0x34 ),	/* 52 */
/* 80 */	0x43,		/* Oi2 Flags:  srv must size, clt must size, has ext, */
			0x7,		/* 7 */
/* 82 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 84 */	NdrFcShort( 0x1 ),	/* 1 */
/* 86 */	NdrFcShort( 0x1 ),	/* 1 */
/* 88 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 90 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 92 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 94 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 96 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 98 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 100 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter sPPNameLen */

/* 102 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 104 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 106 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter usPPName */

/* 108 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 110 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 112 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Parameter sXMLNameLen */

/* 114 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 116 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 118 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter usXMLName */

/* 120 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 122 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 124 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter peCallStatus */

/* 126 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 128 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 130 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

	/* Procedure RpcBMLoadProcProgram */

/* 132 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 134 */	NdrFcLong( 0x0 ),	/* 0 */
/* 138 */	NdrFcShort( 0x2 ),	/* 2 */
/* 140 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 142 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 144 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 146 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 148 */	NdrFcShort( 0x3a ),	/* 58 */
/* 150 */	NdrFcShort( 0x1a ),	/* 26 */
/* 152 */	0x42,		/* Oi2 Flags:  clt must size, has ext, */
			0x5,		/* 5 */
/* 154 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 158 */	NdrFcShort( 0x1 ),	/* 1 */
/* 160 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 162 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 164 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 166 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 168 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 170 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 172 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter sPPNameLen */

/* 174 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 176 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 178 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter usPPName */

/* 180 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 182 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 184 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Parameter peCallStatus */

/* 186 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 188 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 190 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

	/* Procedure RpcPIGetAssemblyPartNumber */

/* 192 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 198 */	NdrFcShort( 0x3 ),	/* 3 */
/* 200 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 202 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 204 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 206 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 208 */	NdrFcShort( 0x4e ),	/* 78 */
/* 210 */	NdrFcShort( 0x34 ),	/* 52 */
/* 212 */	0x41,		/* Oi2 Flags:  srv must size, has ext, */
			0x5,		/* 5 */
/* 214 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 216 */	NdrFcShort( 0x1 ),	/* 1 */
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

	/* Parameter sAssemblyPartNumLen */

/* 234 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 236 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 238 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter usAssemblyPartNum */

/* 240 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 242 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 244 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter peCallStatus */

/* 246 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 248 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 250 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

	/* Procedure RpcPIGetWorkOrderNumber */

/* 252 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 254 */	NdrFcLong( 0x0 ),	/* 0 */
/* 258 */	NdrFcShort( 0x4 ),	/* 4 */
/* 260 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 262 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 264 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 266 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 268 */	NdrFcShort( 0x4e ),	/* 78 */
/* 270 */	NdrFcShort( 0x34 ),	/* 52 */
/* 272 */	0x41,		/* Oi2 Flags:  srv must size, has ext, */
			0x5,		/* 5 */
/* 274 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 276 */	NdrFcShort( 0x1 ),	/* 1 */
/* 278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 280 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 282 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 284 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 286 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 288 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 290 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 292 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter sWorkOrderNumLen */

/* 294 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 296 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 298 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter usWorkOrderNum */

/* 300 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 302 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 304 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter peCallStatus */

/* 306 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 308 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 310 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

	/* Procedure RpcBMGetBoardSeparationValues */

/* 312 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 318 */	NdrFcShort( 0x5 ),	/* 5 */
/* 320 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 322 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 324 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 326 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 328 */	NdrFcShort( 0x34 ),	/* 52 */
/* 330 */	NdrFcShort( 0xaa ),	/* 170 */
/* 332 */	0x40,		/* Oi2 Flags:  has ext, */
			0x7,		/* 7 */
/* 334 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 340 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 342 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 344 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 346 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 348 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 350 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 352 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pdDistBaseMm */

/* 354 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 356 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 358 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter pdDistOffsetMm */

/* 360 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 362 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 364 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter pdSpeedBaseMmSec */

/* 366 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 368 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 370 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter pdSpeedOffsetMmSec */

/* 372 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 374 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 376 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter peCallStatus */

/* 378 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 380 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 382 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

	/* Procedure RpcBMSetBoardSeparationOffsets */

/* 384 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 386 */	NdrFcLong( 0x0 ),	/* 0 */
/* 390 */	NdrFcShort( 0x6 ),	/* 6 */
/* 392 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 394 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 396 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 398 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 400 */	NdrFcShort( 0x54 ),	/* 84 */
/* 402 */	NdrFcShort( 0x1a ),	/* 26 */
/* 404 */	0x40,		/* Oi2 Flags:  has ext, */
			0x5,		/* 5 */
/* 406 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 412 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 414 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 416 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 418 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 420 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 422 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 424 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter dDistOffsetMm */

/* 426 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 428 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 430 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dSpeedOffsetMmSec */

/* 432 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 434 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 436 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter peCallStatus */

/* 438 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 440 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 442 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

	/* Procedure RpcBMGetSqueegeeValues */

/* 444 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 446 */	NdrFcLong( 0x0 ),	/* 0 */
/* 450 */	NdrFcShort( 0x7 ),	/* 7 */
/* 452 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 454 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 456 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 458 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 460 */	NdrFcShort( 0x34 ),	/* 52 */
/* 462 */	NdrFcShort( 0x153 ),	/* 339 */
/* 464 */	0x40,		/* Oi2 Flags:  has ext, */
			0xc,		/* 12 */
/* 466 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 472 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 474 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 476 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 478 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 480 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 482 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 484 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter bSeparateStrokesEnabled */

/* 486 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 488 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 490 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter pdForceBaseKg */

/* 492 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 494 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 496 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter pdForceOffsetKg */

/* 498 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 500 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 502 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter pdSpeedBaseMmSec */

/* 504 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 506 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 508 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter pdSpeedOffsetMmSec */

/* 510 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 512 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 514 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter pdR2FForceBaseKg */

/* 516 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 518 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 520 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter pdR2FForceOffsetKg */

/* 522 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 524 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 526 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter pdR2FSpeedBaseMmSec */

/* 528 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 530 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 532 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter pdR2FSpeedOffsetMmSec */

/* 534 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 536 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 538 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter peCallStatus */

/* 540 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 542 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 544 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

	/* Procedure RpcBMSetSqueegeeOffsets */

/* 546 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 548 */	NdrFcLong( 0x0 ),	/* 0 */
/* 552 */	NdrFcShort( 0x8 ),	/* 8 */
/* 554 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 556 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 558 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 560 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 562 */	NdrFcShort( 0x59 ),	/* 89 */
/* 564 */	NdrFcShort( 0x1a ),	/* 26 */
/* 566 */	0x40,		/* Oi2 Flags:  has ext, */
			0x6,		/* 6 */
/* 568 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 574 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 576 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 578 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 580 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 582 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 584 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 586 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter bRearToFront */

/* 588 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 590 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 592 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter dForceOffsetKg */

/* 594 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 596 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 598 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dSpeedOffsetMmSec */

/* 600 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 602 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 604 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter peCallStatus */

/* 606 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 608 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 610 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

	/* Procedure RpcBMGetProcProgramDir */

/* 612 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 618 */	NdrFcShort( 0x9 ),	/* 9 */
/* 620 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 622 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 624 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 626 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 628 */	NdrFcShort( 0x4e ),	/* 78 */
/* 630 */	NdrFcShort( 0x34 ),	/* 52 */
/* 632 */	0x41,		/* Oi2 Flags:  srv must size, has ext, */
			0x5,		/* 5 */
/* 634 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 636 */	NdrFcShort( 0x1 ),	/* 1 */
/* 638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 640 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 642 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 644 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 646 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 648 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 650 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 652 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter sPPDirLen */

/* 654 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 656 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 658 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter usPPDir */

/* 660 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 662 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 664 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter peCallStatus */

/* 666 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 668 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 670 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

			0x0
        }
    };

static const PiServerProgram_MIDL_TYPE_FORMAT_STRING PiServerProgram__MIDL_TypeFormatString =
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
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 24 */	0xd,		/* FC_ENUM16 */
			0x5c,		/* FC_PAD */
/* 26 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 28 */	NdrFcShort( 0x2 ),	/* 2 */
/* 30 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 32 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 34 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 36 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 38 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 40 */	NdrFcShort( 0x2 ),	/* 2 */
/* 42 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x54,		/* FC_DEREFERENCE */
/* 44 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 46 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 48 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 50 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 52 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 54 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 56 */	0x3,		/* FC_SMALL */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

static const unsigned short PISerProgramInterface_FormatStringOffsetTable[] =
    {
    0,
    60,
    132,
    192,
    252,
    312,
    384,
    444,
    546,
    612
    };


static const MIDL_STUB_DESC PISerProgramInterface_StubDesc = 
    {
    (void *)& PISerProgramInterface___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &PISerProgramInterface__MIDL_AutoBindHandle,
    0,
    0,
    0,
    0,
    PiServerProgram__MIDL_TypeFormatString.Format,
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

