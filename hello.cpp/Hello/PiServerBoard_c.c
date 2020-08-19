

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Mon Jun 06 11:40:50 2016
 */
/* Compiler settings for PiServerBoard.idl:
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

#include "PiServerBoard_h.h"

#define TYPE_FORMAT_STRING_SIZE   105                               
#define PROC_FORMAT_STRING_SIZE   547                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _PiServerBoard_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } PiServerBoard_MIDL_TYPE_FORMAT_STRING;

typedef struct _PiServerBoard_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } PiServerBoard_MIDL_PROC_FORMAT_STRING;

typedef struct _PiServerBoard_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } PiServerBoard_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const PiServerBoard_MIDL_TYPE_FORMAT_STRING PiServerBoard__MIDL_TypeFormatString;
extern const PiServerBoard_MIDL_PROC_FORMAT_STRING PiServerBoard__MIDL_ProcFormatString;
extern const PiServerBoard_MIDL_EXPR_FORMAT_STRING PiServerBoard__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: PISerBoardInterface, ver. 1.0,
   GUID={0x40c4a056,0x885d,0x433a,{0xb1,0xfd,0x04,0xdd,0x86,0x48,0x1d,0x52}} */



static const RPC_CLIENT_INTERFACE PISerBoardInterface___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x40c4a056,0x885d,0x433a,{0xb1,0xfd,0x04,0xdd,0x86,0x48,0x1d,0x52}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0x00000000
    };
RPC_IF_HANDLE PISerBoardInterface_v1_0_c_ifspec = (RPC_IF_HANDLE)& PISerBoardInterface___RpcClientInterface;

extern const MIDL_STUB_DESC PISerBoardInterface_StubDesc;

static RPC_BINDING_HANDLE PISerBoardInterface__MIDL_AutoBindHandle;


void RpcBMGetNextBoardId( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [out] */ long *plBoardId,
    /* [out] */ EPICallStatus *peCallStatus)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PISerBoardInterface_StubDesc,
                  (PFORMAT_STRING) &PiServerBoard__MIDL_ProcFormatString.Format[0],
                  ( unsigned char * )&phContext);
    
}


void RpcBMSetBoardBarcode( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [in] */ long lBoardId,
    /* [in] */ short sBarcodeLen,
    /* [size_is][in] */ unsigned short usBarcode[  ],
    /* [out] */ EPICallStatus *peCallStatus)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PISerBoardInterface_StubDesc,
                  (PFORMAT_STRING) &PiServerBoard__MIDL_ProcFormatString.Format[54],
                  ( unsigned char * )&phContext);
    
}


void RpcBMGetBoardBarcode( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [in] */ long lBoardId,
    /* [out][in] */ short *psBarcodeLen,
    /* [size_is][out] */ unsigned short usBarcode[  ],
    /* [out] */ EPICallStatus *peCallStatus)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PISerBoardInterface_StubDesc,
                  (PFORMAT_STRING) &PiServerBoard__MIDL_ProcFormatString.Format[120],
                  ( unsigned char * )&phContext);
    
}


void RpcBMSetPanelData( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [in] */ long lBoardId,
    /* [in] */ short sNumPanels,
    /* [size_is][in] */ short sPanelIdList[  ],
    /* [size_is][in] */ unsigned short usBarcodeList[  ][ 100 ],
    /* [out] */ EPICallStatus *peCallStatus)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PISerBoardInterface_StubDesc,
                  (PFORMAT_STRING) &PiServerBoard__MIDL_ProcFormatString.Format[186],
                  ( unsigned char * )&phContext);
    
}


void RpcBMGetPanelData( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [in] */ long lBoardId,
    /* [out][in] */ short *sNumPanels,
    /* [size_is][out] */ short sPanelIdList[  ],
    /* [size_is][out] */ unsigned short usBarcodeList[  ][ 100 ],
    /* [out] */ EPICallStatus *peCallStatus)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PISerBoardInterface_StubDesc,
                  (PFORMAT_STRING) &PiServerBoard__MIDL_ProcFormatString.Format[258],
                  ( unsigned char * )&phContext);
    
}


void RpcBMSetBatchLimit( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [in] */ long lBatchLimit,
    /* [out] */ EPICallStatus *peCallStatus)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PISerBoardInterface_StubDesc,
                  (PFORMAT_STRING) &PiServerBoard__MIDL_ProcFormatString.Format[330],
                  ( unsigned char * )&phContext);
    
}


void RpcBMGetBatchCount( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [out] */ long *plBatchCount,
    /* [out] */ EPICallStatus *peCallStatus)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PISerBoardInterface_StubDesc,
                  (PFORMAT_STRING) &PiServerBoard__MIDL_ProcFormatString.Format[384],
                  ( unsigned char * )&phContext);
    
}


void RpcBMSetBatchCount( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [in] */ long lBatchCount,
    /* [out] */ EPICallStatus *peCallStatus)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PISerBoardInterface_StubDesc,
                  (PFORMAT_STRING) &PiServerBoard__MIDL_ProcFormatString.Format[438],
                  ( unsigned char * )&phContext);
    
}


void RpcBMSetIgnoreBoard( 
    /* [in] */ PCONTEXT_HDL_TYPE phContext,
    /* [in] */ hyper i64Timestamp,
    /* [in] */ long lBoardId,
    /* [out] */ EPICallStatus *peCallStatus)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&PISerBoardInterface_StubDesc,
                  (PFORMAT_STRING) &PiServerBoard__MIDL_ProcFormatString.Format[492],
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


static const PiServerBoard_MIDL_PROC_FORMAT_STRING PiServerBoard__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure RpcBMGetNextBoardId */

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
/* 18 */	NdrFcShort( 0x36 ),	/* 54 */
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

	/* Parameter plBoardId */

/* 42 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 44 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 46 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter peCallStatus */

/* 48 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 50 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 52 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Procedure RpcBMSetBoardBarcode */

/* 54 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 56 */	NdrFcLong( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x1 ),	/* 1 */
/* 62 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 64 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 66 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 68 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 70 */	NdrFcShort( 0x42 ),	/* 66 */
/* 72 */	NdrFcShort( 0x1a ),	/* 26 */
/* 74 */	0x42,		/* Oi2 Flags:  clt must size, has ext, */
			0x6,		/* 6 */
/* 76 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 78 */	NdrFcShort( 0x0 ),	/* 0 */
/* 80 */	NdrFcShort( 0x1 ),	/* 1 */
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

	/* Parameter lBoardId */

/* 96 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 98 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter sBarcodeLen */

/* 102 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 104 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 106 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter usBarcode */

/* 108 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 110 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 112 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter peCallStatus */

/* 114 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 116 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 118 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Procedure RpcBMGetBoardBarcode */

/* 120 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x2 ),	/* 2 */
/* 128 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 130 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 132 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 134 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 136 */	NdrFcShort( 0x56 ),	/* 86 */
/* 138 */	NdrFcShort( 0x34 ),	/* 52 */
/* 140 */	0x41,		/* Oi2 Flags:  srv must size, has ext, */
			0x6,		/* 6 */
/* 142 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 144 */	NdrFcShort( 0x1 ),	/* 1 */
/* 146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 148 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 150 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 152 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 154 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 156 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 158 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 160 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter lBoardId */

/* 162 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 164 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter psBarcodeLen */

/* 168 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 170 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 172 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter usBarcode */

/* 174 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 176 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 178 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */

	/* Parameter peCallStatus */

/* 180 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 182 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 184 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Procedure RpcBMSetPanelData */

/* 186 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 188 */	NdrFcLong( 0x0 ),	/* 0 */
/* 192 */	NdrFcShort( 0x3 ),	/* 3 */
/* 194 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 196 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 198 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 200 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 202 */	NdrFcShort( 0x42 ),	/* 66 */
/* 204 */	NdrFcShort( 0x1a ),	/* 26 */
/* 206 */	0x42,		/* Oi2 Flags:  clt must size, has ext, */
			0x7,		/* 7 */
/* 208 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 212 */	NdrFcShort( 0x1 ),	/* 1 */
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

	/* Parameter lBoardId */

/* 228 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 230 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter sNumPanels */

/* 234 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 236 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 238 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter sPanelIdList */

/* 240 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 242 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 244 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter usBarcodeList */

/* 246 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 248 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 250 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter peCallStatus */

/* 252 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 254 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 256 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Procedure RpcBMGetPanelData */

/* 258 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 260 */	NdrFcLong( 0x0 ),	/* 0 */
/* 264 */	NdrFcShort( 0x4 ),	/* 4 */
/* 266 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 268 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 270 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 272 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 274 */	NdrFcShort( 0x56 ),	/* 86 */
/* 276 */	NdrFcShort( 0x34 ),	/* 52 */
/* 278 */	0x41,		/* Oi2 Flags:  srv must size, has ext, */
			0x7,		/* 7 */
/* 280 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 282 */	NdrFcShort( 0x1 ),	/* 1 */
/* 284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 286 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 288 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 290 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 292 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 294 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 296 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 298 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter lBoardId */

/* 300 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 302 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter sNumPanels */

/* 306 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 308 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 310 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter sPanelIdList */

/* 312 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 314 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 316 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */

	/* Parameter usBarcodeList */

/* 318 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 320 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 322 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Parameter peCallStatus */

/* 324 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 326 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 328 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Procedure RpcBMSetBatchLimit */

/* 330 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 332 */	NdrFcLong( 0x0 ),	/* 0 */
/* 336 */	NdrFcShort( 0x5 ),	/* 5 */
/* 338 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 340 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 342 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 344 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 346 */	NdrFcShort( 0x3c ),	/* 60 */
/* 348 */	NdrFcShort( 0x1a ),	/* 26 */
/* 350 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 352 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 358 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 360 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 362 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 364 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 366 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 368 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 370 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter lBatchLimit */

/* 372 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 374 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter peCallStatus */

/* 378 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 380 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 382 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Procedure RpcBMGetBatchCount */

/* 384 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 386 */	NdrFcLong( 0x0 ),	/* 0 */
/* 390 */	NdrFcShort( 0x6 ),	/* 6 */
/* 392 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 394 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 396 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 398 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 400 */	NdrFcShort( 0x34 ),	/* 52 */
/* 402 */	NdrFcShort( 0x36 ),	/* 54 */
/* 404 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
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

	/* Parameter plBatchCount */

/* 426 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 428 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter peCallStatus */

/* 432 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 434 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 436 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Procedure RpcBMSetBatchCount */

/* 438 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 440 */	NdrFcLong( 0x0 ),	/* 0 */
/* 444 */	NdrFcShort( 0x7 ),	/* 7 */
/* 446 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 448 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 450 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 452 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 454 */	NdrFcShort( 0x3c ),	/* 60 */
/* 456 */	NdrFcShort( 0x1a ),	/* 26 */
/* 458 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 460 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 466 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phContext */

/* 468 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 470 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 472 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter i64Timestamp */

/* 474 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 476 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 478 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter lBatchCount */

/* 480 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 482 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter peCallStatus */

/* 486 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 488 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 490 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Procedure RpcBMSetIgnoreBoard */

/* 492 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 494 */	NdrFcLong( 0x0 ),	/* 0 */
/* 498 */	NdrFcShort( 0x8 ),	/* 8 */
/* 500 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 502 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 504 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 506 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 508 */	NdrFcShort( 0x3c ),	/* 60 */
/* 510 */	NdrFcShort( 0x1a ),	/* 26 */
/* 512 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
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

	/* Parameter lBoardId */

/* 534 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 536 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter peCallStatus */

/* 540 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 542 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 544 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

			0x0
        }
    };

static const PiServerBoard_MIDL_TYPE_FORMAT_STRING PiServerBoard__MIDL_TypeFormatString =
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
/*  8 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 10 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 12 */	0xd,		/* FC_ENUM16 */
			0x5c,		/* FC_PAD */
/* 14 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 16 */	NdrFcShort( 0x2 ),	/* 2 */
/* 18 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 20 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 22 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 24 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 26 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 28 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 30 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 32 */	NdrFcShort( 0x2 ),	/* 2 */
/* 34 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x54,		/* FC_DEREFERENCE */
/* 36 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 38 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 40 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 42 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x1,		/* 1 */
/* 44 */	NdrFcShort( 0x0 ),	/* 0 */
/* 46 */	0x40,		/* Corr desc:  constant, val=100 */
			0x0,		/* 0 */
/* 48 */	NdrFcShort( 0x64 ),	/* 100 */
/* 50 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 52 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 56 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 58 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 60 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x1,		/* 1 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */
/* 64 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 66 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 68 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 70 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 74 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 76 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 78 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (42) */
/* 80 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 82 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x1,		/* 1 */
/* 84 */	NdrFcShort( 0x0 ),	/* 0 */
/* 86 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x54,		/* FC_DEREFERENCE */
/* 88 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 90 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 92 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 96 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 98 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 100 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (42) */
/* 102 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const unsigned short PISerBoardInterface_FormatStringOffsetTable[] =
    {
    0,
    54,
    120,
    186,
    258,
    330,
    384,
    438,
    492
    };


static const MIDL_STUB_DESC PISerBoardInterface_StubDesc = 
    {
    (void *)& PISerBoardInterface___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &PISerBoardInterface__MIDL_AutoBindHandle,
    0,
    0,
    0,
    0,
    PiServerBoard__MIDL_TypeFormatString.Format,
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

