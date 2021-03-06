

/* this ALWAYS GENERATED file contains the RPC server stubs */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Mon Feb 11 17:17:17 2019
 */
/* Compiler settings for RpcDemo.idl:
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
#include "RpcDemo_h.h"

#define TYPE_FORMAT_STRING_SIZE   11                                
#define PROC_FORMAT_STRING_SIZE   79                                
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _RpcDemo_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } RpcDemo_MIDL_TYPE_FORMAT_STRING;

typedef struct _RpcDemo_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } RpcDemo_MIDL_PROC_FORMAT_STRING;

typedef struct _RpcDemo_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } RpcDemo_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

extern const RpcDemo_MIDL_TYPE_FORMAT_STRING RpcDemo__MIDL_TypeFormatString;
extern const RpcDemo_MIDL_PROC_FORMAT_STRING RpcDemo__MIDL_ProcFormatString;
extern const RpcDemo_MIDL_EXPR_FORMAT_STRING RpcDemo__MIDL_ExprFormatString;

/* Standard interface: IRpcDemo, ver. 1.0,
   GUID={0xBB6571B9,0xD19A,0x4456,{0xB0,0xDF,0x4D,0x32,0x3B,0xAC,0x92,0x94}} */


extern const MIDL_SERVER_INFO IRpcDemo_ServerInfo;

extern const RPC_DISPATCH_TABLE IRpcDemo_v1_0_DispatchTable;

static const RPC_SERVER_INTERFACE IRpcDemo___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0xBB6571B9,0xD19A,0x4456,{0xB0,0xDF,0x4D,0x32,0x3B,0xAC,0x92,0x94}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    (RPC_DISPATCH_TABLE*)&IRpcDemo_v1_0_DispatchTable,
    0,
    0,
    0,
    &IRpcDemo_ServerInfo,
    0x04000000
    };
RPC_IF_HANDLE IRpcDemo_v1_0_s_ifspec = (RPC_IF_HANDLE)& IRpcDemo___RpcServerInterface;

extern const MIDL_STUB_DESC IRpcDemo_StubDesc;

 extern const MIDL_STUBLESS_PROXY_INFO IRpcDemo_ProxyInfo;

/* [callback] */ void CallbackProc_1( 
    /* [in] */ unsigned long handle,
    /* [string][in] */ wchar_t *pszStr)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRpcDemo_StubDesc,
                  (PFORMAT_STRING) &RpcDemo__MIDL_ProcFormatString.Format[42],
                  ( unsigned char * )&handle);
    
}


#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif
#if !(TARGET_IS_NT60_OR_LATER)
#error You need Windows Vista or later to run this stub because it uses these features:
#error   compiled for Windows Vista.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const RpcDemo_MIDL_PROC_FORMAT_STRING RpcDemo__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure RPC_HelloProc */

			0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12 */	NdrFcShort( 0x1c ),	/* 28 */
/* 14 */	0x42,		/* Oi2 Flags:  clt must size, has ext, */
			0x3,		/* 3 */
/* 16 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 24 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 26 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 28 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszString */

/* 30 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 32 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 34 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter longOut */

/* 36 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 38 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 40 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CallbackProc_1 */

/* 42 */	0x34,		/* FC_CALLBACK_HANDLE */
			0x48,		/* Old Flags:  */
/* 44 */	NdrFcLong( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 52 */	NdrFcShort( 0x8 ),	/* 8 */
/* 54 */	NdrFcShort( 0x0 ),	/* 0 */
/* 56 */	0x42,		/* Oi2 Flags:  clt must size, has ext, */
			0x2,		/* 2 */
/* 58 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 66 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 68 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 70 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszStr */

/* 72 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 74 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 76 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

			0x0
        }
    };

static const RpcDemo_MIDL_TYPE_FORMAT_STRING RpcDemo__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/*  4 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/*  8 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

static const unsigned short IRpcDemo_FormatStringOffsetTable[] =
    {
    0,
    };


static const unsigned short _callbackIRpcDemo_FormatStringOffsetTable[] =
    {
    42
    };


static const MIDL_STUB_DESC IRpcDemo_StubDesc = 
    {
    (void *)& IRpcDemo___RpcServerInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    0,
    0,
    0,
    0,
    0,
    RpcDemo__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
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

static const RPC_DISPATCH_FUNCTION IRpcDemo_table[] =
    {
    NdrServerCall2,
    0
    };
static const RPC_DISPATCH_TABLE IRpcDemo_v1_0_DispatchTable = 
    {
    1,
    (RPC_DISPATCH_FUNCTION*)IRpcDemo_table
    };

static const SERVER_ROUTINE IRpcDemo_ServerRoutineTable[] = 
    {
    (SERVER_ROUTINE)RPC_HelloProc,
    };

static const MIDL_SERVER_INFO IRpcDemo_ServerInfo = 
    {
    &IRpcDemo_StubDesc,
    IRpcDemo_ServerRoutineTable,
    RpcDemo__MIDL_ProcFormatString.Format,
    IRpcDemo_FormatStringOffsetTable,
    0,
    0,
    0,
    0};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

