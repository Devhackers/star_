/*
 * IDENTIFICATION:
 * stub generated Sat Jan  8 17:14:36 2011
 * with a MiG generated Mon May 18 09:59:33 PDT 2009 by root@sulitlana.apple.com
 * OPTIONS: 
 */
#define	__MIG_check__Reply__iokit_subsystem__ 1
#define	__NDR_convert__Reply__iokit_subsystem__ 1
#define	__NDR_convert__mig_reply_error_subsystem__ 1

#include "iokit.h"


#ifndef	mig_internal
#define	mig_internal	static __inline__
#endif	/* mig_internal */

#ifndef	mig_external
#define mig_external
#endif	/* mig_external */

#if	!defined(__MigTypeCheck) && defined(TypeCheck)
#define	__MigTypeCheck		TypeCheck	/* Legacy setting */
#endif	/* !defined(__MigTypeCheck) */

#if	!defined(__MigKernelSpecificCode) && defined(_MIG_KERNEL_SPECIFIC_CODE_)
#define	__MigKernelSpecificCode	_MIG_KERNEL_SPECIFIC_CODE_	/* Legacy setting */
#endif	/* !defined(__MigKernelSpecificCode) */

#ifndef	LimitCheck
#define	LimitCheck 0
#endif	/* LimitCheck */

#ifndef	min
#define	min(a,b)  ( ((a) < (b))? (a): (b) )
#endif	/* min */

#if !defined(_WALIGN_)
#define _WALIGN_(x) (((x) + 3) & ~3)
#endif /* !defined(_WALIGN_) */

#if !defined(_WALIGNSZ_)
#define _WALIGNSZ_(x) _WALIGN_(sizeof(x))
#endif /* !defined(_WALIGNSZ_) */

#ifndef	UseStaticTemplates
#define	UseStaticTemplates	0
#endif	/* UseStaticTemplates */

#ifndef	__MachMsgErrorWithTimeout
#define	__MachMsgErrorWithTimeout(_R_) { \
	switch (_R_) { \
	case MACH_SEND_INVALID_DATA: \
	case MACH_SEND_INVALID_DEST: \
	case MACH_SEND_INVALID_HEADER: \
		mig_put_reply_port(InP->Head.msgh_reply_port); \
		break; \
	case MACH_SEND_TIMED_OUT: \
	case MACH_RCV_TIMED_OUT: \
	default: \
		mig_dealloc_reply_port(InP->Head.msgh_reply_port); \
	} \
}
#endif	/* __MachMsgErrorWithTimeout */

#ifndef	__MachMsgErrorWithoutTimeout
#define	__MachMsgErrorWithoutTimeout(_R_) { \
	switch (_R_) { \
	case MACH_SEND_INVALID_DATA: \
	case MACH_SEND_INVALID_DEST: \
	case MACH_SEND_INVALID_HEADER: \
		mig_put_reply_port(InP->Head.msgh_reply_port); \
		break; \
	default: \
		mig_dealloc_reply_port(InP->Head.msgh_reply_port); \
	} \
}
#endif	/* __MachMsgErrorWithoutTimeout */

#ifndef	__DeclareSendRpc
#define	__DeclareSendRpc(_NUM_, _NAME_)
#endif	/* __DeclareSendRpc */

#ifndef	__BeforeSendRpc
#define	__BeforeSendRpc(_NUM_, _NAME_)
#endif	/* __BeforeSendRpc */

#ifndef	__AfterSendRpc
#define	__AfterSendRpc(_NUM_, _NAME_)
#endif	/* __AfterSendRpc */

#ifndef	__DeclareSendSimple
#define	__DeclareSendSimple(_NUM_, _NAME_)
#endif	/* __DeclareSendSimple */

#ifndef	__BeforeSendSimple
#define	__BeforeSendSimple(_NUM_, _NAME_)
#endif	/* __BeforeSendSimple */

#ifndef	__AfterSendSimple
#define	__AfterSendSimple(_NUM_, _NAME_)
#endif	/* __AfterSendSimple */

#define msgh_request_port	msgh_remote_port
#define msgh_reply_port		msgh_local_port



#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_object_get_class_t__defined)
#define __MIG_check__Reply__io_object_get_class_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_object_get_class_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_object_get_class_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_object_get_class_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_object_get_class_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_object_get_class_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_object_get_class_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__io_object_get_class_t__className__defined
#if	defined(__NDR_convert__int_rep__iokit__io_name_t__defined)
#define	__NDR_convert__int_rep__Reply__io_object_get_class_t__className__defined
#define	__NDR_convert__int_rep__Reply__io_object_get_class_t__className(a, f, c) \
	__NDR_convert__int_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_name_t__defined)
#define	__NDR_convert__int_rep__Reply__io_object_get_class_t__className__defined
#define	__NDR_convert__int_rep__Reply__io_object_get_class_t__className(a, f, c) \
	__NDR_convert__int_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_object_get_class_t__className__defined */


#ifndef __NDR_convert__int_rep__Reply__io_object_get_class_t__classNameCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_object_get_class_t__classNameCnt__defined
#define	__NDR_convert__int_rep__Reply__io_object_get_class_t__classNameCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_object_get_class_t__classNameCnt__defined
#define	__NDR_convert__int_rep__Reply__io_object_get_class_t__classNameCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_object_get_class_t__classNameCnt__defined */



#ifndef __NDR_convert__char_rep__Reply__io_object_get_class_t__className__defined
#if	defined(__NDR_convert__char_rep__iokit__io_name_t__defined)
#define	__NDR_convert__char_rep__Reply__io_object_get_class_t__className__defined
#define	__NDR_convert__char_rep__Reply__io_object_get_class_t__className(a, f, c) \
	__NDR_convert__char_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_name_t__defined)
#define	__NDR_convert__char_rep__Reply__io_object_get_class_t__className__defined
#define	__NDR_convert__char_rep__Reply__io_object_get_class_t__className(a, f, c) \
	__NDR_convert__char_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_object_get_class_t__className__defined */




#ifndef __NDR_convert__float_rep__Reply__io_object_get_class_t__className__defined
#if	defined(__NDR_convert__float_rep__iokit__io_name_t__defined)
#define	__NDR_convert__float_rep__Reply__io_object_get_class_t__className__defined
#define	__NDR_convert__float_rep__Reply__io_object_get_class_t__className(a, f, c) \
	__NDR_convert__float_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_name_t__defined)
#define	__NDR_convert__float_rep__Reply__io_object_get_class_t__className__defined
#define	__NDR_convert__float_rep__Reply__io_object_get_class_t__className(a, f, c) \
	__NDR_convert__float_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_object_get_class_t__className__defined */




mig_internal kern_return_t __MIG_check__Reply__io_object_get_class_t(__Reply__io_object_get_class_t *Out0P)
{

	typedef __Reply__io_object_get_class_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

	if (Out0P->Head.msgh_id != 2900) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    ((msgh_size > (mach_msg_size_t)sizeof(__Reply) || msgh_size < (mach_msg_size_t)(sizeof(__Reply) - 128)) &&
	     (msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	      Out0P->RetCode == KERN_SUCCESS)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (Out0P->RetCode != KERN_SUCCESS) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if defined(__NDR_convert__int_rep__Reply__io_object_get_class_t__classNameCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__io_object_get_class_t__classNameCnt(&Out0P->classNameCnt, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__io_object_get_class_t__classNameCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Reply) - 128) + (_WALIGN_(Out0P->classNameCnt)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Reply__io_object_get_class_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_object_get_class_t__className__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_object_get_class_t__classNameCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__io_object_get_class_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__io_object_get_class_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_object_get_class_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__io_object_get_class_t__className__defined)
		__NDR_convert__int_rep__Reply__io_object_get_class_t__className(&Out0P->className, Out0P->NDR.int_rep, Out0P->classNameCnt);
#endif /* __NDR_convert__int_rep__Reply__io_object_get_class_t__className__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__io_object_get_class_t__className__defined) || \
	0
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__io_object_get_class_t__className__defined)
		__NDR_convert__char_rep__Reply__io_object_get_class_t__className(&Out0P->className, Out0P->NDR.char_rep, Out0P->classNameCnt);
#endif /* __NDR_convert__char_rep__Reply__io_object_get_class_t__className__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__io_object_get_class_t__className__defined) || \
	0
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__io_object_get_class_t__className__defined)
		__NDR_convert__float_rep__Reply__io_object_get_class_t__className(&Out0P->className, Out0P->NDR.float_rep, Out0P->classNameCnt);
#endif /* __NDR_convert__float_rep__Reply__io_object_get_class_t__className__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_object_get_class_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_object_get_class */
mig_external kern_return_t io_object_get_class
(
	mach_port_t object,
	io_name_t className
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t classNameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t classNameCnt;
		char className[128];
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t classNameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t classNameCnt;
		char className[128];
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__io_object_get_class_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_object_get_class_t__defined */

	__DeclareSendRpc(2800, "io_object_get_class")

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = object;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2800;

	__BeforeSendRpc(2800, "io_object_get_class")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2800, "io_object_get_class")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_object_get_class_t__defined)
	check_result = __MIG_check__Reply__io_object_get_class_t((__Reply__io_object_get_class_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_object_get_class_t__defined) */

	(void) mig_strncpy(className, Out0P->className, 128);

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_object_conforms_to_t__defined)
#define __MIG_check__Reply__io_object_conforms_to_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_object_conforms_to_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_object_conforms_to_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_object_conforms_to_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_object_conforms_to_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_object_conforms_to_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_object_conforms_to_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__io_object_conforms_to_t__conforms__defined
#if	defined(__NDR_convert__int_rep__iokit__boolean_t__defined)
#define	__NDR_convert__int_rep__Reply__io_object_conforms_to_t__conforms__defined
#define	__NDR_convert__int_rep__Reply__io_object_conforms_to_t__conforms(a, f) \
	__NDR_convert__int_rep__iokit__boolean_t((boolean_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__boolean_t__defined)
#define	__NDR_convert__int_rep__Reply__io_object_conforms_to_t__conforms__defined
#define	__NDR_convert__int_rep__Reply__io_object_conforms_to_t__conforms(a, f) \
	__NDR_convert__int_rep__boolean_t((boolean_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_object_conforms_to_t__conforms__defined */



#ifndef __NDR_convert__char_rep__Reply__io_object_conforms_to_t__conforms__defined
#if	defined(__NDR_convert__char_rep__iokit__boolean_t__defined)
#define	__NDR_convert__char_rep__Reply__io_object_conforms_to_t__conforms__defined
#define	__NDR_convert__char_rep__Reply__io_object_conforms_to_t__conforms(a, f) \
	__NDR_convert__char_rep__iokit__boolean_t((boolean_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__boolean_t__defined)
#define	__NDR_convert__char_rep__Reply__io_object_conforms_to_t__conforms__defined
#define	__NDR_convert__char_rep__Reply__io_object_conforms_to_t__conforms(a, f) \
	__NDR_convert__char_rep__boolean_t((boolean_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_object_conforms_to_t__conforms__defined */



#ifndef __NDR_convert__float_rep__Reply__io_object_conforms_to_t__conforms__defined
#if	defined(__NDR_convert__float_rep__iokit__boolean_t__defined)
#define	__NDR_convert__float_rep__Reply__io_object_conforms_to_t__conforms__defined
#define	__NDR_convert__float_rep__Reply__io_object_conforms_to_t__conforms(a, f) \
	__NDR_convert__float_rep__iokit__boolean_t((boolean_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__boolean_t__defined)
#define	__NDR_convert__float_rep__Reply__io_object_conforms_to_t__conforms__defined
#define	__NDR_convert__float_rep__Reply__io_object_conforms_to_t__conforms(a, f) \
	__NDR_convert__float_rep__boolean_t((boolean_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_object_conforms_to_t__conforms__defined */



mig_internal kern_return_t __MIG_check__Reply__io_object_conforms_to_t(__Reply__io_object_conforms_to_t *Out0P)
{

	typedef __Reply__io_object_conforms_to_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 2901) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    ((msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	     (msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	      Out0P->RetCode == KERN_SUCCESS)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (Out0P->RetCode != KERN_SUCCESS) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	defined(__NDR_convert__int_rep__Reply__io_object_conforms_to_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_object_conforms_to_t__conforms__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__io_object_conforms_to_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__io_object_conforms_to_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_object_conforms_to_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__io_object_conforms_to_t__conforms__defined)
		__NDR_convert__int_rep__Reply__io_object_conforms_to_t__conforms(&Out0P->conforms, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_object_conforms_to_t__conforms__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__io_object_conforms_to_t__conforms__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__io_object_conforms_to_t__conforms__defined)
		__NDR_convert__char_rep__Reply__io_object_conforms_to_t__conforms(&Out0P->conforms, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__io_object_conforms_to_t__conforms__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__io_object_conforms_to_t__conforms__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__io_object_conforms_to_t__conforms__defined)
		__NDR_convert__float_rep__Reply__io_object_conforms_to_t__conforms(&Out0P->conforms, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__io_object_conforms_to_t__conforms__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_object_conforms_to_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_object_conforms_to */
mig_external kern_return_t io_object_conforms_to
(
	mach_port_t object,
	io_name_t className,
	boolean_t *conforms
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t classNameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t classNameCnt;
		char className[128];
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		boolean_t conforms;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		boolean_t conforms;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;

#ifdef	__MIG_check__Reply__io_object_conforms_to_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_object_conforms_to_t__defined */

	__DeclareSendRpc(2801, "io_object_conforms_to")

	InP->NDR = NDR_record;

	InP->classNameCnt = mig_strncpy(InP->className, className, 128);

	msgh_size = (mach_msg_size_t)(sizeof(Request) - 128) + (_WALIGN_(InP->classNameCnt));
	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = object;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2801;

	__BeforeSendRpc(2801, "io_object_conforms_to")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, msgh_size, (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2801, "io_object_conforms_to")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_object_conforms_to_t__defined)
	check_result = __MIG_check__Reply__io_object_conforms_to_t((__Reply__io_object_conforms_to_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_object_conforms_to_t__defined) */

	*conforms = Out0P->conforms;

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_iterator_next_t__defined)
#define __MIG_check__Reply__io_iterator_next_t__defined

mig_internal kern_return_t __MIG_check__Reply__io_iterator_next_t(__Reply__io_iterator_next_t *Out0P)
{

	typedef __Reply__io_iterator_next_t __Reply;
	boolean_t msgh_simple;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 2902) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

	msgh_simple = !(Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX);
#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((msgh_simple || Out0P->msgh_body.msgh_descriptor_count != 1 ||
	    msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	    (!msgh_simple || msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	    ((mig_reply_error_t *)Out0P)->RetCode == KERN_SUCCESS))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (msgh_simple) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	__MigTypeCheck
	if (Out0P->object.type != MACH_MSG_PORT_DESCRIPTOR ||
	    Out0P->object.disposition != 17) {
		return MIG_TYPE_ERROR;
	}
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_iterator_next_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_iterator_next */
mig_external kern_return_t io_iterator_next
(
	mach_port_t iterator,
	mach_port_t *object
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t object;
		/* end of the kernel processed data */
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t object;
		/* end of the kernel processed data */
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__io_iterator_next_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_iterator_next_t__defined */

	__DeclareSendRpc(2802, "io_iterator_next")

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = iterator;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2802;

	__BeforeSendRpc(2802, "io_iterator_next")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2802, "io_iterator_next")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_iterator_next_t__defined)
	check_result = __MIG_check__Reply__io_iterator_next_t((__Reply__io_iterator_next_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_iterator_next_t__defined) */

	*object = Out0P->object.name;
	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_iterator_reset_t__defined)
#define __MIG_check__Reply__io_iterator_reset_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_iterator_reset_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_iterator_reset_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_iterator_reset_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_iterator_reset_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_iterator_reset_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_iterator_reset_t__RetCode__defined */





mig_internal kern_return_t __MIG_check__Reply__io_iterator_reset_t(__Reply__io_iterator_reset_t *Out0P)
{

	typedef __Reply__io_iterator_reset_t __Reply;
	if (Out0P->Head.msgh_id != 2903) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (Out0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Reply)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Reply__io_iterator_reset_t__RetCode__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__io_iterator_reset_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__io_iterator_reset_t__RetCode__defined */
	{
		return Out0P->RetCode;
	}
}
#endif /* !defined(__MIG_check__Reply__io_iterator_reset_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_iterator_reset */
mig_external kern_return_t io_iterator_reset
(
	mach_port_t iterator
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__io_iterator_reset_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_iterator_reset_t__defined */

	__DeclareSendRpc(2803, "io_iterator_reset")

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = iterator;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2803;

	__BeforeSendRpc(2803, "io_iterator_reset")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2803, "io_iterator_reset")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_iterator_reset_t__defined)
	check_result = __MIG_check__Reply__io_iterator_reset_t((__Reply__io_iterator_reset_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_iterator_reset_t__defined) */

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_service_get_matching_services_t__defined)
#define __MIG_check__Reply__io_service_get_matching_services_t__defined

mig_internal kern_return_t __MIG_check__Reply__io_service_get_matching_services_t(__Reply__io_service_get_matching_services_t *Out0P)
{

	typedef __Reply__io_service_get_matching_services_t __Reply;
	boolean_t msgh_simple;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 2904) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

	msgh_simple = !(Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX);
#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((msgh_simple || Out0P->msgh_body.msgh_descriptor_count != 1 ||
	    msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	    (!msgh_simple || msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	    ((mig_reply_error_t *)Out0P)->RetCode == KERN_SUCCESS))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (msgh_simple) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	__MigTypeCheck
	if (Out0P->existing.type != MACH_MSG_PORT_DESCRIPTOR ||
	    Out0P->existing.disposition != 17) {
		return MIG_TYPE_ERROR;
	}
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_service_get_matching_services_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_service_get_matching_services */
mig_external kern_return_t io_service_get_matching_services
(
	mach_port_t master_port,
	io_string_t matching,
	mach_port_t *existing
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t matchingOffset; /* MiG doesn't use it */
		mach_msg_type_number_t matchingCnt;
		char matching[512];
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t existing;
		/* end of the kernel processed data */
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t existing;
		/* end of the kernel processed data */
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;

#ifdef	__MIG_check__Reply__io_service_get_matching_services_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_service_get_matching_services_t__defined */

	__DeclareSendRpc(2804, "io_service_get_matching_services")

	InP->NDR = NDR_record;

	InP->matchingCnt = mig_strncpy(InP->matching, matching, 512);

	msgh_size = (mach_msg_size_t)(sizeof(Request) - 512) + (_WALIGN_(InP->matchingCnt));
	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = master_port;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2804;

	__BeforeSendRpc(2804, "io_service_get_matching_services")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, msgh_size, (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2804, "io_service_get_matching_services")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_service_get_matching_services_t__defined)
	check_result = __MIG_check__Reply__io_service_get_matching_services_t((__Reply__io_service_get_matching_services_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_service_get_matching_services_t__defined) */

	*existing = Out0P->existing.name;
	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_registry_entry_get_property_t__defined)
#define __MIG_check__Reply__io_registry_entry_get_property_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_registry_entry_get_property_t__properties__defined
#if	defined(__NDR_convert__int_rep__iokit__io_buf_ptr_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_property_t__properties__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_property_t__properties(a, f, c) \
	__NDR_convert__int_rep__iokit__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_buf_ptr_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_property_t__properties__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_property_t__properties(a, f, c) \
	__NDR_convert__int_rep__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_get_property_t__properties__defined */


#ifndef __NDR_convert__int_rep__Reply__io_registry_entry_get_property_t__propertiesCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_property_t__propertiesCnt__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_property_t__propertiesCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_property_t__propertiesCnt__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_property_t__propertiesCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_get_property_t__propertiesCnt__defined */


#ifndef __NDR_convert__char_rep__Reply__io_registry_entry_get_property_t__properties__defined
#if	defined(__NDR_convert__char_rep__iokit__io_buf_ptr_t__defined)
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_property_t__properties__defined
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_property_t__properties(a, f, c) \
	__NDR_convert__char_rep__iokit__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_buf_ptr_t__defined)
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_property_t__properties__defined
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_property_t__properties(a, f, c) \
	__NDR_convert__char_rep__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_registry_entry_get_property_t__properties__defined */



#ifndef __NDR_convert__float_rep__Reply__io_registry_entry_get_property_t__properties__defined
#if	defined(__NDR_convert__float_rep__iokit__io_buf_ptr_t__defined)
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_property_t__properties__defined
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_property_t__properties(a, f, c) \
	__NDR_convert__float_rep__iokit__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_buf_ptr_t__defined)
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_property_t__properties__defined
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_property_t__properties(a, f, c) \
	__NDR_convert__float_rep__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_registry_entry_get_property_t__properties__defined */




mig_internal kern_return_t __MIG_check__Reply__io_registry_entry_get_property_t(__Reply__io_registry_entry_get_property_t *Out0P)
{

	typedef __Reply__io_registry_entry_get_property_t __Reply;
	boolean_t msgh_simple;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 2905) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

	msgh_simple = !(Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX);
#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((msgh_simple || Out0P->msgh_body.msgh_descriptor_count != 1 ||
	    msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	    (!msgh_simple || msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	    ((mig_reply_error_t *)Out0P)->RetCode == KERN_SUCCESS))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (msgh_simple) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	__MigTypeCheck
	if (Out0P->properties.type != MACH_MSG_OOL_DESCRIPTOR) {
		return MIG_TYPE_ERROR;
	}
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_property_t__properties__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_property_t__propertiesCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_property_t__propertiesCnt__defined)
		__NDR_convert__int_rep__Reply__io_registry_entry_get_property_t__propertiesCnt(&Out0P->propertiesCnt, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__io_registry_entry_get_property_t__propertiesCnt__defined */
#if defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_property_t__properties__defined)
		__NDR_convert__int_rep__Reply__io_registry_entry_get_property_t__properties((io_buf_ptr_t)(Out0P->properties.address), Out0P->NDR.int_rep, Out0P->propertiesCnt);
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_get_property_t__properties__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Reply__io_registry_entry_get_property_t__properties__defined) || \
	0
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__io_registry_entry_get_property_t__properties__defined)
		__NDR_convert__char_rep__Reply__io_registry_entry_get_property_t__properties((io_buf_ptr_t)(Out0P->properties.address), Out0P->NDR.char_rep, Out0P->propertiesCnt);
#endif /* __NDR_convert__char_rep__Reply__io_registry_entry_get_property_t__properties__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Reply__io_registry_entry_get_property_t__properties__defined) || \
	0
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__io_registry_entry_get_property_t__properties__defined)
		__NDR_convert__float_rep__Reply__io_registry_entry_get_property_t__properties((io_buf_ptr_t)(Out0P->properties.address), Out0P->NDR.float_rep, Out0P->propertiesCnt);
#endif /* __NDR_convert__float_rep__Reply__io_registry_entry_get_property_t__properties__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_registry_entry_get_property_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_registry_entry_get_property */
mig_external kern_return_t io_registry_entry_get_property
(
	mach_port_t registry_entry,
	io_name_t property_name,
	io_buf_ptr_t *properties,
	mach_msg_type_number_t *propertiesCnt
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t property_nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t property_nameCnt;
		char property_name[128];
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t properties;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t propertiesCnt;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t properties;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t propertiesCnt;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;

#ifdef	__MIG_check__Reply__io_registry_entry_get_property_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_registry_entry_get_property_t__defined */

	__DeclareSendRpc(2805, "io_registry_entry_get_property")

	InP->NDR = NDR_record;

	InP->property_nameCnt = mig_strncpy(InP->property_name, property_name, 128);

	msgh_size = (mach_msg_size_t)(sizeof(Request) - 128) + (_WALIGN_(InP->property_nameCnt));
	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = registry_entry;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2805;

	__BeforeSendRpc(2805, "io_registry_entry_get_property")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, msgh_size, (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2805, "io_registry_entry_get_property")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_registry_entry_get_property_t__defined)
	check_result = __MIG_check__Reply__io_registry_entry_get_property_t((__Reply__io_registry_entry_get_property_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_registry_entry_get_property_t__defined) */

	*properties = (io_buf_ptr_t)(Out0P->properties.address);
	*propertiesCnt = Out0P->propertiesCnt;

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_registry_create_iterator_t__defined)
#define __MIG_check__Reply__io_registry_create_iterator_t__defined

mig_internal kern_return_t __MIG_check__Reply__io_registry_create_iterator_t(__Reply__io_registry_create_iterator_t *Out0P)
{

	typedef __Reply__io_registry_create_iterator_t __Reply;
	boolean_t msgh_simple;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 2906) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

	msgh_simple = !(Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX);
#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((msgh_simple || Out0P->msgh_body.msgh_descriptor_count != 1 ||
	    msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	    (!msgh_simple || msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	    ((mig_reply_error_t *)Out0P)->RetCode == KERN_SUCCESS))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (msgh_simple) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	__MigTypeCheck
	if (Out0P->iterator.type != MACH_MSG_PORT_DESCRIPTOR ||
	    Out0P->iterator.disposition != 17) {
		return MIG_TYPE_ERROR;
	}
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_registry_create_iterator_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_registry_create_iterator */
mig_external kern_return_t io_registry_create_iterator
(
	mach_port_t master_port,
	io_name_t plane,
	uint32_t options,
	mach_port_t *iterator
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t planeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t planeCnt;
		char plane[128];
		uint32_t options;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t iterator;
		/* end of the kernel processed data */
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t iterator;
		/* end of the kernel processed data */
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;
	unsigned int msgh_size_delta;


#ifdef	__MIG_check__Reply__io_registry_create_iterator_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_registry_create_iterator_t__defined */

	__DeclareSendRpc(2806, "io_registry_create_iterator")

	InP->NDR = NDR_record;

	InP->planeCnt = mig_strncpy(InP->plane, plane, 128);

	msgh_size_delta = _WALIGN_(InP->planeCnt);
	msgh_size = (mach_msg_size_t)(sizeof(Request) - 128) + msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 128);

	InP->options = options;

	InP = &Mess.In;
	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = master_port;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2806;

	__BeforeSendRpc(2806, "io_registry_create_iterator")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, msgh_size, (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2806, "io_registry_create_iterator")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_registry_create_iterator_t__defined)
	check_result = __MIG_check__Reply__io_registry_create_iterator_t((__Reply__io_registry_create_iterator_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_registry_create_iterator_t__defined) */

	*iterator = Out0P->iterator.name;
	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_registry_iterator_enter_entry_t__defined)
#define __MIG_check__Reply__io_registry_iterator_enter_entry_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_registry_iterator_enter_entry_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_iterator_enter_entry_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_registry_iterator_enter_entry_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_iterator_enter_entry_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_registry_iterator_enter_entry_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_registry_iterator_enter_entry_t__RetCode__defined */





mig_internal kern_return_t __MIG_check__Reply__io_registry_iterator_enter_entry_t(__Reply__io_registry_iterator_enter_entry_t *Out0P)
{

	typedef __Reply__io_registry_iterator_enter_entry_t __Reply;
	if (Out0P->Head.msgh_id != 2907) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (Out0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Reply)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Reply__io_registry_iterator_enter_entry_t__RetCode__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__io_registry_iterator_enter_entry_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__io_registry_iterator_enter_entry_t__RetCode__defined */
	{
		return Out0P->RetCode;
	}
}
#endif /* !defined(__MIG_check__Reply__io_registry_iterator_enter_entry_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_registry_iterator_enter_entry */
mig_external kern_return_t io_registry_iterator_enter_entry
(
	mach_port_t iterator
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__io_registry_iterator_enter_entry_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_registry_iterator_enter_entry_t__defined */

	__DeclareSendRpc(2807, "io_registry_iterator_enter_entry")

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = iterator;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2807;

	__BeforeSendRpc(2807, "io_registry_iterator_enter_entry")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2807, "io_registry_iterator_enter_entry")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_registry_iterator_enter_entry_t__defined)
	check_result = __MIG_check__Reply__io_registry_iterator_enter_entry_t((__Reply__io_registry_iterator_enter_entry_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_registry_iterator_enter_entry_t__defined) */

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_registry_iterator_exit_entry_t__defined)
#define __MIG_check__Reply__io_registry_iterator_exit_entry_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_registry_iterator_exit_entry_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_iterator_exit_entry_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_registry_iterator_exit_entry_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_iterator_exit_entry_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_registry_iterator_exit_entry_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_registry_iterator_exit_entry_t__RetCode__defined */





mig_internal kern_return_t __MIG_check__Reply__io_registry_iterator_exit_entry_t(__Reply__io_registry_iterator_exit_entry_t *Out0P)
{

	typedef __Reply__io_registry_iterator_exit_entry_t __Reply;
	if (Out0P->Head.msgh_id != 2908) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (Out0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Reply)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Reply__io_registry_iterator_exit_entry_t__RetCode__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__io_registry_iterator_exit_entry_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__io_registry_iterator_exit_entry_t__RetCode__defined */
	{
		return Out0P->RetCode;
	}
}
#endif /* !defined(__MIG_check__Reply__io_registry_iterator_exit_entry_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_registry_iterator_exit_entry */
mig_external kern_return_t io_registry_iterator_exit_entry
(
	mach_port_t iterator
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__io_registry_iterator_exit_entry_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_registry_iterator_exit_entry_t__defined */

	__DeclareSendRpc(2808, "io_registry_iterator_exit_entry")

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = iterator;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2808;

	__BeforeSendRpc(2808, "io_registry_iterator_exit_entry")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2808, "io_registry_iterator_exit_entry")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_registry_iterator_exit_entry_t__defined)
	check_result = __MIG_check__Reply__io_registry_iterator_exit_entry_t((__Reply__io_registry_iterator_exit_entry_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_registry_iterator_exit_entry_t__defined) */

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_registry_entry_from_path_t__defined)
#define __MIG_check__Reply__io_registry_entry_from_path_t__defined

mig_internal kern_return_t __MIG_check__Reply__io_registry_entry_from_path_t(__Reply__io_registry_entry_from_path_t *Out0P)
{

	typedef __Reply__io_registry_entry_from_path_t __Reply;
	boolean_t msgh_simple;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 2909) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

	msgh_simple = !(Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX);
#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((msgh_simple || Out0P->msgh_body.msgh_descriptor_count != 1 ||
	    msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	    (!msgh_simple || msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	    ((mig_reply_error_t *)Out0P)->RetCode == KERN_SUCCESS))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (msgh_simple) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	__MigTypeCheck
	if (Out0P->registry_entry.type != MACH_MSG_PORT_DESCRIPTOR ||
	    Out0P->registry_entry.disposition != 17) {
		return MIG_TYPE_ERROR;
	}
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_registry_entry_from_path_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_registry_entry_from_path */
mig_external kern_return_t io_registry_entry_from_path
(
	mach_port_t master_port,
	io_string_t path,
	mach_port_t *registry_entry
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t pathOffset; /* MiG doesn't use it */
		mach_msg_type_number_t pathCnt;
		char path[512];
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t registry_entry;
		/* end of the kernel processed data */
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t registry_entry;
		/* end of the kernel processed data */
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;

#ifdef	__MIG_check__Reply__io_registry_entry_from_path_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_registry_entry_from_path_t__defined */

	__DeclareSendRpc(2809, "io_registry_entry_from_path")

	InP->NDR = NDR_record;

	InP->pathCnt = mig_strncpy(InP->path, path, 512);

	msgh_size = (mach_msg_size_t)(sizeof(Request) - 512) + (_WALIGN_(InP->pathCnt));
	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = master_port;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2809;

	__BeforeSendRpc(2809, "io_registry_entry_from_path")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, msgh_size, (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2809, "io_registry_entry_from_path")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_registry_entry_from_path_t__defined)
	check_result = __MIG_check__Reply__io_registry_entry_from_path_t((__Reply__io_registry_entry_from_path_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_registry_entry_from_path_t__defined) */

	*registry_entry = Out0P->registry_entry.name;
	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_registry_entry_get_name_t__defined)
#define __MIG_check__Reply__io_registry_entry_get_name_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_registry_entry_get_name_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_name_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_name_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_name_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_name_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_get_name_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__io_registry_entry_get_name_t__name__defined
#if	defined(__NDR_convert__int_rep__iokit__io_name_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_name_t__name__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_name_t__name(a, f, c) \
	__NDR_convert__int_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_name_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_name_t__name__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_name_t__name(a, f, c) \
	__NDR_convert__int_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_get_name_t__name__defined */


#ifndef __NDR_convert__int_rep__Reply__io_registry_entry_get_name_t__nameCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_name_t__nameCnt__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_name_t__nameCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_name_t__nameCnt__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_name_t__nameCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_get_name_t__nameCnt__defined */



#ifndef __NDR_convert__char_rep__Reply__io_registry_entry_get_name_t__name__defined
#if	defined(__NDR_convert__char_rep__iokit__io_name_t__defined)
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_name_t__name__defined
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_name_t__name(a, f, c) \
	__NDR_convert__char_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_name_t__defined)
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_name_t__name__defined
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_name_t__name(a, f, c) \
	__NDR_convert__char_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_registry_entry_get_name_t__name__defined */




#ifndef __NDR_convert__float_rep__Reply__io_registry_entry_get_name_t__name__defined
#if	defined(__NDR_convert__float_rep__iokit__io_name_t__defined)
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_name_t__name__defined
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_name_t__name(a, f, c) \
	__NDR_convert__float_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_name_t__defined)
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_name_t__name__defined
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_name_t__name(a, f, c) \
	__NDR_convert__float_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_registry_entry_get_name_t__name__defined */




mig_internal kern_return_t __MIG_check__Reply__io_registry_entry_get_name_t(__Reply__io_registry_entry_get_name_t *Out0P)
{

	typedef __Reply__io_registry_entry_get_name_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

	if (Out0P->Head.msgh_id != 2910) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    ((msgh_size > (mach_msg_size_t)sizeof(__Reply) || msgh_size < (mach_msg_size_t)(sizeof(__Reply) - 128)) &&
	     (msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	      Out0P->RetCode == KERN_SUCCESS)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (Out0P->RetCode != KERN_SUCCESS) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_name_t__nameCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__io_registry_entry_get_name_t__nameCnt(&Out0P->nameCnt, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__io_registry_entry_get_name_t__nameCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Reply) - 128) + (_WALIGN_(Out0P->nameCnt)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_name_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_name_t__name__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_name_t__nameCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_name_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__io_registry_entry_get_name_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_get_name_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_name_t__name__defined)
		__NDR_convert__int_rep__Reply__io_registry_entry_get_name_t__name(&Out0P->name, Out0P->NDR.int_rep, Out0P->nameCnt);
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_get_name_t__name__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__io_registry_entry_get_name_t__name__defined) || \
	0
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__io_registry_entry_get_name_t__name__defined)
		__NDR_convert__char_rep__Reply__io_registry_entry_get_name_t__name(&Out0P->name, Out0P->NDR.char_rep, Out0P->nameCnt);
#endif /* __NDR_convert__char_rep__Reply__io_registry_entry_get_name_t__name__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__io_registry_entry_get_name_t__name__defined) || \
	0
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__io_registry_entry_get_name_t__name__defined)
		__NDR_convert__float_rep__Reply__io_registry_entry_get_name_t__name(&Out0P->name, Out0P->NDR.float_rep, Out0P->nameCnt);
#endif /* __NDR_convert__float_rep__Reply__io_registry_entry_get_name_t__name__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_registry_entry_get_name_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_registry_entry_get_name */
mig_external kern_return_t io_registry_entry_get_name
(
	mach_port_t registry_entry,
	io_name_t name
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t nameCnt;
		char name[128];
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t nameCnt;
		char name[128];
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__io_registry_entry_get_name_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_registry_entry_get_name_t__defined */

	__DeclareSendRpc(2810, "io_registry_entry_get_name")

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = registry_entry;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2810;

	__BeforeSendRpc(2810, "io_registry_entry_get_name")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2810, "io_registry_entry_get_name")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_registry_entry_get_name_t__defined)
	check_result = __MIG_check__Reply__io_registry_entry_get_name_t((__Reply__io_registry_entry_get_name_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_registry_entry_get_name_t__defined) */

	(void) mig_strncpy(name, Out0P->name, 128);

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_registry_entry_get_properties_t__defined)
#define __MIG_check__Reply__io_registry_entry_get_properties_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_registry_entry_get_properties_t__properties__defined
#if	defined(__NDR_convert__int_rep__iokit__io_buf_ptr_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_properties_t__properties__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_properties_t__properties(a, f, c) \
	__NDR_convert__int_rep__iokit__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_buf_ptr_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_properties_t__properties__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_properties_t__properties(a, f, c) \
	__NDR_convert__int_rep__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_get_properties_t__properties__defined */


#ifndef __NDR_convert__int_rep__Reply__io_registry_entry_get_properties_t__propertiesCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_properties_t__propertiesCnt__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_properties_t__propertiesCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_properties_t__propertiesCnt__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_properties_t__propertiesCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_get_properties_t__propertiesCnt__defined */


#ifndef __NDR_convert__char_rep__Reply__io_registry_entry_get_properties_t__properties__defined
#if	defined(__NDR_convert__char_rep__iokit__io_buf_ptr_t__defined)
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_properties_t__properties__defined
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_properties_t__properties(a, f, c) \
	__NDR_convert__char_rep__iokit__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_buf_ptr_t__defined)
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_properties_t__properties__defined
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_properties_t__properties(a, f, c) \
	__NDR_convert__char_rep__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_registry_entry_get_properties_t__properties__defined */



#ifndef __NDR_convert__float_rep__Reply__io_registry_entry_get_properties_t__properties__defined
#if	defined(__NDR_convert__float_rep__iokit__io_buf_ptr_t__defined)
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_properties_t__properties__defined
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_properties_t__properties(a, f, c) \
	__NDR_convert__float_rep__iokit__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_buf_ptr_t__defined)
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_properties_t__properties__defined
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_properties_t__properties(a, f, c) \
	__NDR_convert__float_rep__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_registry_entry_get_properties_t__properties__defined */




mig_internal kern_return_t __MIG_check__Reply__io_registry_entry_get_properties_t(__Reply__io_registry_entry_get_properties_t *Out0P)
{

	typedef __Reply__io_registry_entry_get_properties_t __Reply;
	boolean_t msgh_simple;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 2911) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

	msgh_simple = !(Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX);
#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((msgh_simple || Out0P->msgh_body.msgh_descriptor_count != 1 ||
	    msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	    (!msgh_simple || msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	    ((mig_reply_error_t *)Out0P)->RetCode == KERN_SUCCESS))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (msgh_simple) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	__MigTypeCheck
	if (Out0P->properties.type != MACH_MSG_OOL_DESCRIPTOR) {
		return MIG_TYPE_ERROR;
	}
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_properties_t__properties__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_properties_t__propertiesCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_properties_t__propertiesCnt__defined)
		__NDR_convert__int_rep__Reply__io_registry_entry_get_properties_t__propertiesCnt(&Out0P->propertiesCnt, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__io_registry_entry_get_properties_t__propertiesCnt__defined */
#if defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_properties_t__properties__defined)
		__NDR_convert__int_rep__Reply__io_registry_entry_get_properties_t__properties((io_buf_ptr_t)(Out0P->properties.address), Out0P->NDR.int_rep, Out0P->propertiesCnt);
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_get_properties_t__properties__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Reply__io_registry_entry_get_properties_t__properties__defined) || \
	0
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__io_registry_entry_get_properties_t__properties__defined)
		__NDR_convert__char_rep__Reply__io_registry_entry_get_properties_t__properties((io_buf_ptr_t)(Out0P->properties.address), Out0P->NDR.char_rep, Out0P->propertiesCnt);
#endif /* __NDR_convert__char_rep__Reply__io_registry_entry_get_properties_t__properties__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Reply__io_registry_entry_get_properties_t__properties__defined) || \
	0
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__io_registry_entry_get_properties_t__properties__defined)
		__NDR_convert__float_rep__Reply__io_registry_entry_get_properties_t__properties((io_buf_ptr_t)(Out0P->properties.address), Out0P->NDR.float_rep, Out0P->propertiesCnt);
#endif /* __NDR_convert__float_rep__Reply__io_registry_entry_get_properties_t__properties__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_registry_entry_get_properties_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_registry_entry_get_properties */
mig_external kern_return_t io_registry_entry_get_properties
(
	mach_port_t registry_entry,
	io_buf_ptr_t *properties,
	mach_msg_type_number_t *propertiesCnt
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t properties;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t propertiesCnt;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t properties;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t propertiesCnt;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__io_registry_entry_get_properties_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_registry_entry_get_properties_t__defined */

	__DeclareSendRpc(2811, "io_registry_entry_get_properties")

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = registry_entry;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2811;

	__BeforeSendRpc(2811, "io_registry_entry_get_properties")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2811, "io_registry_entry_get_properties")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_registry_entry_get_properties_t__defined)
	check_result = __MIG_check__Reply__io_registry_entry_get_properties_t((__Reply__io_registry_entry_get_properties_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_registry_entry_get_properties_t__defined) */

	*properties = (io_buf_ptr_t)(Out0P->properties.address);
	*propertiesCnt = Out0P->propertiesCnt;

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_registry_entry_get_property_bytes_t__defined)
#define __MIG_check__Reply__io_registry_entry_get_property_bytes_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_registry_entry_get_property_bytes_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_property_bytes_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_property_bytes_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_property_bytes_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_property_bytes_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_get_property_bytes_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__io_registry_entry_get_property_bytes_t__data__defined
#if	defined(__NDR_convert__int_rep__iokit__io_struct_inband_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_property_bytes_t__data__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_property_bytes_t__data(a, f, c) \
	__NDR_convert__int_rep__iokit__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_struct_inband_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_property_bytes_t__data__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_property_bytes_t__data(a, f, c) \
	__NDR_convert__int_rep__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__iokit__char__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_property_bytes_t__data__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_property_bytes_t__data(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__int_rep__iokit__char)
#elif	defined(__NDR_convert__int_rep__char__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_property_bytes_t__data__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_property_bytes_t__data(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__int_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_get_property_bytes_t__data__defined */


#ifndef __NDR_convert__int_rep__Reply__io_registry_entry_get_property_bytes_t__dataCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_property_bytes_t__dataCnt__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_property_bytes_t__dataCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_property_bytes_t__dataCnt__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_property_bytes_t__dataCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_get_property_bytes_t__dataCnt__defined */



#ifndef __NDR_convert__char_rep__Reply__io_registry_entry_get_property_bytes_t__data__defined
#if	defined(__NDR_convert__char_rep__iokit__io_struct_inband_t__defined)
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_property_bytes_t__data__defined
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_property_bytes_t__data(a, f, c) \
	__NDR_convert__char_rep__iokit__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_struct_inband_t__defined)
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_property_bytes_t__data__defined
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_property_bytes_t__data(a, f, c) \
	__NDR_convert__char_rep__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__iokit__char__defined)
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_property_bytes_t__data__defined
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_property_bytes_t__data(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__char_rep__iokit__char)
#elif	defined(__NDR_convert__char_rep__char__defined)
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_property_bytes_t__data__defined
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_property_bytes_t__data(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__char_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_registry_entry_get_property_bytes_t__data__defined */




#ifndef __NDR_convert__float_rep__Reply__io_registry_entry_get_property_bytes_t__data__defined
#if	defined(__NDR_convert__float_rep__iokit__io_struct_inband_t__defined)
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_property_bytes_t__data__defined
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_property_bytes_t__data(a, f, c) \
	__NDR_convert__float_rep__iokit__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_struct_inband_t__defined)
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_property_bytes_t__data__defined
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_property_bytes_t__data(a, f, c) \
	__NDR_convert__float_rep__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__iokit__char__defined)
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_property_bytes_t__data__defined
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_property_bytes_t__data(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__float_rep__iokit__char)
#elif	defined(__NDR_convert__float_rep__char__defined)
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_property_bytes_t__data__defined
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_property_bytes_t__data(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__float_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_registry_entry_get_property_bytes_t__data__defined */




mig_internal kern_return_t __MIG_check__Reply__io_registry_entry_get_property_bytes_t(__Reply__io_registry_entry_get_property_bytes_t *Out0P)
{

	typedef __Reply__io_registry_entry_get_property_bytes_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

	if (Out0P->Head.msgh_id != 2912) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    ((msgh_size > (mach_msg_size_t)sizeof(__Reply) || msgh_size < (mach_msg_size_t)(sizeof(__Reply) - 4096)) &&
	     (msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	      Out0P->RetCode == KERN_SUCCESS)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (Out0P->RetCode != KERN_SUCCESS) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_property_bytes_t__dataCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__io_registry_entry_get_property_bytes_t__dataCnt(&Out0P->dataCnt, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__io_registry_entry_get_property_bytes_t__dataCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Reply) - 4096) + (_WALIGN_(Out0P->dataCnt)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_property_bytes_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_property_bytes_t__data__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_property_bytes_t__dataCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_property_bytes_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__io_registry_entry_get_property_bytes_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_get_property_bytes_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_property_bytes_t__data__defined)
		__NDR_convert__int_rep__Reply__io_registry_entry_get_property_bytes_t__data(&Out0P->data, Out0P->NDR.int_rep, Out0P->dataCnt);
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_get_property_bytes_t__data__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__io_registry_entry_get_property_bytes_t__data__defined) || \
	0
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__io_registry_entry_get_property_bytes_t__data__defined)
		__NDR_convert__char_rep__Reply__io_registry_entry_get_property_bytes_t__data(&Out0P->data, Out0P->NDR.char_rep, Out0P->dataCnt);
#endif /* __NDR_convert__char_rep__Reply__io_registry_entry_get_property_bytes_t__data__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__io_registry_entry_get_property_bytes_t__data__defined) || \
	0
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__io_registry_entry_get_property_bytes_t__data__defined)
		__NDR_convert__float_rep__Reply__io_registry_entry_get_property_bytes_t__data(&Out0P->data, Out0P->NDR.float_rep, Out0P->dataCnt);
#endif /* __NDR_convert__float_rep__Reply__io_registry_entry_get_property_bytes_t__data__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_registry_entry_get_property_bytes_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_registry_entry_get_property_bytes */
mig_external kern_return_t io_registry_entry_get_property_bytes
(
	mach_port_t registry_entry,
	io_name_t property_name,
	io_struct_inband_t data,
	mach_msg_type_number_t *dataCnt
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t property_nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t property_nameCnt;
		char property_name[128];
		mach_msg_type_number_t dataCnt;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t dataCnt;
		char data[4096];
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t dataCnt;
		char data[4096];
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;
	unsigned int msgh_size_delta;


#ifdef	__MIG_check__Reply__io_registry_entry_get_property_bytes_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_registry_entry_get_property_bytes_t__defined */

	__DeclareSendRpc(2812, "io_registry_entry_get_property_bytes")

	InP->NDR = NDR_record;

	InP->property_nameCnt = mig_strncpy(InP->property_name, property_name, 128);

	msgh_size_delta = _WALIGN_(InP->property_nameCnt);
	msgh_size = (mach_msg_size_t)(sizeof(Request) - 128) + msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 128);

	if (*dataCnt < 4096)
		InP->dataCnt = *dataCnt;
	else
		InP->dataCnt = 4096;

	InP = &Mess.In;
	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = registry_entry;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2812;

	__BeforeSendRpc(2812, "io_registry_entry_get_property_bytes")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, msgh_size, (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2812, "io_registry_entry_get_property_bytes")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_registry_entry_get_property_bytes_t__defined)
	check_result = __MIG_check__Reply__io_registry_entry_get_property_bytes_t((__Reply__io_registry_entry_get_property_bytes_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_registry_entry_get_property_bytes_t__defined) */

	if (Out0P->dataCnt > *dataCnt) {
		(void)memcpy((char *) data, (const char *) Out0P->data,  *dataCnt);
		*dataCnt = Out0P->dataCnt;
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) data, (const char *) Out0P->data, Out0P->dataCnt);

	*dataCnt = Out0P->dataCnt;

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_registry_entry_get_child_iterator_t__defined)
#define __MIG_check__Reply__io_registry_entry_get_child_iterator_t__defined

mig_internal kern_return_t __MIG_check__Reply__io_registry_entry_get_child_iterator_t(__Reply__io_registry_entry_get_child_iterator_t *Out0P)
{

	typedef __Reply__io_registry_entry_get_child_iterator_t __Reply;
	boolean_t msgh_simple;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 2913) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

	msgh_simple = !(Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX);
#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((msgh_simple || Out0P->msgh_body.msgh_descriptor_count != 1 ||
	    msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	    (!msgh_simple || msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	    ((mig_reply_error_t *)Out0P)->RetCode == KERN_SUCCESS))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (msgh_simple) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	__MigTypeCheck
	if (Out0P->iterator.type != MACH_MSG_PORT_DESCRIPTOR ||
	    Out0P->iterator.disposition != 17) {
		return MIG_TYPE_ERROR;
	}
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_registry_entry_get_child_iterator_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_registry_entry_get_child_iterator */
mig_external kern_return_t io_registry_entry_get_child_iterator
(
	mach_port_t registry_entry,
	io_name_t plane,
	mach_port_t *iterator
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t planeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t planeCnt;
		char plane[128];
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t iterator;
		/* end of the kernel processed data */
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t iterator;
		/* end of the kernel processed data */
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;

#ifdef	__MIG_check__Reply__io_registry_entry_get_child_iterator_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_registry_entry_get_child_iterator_t__defined */

	__DeclareSendRpc(2813, "io_registry_entry_get_child_iterator")

	InP->NDR = NDR_record;

	InP->planeCnt = mig_strncpy(InP->plane, plane, 128);

	msgh_size = (mach_msg_size_t)(sizeof(Request) - 128) + (_WALIGN_(InP->planeCnt));
	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = registry_entry;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2813;

	__BeforeSendRpc(2813, "io_registry_entry_get_child_iterator")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, msgh_size, (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2813, "io_registry_entry_get_child_iterator")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_registry_entry_get_child_iterator_t__defined)
	check_result = __MIG_check__Reply__io_registry_entry_get_child_iterator_t((__Reply__io_registry_entry_get_child_iterator_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_registry_entry_get_child_iterator_t__defined) */

	*iterator = Out0P->iterator.name;
	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_registry_entry_get_parent_iterator_t__defined)
#define __MIG_check__Reply__io_registry_entry_get_parent_iterator_t__defined

mig_internal kern_return_t __MIG_check__Reply__io_registry_entry_get_parent_iterator_t(__Reply__io_registry_entry_get_parent_iterator_t *Out0P)
{

	typedef __Reply__io_registry_entry_get_parent_iterator_t __Reply;
	boolean_t msgh_simple;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 2914) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

	msgh_simple = !(Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX);
#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((msgh_simple || Out0P->msgh_body.msgh_descriptor_count != 1 ||
	    msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	    (!msgh_simple || msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	    ((mig_reply_error_t *)Out0P)->RetCode == KERN_SUCCESS))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (msgh_simple) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	__MigTypeCheck
	if (Out0P->iterator.type != MACH_MSG_PORT_DESCRIPTOR ||
	    Out0P->iterator.disposition != 17) {
		return MIG_TYPE_ERROR;
	}
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_registry_entry_get_parent_iterator_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_registry_entry_get_parent_iterator */
mig_external kern_return_t io_registry_entry_get_parent_iterator
(
	mach_port_t registry_entry,
	io_name_t plane,
	mach_port_t *iterator
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t planeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t planeCnt;
		char plane[128];
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t iterator;
		/* end of the kernel processed data */
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t iterator;
		/* end of the kernel processed data */
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;

#ifdef	__MIG_check__Reply__io_registry_entry_get_parent_iterator_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_registry_entry_get_parent_iterator_t__defined */

	__DeclareSendRpc(2814, "io_registry_entry_get_parent_iterator")

	InP->NDR = NDR_record;

	InP->planeCnt = mig_strncpy(InP->plane, plane, 128);

	msgh_size = (mach_msg_size_t)(sizeof(Request) - 128) + (_WALIGN_(InP->planeCnt));
	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = registry_entry;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2814;

	__BeforeSendRpc(2814, "io_registry_entry_get_parent_iterator")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, msgh_size, (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2814, "io_registry_entry_get_parent_iterator")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_registry_entry_get_parent_iterator_t__defined)
	check_result = __MIG_check__Reply__io_registry_entry_get_parent_iterator_t((__Reply__io_registry_entry_get_parent_iterator_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_registry_entry_get_parent_iterator_t__defined) */

	*iterator = Out0P->iterator.name;
	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_service_open_t__defined)
#define __MIG_check__Reply__io_service_open_t__defined

mig_internal kern_return_t __MIG_check__Reply__io_service_open_t(__Reply__io_service_open_t *Out0P)
{

	typedef __Reply__io_service_open_t __Reply;
	boolean_t msgh_simple;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 2915) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

	msgh_simple = !(Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX);
#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((msgh_simple || Out0P->msgh_body.msgh_descriptor_count != 1 ||
	    msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	    (!msgh_simple || msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	    ((mig_reply_error_t *)Out0P)->RetCode == KERN_SUCCESS))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (msgh_simple) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	__MigTypeCheck
	if (Out0P->connection.type != MACH_MSG_PORT_DESCRIPTOR ||
	    Out0P->connection.disposition != 17) {
		return MIG_TYPE_ERROR;
	}
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_service_open_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_service_open */
mig_external kern_return_t io_service_open
(
	mach_port_t service,
	task_t owningTask,
	uint32_t connect_type,
	mach_port_t *connection
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t owningTask;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint32_t connect_type;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t connection;
		/* end of the kernel processed data */
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t connection;
		/* end of the kernel processed data */
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__io_service_open_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_service_open_t__defined */

	__DeclareSendRpc(2815, "io_service_open")

#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t owningTaskTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 1;
#if	UseStaticTemplates
	InP->owningTask = owningTaskTemplate;
	InP->owningTask.name = owningTask;
#else	/* UseStaticTemplates */
	InP->owningTask.name = owningTask;
	InP->owningTask.disposition = 19;
	InP->owningTask.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	InP->connect_type = connect_type;

	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = service;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2815;

	__BeforeSendRpc(2815, "io_service_open")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2815, "io_service_open")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_service_open_t__defined)
	check_result = __MIG_check__Reply__io_service_open_t((__Reply__io_service_open_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_service_open_t__defined) */

	*connection = Out0P->connection.name;
	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_service_close_t__defined)
#define __MIG_check__Reply__io_service_close_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_service_close_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_close_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_service_close_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_close_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_service_close_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_service_close_t__RetCode__defined */





mig_internal kern_return_t __MIG_check__Reply__io_service_close_t(__Reply__io_service_close_t *Out0P)
{

	typedef __Reply__io_service_close_t __Reply;
	if (Out0P->Head.msgh_id != 2916) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (Out0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Reply)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Reply__io_service_close_t__RetCode__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__io_service_close_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__io_service_close_t__RetCode__defined */
	{
		return Out0P->RetCode;
	}
}
#endif /* !defined(__MIG_check__Reply__io_service_close_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_service_close */
mig_external kern_return_t io_service_close
(
	mach_port_t connection
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__io_service_close_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_service_close_t__defined */

	__DeclareSendRpc(2816, "io_service_close")

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = connection;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2816;

	__BeforeSendRpc(2816, "io_service_close")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2816, "io_service_close")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_service_close_t__defined)
	check_result = __MIG_check__Reply__io_service_close_t((__Reply__io_service_close_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_service_close_t__defined) */

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_connect_get_service_t__defined)
#define __MIG_check__Reply__io_connect_get_service_t__defined

mig_internal kern_return_t __MIG_check__Reply__io_connect_get_service_t(__Reply__io_connect_get_service_t *Out0P)
{

	typedef __Reply__io_connect_get_service_t __Reply;
	boolean_t msgh_simple;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 2917) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

	msgh_simple = !(Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX);
#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((msgh_simple || Out0P->msgh_body.msgh_descriptor_count != 1 ||
	    msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	    (!msgh_simple || msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	    ((mig_reply_error_t *)Out0P)->RetCode == KERN_SUCCESS))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (msgh_simple) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	__MigTypeCheck
	if (Out0P->service.type != MACH_MSG_PORT_DESCRIPTOR ||
	    Out0P->service.disposition != 17) {
		return MIG_TYPE_ERROR;
	}
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_connect_get_service_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_connect_get_service */
mig_external kern_return_t io_connect_get_service
(
	mach_port_t connection,
	mach_port_t *service
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t service;
		/* end of the kernel processed data */
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t service;
		/* end of the kernel processed data */
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__io_connect_get_service_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_connect_get_service_t__defined */

	__DeclareSendRpc(2817, "io_connect_get_service")

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = connection;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2817;

	__BeforeSendRpc(2817, "io_connect_get_service")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2817, "io_connect_get_service")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_connect_get_service_t__defined)
	check_result = __MIG_check__Reply__io_connect_get_service_t((__Reply__io_connect_get_service_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_connect_get_service_t__defined) */

	*service = Out0P->service.name;
	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_connect_set_notification_port_t__defined)
#define __MIG_check__Reply__io_connect_set_notification_port_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_connect_set_notification_port_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_set_notification_port_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_connect_set_notification_port_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_set_notification_port_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_connect_set_notification_port_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_connect_set_notification_port_t__RetCode__defined */





mig_internal kern_return_t __MIG_check__Reply__io_connect_set_notification_port_t(__Reply__io_connect_set_notification_port_t *Out0P)
{

	typedef __Reply__io_connect_set_notification_port_t __Reply;
	if (Out0P->Head.msgh_id != 2918) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (Out0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Reply)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Reply__io_connect_set_notification_port_t__RetCode__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__io_connect_set_notification_port_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__io_connect_set_notification_port_t__RetCode__defined */
	{
		return Out0P->RetCode;
	}
}
#endif /* !defined(__MIG_check__Reply__io_connect_set_notification_port_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_connect_set_notification_port */
mig_external kern_return_t io_connect_set_notification_port
(
	mach_port_t connection,
	uint32_t notification_type,
	mach_port_t port,
	uint32_t reference
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint32_t notification_type;
		uint32_t reference;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__io_connect_set_notification_port_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_connect_set_notification_port_t__defined */

	__DeclareSendRpc(2818, "io_connect_set_notification_port")

#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t portTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		20,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 1;
#if	UseStaticTemplates
	InP->port = portTemplate;
	InP->port.name = port;
#else	/* UseStaticTemplates */
	InP->port.name = port;
	InP->port.disposition = 20;
	InP->port.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	InP->notification_type = notification_type;

	InP->reference = reference;

	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = connection;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2818;

	__BeforeSendRpc(2818, "io_connect_set_notification_port")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2818, "io_connect_set_notification_port")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_connect_set_notification_port_t__defined)
	check_result = __MIG_check__Reply__io_connect_set_notification_port_t((__Reply__io_connect_set_notification_port_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_connect_set_notification_port_t__defined) */

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_connect_map_memory_t__defined)
#define __MIG_check__Reply__io_connect_map_memory_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_connect_map_memory_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_connect_map_memory_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__io_connect_map_memory_t__address__defined
#if	defined(__NDR_convert__int_rep__iokit__vm_address_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_t__address__defined
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_t__address(a, f) \
	__NDR_convert__int_rep__iokit__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_address_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_t__address__defined
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_t__address(a, f) \
	__NDR_convert__int_rep__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_t__address__defined
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_t__address(a, f) \
	__NDR_convert__int_rep__iokit__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_t__address__defined
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_t__address(a, f) \
	__NDR_convert__int_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_t__address__defined
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_t__address(a, f) \
	__NDR_convert__int_rep__iokit__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_t__address__defined
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_t__address(a, f) \
	__NDR_convert__int_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_connect_map_memory_t__address__defined */


#ifndef __NDR_convert__int_rep__Reply__io_connect_map_memory_t__size__defined
#if	defined(__NDR_convert__int_rep__iokit__vm_size_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_t__size__defined
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_t__size(a, f) \
	__NDR_convert__int_rep__iokit__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_size_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_t__size__defined
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_t__size(a, f) \
	__NDR_convert__int_rep__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_t__size__defined
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_t__size(a, f) \
	__NDR_convert__int_rep__iokit__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_t__size__defined
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_t__size(a, f) \
	__NDR_convert__int_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_t__size__defined
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_t__size(a, f) \
	__NDR_convert__int_rep__iokit__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_t__size__defined
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_t__size(a, f) \
	__NDR_convert__int_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_connect_map_memory_t__size__defined */



#ifndef __NDR_convert__char_rep__Reply__io_connect_map_memory_t__address__defined
#if	defined(__NDR_convert__char_rep__iokit__vm_address_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_t__address__defined
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_t__address(a, f) \
	__NDR_convert__char_rep__iokit__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_address_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_t__address__defined
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_t__address(a, f) \
	__NDR_convert__char_rep__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_t__address__defined
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_t__address(a, f) \
	__NDR_convert__char_rep__iokit__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_t__address__defined
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_t__address(a, f) \
	__NDR_convert__char_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_t__address__defined
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_t__address(a, f) \
	__NDR_convert__char_rep__iokit__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_t__address__defined
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_t__address(a, f) \
	__NDR_convert__char_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_connect_map_memory_t__address__defined */


#ifndef __NDR_convert__char_rep__Reply__io_connect_map_memory_t__size__defined
#if	defined(__NDR_convert__char_rep__iokit__vm_size_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_t__size__defined
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_t__size(a, f) \
	__NDR_convert__char_rep__iokit__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_size_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_t__size__defined
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_t__size(a, f) \
	__NDR_convert__char_rep__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_t__size__defined
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_t__size(a, f) \
	__NDR_convert__char_rep__iokit__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_t__size__defined
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_t__size(a, f) \
	__NDR_convert__char_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_t__size__defined
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_t__size(a, f) \
	__NDR_convert__char_rep__iokit__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_t__size__defined
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_t__size(a, f) \
	__NDR_convert__char_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_connect_map_memory_t__size__defined */



#ifndef __NDR_convert__float_rep__Reply__io_connect_map_memory_t__address__defined
#if	defined(__NDR_convert__float_rep__iokit__vm_address_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_t__address__defined
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_t__address(a, f) \
	__NDR_convert__float_rep__iokit__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_address_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_t__address__defined
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_t__address(a, f) \
	__NDR_convert__float_rep__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_t__address__defined
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_t__address(a, f) \
	__NDR_convert__float_rep__iokit__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_t__address__defined
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_t__address(a, f) \
	__NDR_convert__float_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_t__address__defined
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_t__address(a, f) \
	__NDR_convert__float_rep__iokit__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_t__address__defined
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_t__address(a, f) \
	__NDR_convert__float_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_connect_map_memory_t__address__defined */


#ifndef __NDR_convert__float_rep__Reply__io_connect_map_memory_t__size__defined
#if	defined(__NDR_convert__float_rep__iokit__vm_size_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_t__size__defined
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_t__size(a, f) \
	__NDR_convert__float_rep__iokit__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_size_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_t__size__defined
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_t__size(a, f) \
	__NDR_convert__float_rep__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_t__size__defined
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_t__size(a, f) \
	__NDR_convert__float_rep__iokit__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_t__size__defined
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_t__size(a, f) \
	__NDR_convert__float_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_t__size__defined
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_t__size(a, f) \
	__NDR_convert__float_rep__iokit__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_t__size__defined
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_t__size(a, f) \
	__NDR_convert__float_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_connect_map_memory_t__size__defined */



mig_internal kern_return_t __MIG_check__Reply__io_connect_map_memory_t(__Reply__io_connect_map_memory_t *Out0P)
{

	typedef __Reply__io_connect_map_memory_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 2919) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    ((msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	     (msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	      Out0P->RetCode == KERN_SUCCESS)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (Out0P->RetCode != KERN_SUCCESS) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	defined(__NDR_convert__int_rep__Reply__io_connect_map_memory_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_connect_map_memory_t__address__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_connect_map_memory_t__size__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__io_connect_map_memory_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__io_connect_map_memory_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_connect_map_memory_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__io_connect_map_memory_t__address__defined)
		__NDR_convert__int_rep__Reply__io_connect_map_memory_t__address(&Out0P->address, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_connect_map_memory_t__address__defined */
#if defined(__NDR_convert__int_rep__Reply__io_connect_map_memory_t__size__defined)
		__NDR_convert__int_rep__Reply__io_connect_map_memory_t__size(&Out0P->size, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_connect_map_memory_t__size__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__io_connect_map_memory_t__address__defined) || \
	defined(__NDR_convert__char_rep__Reply__io_connect_map_memory_t__size__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__io_connect_map_memory_t__address__defined)
		__NDR_convert__char_rep__Reply__io_connect_map_memory_t__address(&Out0P->address, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__io_connect_map_memory_t__address__defined */
#if defined(__NDR_convert__char_rep__Reply__io_connect_map_memory_t__size__defined)
		__NDR_convert__char_rep__Reply__io_connect_map_memory_t__size(&Out0P->size, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__io_connect_map_memory_t__size__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__io_connect_map_memory_t__address__defined) || \
	defined(__NDR_convert__float_rep__Reply__io_connect_map_memory_t__size__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__io_connect_map_memory_t__address__defined)
		__NDR_convert__float_rep__Reply__io_connect_map_memory_t__address(&Out0P->address, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__io_connect_map_memory_t__address__defined */
#if defined(__NDR_convert__float_rep__Reply__io_connect_map_memory_t__size__defined)
		__NDR_convert__float_rep__Reply__io_connect_map_memory_t__size(&Out0P->size, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__io_connect_map_memory_t__size__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_connect_map_memory_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_connect_map_memory */
mig_external kern_return_t io_connect_map_memory
(
	mach_port_t connection,
	uint32_t memory_type,
	task_t into_task,
	vm_address_t *address,
	vm_size_t *size,
	uint32_t flags
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t into_task;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint32_t memory_type;
		vm_address_t address;
		vm_size_t size;
		uint32_t flags;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		vm_address_t address;
		vm_size_t size;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		vm_address_t address;
		vm_size_t size;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__io_connect_map_memory_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_connect_map_memory_t__defined */

	__DeclareSendRpc(2819, "io_connect_map_memory")

#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t into_taskTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 1;
#if	UseStaticTemplates
	InP->into_task = into_taskTemplate;
	InP->into_task.name = into_task;
#else	/* UseStaticTemplates */
	InP->into_task.name = into_task;
	InP->into_task.disposition = 19;
	InP->into_task.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	InP->memory_type = memory_type;

	InP->address = *address;

	InP->size = *size;

	InP->flags = flags;

	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = connection;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2819;

	__BeforeSendRpc(2819, "io_connect_map_memory")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2819, "io_connect_map_memory")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_connect_map_memory_t__defined)
	check_result = __MIG_check__Reply__io_connect_map_memory_t((__Reply__io_connect_map_memory_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_connect_map_memory_t__defined) */

	*address = Out0P->address;

	*size = Out0P->size;

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_connect_add_client_t__defined)
#define __MIG_check__Reply__io_connect_add_client_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_connect_add_client_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_add_client_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_connect_add_client_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_add_client_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_connect_add_client_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_connect_add_client_t__RetCode__defined */





mig_internal kern_return_t __MIG_check__Reply__io_connect_add_client_t(__Reply__io_connect_add_client_t *Out0P)
{

	typedef __Reply__io_connect_add_client_t __Reply;
	if (Out0P->Head.msgh_id != 2920) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (Out0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Reply)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Reply__io_connect_add_client_t__RetCode__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__io_connect_add_client_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__io_connect_add_client_t__RetCode__defined */
	{
		return Out0P->RetCode;
	}
}
#endif /* !defined(__MIG_check__Reply__io_connect_add_client_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_connect_add_client */
mig_external kern_return_t io_connect_add_client
(
	mach_port_t connection,
	mach_port_t connect_to
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t connect_to;
		/* end of the kernel processed data */
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__io_connect_add_client_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_connect_add_client_t__defined */

	__DeclareSendRpc(2820, "io_connect_add_client")

#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t connect_toTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 1;
#if	UseStaticTemplates
	InP->connect_to = connect_toTemplate;
	InP->connect_to.name = connect_to;
#else	/* UseStaticTemplates */
	InP->connect_to.name = connect_to;
	InP->connect_to.disposition = 19;
	InP->connect_to.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = connection;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2820;

	__BeforeSendRpc(2820, "io_connect_add_client")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2820, "io_connect_add_client")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_connect_add_client_t__defined)
	check_result = __MIG_check__Reply__io_connect_add_client_t((__Reply__io_connect_add_client_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_connect_add_client_t__defined) */

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_connect_set_properties_t__defined)
#define __MIG_check__Reply__io_connect_set_properties_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_connect_set_properties_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_set_properties_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_connect_set_properties_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_set_properties_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_connect_set_properties_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_connect_set_properties_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__io_connect_set_properties_t__result__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_set_properties_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_connect_set_properties_t__result(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_set_properties_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_connect_set_properties_t__result(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_set_properties_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_connect_set_properties_t__result(a, f) \
	__NDR_convert__int_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_set_properties_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_connect_set_properties_t__result(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_set_properties_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_connect_set_properties_t__result(a, f) \
	__NDR_convert__int_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_set_properties_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_connect_set_properties_t__result(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_connect_set_properties_t__result__defined */



#ifndef __NDR_convert__char_rep__Reply__io_connect_set_properties_t__result__defined
#if	defined(__NDR_convert__char_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_set_properties_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_connect_set_properties_t__result(a, f) \
	__NDR_convert__char_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__kern_return_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_set_properties_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_connect_set_properties_t__result(a, f) \
	__NDR_convert__char_rep__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_set_properties_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_connect_set_properties_t__result(a, f) \
	__NDR_convert__char_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_set_properties_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_connect_set_properties_t__result(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_set_properties_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_connect_set_properties_t__result(a, f) \
	__NDR_convert__char_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_set_properties_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_connect_set_properties_t__result(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_connect_set_properties_t__result__defined */



#ifndef __NDR_convert__float_rep__Reply__io_connect_set_properties_t__result__defined
#if	defined(__NDR_convert__float_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_set_properties_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_connect_set_properties_t__result(a, f) \
	__NDR_convert__float_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__kern_return_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_set_properties_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_connect_set_properties_t__result(a, f) \
	__NDR_convert__float_rep__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_set_properties_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_connect_set_properties_t__result(a, f) \
	__NDR_convert__float_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_set_properties_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_connect_set_properties_t__result(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_set_properties_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_connect_set_properties_t__result(a, f) \
	__NDR_convert__float_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_set_properties_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_connect_set_properties_t__result(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_connect_set_properties_t__result__defined */



mig_internal kern_return_t __MIG_check__Reply__io_connect_set_properties_t(__Reply__io_connect_set_properties_t *Out0P)
{

	typedef __Reply__io_connect_set_properties_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 2921) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    ((msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	     (msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	      Out0P->RetCode == KERN_SUCCESS)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (Out0P->RetCode != KERN_SUCCESS) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	defined(__NDR_convert__int_rep__Reply__io_connect_set_properties_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_connect_set_properties_t__result__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__io_connect_set_properties_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__io_connect_set_properties_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_connect_set_properties_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__io_connect_set_properties_t__result__defined)
		__NDR_convert__int_rep__Reply__io_connect_set_properties_t__result(&Out0P->result, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_connect_set_properties_t__result__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__io_connect_set_properties_t__result__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__io_connect_set_properties_t__result__defined)
		__NDR_convert__char_rep__Reply__io_connect_set_properties_t__result(&Out0P->result, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__io_connect_set_properties_t__result__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__io_connect_set_properties_t__result__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__io_connect_set_properties_t__result__defined)
		__NDR_convert__float_rep__Reply__io_connect_set_properties_t__result(&Out0P->result, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__io_connect_set_properties_t__result__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_connect_set_properties_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_connect_set_properties */
mig_external kern_return_t io_connect_set_properties
(
	mach_port_t connection,
	io_buf_ptr_t properties,
	mach_msg_type_number_t propertiesCnt,
	kern_return_t *result
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t properties;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t propertiesCnt;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		kern_return_t result;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		kern_return_t result;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__io_connect_set_properties_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_connect_set_properties_t__defined */

	__DeclareSendRpc(2821, "io_connect_set_properties")

#if	UseStaticTemplates
	const static mach_msg_ool_descriptor_t propertiesTemplate = {
		/* addr = */		(void *)0,
		/* size = */		0,
		/* deal = */		FALSE,
		/* copy = */		MACH_MSG_PHYSICAL_COPY,
		/* pad2 = */		0,
		/* type = */		MACH_MSG_OOL_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 1;
#if	UseStaticTemplates
	InP->properties = propertiesTemplate;
	InP->properties.address = (void *)(properties);
	InP->properties.size = propertiesCnt;
#else	/* UseStaticTemplates */
	InP->properties.address = (void *)(properties);
	InP->properties.size = propertiesCnt;
	InP->properties.deallocate =  FALSE;
	InP->properties.copy = MACH_MSG_PHYSICAL_COPY;
	InP->properties.type = MACH_MSG_OOL_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	InP->propertiesCnt = propertiesCnt;

	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = connection;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2821;

	__BeforeSendRpc(2821, "io_connect_set_properties")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2821, "io_connect_set_properties")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_connect_set_properties_t__defined)
	check_result = __MIG_check__Reply__io_connect_set_properties_t((__Reply__io_connect_set_properties_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_connect_set_properties_t__defined) */

	*result = Out0P->result;

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_connect_method_scalarI_scalarO_t__defined)
#define __MIG_check__Reply__io_connect_method_scalarI_scalarO_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__output__defined
#if	defined(__NDR_convert__int_rep__iokit__io_scalar_inband_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__int_rep__iokit__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_scalar_inband_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__int_rep__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__iokit__io_user_scalar_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__ARRAY((io_user_scalar_t *)(a), f, c, __NDR_convert__int_rep__iokit__io_user_scalar_t)
#elif	defined(__NDR_convert__int_rep__io_user_scalar_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__ARRAY((io_user_scalar_t *)(a), f, c, __NDR_convert__int_rep__io_user_scalar_t)
#elif	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__int_rep__iokit__int)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__int_rep__int)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__int_rep__iokit__int32_t)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__int_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__output__defined */


#ifndef __NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__outputCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__outputCnt__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__outputCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__outputCnt__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__outputCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__outputCnt__defined */



#ifndef __NDR_convert__char_rep__Reply__io_connect_method_scalarI_scalarO_t__output__defined
#if	defined(__NDR_convert__char_rep__iokit__io_scalar_inband_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__char_rep__Reply__io_connect_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__char_rep__iokit__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_scalar_inband_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__char_rep__Reply__io_connect_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__char_rep__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__iokit__io_user_scalar_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__char_rep__Reply__io_connect_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__ARRAY((io_user_scalar_t *)(a), f, c, __NDR_convert__char_rep__iokit__io_user_scalar_t)
#elif	defined(__NDR_convert__char_rep__io_user_scalar_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__char_rep__Reply__io_connect_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__ARRAY((io_user_scalar_t *)(a), f, c, __NDR_convert__char_rep__io_user_scalar_t)
#elif	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__char_rep__Reply__io_connect_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__char_rep__iokit__int)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__char_rep__Reply__io_connect_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__char_rep__int)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__char_rep__Reply__io_connect_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__char_rep__iokit__int32_t)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__char_rep__Reply__io_connect_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__char_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_connect_method_scalarI_scalarO_t__output__defined */




#ifndef __NDR_convert__float_rep__Reply__io_connect_method_scalarI_scalarO_t__output__defined
#if	defined(__NDR_convert__float_rep__iokit__io_scalar_inband_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__float_rep__Reply__io_connect_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__float_rep__iokit__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_scalar_inband_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__float_rep__Reply__io_connect_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__float_rep__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__iokit__io_user_scalar_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__float_rep__Reply__io_connect_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__ARRAY((io_user_scalar_t *)(a), f, c, __NDR_convert__float_rep__iokit__io_user_scalar_t)
#elif	defined(__NDR_convert__float_rep__io_user_scalar_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__float_rep__Reply__io_connect_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__ARRAY((io_user_scalar_t *)(a), f, c, __NDR_convert__float_rep__io_user_scalar_t)
#elif	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__float_rep__Reply__io_connect_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__float_rep__iokit__int)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__float_rep__Reply__io_connect_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__float_rep__int)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__float_rep__Reply__io_connect_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__float_rep__iokit__int32_t)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__float_rep__Reply__io_connect_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__float_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_connect_method_scalarI_scalarO_t__output__defined */




mig_internal kern_return_t __MIG_check__Reply__io_connect_method_scalarI_scalarO_t(__Reply__io_connect_method_scalarI_scalarO_t *Out0P)
{

	typedef __Reply__io_connect_method_scalarI_scalarO_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

	if (Out0P->Head.msgh_id != 2922) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    ((msgh_size > (mach_msg_size_t)sizeof(__Reply) || msgh_size < (mach_msg_size_t)(sizeof(__Reply) - 64)) &&
	     (msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	      Out0P->RetCode == KERN_SUCCESS)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (Out0P->RetCode != KERN_SUCCESS) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if defined(__NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__outputCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__outputCnt(&Out0P->outputCnt, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__outputCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Reply) - 64) + ((4 * Out0P->outputCnt)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__output__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__outputCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__output__defined)
		__NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__output(&Out0P->output, Out0P->NDR.int_rep, Out0P->outputCnt);
#endif /* __NDR_convert__int_rep__Reply__io_connect_method_scalarI_scalarO_t__output__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__io_connect_method_scalarI_scalarO_t__output__defined) || \
	0
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__io_connect_method_scalarI_scalarO_t__output__defined)
		__NDR_convert__char_rep__Reply__io_connect_method_scalarI_scalarO_t__output(&Out0P->output, Out0P->NDR.char_rep, Out0P->outputCnt);
#endif /* __NDR_convert__char_rep__Reply__io_connect_method_scalarI_scalarO_t__output__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__io_connect_method_scalarI_scalarO_t__output__defined) || \
	0
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__io_connect_method_scalarI_scalarO_t__output__defined)
		__NDR_convert__float_rep__Reply__io_connect_method_scalarI_scalarO_t__output(&Out0P->output, Out0P->NDR.float_rep, Out0P->outputCnt);
#endif /* __NDR_convert__float_rep__Reply__io_connect_method_scalarI_scalarO_t__output__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_connect_method_scalarI_scalarO_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_connect_method_scalarI_scalarO */
mig_external kern_return_t io_connect_method_scalarI_scalarO
(
	mach_port_t connection,
	uint32_t selector,
	io_scalar_inband_t input,
	mach_msg_type_number_t inputCnt,
	io_scalar_inband_t output,
	mach_msg_type_number_t *outputCnt
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint32_t selector;
		mach_msg_type_number_t inputCnt;
		io_user_scalar_t input[16];
		mach_msg_type_number_t outputCnt;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t outputCnt;
		io_user_scalar_t output[16];
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t outputCnt;
		io_user_scalar_t output[16];
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;
	unsigned int msgh_size_delta;


#ifdef	__MIG_check__Reply__io_connect_method_scalarI_scalarO_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_connect_method_scalarI_scalarO_t__defined */

	__DeclareSendRpc(2822, "io_connect_method_scalarI_scalarO")

	InP->NDR = NDR_record;

	InP->selector = selector;

	if (inputCnt > 16) {
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) InP->input, (const char *) input, 4 * inputCnt);

	InP->inputCnt = inputCnt;

	msgh_size_delta = (4 * inputCnt);
	msgh_size = (mach_msg_size_t)(sizeof(Request) - 64) + msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 64);

	if (*outputCnt < 16)
		InP->outputCnt = *outputCnt;
	else
		InP->outputCnt = 16;

	InP = &Mess.In;
	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = connection;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2822;

	__BeforeSendRpc(2822, "io_connect_method_scalarI_scalarO")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, msgh_size, (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2822, "io_connect_method_scalarI_scalarO")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_connect_method_scalarI_scalarO_t__defined)
	check_result = __MIG_check__Reply__io_connect_method_scalarI_scalarO_t((__Reply__io_connect_method_scalarI_scalarO_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_connect_method_scalarI_scalarO_t__defined) */

	if (Out0P->outputCnt > *outputCnt) {
		(void)memcpy((char *) output, (const char *) Out0P->output, 4 *  *outputCnt);
		*outputCnt = Out0P->outputCnt;
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) output, (const char *) Out0P->output, 4 * Out0P->outputCnt);

	*outputCnt = Out0P->outputCnt;

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_connect_method_scalarI_structureO_t__defined)
#define __MIG_check__Reply__io_connect_method_scalarI_structureO_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureO_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureO_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureO_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureO_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureO_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureO_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureO_t__output__defined
#if	defined(__NDR_convert__int_rep__iokit__io_struct_inband_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureO_t__output__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureO_t__output(a, f, c) \
	__NDR_convert__int_rep__iokit__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_struct_inband_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureO_t__output__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureO_t__output(a, f, c) \
	__NDR_convert__int_rep__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__iokit__char__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureO_t__output__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureO_t__output(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__int_rep__iokit__char)
#elif	defined(__NDR_convert__int_rep__char__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureO_t__output__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureO_t__output(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__int_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureO_t__output__defined */


#ifndef __NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureO_t__outputCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureO_t__outputCnt__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureO_t__outputCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureO_t__outputCnt__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureO_t__outputCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureO_t__outputCnt__defined */



#ifndef __NDR_convert__char_rep__Reply__io_connect_method_scalarI_structureO_t__output__defined
#if	defined(__NDR_convert__char_rep__iokit__io_struct_inband_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_method_scalarI_structureO_t__output__defined
#define	__NDR_convert__char_rep__Reply__io_connect_method_scalarI_structureO_t__output(a, f, c) \
	__NDR_convert__char_rep__iokit__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_struct_inband_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_method_scalarI_structureO_t__output__defined
#define	__NDR_convert__char_rep__Reply__io_connect_method_scalarI_structureO_t__output(a, f, c) \
	__NDR_convert__char_rep__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__iokit__char__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_method_scalarI_structureO_t__output__defined
#define	__NDR_convert__char_rep__Reply__io_connect_method_scalarI_structureO_t__output(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__char_rep__iokit__char)
#elif	defined(__NDR_convert__char_rep__char__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_method_scalarI_structureO_t__output__defined
#define	__NDR_convert__char_rep__Reply__io_connect_method_scalarI_structureO_t__output(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__char_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_connect_method_scalarI_structureO_t__output__defined */




#ifndef __NDR_convert__float_rep__Reply__io_connect_method_scalarI_structureO_t__output__defined
#if	defined(__NDR_convert__float_rep__iokit__io_struct_inband_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_method_scalarI_structureO_t__output__defined
#define	__NDR_convert__float_rep__Reply__io_connect_method_scalarI_structureO_t__output(a, f, c) \
	__NDR_convert__float_rep__iokit__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_struct_inband_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_method_scalarI_structureO_t__output__defined
#define	__NDR_convert__float_rep__Reply__io_connect_method_scalarI_structureO_t__output(a, f, c) \
	__NDR_convert__float_rep__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__iokit__char__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_method_scalarI_structureO_t__output__defined
#define	__NDR_convert__float_rep__Reply__io_connect_method_scalarI_structureO_t__output(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__float_rep__iokit__char)
#elif	defined(__NDR_convert__float_rep__char__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_method_scalarI_structureO_t__output__defined
#define	__NDR_convert__float_rep__Reply__io_connect_method_scalarI_structureO_t__output(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__float_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_connect_method_scalarI_structureO_t__output__defined */




mig_internal kern_return_t __MIG_check__Reply__io_connect_method_scalarI_structureO_t(__Reply__io_connect_method_scalarI_structureO_t *Out0P)
{

	typedef __Reply__io_connect_method_scalarI_structureO_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

	if (Out0P->Head.msgh_id != 2923) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    ((msgh_size > (mach_msg_size_t)sizeof(__Reply) || msgh_size < (mach_msg_size_t)(sizeof(__Reply) - 4096)) &&
	     (msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	      Out0P->RetCode == KERN_SUCCESS)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (Out0P->RetCode != KERN_SUCCESS) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if defined(__NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureO_t__outputCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureO_t__outputCnt(&Out0P->outputCnt, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureO_t__outputCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Reply) - 4096) + (_WALIGN_(Out0P->outputCnt)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureO_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureO_t__output__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureO_t__outputCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureO_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureO_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureO_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureO_t__output__defined)
		__NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureO_t__output(&Out0P->output, Out0P->NDR.int_rep, Out0P->outputCnt);
#endif /* __NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureO_t__output__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__io_connect_method_scalarI_structureO_t__output__defined) || \
	0
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__io_connect_method_scalarI_structureO_t__output__defined)
		__NDR_convert__char_rep__Reply__io_connect_method_scalarI_structureO_t__output(&Out0P->output, Out0P->NDR.char_rep, Out0P->outputCnt);
#endif /* __NDR_convert__char_rep__Reply__io_connect_method_scalarI_structureO_t__output__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__io_connect_method_scalarI_structureO_t__output__defined) || \
	0
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__io_connect_method_scalarI_structureO_t__output__defined)
		__NDR_convert__float_rep__Reply__io_connect_method_scalarI_structureO_t__output(&Out0P->output, Out0P->NDR.float_rep, Out0P->outputCnt);
#endif /* __NDR_convert__float_rep__Reply__io_connect_method_scalarI_structureO_t__output__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_connect_method_scalarI_structureO_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_connect_method_scalarI_structureO */
mig_external kern_return_t io_connect_method_scalarI_structureO
(
	mach_port_t connection,
	uint32_t selector,
	io_scalar_inband_t input,
	mach_msg_type_number_t inputCnt,
	io_struct_inband_t output,
	mach_msg_type_number_t *outputCnt
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint32_t selector;
		mach_msg_type_number_t inputCnt;
		io_user_scalar_t input[16];
		mach_msg_type_number_t outputCnt;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t outputCnt;
		char output[4096];
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t outputCnt;
		char output[4096];
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;
	unsigned int msgh_size_delta;


#ifdef	__MIG_check__Reply__io_connect_method_scalarI_structureO_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_connect_method_scalarI_structureO_t__defined */

	__DeclareSendRpc(2823, "io_connect_method_scalarI_structureO")

	InP->NDR = NDR_record;

	InP->selector = selector;

	if (inputCnt > 16) {
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) InP->input, (const char *) input, 4 * inputCnt);

	InP->inputCnt = inputCnt;

	msgh_size_delta = (4 * inputCnt);
	msgh_size = (mach_msg_size_t)(sizeof(Request) - 64) + msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 64);

	if (*outputCnt < 4096)
		InP->outputCnt = *outputCnt;
	else
		InP->outputCnt = 4096;

	InP = &Mess.In;
	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = connection;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2823;

	__BeforeSendRpc(2823, "io_connect_method_scalarI_structureO")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, msgh_size, (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2823, "io_connect_method_scalarI_structureO")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_connect_method_scalarI_structureO_t__defined)
	check_result = __MIG_check__Reply__io_connect_method_scalarI_structureO_t((__Reply__io_connect_method_scalarI_structureO_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_connect_method_scalarI_structureO_t__defined) */

	if (Out0P->outputCnt > *outputCnt) {
		(void)memcpy((char *) output, (const char *) Out0P->output,  *outputCnt);
		*outputCnt = Out0P->outputCnt;
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) output, (const char *) Out0P->output, Out0P->outputCnt);

	*outputCnt = Out0P->outputCnt;

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_connect_method_scalarI_structureI_t__defined)
#define __MIG_check__Reply__io_connect_method_scalarI_structureI_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureI_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureI_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureI_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureI_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureI_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureI_t__RetCode__defined */





mig_internal kern_return_t __MIG_check__Reply__io_connect_method_scalarI_structureI_t(__Reply__io_connect_method_scalarI_structureI_t *Out0P)
{

	typedef __Reply__io_connect_method_scalarI_structureI_t __Reply;
	if (Out0P->Head.msgh_id != 2924) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (Out0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Reply)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureI_t__RetCode__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureI_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__io_connect_method_scalarI_structureI_t__RetCode__defined */
	{
		return Out0P->RetCode;
	}
}
#endif /* !defined(__MIG_check__Reply__io_connect_method_scalarI_structureI_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_connect_method_scalarI_structureI */
mig_external kern_return_t io_connect_method_scalarI_structureI
(
	mach_port_t connection,
	uint32_t selector,
	io_scalar_inband_t input,
	mach_msg_type_number_t inputCnt,
	io_struct_inband_t inputStruct,
	mach_msg_type_number_t inputStructCnt
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint32_t selector;
		mach_msg_type_number_t inputCnt;
		io_user_scalar_t input[16];
		mach_msg_type_number_t inputStructCnt;
		char inputStruct[4096];
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;
	unsigned int msgh_size_delta;


#ifdef	__MIG_check__Reply__io_connect_method_scalarI_structureI_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_connect_method_scalarI_structureI_t__defined */

	__DeclareSendRpc(2824, "io_connect_method_scalarI_structureI")

	InP->NDR = NDR_record;

	InP->selector = selector;

	if (inputCnt > 16) {
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) InP->input, (const char *) input, 4 * inputCnt);

	InP->inputCnt = inputCnt;

	msgh_size_delta = (4 * inputCnt);
	msgh_size = (mach_msg_size_t)(sizeof(Request) - 4160) + msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 64);

	if (inputStructCnt > 4096) {
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) InP->inputStruct, (const char *) inputStruct, inputStructCnt);

	InP->inputStructCnt = inputStructCnt;

	msgh_size += _WALIGN_(inputStructCnt);
	InP = &Mess.In;
	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = connection;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2824;

	__BeforeSendRpc(2824, "io_connect_method_scalarI_structureI")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, msgh_size, (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2824, "io_connect_method_scalarI_structureI")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_connect_method_scalarI_structureI_t__defined)
	check_result = __MIG_check__Reply__io_connect_method_scalarI_structureI_t((__Reply__io_connect_method_scalarI_structureI_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_connect_method_scalarI_structureI_t__defined) */

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_connect_method_structureI_structureO_t__defined)
#define __MIG_check__Reply__io_connect_method_structureI_structureO_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_connect_method_structureI_structureO_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_structureI_structureO_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_structureI_structureO_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_structureI_structureO_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_structureI_structureO_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_connect_method_structureI_structureO_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__io_connect_method_structureI_structureO_t__output__defined
#if	defined(__NDR_convert__int_rep__iokit__io_struct_inband_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_structureI_structureO_t__output__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_structureI_structureO_t__output(a, f, c) \
	__NDR_convert__int_rep__iokit__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_struct_inband_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_structureI_structureO_t__output__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_structureI_structureO_t__output(a, f, c) \
	__NDR_convert__int_rep__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__iokit__char__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_structureI_structureO_t__output__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_structureI_structureO_t__output(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__int_rep__iokit__char)
#elif	defined(__NDR_convert__int_rep__char__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_structureI_structureO_t__output__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_structureI_structureO_t__output(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__int_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_connect_method_structureI_structureO_t__output__defined */


#ifndef __NDR_convert__int_rep__Reply__io_connect_method_structureI_structureO_t__outputCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_structureI_structureO_t__outputCnt__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_structureI_structureO_t__outputCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_structureI_structureO_t__outputCnt__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_structureI_structureO_t__outputCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_connect_method_structureI_structureO_t__outputCnt__defined */



#ifndef __NDR_convert__char_rep__Reply__io_connect_method_structureI_structureO_t__output__defined
#if	defined(__NDR_convert__char_rep__iokit__io_struct_inband_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_method_structureI_structureO_t__output__defined
#define	__NDR_convert__char_rep__Reply__io_connect_method_structureI_structureO_t__output(a, f, c) \
	__NDR_convert__char_rep__iokit__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_struct_inband_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_method_structureI_structureO_t__output__defined
#define	__NDR_convert__char_rep__Reply__io_connect_method_structureI_structureO_t__output(a, f, c) \
	__NDR_convert__char_rep__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__iokit__char__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_method_structureI_structureO_t__output__defined
#define	__NDR_convert__char_rep__Reply__io_connect_method_structureI_structureO_t__output(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__char_rep__iokit__char)
#elif	defined(__NDR_convert__char_rep__char__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_method_structureI_structureO_t__output__defined
#define	__NDR_convert__char_rep__Reply__io_connect_method_structureI_structureO_t__output(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__char_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_connect_method_structureI_structureO_t__output__defined */




#ifndef __NDR_convert__float_rep__Reply__io_connect_method_structureI_structureO_t__output__defined
#if	defined(__NDR_convert__float_rep__iokit__io_struct_inband_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_method_structureI_structureO_t__output__defined
#define	__NDR_convert__float_rep__Reply__io_connect_method_structureI_structureO_t__output(a, f, c) \
	__NDR_convert__float_rep__iokit__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_struct_inband_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_method_structureI_structureO_t__output__defined
#define	__NDR_convert__float_rep__Reply__io_connect_method_structureI_structureO_t__output(a, f, c) \
	__NDR_convert__float_rep__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__iokit__char__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_method_structureI_structureO_t__output__defined
#define	__NDR_convert__float_rep__Reply__io_connect_method_structureI_structureO_t__output(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__float_rep__iokit__char)
#elif	defined(__NDR_convert__float_rep__char__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_method_structureI_structureO_t__output__defined
#define	__NDR_convert__float_rep__Reply__io_connect_method_structureI_structureO_t__output(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__float_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_connect_method_structureI_structureO_t__output__defined */




mig_internal kern_return_t __MIG_check__Reply__io_connect_method_structureI_structureO_t(__Reply__io_connect_method_structureI_structureO_t *Out0P)
{

	typedef __Reply__io_connect_method_structureI_structureO_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

	if (Out0P->Head.msgh_id != 2925) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    ((msgh_size > (mach_msg_size_t)sizeof(__Reply) || msgh_size < (mach_msg_size_t)(sizeof(__Reply) - 4096)) &&
	     (msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	      Out0P->RetCode == KERN_SUCCESS)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (Out0P->RetCode != KERN_SUCCESS) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if defined(__NDR_convert__int_rep__Reply__io_connect_method_structureI_structureO_t__outputCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__io_connect_method_structureI_structureO_t__outputCnt(&Out0P->outputCnt, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__io_connect_method_structureI_structureO_t__outputCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Reply) - 4096) + (_WALIGN_(Out0P->outputCnt)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Reply__io_connect_method_structureI_structureO_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_connect_method_structureI_structureO_t__output__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_connect_method_structureI_structureO_t__outputCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__io_connect_method_structureI_structureO_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__io_connect_method_structureI_structureO_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_connect_method_structureI_structureO_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__io_connect_method_structureI_structureO_t__output__defined)
		__NDR_convert__int_rep__Reply__io_connect_method_structureI_structureO_t__output(&Out0P->output, Out0P->NDR.int_rep, Out0P->outputCnt);
#endif /* __NDR_convert__int_rep__Reply__io_connect_method_structureI_structureO_t__output__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__io_connect_method_structureI_structureO_t__output__defined) || \
	0
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__io_connect_method_structureI_structureO_t__output__defined)
		__NDR_convert__char_rep__Reply__io_connect_method_structureI_structureO_t__output(&Out0P->output, Out0P->NDR.char_rep, Out0P->outputCnt);
#endif /* __NDR_convert__char_rep__Reply__io_connect_method_structureI_structureO_t__output__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__io_connect_method_structureI_structureO_t__output__defined) || \
	0
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__io_connect_method_structureI_structureO_t__output__defined)
		__NDR_convert__float_rep__Reply__io_connect_method_structureI_structureO_t__output(&Out0P->output, Out0P->NDR.float_rep, Out0P->outputCnt);
#endif /* __NDR_convert__float_rep__Reply__io_connect_method_structureI_structureO_t__output__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_connect_method_structureI_structureO_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_connect_method_structureI_structureO */
mig_external kern_return_t io_connect_method_structureI_structureO
(
	mach_port_t connection,
	uint32_t selector,
	io_struct_inband_t input,
	mach_msg_type_number_t inputCnt,
	io_struct_inband_t output,
	mach_msg_type_number_t *outputCnt
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint32_t selector;
		mach_msg_type_number_t inputCnt;
		char input[4096];
		mach_msg_type_number_t outputCnt;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t outputCnt;
		char output[4096];
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t outputCnt;
		char output[4096];
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;
	unsigned int msgh_size_delta;


#ifdef	__MIG_check__Reply__io_connect_method_structureI_structureO_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_connect_method_structureI_structureO_t__defined */

	__DeclareSendRpc(2825, "io_connect_method_structureI_structureO")

	InP->NDR = NDR_record;

	InP->selector = selector;

	if (inputCnt > 4096) {
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) InP->input, (const char *) input, inputCnt);

	InP->inputCnt = inputCnt;

	msgh_size_delta = _WALIGN_(inputCnt);
	msgh_size = (mach_msg_size_t)(sizeof(Request) - 4096) + msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 4096);

	if (*outputCnt < 4096)
		InP->outputCnt = *outputCnt;
	else
		InP->outputCnt = 4096;

	InP = &Mess.In;
	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = connection;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2825;

	__BeforeSendRpc(2825, "io_connect_method_structureI_structureO")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, msgh_size, (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2825, "io_connect_method_structureI_structureO")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_connect_method_structureI_structureO_t__defined)
	check_result = __MIG_check__Reply__io_connect_method_structureI_structureO_t((__Reply__io_connect_method_structureI_structureO_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_connect_method_structureI_structureO_t__defined) */

	if (Out0P->outputCnt > *outputCnt) {
		(void)memcpy((char *) output, (const char *) Out0P->output,  *outputCnt);
		*outputCnt = Out0P->outputCnt;
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) output, (const char *) Out0P->output, Out0P->outputCnt);

	*outputCnt = Out0P->outputCnt;

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_registry_entry_get_path_t__defined)
#define __MIG_check__Reply__io_registry_entry_get_path_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_registry_entry_get_path_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_path_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_path_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_path_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_path_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_get_path_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__io_registry_entry_get_path_t__path__defined
#if	defined(__NDR_convert__int_rep__iokit__io_string_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_path_t__path__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_path_t__path(a, f, c) \
	__NDR_convert__int_rep__iokit__io_string_t((io_string_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_string_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_path_t__path__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_path_t__path(a, f, c) \
	__NDR_convert__int_rep__io_string_t((io_string_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_get_path_t__path__defined */


#ifndef __NDR_convert__int_rep__Reply__io_registry_entry_get_path_t__pathCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_path_t__pathCnt__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_path_t__pathCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_path_t__pathCnt__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_path_t__pathCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_get_path_t__pathCnt__defined */



#ifndef __NDR_convert__char_rep__Reply__io_registry_entry_get_path_t__path__defined
#if	defined(__NDR_convert__char_rep__iokit__io_string_t__defined)
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_path_t__path__defined
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_path_t__path(a, f, c) \
	__NDR_convert__char_rep__iokit__io_string_t((io_string_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_string_t__defined)
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_path_t__path__defined
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_path_t__path(a, f, c) \
	__NDR_convert__char_rep__io_string_t((io_string_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_registry_entry_get_path_t__path__defined */




#ifndef __NDR_convert__float_rep__Reply__io_registry_entry_get_path_t__path__defined
#if	defined(__NDR_convert__float_rep__iokit__io_string_t__defined)
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_path_t__path__defined
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_path_t__path(a, f, c) \
	__NDR_convert__float_rep__iokit__io_string_t((io_string_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_string_t__defined)
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_path_t__path__defined
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_path_t__path(a, f, c) \
	__NDR_convert__float_rep__io_string_t((io_string_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_registry_entry_get_path_t__path__defined */




mig_internal kern_return_t __MIG_check__Reply__io_registry_entry_get_path_t(__Reply__io_registry_entry_get_path_t *Out0P)
{

	typedef __Reply__io_registry_entry_get_path_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

	if (Out0P->Head.msgh_id != 2926) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    ((msgh_size > (mach_msg_size_t)sizeof(__Reply) || msgh_size < (mach_msg_size_t)(sizeof(__Reply) - 512)) &&
	     (msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	      Out0P->RetCode == KERN_SUCCESS)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (Out0P->RetCode != KERN_SUCCESS) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_path_t__pathCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__io_registry_entry_get_path_t__pathCnt(&Out0P->pathCnt, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__io_registry_entry_get_path_t__pathCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Reply) - 512) + (_WALIGN_(Out0P->pathCnt)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_path_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_path_t__path__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_path_t__pathCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_path_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__io_registry_entry_get_path_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_get_path_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_path_t__path__defined)
		__NDR_convert__int_rep__Reply__io_registry_entry_get_path_t__path(&Out0P->path, Out0P->NDR.int_rep, Out0P->pathCnt);
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_get_path_t__path__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__io_registry_entry_get_path_t__path__defined) || \
	0
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__io_registry_entry_get_path_t__path__defined)
		__NDR_convert__char_rep__Reply__io_registry_entry_get_path_t__path(&Out0P->path, Out0P->NDR.char_rep, Out0P->pathCnt);
#endif /* __NDR_convert__char_rep__Reply__io_registry_entry_get_path_t__path__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__io_registry_entry_get_path_t__path__defined) || \
	0
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__io_registry_entry_get_path_t__path__defined)
		__NDR_convert__float_rep__Reply__io_registry_entry_get_path_t__path(&Out0P->path, Out0P->NDR.float_rep, Out0P->pathCnt);
#endif /* __NDR_convert__float_rep__Reply__io_registry_entry_get_path_t__path__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_registry_entry_get_path_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_registry_entry_get_path */
mig_external kern_return_t io_registry_entry_get_path
(
	mach_port_t registry_entry,
	io_name_t plane,
	io_string_t path
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t planeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t planeCnt;
		char plane[128];
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t pathOffset; /* MiG doesn't use it */
		mach_msg_type_number_t pathCnt;
		char path[512];
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t pathOffset; /* MiG doesn't use it */
		mach_msg_type_number_t pathCnt;
		char path[512];
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;

#ifdef	__MIG_check__Reply__io_registry_entry_get_path_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_registry_entry_get_path_t__defined */

	__DeclareSendRpc(2826, "io_registry_entry_get_path")

	InP->NDR = NDR_record;

	InP->planeCnt = mig_strncpy(InP->plane, plane, 128);

	msgh_size = (mach_msg_size_t)(sizeof(Request) - 128) + (_WALIGN_(InP->planeCnt));
	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = registry_entry;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2826;

	__BeforeSendRpc(2826, "io_registry_entry_get_path")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, msgh_size, (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2826, "io_registry_entry_get_path")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_registry_entry_get_path_t__defined)
	check_result = __MIG_check__Reply__io_registry_entry_get_path_t((__Reply__io_registry_entry_get_path_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_registry_entry_get_path_t__defined) */

	(void) mig_strncpy(path, Out0P->path, 512);

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_registry_get_root_entry_t__defined)
#define __MIG_check__Reply__io_registry_get_root_entry_t__defined

mig_internal kern_return_t __MIG_check__Reply__io_registry_get_root_entry_t(__Reply__io_registry_get_root_entry_t *Out0P)
{

	typedef __Reply__io_registry_get_root_entry_t __Reply;
	boolean_t msgh_simple;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 2927) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

	msgh_simple = !(Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX);
#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((msgh_simple || Out0P->msgh_body.msgh_descriptor_count != 1 ||
	    msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	    (!msgh_simple || msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	    ((mig_reply_error_t *)Out0P)->RetCode == KERN_SUCCESS))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (msgh_simple) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	__MigTypeCheck
	if (Out0P->root.type != MACH_MSG_PORT_DESCRIPTOR ||
	    Out0P->root.disposition != 17) {
		return MIG_TYPE_ERROR;
	}
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_registry_get_root_entry_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_registry_get_root_entry */
mig_external kern_return_t io_registry_get_root_entry
(
	mach_port_t master_port,
	mach_port_t *root
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t root;
		/* end of the kernel processed data */
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t root;
		/* end of the kernel processed data */
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__io_registry_get_root_entry_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_registry_get_root_entry_t__defined */

	__DeclareSendRpc(2827, "io_registry_get_root_entry")

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = master_port;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2827;

	__BeforeSendRpc(2827, "io_registry_get_root_entry")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2827, "io_registry_get_root_entry")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_registry_get_root_entry_t__defined)
	check_result = __MIG_check__Reply__io_registry_get_root_entry_t((__Reply__io_registry_get_root_entry_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_registry_get_root_entry_t__defined) */

	*root = Out0P->root.name;
	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_registry_entry_set_properties_t__defined)
#define __MIG_check__Reply__io_registry_entry_set_properties_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_registry_entry_set_properties_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_set_properties_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_set_properties_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_set_properties_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_set_properties_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_set_properties_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__io_registry_entry_set_properties_t__result__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_set_properties_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_set_properties_t__result(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_set_properties_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_set_properties_t__result(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_set_properties_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_set_properties_t__result(a, f) \
	__NDR_convert__int_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_set_properties_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_set_properties_t__result(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_set_properties_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_set_properties_t__result(a, f) \
	__NDR_convert__int_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_set_properties_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_set_properties_t__result(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_set_properties_t__result__defined */



#ifndef __NDR_convert__char_rep__Reply__io_registry_entry_set_properties_t__result__defined
#if	defined(__NDR_convert__char_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__char_rep__Reply__io_registry_entry_set_properties_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_registry_entry_set_properties_t__result(a, f) \
	__NDR_convert__char_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__kern_return_t__defined)
#define	__NDR_convert__char_rep__Reply__io_registry_entry_set_properties_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_registry_entry_set_properties_t__result(a, f) \
	__NDR_convert__char_rep__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Reply__io_registry_entry_set_properties_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_registry_entry_set_properties_t__result(a, f) \
	__NDR_convert__char_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Reply__io_registry_entry_set_properties_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_registry_entry_set_properties_t__result(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__io_registry_entry_set_properties_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_registry_entry_set_properties_t__result(a, f) \
	__NDR_convert__char_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__io_registry_entry_set_properties_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_registry_entry_set_properties_t__result(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_registry_entry_set_properties_t__result__defined */



#ifndef __NDR_convert__float_rep__Reply__io_registry_entry_set_properties_t__result__defined
#if	defined(__NDR_convert__float_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__float_rep__Reply__io_registry_entry_set_properties_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_registry_entry_set_properties_t__result(a, f) \
	__NDR_convert__float_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__kern_return_t__defined)
#define	__NDR_convert__float_rep__Reply__io_registry_entry_set_properties_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_registry_entry_set_properties_t__result(a, f) \
	__NDR_convert__float_rep__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Reply__io_registry_entry_set_properties_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_registry_entry_set_properties_t__result(a, f) \
	__NDR_convert__float_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Reply__io_registry_entry_set_properties_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_registry_entry_set_properties_t__result(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__io_registry_entry_set_properties_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_registry_entry_set_properties_t__result(a, f) \
	__NDR_convert__float_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__io_registry_entry_set_properties_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_registry_entry_set_properties_t__result(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_registry_entry_set_properties_t__result__defined */



mig_internal kern_return_t __MIG_check__Reply__io_registry_entry_set_properties_t(__Reply__io_registry_entry_set_properties_t *Out0P)
{

	typedef __Reply__io_registry_entry_set_properties_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 2928) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    ((msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	     (msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	      Out0P->RetCode == KERN_SUCCESS)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (Out0P->RetCode != KERN_SUCCESS) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	defined(__NDR_convert__int_rep__Reply__io_registry_entry_set_properties_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_registry_entry_set_properties_t__result__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__io_registry_entry_set_properties_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__io_registry_entry_set_properties_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_set_properties_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__io_registry_entry_set_properties_t__result__defined)
		__NDR_convert__int_rep__Reply__io_registry_entry_set_properties_t__result(&Out0P->result, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_set_properties_t__result__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__io_registry_entry_set_properties_t__result__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__io_registry_entry_set_properties_t__result__defined)
		__NDR_convert__char_rep__Reply__io_registry_entry_set_properties_t__result(&Out0P->result, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__io_registry_entry_set_properties_t__result__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__io_registry_entry_set_properties_t__result__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__io_registry_entry_set_properties_t__result__defined)
		__NDR_convert__float_rep__Reply__io_registry_entry_set_properties_t__result(&Out0P->result, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__io_registry_entry_set_properties_t__result__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_registry_entry_set_properties_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_registry_entry_set_properties */
mig_external kern_return_t io_registry_entry_set_properties
(
	mach_port_t registry_entry,
	io_buf_ptr_t properties,
	mach_msg_type_number_t propertiesCnt,
	kern_return_t *result
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t properties;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t propertiesCnt;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		kern_return_t result;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		kern_return_t result;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__io_registry_entry_set_properties_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_registry_entry_set_properties_t__defined */

	__DeclareSendRpc(2828, "io_registry_entry_set_properties")

#if	UseStaticTemplates
	const static mach_msg_ool_descriptor_t propertiesTemplate = {
		/* addr = */		(void *)0,
		/* size = */		0,
		/* deal = */		FALSE,
		/* copy = */		MACH_MSG_PHYSICAL_COPY,
		/* pad2 = */		0,
		/* type = */		MACH_MSG_OOL_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 1;
#if	UseStaticTemplates
	InP->properties = propertiesTemplate;
	InP->properties.address = (void *)(properties);
	InP->properties.size = propertiesCnt;
#else	/* UseStaticTemplates */
	InP->properties.address = (void *)(properties);
	InP->properties.size = propertiesCnt;
	InP->properties.deallocate =  FALSE;
	InP->properties.copy = MACH_MSG_PHYSICAL_COPY;
	InP->properties.type = MACH_MSG_OOL_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	InP->propertiesCnt = propertiesCnt;

	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = registry_entry;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2828;

	__BeforeSendRpc(2828, "io_registry_entry_set_properties")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2828, "io_registry_entry_set_properties")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_registry_entry_set_properties_t__defined)
	check_result = __MIG_check__Reply__io_registry_entry_set_properties_t((__Reply__io_registry_entry_set_properties_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_registry_entry_set_properties_t__defined) */

	*result = Out0P->result;

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_registry_entry_in_plane_t__defined)
#define __MIG_check__Reply__io_registry_entry_in_plane_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_registry_entry_in_plane_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_in_plane_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_in_plane_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_in_plane_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_in_plane_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_in_plane_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__io_registry_entry_in_plane_t__inPlane__defined
#if	defined(__NDR_convert__int_rep__iokit__boolean_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_in_plane_t__inPlane__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_in_plane_t__inPlane(a, f) \
	__NDR_convert__int_rep__iokit__boolean_t((boolean_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__boolean_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_in_plane_t__inPlane__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_in_plane_t__inPlane(a, f) \
	__NDR_convert__int_rep__boolean_t((boolean_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_in_plane_t__inPlane__defined */



#ifndef __NDR_convert__char_rep__Reply__io_registry_entry_in_plane_t__inPlane__defined
#if	defined(__NDR_convert__char_rep__iokit__boolean_t__defined)
#define	__NDR_convert__char_rep__Reply__io_registry_entry_in_plane_t__inPlane__defined
#define	__NDR_convert__char_rep__Reply__io_registry_entry_in_plane_t__inPlane(a, f) \
	__NDR_convert__char_rep__iokit__boolean_t((boolean_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__boolean_t__defined)
#define	__NDR_convert__char_rep__Reply__io_registry_entry_in_plane_t__inPlane__defined
#define	__NDR_convert__char_rep__Reply__io_registry_entry_in_plane_t__inPlane(a, f) \
	__NDR_convert__char_rep__boolean_t((boolean_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_registry_entry_in_plane_t__inPlane__defined */



#ifndef __NDR_convert__float_rep__Reply__io_registry_entry_in_plane_t__inPlane__defined
#if	defined(__NDR_convert__float_rep__iokit__boolean_t__defined)
#define	__NDR_convert__float_rep__Reply__io_registry_entry_in_plane_t__inPlane__defined
#define	__NDR_convert__float_rep__Reply__io_registry_entry_in_plane_t__inPlane(a, f) \
	__NDR_convert__float_rep__iokit__boolean_t((boolean_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__boolean_t__defined)
#define	__NDR_convert__float_rep__Reply__io_registry_entry_in_plane_t__inPlane__defined
#define	__NDR_convert__float_rep__Reply__io_registry_entry_in_plane_t__inPlane(a, f) \
	__NDR_convert__float_rep__boolean_t((boolean_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_registry_entry_in_plane_t__inPlane__defined */



mig_internal kern_return_t __MIG_check__Reply__io_registry_entry_in_plane_t(__Reply__io_registry_entry_in_plane_t *Out0P)
{

	typedef __Reply__io_registry_entry_in_plane_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 2929) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    ((msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	     (msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	      Out0P->RetCode == KERN_SUCCESS)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (Out0P->RetCode != KERN_SUCCESS) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	defined(__NDR_convert__int_rep__Reply__io_registry_entry_in_plane_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_registry_entry_in_plane_t__inPlane__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__io_registry_entry_in_plane_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__io_registry_entry_in_plane_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_in_plane_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__io_registry_entry_in_plane_t__inPlane__defined)
		__NDR_convert__int_rep__Reply__io_registry_entry_in_plane_t__inPlane(&Out0P->inPlane, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_in_plane_t__inPlane__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__io_registry_entry_in_plane_t__inPlane__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__io_registry_entry_in_plane_t__inPlane__defined)
		__NDR_convert__char_rep__Reply__io_registry_entry_in_plane_t__inPlane(&Out0P->inPlane, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__io_registry_entry_in_plane_t__inPlane__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__io_registry_entry_in_plane_t__inPlane__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__io_registry_entry_in_plane_t__inPlane__defined)
		__NDR_convert__float_rep__Reply__io_registry_entry_in_plane_t__inPlane(&Out0P->inPlane, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__io_registry_entry_in_plane_t__inPlane__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_registry_entry_in_plane_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_registry_entry_in_plane */
mig_external kern_return_t io_registry_entry_in_plane
(
	mach_port_t registry_entry,
	io_name_t plane,
	boolean_t *inPlane
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t planeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t planeCnt;
		char plane[128];
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		boolean_t inPlane;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		boolean_t inPlane;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;

#ifdef	__MIG_check__Reply__io_registry_entry_in_plane_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_registry_entry_in_plane_t__defined */

	__DeclareSendRpc(2829, "io_registry_entry_in_plane")

	InP->NDR = NDR_record;

	InP->planeCnt = mig_strncpy(InP->plane, plane, 128);

	msgh_size = (mach_msg_size_t)(sizeof(Request) - 128) + (_WALIGN_(InP->planeCnt));
	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = registry_entry;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2829;

	__BeforeSendRpc(2829, "io_registry_entry_in_plane")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, msgh_size, (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2829, "io_registry_entry_in_plane")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_registry_entry_in_plane_t__defined)
	check_result = __MIG_check__Reply__io_registry_entry_in_plane_t((__Reply__io_registry_entry_in_plane_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_registry_entry_in_plane_t__defined) */

	*inPlane = Out0P->inPlane;

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_object_get_retain_count_t__defined)
#define __MIG_check__Reply__io_object_get_retain_count_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_object_get_retain_count_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_object_get_retain_count_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_object_get_retain_count_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_object_get_retain_count_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_object_get_retain_count_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_object_get_retain_count_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__io_object_get_retain_count_t__retainCount__defined
#if	defined(__NDR_convert__int_rep__iokit__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__io_object_get_retain_count_t__retainCount__defined
#define	__NDR_convert__int_rep__Reply__io_object_get_retain_count_t__retainCount(a, f) \
	__NDR_convert__int_rep__iokit__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__io_object_get_retain_count_t__retainCount__defined
#define	__NDR_convert__int_rep__Reply__io_object_get_retain_count_t__retainCount(a, f) \
	__NDR_convert__int_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_object_get_retain_count_t__retainCount__defined */



#ifndef __NDR_convert__char_rep__Reply__io_object_get_retain_count_t__retainCount__defined
#if	defined(__NDR_convert__char_rep__iokit__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__io_object_get_retain_count_t__retainCount__defined
#define	__NDR_convert__char_rep__Reply__io_object_get_retain_count_t__retainCount(a, f) \
	__NDR_convert__char_rep__iokit__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__io_object_get_retain_count_t__retainCount__defined
#define	__NDR_convert__char_rep__Reply__io_object_get_retain_count_t__retainCount(a, f) \
	__NDR_convert__char_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_object_get_retain_count_t__retainCount__defined */



#ifndef __NDR_convert__float_rep__Reply__io_object_get_retain_count_t__retainCount__defined
#if	defined(__NDR_convert__float_rep__iokit__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__io_object_get_retain_count_t__retainCount__defined
#define	__NDR_convert__float_rep__Reply__io_object_get_retain_count_t__retainCount(a, f) \
	__NDR_convert__float_rep__iokit__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__io_object_get_retain_count_t__retainCount__defined
#define	__NDR_convert__float_rep__Reply__io_object_get_retain_count_t__retainCount(a, f) \
	__NDR_convert__float_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_object_get_retain_count_t__retainCount__defined */



mig_internal kern_return_t __MIG_check__Reply__io_object_get_retain_count_t(__Reply__io_object_get_retain_count_t *Out0P)
{

	typedef __Reply__io_object_get_retain_count_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 2930) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    ((msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	     (msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	      Out0P->RetCode == KERN_SUCCESS)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (Out0P->RetCode != KERN_SUCCESS) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	defined(__NDR_convert__int_rep__Reply__io_object_get_retain_count_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_object_get_retain_count_t__retainCount__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__io_object_get_retain_count_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__io_object_get_retain_count_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_object_get_retain_count_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__io_object_get_retain_count_t__retainCount__defined)
		__NDR_convert__int_rep__Reply__io_object_get_retain_count_t__retainCount(&Out0P->retainCount, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_object_get_retain_count_t__retainCount__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__io_object_get_retain_count_t__retainCount__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__io_object_get_retain_count_t__retainCount__defined)
		__NDR_convert__char_rep__Reply__io_object_get_retain_count_t__retainCount(&Out0P->retainCount, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__io_object_get_retain_count_t__retainCount__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__io_object_get_retain_count_t__retainCount__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__io_object_get_retain_count_t__retainCount__defined)
		__NDR_convert__float_rep__Reply__io_object_get_retain_count_t__retainCount(&Out0P->retainCount, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__io_object_get_retain_count_t__retainCount__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_object_get_retain_count_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_object_get_retain_count */
mig_external kern_return_t io_object_get_retain_count
(
	mach_port_t object,
	uint32_t *retainCount
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		uint32_t retainCount;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		uint32_t retainCount;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__io_object_get_retain_count_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_object_get_retain_count_t__defined */

	__DeclareSendRpc(2830, "io_object_get_retain_count")

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = object;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2830;

	__BeforeSendRpc(2830, "io_object_get_retain_count")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2830, "io_object_get_retain_count")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_object_get_retain_count_t__defined)
	check_result = __MIG_check__Reply__io_object_get_retain_count_t((__Reply__io_object_get_retain_count_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_object_get_retain_count_t__defined) */

	*retainCount = Out0P->retainCount;

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_service_get_busy_state_t__defined)
#define __MIG_check__Reply__io_service_get_busy_state_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_service_get_busy_state_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_get_busy_state_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_service_get_busy_state_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_get_busy_state_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_service_get_busy_state_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_service_get_busy_state_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__io_service_get_busy_state_t__busyState__defined
#if	defined(__NDR_convert__int_rep__iokit__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_get_busy_state_t__busyState__defined
#define	__NDR_convert__int_rep__Reply__io_service_get_busy_state_t__busyState(a, f) \
	__NDR_convert__int_rep__iokit__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_get_busy_state_t__busyState__defined
#define	__NDR_convert__int_rep__Reply__io_service_get_busy_state_t__busyState(a, f) \
	__NDR_convert__int_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_service_get_busy_state_t__busyState__defined */



#ifndef __NDR_convert__char_rep__Reply__io_service_get_busy_state_t__busyState__defined
#if	defined(__NDR_convert__char_rep__iokit__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__io_service_get_busy_state_t__busyState__defined
#define	__NDR_convert__char_rep__Reply__io_service_get_busy_state_t__busyState(a, f) \
	__NDR_convert__char_rep__iokit__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__io_service_get_busy_state_t__busyState__defined
#define	__NDR_convert__char_rep__Reply__io_service_get_busy_state_t__busyState(a, f) \
	__NDR_convert__char_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_service_get_busy_state_t__busyState__defined */



#ifndef __NDR_convert__float_rep__Reply__io_service_get_busy_state_t__busyState__defined
#if	defined(__NDR_convert__float_rep__iokit__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__io_service_get_busy_state_t__busyState__defined
#define	__NDR_convert__float_rep__Reply__io_service_get_busy_state_t__busyState(a, f) \
	__NDR_convert__float_rep__iokit__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__io_service_get_busy_state_t__busyState__defined
#define	__NDR_convert__float_rep__Reply__io_service_get_busy_state_t__busyState(a, f) \
	__NDR_convert__float_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_service_get_busy_state_t__busyState__defined */



mig_internal kern_return_t __MIG_check__Reply__io_service_get_busy_state_t(__Reply__io_service_get_busy_state_t *Out0P)
{

	typedef __Reply__io_service_get_busy_state_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 2931) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    ((msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	     (msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	      Out0P->RetCode == KERN_SUCCESS)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (Out0P->RetCode != KERN_SUCCESS) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	defined(__NDR_convert__int_rep__Reply__io_service_get_busy_state_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_service_get_busy_state_t__busyState__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__io_service_get_busy_state_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__io_service_get_busy_state_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_service_get_busy_state_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__io_service_get_busy_state_t__busyState__defined)
		__NDR_convert__int_rep__Reply__io_service_get_busy_state_t__busyState(&Out0P->busyState, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_service_get_busy_state_t__busyState__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__io_service_get_busy_state_t__busyState__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__io_service_get_busy_state_t__busyState__defined)
		__NDR_convert__char_rep__Reply__io_service_get_busy_state_t__busyState(&Out0P->busyState, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__io_service_get_busy_state_t__busyState__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__io_service_get_busy_state_t__busyState__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__io_service_get_busy_state_t__busyState__defined)
		__NDR_convert__float_rep__Reply__io_service_get_busy_state_t__busyState(&Out0P->busyState, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__io_service_get_busy_state_t__busyState__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_service_get_busy_state_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_service_get_busy_state */
mig_external kern_return_t io_service_get_busy_state
(
	mach_port_t service,
	uint32_t *busyState
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		uint32_t busyState;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		uint32_t busyState;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__io_service_get_busy_state_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_service_get_busy_state_t__defined */

	__DeclareSendRpc(2831, "io_service_get_busy_state")

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = service;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2831;

	__BeforeSendRpc(2831, "io_service_get_busy_state")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2831, "io_service_get_busy_state")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_service_get_busy_state_t__defined)
	check_result = __MIG_check__Reply__io_service_get_busy_state_t((__Reply__io_service_get_busy_state_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_service_get_busy_state_t__defined) */

	*busyState = Out0P->busyState;

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_service_wait_quiet_t__defined)
#define __MIG_check__Reply__io_service_wait_quiet_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_service_wait_quiet_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_wait_quiet_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_service_wait_quiet_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_wait_quiet_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_service_wait_quiet_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_service_wait_quiet_t__RetCode__defined */





mig_internal kern_return_t __MIG_check__Reply__io_service_wait_quiet_t(__Reply__io_service_wait_quiet_t *Out0P)
{

	typedef __Reply__io_service_wait_quiet_t __Reply;
	if (Out0P->Head.msgh_id != 2932) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (Out0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Reply)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Reply__io_service_wait_quiet_t__RetCode__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__io_service_wait_quiet_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__io_service_wait_quiet_t__RetCode__defined */
	{
		return Out0P->RetCode;
	}
}
#endif /* !defined(__MIG_check__Reply__io_service_wait_quiet_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_service_wait_quiet */
mig_external kern_return_t io_service_wait_quiet
(
	mach_port_t service,
	mach_timespec_t wait_time
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_timespec_t wait_time;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__io_service_wait_quiet_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_service_wait_quiet_t__defined */

	__DeclareSendRpc(2832, "io_service_wait_quiet")

	InP->NDR = NDR_record;

	InP->wait_time = wait_time;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = service;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2832;

	__BeforeSendRpc(2832, "io_service_wait_quiet")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2832, "io_service_wait_quiet")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_service_wait_quiet_t__defined)
	check_result = __MIG_check__Reply__io_service_wait_quiet_t((__Reply__io_service_wait_quiet_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_service_wait_quiet_t__defined) */

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_registry_entry_create_iterator_t__defined)
#define __MIG_check__Reply__io_registry_entry_create_iterator_t__defined

mig_internal kern_return_t __MIG_check__Reply__io_registry_entry_create_iterator_t(__Reply__io_registry_entry_create_iterator_t *Out0P)
{

	typedef __Reply__io_registry_entry_create_iterator_t __Reply;
	boolean_t msgh_simple;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 2933) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

	msgh_simple = !(Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX);
#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((msgh_simple || Out0P->msgh_body.msgh_descriptor_count != 1 ||
	    msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	    (!msgh_simple || msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	    ((mig_reply_error_t *)Out0P)->RetCode == KERN_SUCCESS))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (msgh_simple) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	__MigTypeCheck
	if (Out0P->iterator.type != MACH_MSG_PORT_DESCRIPTOR ||
	    Out0P->iterator.disposition != 17) {
		return MIG_TYPE_ERROR;
	}
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_registry_entry_create_iterator_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_registry_entry_create_iterator */
mig_external kern_return_t io_registry_entry_create_iterator
(
	mach_port_t registry_entry,
	io_name_t plane,
	uint32_t options,
	mach_port_t *iterator
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t planeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t planeCnt;
		char plane[128];
		uint32_t options;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t iterator;
		/* end of the kernel processed data */
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t iterator;
		/* end of the kernel processed data */
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;
	unsigned int msgh_size_delta;


#ifdef	__MIG_check__Reply__io_registry_entry_create_iterator_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_registry_entry_create_iterator_t__defined */

	__DeclareSendRpc(2833, "io_registry_entry_create_iterator")

	InP->NDR = NDR_record;

	InP->planeCnt = mig_strncpy(InP->plane, plane, 128);

	msgh_size_delta = _WALIGN_(InP->planeCnt);
	msgh_size = (mach_msg_size_t)(sizeof(Request) - 128) + msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 128);

	InP->options = options;

	InP = &Mess.In;
	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = registry_entry;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2833;

	__BeforeSendRpc(2833, "io_registry_entry_create_iterator")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, msgh_size, (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2833, "io_registry_entry_create_iterator")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_registry_entry_create_iterator_t__defined)
	check_result = __MIG_check__Reply__io_registry_entry_create_iterator_t((__Reply__io_registry_entry_create_iterator_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_registry_entry_create_iterator_t__defined) */

	*iterator = Out0P->iterator.name;
	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_iterator_is_valid_t__defined)
#define __MIG_check__Reply__io_iterator_is_valid_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_iterator_is_valid_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_iterator_is_valid_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_iterator_is_valid_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_iterator_is_valid_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_iterator_is_valid_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_iterator_is_valid_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__io_iterator_is_valid_t__is_valid__defined
#if	defined(__NDR_convert__int_rep__iokit__boolean_t__defined)
#define	__NDR_convert__int_rep__Reply__io_iterator_is_valid_t__is_valid__defined
#define	__NDR_convert__int_rep__Reply__io_iterator_is_valid_t__is_valid(a, f) \
	__NDR_convert__int_rep__iokit__boolean_t((boolean_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__boolean_t__defined)
#define	__NDR_convert__int_rep__Reply__io_iterator_is_valid_t__is_valid__defined
#define	__NDR_convert__int_rep__Reply__io_iterator_is_valid_t__is_valid(a, f) \
	__NDR_convert__int_rep__boolean_t((boolean_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_iterator_is_valid_t__is_valid__defined */



#ifndef __NDR_convert__char_rep__Reply__io_iterator_is_valid_t__is_valid__defined
#if	defined(__NDR_convert__char_rep__iokit__boolean_t__defined)
#define	__NDR_convert__char_rep__Reply__io_iterator_is_valid_t__is_valid__defined
#define	__NDR_convert__char_rep__Reply__io_iterator_is_valid_t__is_valid(a, f) \
	__NDR_convert__char_rep__iokit__boolean_t((boolean_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__boolean_t__defined)
#define	__NDR_convert__char_rep__Reply__io_iterator_is_valid_t__is_valid__defined
#define	__NDR_convert__char_rep__Reply__io_iterator_is_valid_t__is_valid(a, f) \
	__NDR_convert__char_rep__boolean_t((boolean_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_iterator_is_valid_t__is_valid__defined */



#ifndef __NDR_convert__float_rep__Reply__io_iterator_is_valid_t__is_valid__defined
#if	defined(__NDR_convert__float_rep__iokit__boolean_t__defined)
#define	__NDR_convert__float_rep__Reply__io_iterator_is_valid_t__is_valid__defined
#define	__NDR_convert__float_rep__Reply__io_iterator_is_valid_t__is_valid(a, f) \
	__NDR_convert__float_rep__iokit__boolean_t((boolean_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__boolean_t__defined)
#define	__NDR_convert__float_rep__Reply__io_iterator_is_valid_t__is_valid__defined
#define	__NDR_convert__float_rep__Reply__io_iterator_is_valid_t__is_valid(a, f) \
	__NDR_convert__float_rep__boolean_t((boolean_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_iterator_is_valid_t__is_valid__defined */



mig_internal kern_return_t __MIG_check__Reply__io_iterator_is_valid_t(__Reply__io_iterator_is_valid_t *Out0P)
{

	typedef __Reply__io_iterator_is_valid_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 2934) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    ((msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	     (msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	      Out0P->RetCode == KERN_SUCCESS)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (Out0P->RetCode != KERN_SUCCESS) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	defined(__NDR_convert__int_rep__Reply__io_iterator_is_valid_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_iterator_is_valid_t__is_valid__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__io_iterator_is_valid_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__io_iterator_is_valid_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_iterator_is_valid_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__io_iterator_is_valid_t__is_valid__defined)
		__NDR_convert__int_rep__Reply__io_iterator_is_valid_t__is_valid(&Out0P->is_valid, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_iterator_is_valid_t__is_valid__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__io_iterator_is_valid_t__is_valid__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__io_iterator_is_valid_t__is_valid__defined)
		__NDR_convert__char_rep__Reply__io_iterator_is_valid_t__is_valid(&Out0P->is_valid, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__io_iterator_is_valid_t__is_valid__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__io_iterator_is_valid_t__is_valid__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__io_iterator_is_valid_t__is_valid__defined)
		__NDR_convert__float_rep__Reply__io_iterator_is_valid_t__is_valid(&Out0P->is_valid, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__io_iterator_is_valid_t__is_valid__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_iterator_is_valid_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_iterator_is_valid */
mig_external kern_return_t io_iterator_is_valid
(
	mach_port_t iterator,
	boolean_t *is_valid
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		boolean_t is_valid;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		boolean_t is_valid;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__io_iterator_is_valid_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_iterator_is_valid_t__defined */

	__DeclareSendRpc(2834, "io_iterator_is_valid")

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = iterator;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2834;

	__BeforeSendRpc(2834, "io_iterator_is_valid")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2834, "io_iterator_is_valid")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_iterator_is_valid_t__defined)
	check_result = __MIG_check__Reply__io_iterator_is_valid_t((__Reply__io_iterator_is_valid_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_iterator_is_valid_t__defined) */

	*is_valid = Out0P->is_valid;

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_make_matching_t__defined)
#define __MIG_check__Reply__io_make_matching_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_make_matching_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_make_matching_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_make_matching_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_make_matching_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_make_matching_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_make_matching_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__io_make_matching_t__matching__defined
#if	defined(__NDR_convert__int_rep__iokit__io_string_t__defined)
#define	__NDR_convert__int_rep__Reply__io_make_matching_t__matching__defined
#define	__NDR_convert__int_rep__Reply__io_make_matching_t__matching(a, f, c) \
	__NDR_convert__int_rep__iokit__io_string_t((io_string_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_string_t__defined)
#define	__NDR_convert__int_rep__Reply__io_make_matching_t__matching__defined
#define	__NDR_convert__int_rep__Reply__io_make_matching_t__matching(a, f, c) \
	__NDR_convert__int_rep__io_string_t((io_string_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_make_matching_t__matching__defined */


#ifndef __NDR_convert__int_rep__Reply__io_make_matching_t__matchingCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_make_matching_t__matchingCnt__defined
#define	__NDR_convert__int_rep__Reply__io_make_matching_t__matchingCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_make_matching_t__matchingCnt__defined
#define	__NDR_convert__int_rep__Reply__io_make_matching_t__matchingCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_make_matching_t__matchingCnt__defined */



#ifndef __NDR_convert__char_rep__Reply__io_make_matching_t__matching__defined
#if	defined(__NDR_convert__char_rep__iokit__io_string_t__defined)
#define	__NDR_convert__char_rep__Reply__io_make_matching_t__matching__defined
#define	__NDR_convert__char_rep__Reply__io_make_matching_t__matching(a, f, c) \
	__NDR_convert__char_rep__iokit__io_string_t((io_string_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_string_t__defined)
#define	__NDR_convert__char_rep__Reply__io_make_matching_t__matching__defined
#define	__NDR_convert__char_rep__Reply__io_make_matching_t__matching(a, f, c) \
	__NDR_convert__char_rep__io_string_t((io_string_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_make_matching_t__matching__defined */




#ifndef __NDR_convert__float_rep__Reply__io_make_matching_t__matching__defined
#if	defined(__NDR_convert__float_rep__iokit__io_string_t__defined)
#define	__NDR_convert__float_rep__Reply__io_make_matching_t__matching__defined
#define	__NDR_convert__float_rep__Reply__io_make_matching_t__matching(a, f, c) \
	__NDR_convert__float_rep__iokit__io_string_t((io_string_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_string_t__defined)
#define	__NDR_convert__float_rep__Reply__io_make_matching_t__matching__defined
#define	__NDR_convert__float_rep__Reply__io_make_matching_t__matching(a, f, c) \
	__NDR_convert__float_rep__io_string_t((io_string_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_make_matching_t__matching__defined */




mig_internal kern_return_t __MIG_check__Reply__io_make_matching_t(__Reply__io_make_matching_t *Out0P)
{

	typedef __Reply__io_make_matching_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

	if (Out0P->Head.msgh_id != 2935) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    ((msgh_size > (mach_msg_size_t)sizeof(__Reply) || msgh_size < (mach_msg_size_t)(sizeof(__Reply) - 512)) &&
	     (msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	      Out0P->RetCode == KERN_SUCCESS)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (Out0P->RetCode != KERN_SUCCESS) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if defined(__NDR_convert__int_rep__Reply__io_make_matching_t__matchingCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__io_make_matching_t__matchingCnt(&Out0P->matchingCnt, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__io_make_matching_t__matchingCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Reply) - 512) + (_WALIGN_(Out0P->matchingCnt)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Reply__io_make_matching_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_make_matching_t__matching__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_make_matching_t__matchingCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__io_make_matching_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__io_make_matching_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_make_matching_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__io_make_matching_t__matching__defined)
		__NDR_convert__int_rep__Reply__io_make_matching_t__matching(&Out0P->matching, Out0P->NDR.int_rep, Out0P->matchingCnt);
#endif /* __NDR_convert__int_rep__Reply__io_make_matching_t__matching__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__io_make_matching_t__matching__defined) || \
	0
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__io_make_matching_t__matching__defined)
		__NDR_convert__char_rep__Reply__io_make_matching_t__matching(&Out0P->matching, Out0P->NDR.char_rep, Out0P->matchingCnt);
#endif /* __NDR_convert__char_rep__Reply__io_make_matching_t__matching__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__io_make_matching_t__matching__defined) || \
	0
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__io_make_matching_t__matching__defined)
		__NDR_convert__float_rep__Reply__io_make_matching_t__matching(&Out0P->matching, Out0P->NDR.float_rep, Out0P->matchingCnt);
#endif /* __NDR_convert__float_rep__Reply__io_make_matching_t__matching__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_make_matching_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_make_matching */
mig_external kern_return_t io_make_matching
(
	mach_port_t master_port,
	uint32_t of_type,
	uint32_t options,
	io_struct_inband_t input,
	mach_msg_type_number_t inputCnt,
	io_string_t matching
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint32_t of_type;
		uint32_t options;
		mach_msg_type_number_t inputCnt;
		char input[4096];
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t matchingOffset; /* MiG doesn't use it */
		mach_msg_type_number_t matchingCnt;
		char matching[512];
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t matchingOffset; /* MiG doesn't use it */
		mach_msg_type_number_t matchingCnt;
		char matching[512];
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;

#ifdef	__MIG_check__Reply__io_make_matching_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_make_matching_t__defined */

	__DeclareSendRpc(2835, "io_make_matching")

	InP->NDR = NDR_record;

	InP->of_type = of_type;

	InP->options = options;

	if (inputCnt > 4096) {
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) InP->input, (const char *) input, inputCnt);

	InP->inputCnt = inputCnt;

	msgh_size = (mach_msg_size_t)(sizeof(Request) - 4096) + (_WALIGN_(inputCnt));
	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = master_port;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2835;

	__BeforeSendRpc(2835, "io_make_matching")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, msgh_size, (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2835, "io_make_matching")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_make_matching_t__defined)
	check_result = __MIG_check__Reply__io_make_matching_t((__Reply__io_make_matching_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_make_matching_t__defined) */

	(void) mig_strncpy(matching, Out0P->matching, 512);

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_catalog_send_data_t__defined)
#define __MIG_check__Reply__io_catalog_send_data_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_catalog_send_data_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_catalog_send_data_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_catalog_send_data_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_catalog_send_data_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_catalog_send_data_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_catalog_send_data_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__io_catalog_send_data_t__result__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_catalog_send_data_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_catalog_send_data_t__result(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_catalog_send_data_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_catalog_send_data_t__result(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Reply__io_catalog_send_data_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_catalog_send_data_t__result(a, f) \
	__NDR_convert__int_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Reply__io_catalog_send_data_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_catalog_send_data_t__result(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__io_catalog_send_data_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_catalog_send_data_t__result(a, f) \
	__NDR_convert__int_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__io_catalog_send_data_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_catalog_send_data_t__result(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_catalog_send_data_t__result__defined */



#ifndef __NDR_convert__char_rep__Reply__io_catalog_send_data_t__result__defined
#if	defined(__NDR_convert__char_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__char_rep__Reply__io_catalog_send_data_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_catalog_send_data_t__result(a, f) \
	__NDR_convert__char_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__kern_return_t__defined)
#define	__NDR_convert__char_rep__Reply__io_catalog_send_data_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_catalog_send_data_t__result(a, f) \
	__NDR_convert__char_rep__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Reply__io_catalog_send_data_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_catalog_send_data_t__result(a, f) \
	__NDR_convert__char_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Reply__io_catalog_send_data_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_catalog_send_data_t__result(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__io_catalog_send_data_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_catalog_send_data_t__result(a, f) \
	__NDR_convert__char_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__io_catalog_send_data_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_catalog_send_data_t__result(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_catalog_send_data_t__result__defined */



#ifndef __NDR_convert__float_rep__Reply__io_catalog_send_data_t__result__defined
#if	defined(__NDR_convert__float_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__float_rep__Reply__io_catalog_send_data_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_catalog_send_data_t__result(a, f) \
	__NDR_convert__float_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__kern_return_t__defined)
#define	__NDR_convert__float_rep__Reply__io_catalog_send_data_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_catalog_send_data_t__result(a, f) \
	__NDR_convert__float_rep__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Reply__io_catalog_send_data_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_catalog_send_data_t__result(a, f) \
	__NDR_convert__float_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Reply__io_catalog_send_data_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_catalog_send_data_t__result(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__io_catalog_send_data_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_catalog_send_data_t__result(a, f) \
	__NDR_convert__float_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__io_catalog_send_data_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_catalog_send_data_t__result(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_catalog_send_data_t__result__defined */



mig_internal kern_return_t __MIG_check__Reply__io_catalog_send_data_t(__Reply__io_catalog_send_data_t *Out0P)
{

	typedef __Reply__io_catalog_send_data_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 2936) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    ((msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	     (msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	      Out0P->RetCode == KERN_SUCCESS)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (Out0P->RetCode != KERN_SUCCESS) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	defined(__NDR_convert__int_rep__Reply__io_catalog_send_data_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_catalog_send_data_t__result__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__io_catalog_send_data_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__io_catalog_send_data_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_catalog_send_data_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__io_catalog_send_data_t__result__defined)
		__NDR_convert__int_rep__Reply__io_catalog_send_data_t__result(&Out0P->result, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_catalog_send_data_t__result__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__io_catalog_send_data_t__result__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__io_catalog_send_data_t__result__defined)
		__NDR_convert__char_rep__Reply__io_catalog_send_data_t__result(&Out0P->result, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__io_catalog_send_data_t__result__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__io_catalog_send_data_t__result__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__io_catalog_send_data_t__result__defined)
		__NDR_convert__float_rep__Reply__io_catalog_send_data_t__result(&Out0P->result, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__io_catalog_send_data_t__result__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_catalog_send_data_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_catalog_send_data */
mig_external kern_return_t io_catalog_send_data
(
	mach_port_t master_port,
	uint32_t flag,
	io_buf_ptr_t inData,
	mach_msg_type_number_t inDataCnt,
	kern_return_t *result
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t inData;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint32_t flag;
		mach_msg_type_number_t inDataCnt;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		kern_return_t result;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		kern_return_t result;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__io_catalog_send_data_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_catalog_send_data_t__defined */

	__DeclareSendRpc(2836, "io_catalog_send_data")

#if	UseStaticTemplates
	const static mach_msg_ool_descriptor_t inDataTemplate = {
		/* addr = */		(void *)0,
		/* size = */		0,
		/* deal = */		FALSE,
		/* copy = */		MACH_MSG_VIRTUAL_COPY,
		/* pad2 = */		0,
		/* type = */		MACH_MSG_OOL_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 1;
#if	UseStaticTemplates
	InP->inData = inDataTemplate;
	InP->inData.address = (void *)(inData);
	InP->inData.size = inDataCnt;
#else	/* UseStaticTemplates */
	InP->inData.address = (void *)(inData);
	InP->inData.size = inDataCnt;
	InP->inData.deallocate =  FALSE;
	InP->inData.copy = MACH_MSG_VIRTUAL_COPY;
	InP->inData.type = MACH_MSG_OOL_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	InP->flag = flag;

	InP->inDataCnt = inDataCnt;

	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = master_port;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2836;

	__BeforeSendRpc(2836, "io_catalog_send_data")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2836, "io_catalog_send_data")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_catalog_send_data_t__defined)
	check_result = __MIG_check__Reply__io_catalog_send_data_t((__Reply__io_catalog_send_data_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_catalog_send_data_t__defined) */

	*result = Out0P->result;

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_catalog_terminate_t__defined)
#define __MIG_check__Reply__io_catalog_terminate_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_catalog_terminate_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_catalog_terminate_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_catalog_terminate_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_catalog_terminate_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_catalog_terminate_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_catalog_terminate_t__RetCode__defined */





mig_internal kern_return_t __MIG_check__Reply__io_catalog_terminate_t(__Reply__io_catalog_terminate_t *Out0P)
{

	typedef __Reply__io_catalog_terminate_t __Reply;
	if (Out0P->Head.msgh_id != 2937) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (Out0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Reply)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Reply__io_catalog_terminate_t__RetCode__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__io_catalog_terminate_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__io_catalog_terminate_t__RetCode__defined */
	{
		return Out0P->RetCode;
	}
}
#endif /* !defined(__MIG_check__Reply__io_catalog_terminate_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_catalog_terminate */
mig_external kern_return_t io_catalog_terminate
(
	mach_port_t master_port,
	uint32_t flag,
	io_name_t name
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint32_t flag;
		mach_msg_type_number_t nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t nameCnt;
		char name[128];
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;

#ifdef	__MIG_check__Reply__io_catalog_terminate_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_catalog_terminate_t__defined */

	__DeclareSendRpc(2837, "io_catalog_terminate")

	InP->NDR = NDR_record;

	InP->flag = flag;

	InP->nameCnt = mig_strncpy(InP->name, name, 128);

	msgh_size = (mach_msg_size_t)(sizeof(Request) - 128) + (_WALIGN_(InP->nameCnt));
	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = master_port;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2837;

	__BeforeSendRpc(2837, "io_catalog_terminate")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, msgh_size, (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2837, "io_catalog_terminate")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_catalog_terminate_t__defined)
	check_result = __MIG_check__Reply__io_catalog_terminate_t((__Reply__io_catalog_terminate_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_catalog_terminate_t__defined) */

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_catalog_get_data_t__defined)
#define __MIG_check__Reply__io_catalog_get_data_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_catalog_get_data_t__outData__defined
#if	defined(__NDR_convert__int_rep__iokit__io_buf_ptr_t__defined)
#define	__NDR_convert__int_rep__Reply__io_catalog_get_data_t__outData__defined
#define	__NDR_convert__int_rep__Reply__io_catalog_get_data_t__outData(a, f, c) \
	__NDR_convert__int_rep__iokit__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_buf_ptr_t__defined)
#define	__NDR_convert__int_rep__Reply__io_catalog_get_data_t__outData__defined
#define	__NDR_convert__int_rep__Reply__io_catalog_get_data_t__outData(a, f, c) \
	__NDR_convert__int_rep__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_catalog_get_data_t__outData__defined */


#ifndef __NDR_convert__int_rep__Reply__io_catalog_get_data_t__outDataCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_catalog_get_data_t__outDataCnt__defined
#define	__NDR_convert__int_rep__Reply__io_catalog_get_data_t__outDataCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_catalog_get_data_t__outDataCnt__defined
#define	__NDR_convert__int_rep__Reply__io_catalog_get_data_t__outDataCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_catalog_get_data_t__outDataCnt__defined */


#ifndef __NDR_convert__char_rep__Reply__io_catalog_get_data_t__outData__defined
#if	defined(__NDR_convert__char_rep__iokit__io_buf_ptr_t__defined)
#define	__NDR_convert__char_rep__Reply__io_catalog_get_data_t__outData__defined
#define	__NDR_convert__char_rep__Reply__io_catalog_get_data_t__outData(a, f, c) \
	__NDR_convert__char_rep__iokit__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_buf_ptr_t__defined)
#define	__NDR_convert__char_rep__Reply__io_catalog_get_data_t__outData__defined
#define	__NDR_convert__char_rep__Reply__io_catalog_get_data_t__outData(a, f, c) \
	__NDR_convert__char_rep__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_catalog_get_data_t__outData__defined */



#ifndef __NDR_convert__float_rep__Reply__io_catalog_get_data_t__outData__defined
#if	defined(__NDR_convert__float_rep__iokit__io_buf_ptr_t__defined)
#define	__NDR_convert__float_rep__Reply__io_catalog_get_data_t__outData__defined
#define	__NDR_convert__float_rep__Reply__io_catalog_get_data_t__outData(a, f, c) \
	__NDR_convert__float_rep__iokit__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_buf_ptr_t__defined)
#define	__NDR_convert__float_rep__Reply__io_catalog_get_data_t__outData__defined
#define	__NDR_convert__float_rep__Reply__io_catalog_get_data_t__outData(a, f, c) \
	__NDR_convert__float_rep__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_catalog_get_data_t__outData__defined */




mig_internal kern_return_t __MIG_check__Reply__io_catalog_get_data_t(__Reply__io_catalog_get_data_t *Out0P)
{

	typedef __Reply__io_catalog_get_data_t __Reply;
	boolean_t msgh_simple;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 2938) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

	msgh_simple = !(Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX);
#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((msgh_simple || Out0P->msgh_body.msgh_descriptor_count != 1 ||
	    msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	    (!msgh_simple || msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	    ((mig_reply_error_t *)Out0P)->RetCode == KERN_SUCCESS))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (msgh_simple) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	__MigTypeCheck
	if (Out0P->outData.type != MACH_MSG_OOL_DESCRIPTOR) {
		return MIG_TYPE_ERROR;
	}
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Reply__io_catalog_get_data_t__outData__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_catalog_get_data_t__outDataCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__io_catalog_get_data_t__outDataCnt__defined)
		__NDR_convert__int_rep__Reply__io_catalog_get_data_t__outDataCnt(&Out0P->outDataCnt, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__io_catalog_get_data_t__outDataCnt__defined */
#if defined(__NDR_convert__int_rep__Reply__io_catalog_get_data_t__outData__defined)
		__NDR_convert__int_rep__Reply__io_catalog_get_data_t__outData((io_buf_ptr_t)(Out0P->outData.address), Out0P->NDR.int_rep, Out0P->outDataCnt);
#endif /* __NDR_convert__int_rep__Reply__io_catalog_get_data_t__outData__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Reply__io_catalog_get_data_t__outData__defined) || \
	0
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__io_catalog_get_data_t__outData__defined)
		__NDR_convert__char_rep__Reply__io_catalog_get_data_t__outData((io_buf_ptr_t)(Out0P->outData.address), Out0P->NDR.char_rep, Out0P->outDataCnt);
#endif /* __NDR_convert__char_rep__Reply__io_catalog_get_data_t__outData__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Reply__io_catalog_get_data_t__outData__defined) || \
	0
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__io_catalog_get_data_t__outData__defined)
		__NDR_convert__float_rep__Reply__io_catalog_get_data_t__outData((io_buf_ptr_t)(Out0P->outData.address), Out0P->NDR.float_rep, Out0P->outDataCnt);
#endif /* __NDR_convert__float_rep__Reply__io_catalog_get_data_t__outData__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_catalog_get_data_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_catalog_get_data */
mig_external kern_return_t io_catalog_get_data
(
	mach_port_t master_port,
	uint32_t flag,
	io_buf_ptr_t *outData,
	mach_msg_type_number_t *outDataCnt
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint32_t flag;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t outData;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t outDataCnt;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t outData;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t outDataCnt;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__io_catalog_get_data_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_catalog_get_data_t__defined */

	__DeclareSendRpc(2838, "io_catalog_get_data")

	InP->NDR = NDR_record;

	InP->flag = flag;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = master_port;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2838;

	__BeforeSendRpc(2838, "io_catalog_get_data")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2838, "io_catalog_get_data")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_catalog_get_data_t__defined)
	check_result = __MIG_check__Reply__io_catalog_get_data_t((__Reply__io_catalog_get_data_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_catalog_get_data_t__defined) */

	*outData = (io_buf_ptr_t)(Out0P->outData.address);
	*outDataCnt = Out0P->outDataCnt;

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_catalog_get_gen_count_t__defined)
#define __MIG_check__Reply__io_catalog_get_gen_count_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_catalog_get_gen_count_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_catalog_get_gen_count_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_catalog_get_gen_count_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_catalog_get_gen_count_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_catalog_get_gen_count_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_catalog_get_gen_count_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__io_catalog_get_gen_count_t__genCount__defined
#if	defined(__NDR_convert__int_rep__iokit__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__io_catalog_get_gen_count_t__genCount__defined
#define	__NDR_convert__int_rep__Reply__io_catalog_get_gen_count_t__genCount(a, f) \
	__NDR_convert__int_rep__iokit__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__io_catalog_get_gen_count_t__genCount__defined
#define	__NDR_convert__int_rep__Reply__io_catalog_get_gen_count_t__genCount(a, f) \
	__NDR_convert__int_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_catalog_get_gen_count_t__genCount__defined */



#ifndef __NDR_convert__char_rep__Reply__io_catalog_get_gen_count_t__genCount__defined
#if	defined(__NDR_convert__char_rep__iokit__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__io_catalog_get_gen_count_t__genCount__defined
#define	__NDR_convert__char_rep__Reply__io_catalog_get_gen_count_t__genCount(a, f) \
	__NDR_convert__char_rep__iokit__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__io_catalog_get_gen_count_t__genCount__defined
#define	__NDR_convert__char_rep__Reply__io_catalog_get_gen_count_t__genCount(a, f) \
	__NDR_convert__char_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_catalog_get_gen_count_t__genCount__defined */



#ifndef __NDR_convert__float_rep__Reply__io_catalog_get_gen_count_t__genCount__defined
#if	defined(__NDR_convert__float_rep__iokit__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__io_catalog_get_gen_count_t__genCount__defined
#define	__NDR_convert__float_rep__Reply__io_catalog_get_gen_count_t__genCount(a, f) \
	__NDR_convert__float_rep__iokit__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__io_catalog_get_gen_count_t__genCount__defined
#define	__NDR_convert__float_rep__Reply__io_catalog_get_gen_count_t__genCount(a, f) \
	__NDR_convert__float_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_catalog_get_gen_count_t__genCount__defined */



mig_internal kern_return_t __MIG_check__Reply__io_catalog_get_gen_count_t(__Reply__io_catalog_get_gen_count_t *Out0P)
{

	typedef __Reply__io_catalog_get_gen_count_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 2939) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    ((msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	     (msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	      Out0P->RetCode == KERN_SUCCESS)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (Out0P->RetCode != KERN_SUCCESS) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	defined(__NDR_convert__int_rep__Reply__io_catalog_get_gen_count_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_catalog_get_gen_count_t__genCount__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__io_catalog_get_gen_count_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__io_catalog_get_gen_count_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_catalog_get_gen_count_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__io_catalog_get_gen_count_t__genCount__defined)
		__NDR_convert__int_rep__Reply__io_catalog_get_gen_count_t__genCount(&Out0P->genCount, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_catalog_get_gen_count_t__genCount__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__io_catalog_get_gen_count_t__genCount__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__io_catalog_get_gen_count_t__genCount__defined)
		__NDR_convert__char_rep__Reply__io_catalog_get_gen_count_t__genCount(&Out0P->genCount, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__io_catalog_get_gen_count_t__genCount__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__io_catalog_get_gen_count_t__genCount__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__io_catalog_get_gen_count_t__genCount__defined)
		__NDR_convert__float_rep__Reply__io_catalog_get_gen_count_t__genCount(&Out0P->genCount, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__io_catalog_get_gen_count_t__genCount__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_catalog_get_gen_count_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_catalog_get_gen_count */
mig_external kern_return_t io_catalog_get_gen_count
(
	mach_port_t master_port,
	uint32_t *genCount
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		uint32_t genCount;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		uint32_t genCount;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__io_catalog_get_gen_count_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_catalog_get_gen_count_t__defined */

	__DeclareSendRpc(2839, "io_catalog_get_gen_count")

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = master_port;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2839;

	__BeforeSendRpc(2839, "io_catalog_get_gen_count")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2839, "io_catalog_get_gen_count")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_catalog_get_gen_count_t__defined)
	check_result = __MIG_check__Reply__io_catalog_get_gen_count_t((__Reply__io_catalog_get_gen_count_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_catalog_get_gen_count_t__defined) */

	*genCount = Out0P->genCount;

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_catalog_module_loaded_t__defined)
#define __MIG_check__Reply__io_catalog_module_loaded_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_catalog_module_loaded_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_catalog_module_loaded_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_catalog_module_loaded_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_catalog_module_loaded_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_catalog_module_loaded_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_catalog_module_loaded_t__RetCode__defined */





mig_internal kern_return_t __MIG_check__Reply__io_catalog_module_loaded_t(__Reply__io_catalog_module_loaded_t *Out0P)
{

	typedef __Reply__io_catalog_module_loaded_t __Reply;
	if (Out0P->Head.msgh_id != 2940) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (Out0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Reply)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Reply__io_catalog_module_loaded_t__RetCode__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__io_catalog_module_loaded_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__io_catalog_module_loaded_t__RetCode__defined */
	{
		return Out0P->RetCode;
	}
}
#endif /* !defined(__MIG_check__Reply__io_catalog_module_loaded_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_catalog_module_loaded */
mig_external kern_return_t io_catalog_module_loaded
(
	mach_port_t master_port,
	io_name_t name
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t nameCnt;
		char name[128];
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;

#ifdef	__MIG_check__Reply__io_catalog_module_loaded_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_catalog_module_loaded_t__defined */

	__DeclareSendRpc(2840, "io_catalog_module_loaded")

	InP->NDR = NDR_record;

	InP->nameCnt = mig_strncpy(InP->name, name, 128);

	msgh_size = (mach_msg_size_t)(sizeof(Request) - 128) + (_WALIGN_(InP->nameCnt));
	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = master_port;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2840;

	__BeforeSendRpc(2840, "io_catalog_module_loaded")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, msgh_size, (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2840, "io_catalog_module_loaded")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_catalog_module_loaded_t__defined)
	check_result = __MIG_check__Reply__io_catalog_module_loaded_t((__Reply__io_catalog_module_loaded_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_catalog_module_loaded_t__defined) */

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_catalog_reset_t__defined)
#define __MIG_check__Reply__io_catalog_reset_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_catalog_reset_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_catalog_reset_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_catalog_reset_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_catalog_reset_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_catalog_reset_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_catalog_reset_t__RetCode__defined */





mig_internal kern_return_t __MIG_check__Reply__io_catalog_reset_t(__Reply__io_catalog_reset_t *Out0P)
{

	typedef __Reply__io_catalog_reset_t __Reply;
	if (Out0P->Head.msgh_id != 2941) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (Out0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Reply)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Reply__io_catalog_reset_t__RetCode__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__io_catalog_reset_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__io_catalog_reset_t__RetCode__defined */
	{
		return Out0P->RetCode;
	}
}
#endif /* !defined(__MIG_check__Reply__io_catalog_reset_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_catalog_reset */
mig_external kern_return_t io_catalog_reset
(
	mach_port_t master_port,
	uint32_t flag
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint32_t flag;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__io_catalog_reset_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_catalog_reset_t__defined */

	__DeclareSendRpc(2841, "io_catalog_reset")

	InP->NDR = NDR_record;

	InP->flag = flag;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = master_port;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2841;

	__BeforeSendRpc(2841, "io_catalog_reset")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2841, "io_catalog_reset")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_catalog_reset_t__defined)
	check_result = __MIG_check__Reply__io_catalog_reset_t((__Reply__io_catalog_reset_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_catalog_reset_t__defined) */

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_service_request_probe_t__defined)
#define __MIG_check__Reply__io_service_request_probe_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_service_request_probe_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_request_probe_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_service_request_probe_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_request_probe_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_service_request_probe_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_service_request_probe_t__RetCode__defined */





mig_internal kern_return_t __MIG_check__Reply__io_service_request_probe_t(__Reply__io_service_request_probe_t *Out0P)
{

	typedef __Reply__io_service_request_probe_t __Reply;
	if (Out0P->Head.msgh_id != 2942) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (Out0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Reply)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Reply__io_service_request_probe_t__RetCode__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__io_service_request_probe_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__io_service_request_probe_t__RetCode__defined */
	{
		return Out0P->RetCode;
	}
}
#endif /* !defined(__MIG_check__Reply__io_service_request_probe_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_service_request_probe */
mig_external kern_return_t io_service_request_probe
(
	mach_port_t service,
	uint32_t options
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint32_t options;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__io_service_request_probe_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_service_request_probe_t__defined */

	__DeclareSendRpc(2842, "io_service_request_probe")

	InP->NDR = NDR_record;

	InP->options = options;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = service;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2842;

	__BeforeSendRpc(2842, "io_service_request_probe")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2842, "io_service_request_probe")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_service_request_probe_t__defined)
	check_result = __MIG_check__Reply__io_service_request_probe_t((__Reply__io_service_request_probe_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_service_request_probe_t__defined) */

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_registry_entry_get_name_in_plane_t__defined)
#define __MIG_check__Reply__io_registry_entry_get_name_in_plane_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_registry_entry_get_name_in_plane_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_name_in_plane_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_name_in_plane_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_name_in_plane_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_name_in_plane_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_get_name_in_plane_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__io_registry_entry_get_name_in_plane_t__name__defined
#if	defined(__NDR_convert__int_rep__iokit__io_name_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_name_in_plane_t__name__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_name_in_plane_t__name(a, f, c) \
	__NDR_convert__int_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_name_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_name_in_plane_t__name__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_name_in_plane_t__name(a, f, c) \
	__NDR_convert__int_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_get_name_in_plane_t__name__defined */


#ifndef __NDR_convert__int_rep__Reply__io_registry_entry_get_name_in_plane_t__nameCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_name_in_plane_t__nameCnt__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_name_in_plane_t__nameCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_name_in_plane_t__nameCnt__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_name_in_plane_t__nameCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_get_name_in_plane_t__nameCnt__defined */



#ifndef __NDR_convert__char_rep__Reply__io_registry_entry_get_name_in_plane_t__name__defined
#if	defined(__NDR_convert__char_rep__iokit__io_name_t__defined)
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_name_in_plane_t__name__defined
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_name_in_plane_t__name(a, f, c) \
	__NDR_convert__char_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_name_t__defined)
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_name_in_plane_t__name__defined
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_name_in_plane_t__name(a, f, c) \
	__NDR_convert__char_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_registry_entry_get_name_in_plane_t__name__defined */




#ifndef __NDR_convert__float_rep__Reply__io_registry_entry_get_name_in_plane_t__name__defined
#if	defined(__NDR_convert__float_rep__iokit__io_name_t__defined)
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_name_in_plane_t__name__defined
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_name_in_plane_t__name(a, f, c) \
	__NDR_convert__float_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_name_t__defined)
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_name_in_plane_t__name__defined
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_name_in_plane_t__name(a, f, c) \
	__NDR_convert__float_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_registry_entry_get_name_in_plane_t__name__defined */




mig_internal kern_return_t __MIG_check__Reply__io_registry_entry_get_name_in_plane_t(__Reply__io_registry_entry_get_name_in_plane_t *Out0P)
{

	typedef __Reply__io_registry_entry_get_name_in_plane_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

	if (Out0P->Head.msgh_id != 2943) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    ((msgh_size > (mach_msg_size_t)sizeof(__Reply) || msgh_size < (mach_msg_size_t)(sizeof(__Reply) - 128)) &&
	     (msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	      Out0P->RetCode == KERN_SUCCESS)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (Out0P->RetCode != KERN_SUCCESS) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_name_in_plane_t__nameCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__io_registry_entry_get_name_in_plane_t__nameCnt(&Out0P->nameCnt, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__io_registry_entry_get_name_in_plane_t__nameCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Reply) - 128) + (_WALIGN_(Out0P->nameCnt)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_name_in_plane_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_name_in_plane_t__name__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_name_in_plane_t__nameCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_name_in_plane_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__io_registry_entry_get_name_in_plane_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_get_name_in_plane_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_name_in_plane_t__name__defined)
		__NDR_convert__int_rep__Reply__io_registry_entry_get_name_in_plane_t__name(&Out0P->name, Out0P->NDR.int_rep, Out0P->nameCnt);
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_get_name_in_plane_t__name__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__io_registry_entry_get_name_in_plane_t__name__defined) || \
	0
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__io_registry_entry_get_name_in_plane_t__name__defined)
		__NDR_convert__char_rep__Reply__io_registry_entry_get_name_in_plane_t__name(&Out0P->name, Out0P->NDR.char_rep, Out0P->nameCnt);
#endif /* __NDR_convert__char_rep__Reply__io_registry_entry_get_name_in_plane_t__name__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__io_registry_entry_get_name_in_plane_t__name__defined) || \
	0
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__io_registry_entry_get_name_in_plane_t__name__defined)
		__NDR_convert__float_rep__Reply__io_registry_entry_get_name_in_plane_t__name(&Out0P->name, Out0P->NDR.float_rep, Out0P->nameCnt);
#endif /* __NDR_convert__float_rep__Reply__io_registry_entry_get_name_in_plane_t__name__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_registry_entry_get_name_in_plane_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_registry_entry_get_name_in_plane */
mig_external kern_return_t io_registry_entry_get_name_in_plane
(
	mach_port_t registry_entry,
	io_name_t plane,
	io_name_t name
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t planeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t planeCnt;
		char plane[128];
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t nameCnt;
		char name[128];
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t nameCnt;
		char name[128];
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;

#ifdef	__MIG_check__Reply__io_registry_entry_get_name_in_plane_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_registry_entry_get_name_in_plane_t__defined */

	__DeclareSendRpc(2843, "io_registry_entry_get_name_in_plane")

	InP->NDR = NDR_record;

	InP->planeCnt = mig_strncpy(InP->plane, plane, 128);

	msgh_size = (mach_msg_size_t)(sizeof(Request) - 128) + (_WALIGN_(InP->planeCnt));
	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = registry_entry;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2843;

	__BeforeSendRpc(2843, "io_registry_entry_get_name_in_plane")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, msgh_size, (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2843, "io_registry_entry_get_name_in_plane")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_registry_entry_get_name_in_plane_t__defined)
	check_result = __MIG_check__Reply__io_registry_entry_get_name_in_plane_t((__Reply__io_registry_entry_get_name_in_plane_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_registry_entry_get_name_in_plane_t__defined) */

	(void) mig_strncpy(name, Out0P->name, 128);

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_service_match_property_table_t__defined)
#define __MIG_check__Reply__io_service_match_property_table_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_service_match_property_table_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_match_property_table_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_service_match_property_table_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_match_property_table_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_service_match_property_table_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_service_match_property_table_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__io_service_match_property_table_t__matches__defined
#if	defined(__NDR_convert__int_rep__iokit__boolean_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_match_property_table_t__matches__defined
#define	__NDR_convert__int_rep__Reply__io_service_match_property_table_t__matches(a, f) \
	__NDR_convert__int_rep__iokit__boolean_t((boolean_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__boolean_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_match_property_table_t__matches__defined
#define	__NDR_convert__int_rep__Reply__io_service_match_property_table_t__matches(a, f) \
	__NDR_convert__int_rep__boolean_t((boolean_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_service_match_property_table_t__matches__defined */



#ifndef __NDR_convert__char_rep__Reply__io_service_match_property_table_t__matches__defined
#if	defined(__NDR_convert__char_rep__iokit__boolean_t__defined)
#define	__NDR_convert__char_rep__Reply__io_service_match_property_table_t__matches__defined
#define	__NDR_convert__char_rep__Reply__io_service_match_property_table_t__matches(a, f) \
	__NDR_convert__char_rep__iokit__boolean_t((boolean_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__boolean_t__defined)
#define	__NDR_convert__char_rep__Reply__io_service_match_property_table_t__matches__defined
#define	__NDR_convert__char_rep__Reply__io_service_match_property_table_t__matches(a, f) \
	__NDR_convert__char_rep__boolean_t((boolean_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_service_match_property_table_t__matches__defined */



#ifndef __NDR_convert__float_rep__Reply__io_service_match_property_table_t__matches__defined
#if	defined(__NDR_convert__float_rep__iokit__boolean_t__defined)
#define	__NDR_convert__float_rep__Reply__io_service_match_property_table_t__matches__defined
#define	__NDR_convert__float_rep__Reply__io_service_match_property_table_t__matches(a, f) \
	__NDR_convert__float_rep__iokit__boolean_t((boolean_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__boolean_t__defined)
#define	__NDR_convert__float_rep__Reply__io_service_match_property_table_t__matches__defined
#define	__NDR_convert__float_rep__Reply__io_service_match_property_table_t__matches(a, f) \
	__NDR_convert__float_rep__boolean_t((boolean_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_service_match_property_table_t__matches__defined */



mig_internal kern_return_t __MIG_check__Reply__io_service_match_property_table_t(__Reply__io_service_match_property_table_t *Out0P)
{

	typedef __Reply__io_service_match_property_table_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 2944) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    ((msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	     (msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	      Out0P->RetCode == KERN_SUCCESS)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (Out0P->RetCode != KERN_SUCCESS) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	defined(__NDR_convert__int_rep__Reply__io_service_match_property_table_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_service_match_property_table_t__matches__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__io_service_match_property_table_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__io_service_match_property_table_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_service_match_property_table_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__io_service_match_property_table_t__matches__defined)
		__NDR_convert__int_rep__Reply__io_service_match_property_table_t__matches(&Out0P->matches, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_service_match_property_table_t__matches__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__io_service_match_property_table_t__matches__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__io_service_match_property_table_t__matches__defined)
		__NDR_convert__char_rep__Reply__io_service_match_property_table_t__matches(&Out0P->matches, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__io_service_match_property_table_t__matches__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__io_service_match_property_table_t__matches__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__io_service_match_property_table_t__matches__defined)
		__NDR_convert__float_rep__Reply__io_service_match_property_table_t__matches(&Out0P->matches, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__io_service_match_property_table_t__matches__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_service_match_property_table_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_service_match_property_table */
mig_external kern_return_t io_service_match_property_table
(
	mach_port_t service,
	io_string_t matching,
	boolean_t *matches
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t matchingOffset; /* MiG doesn't use it */
		mach_msg_type_number_t matchingCnt;
		char matching[512];
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		boolean_t matches;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		boolean_t matches;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;

#ifdef	__MIG_check__Reply__io_service_match_property_table_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_service_match_property_table_t__defined */

	__DeclareSendRpc(2844, "io_service_match_property_table")

	InP->NDR = NDR_record;

	InP->matchingCnt = mig_strncpy(InP->matching, matching, 512);

	msgh_size = (mach_msg_size_t)(sizeof(Request) - 512) + (_WALIGN_(InP->matchingCnt));
	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = service;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2844;

	__BeforeSendRpc(2844, "io_service_match_property_table")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, msgh_size, (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2844, "io_service_match_property_table")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_service_match_property_table_t__defined)
	check_result = __MIG_check__Reply__io_service_match_property_table_t((__Reply__io_service_match_property_table_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_service_match_property_table_t__defined) */

	*matches = Out0P->matches;

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_async_method_scalarI_scalarO_t__defined)
#define __MIG_check__Reply__io_async_method_scalarI_scalarO_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__output__defined
#if	defined(__NDR_convert__int_rep__iokit__io_scalar_inband_t__defined)
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__int_rep__iokit__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_scalar_inband_t__defined)
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__int_rep__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__iokit__io_user_scalar_t__defined)
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__ARRAY((io_user_scalar_t *)(a), f, c, __NDR_convert__int_rep__iokit__io_user_scalar_t)
#elif	defined(__NDR_convert__int_rep__io_user_scalar_t__defined)
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__ARRAY((io_user_scalar_t *)(a), f, c, __NDR_convert__int_rep__io_user_scalar_t)
#elif	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__int_rep__iokit__int)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__int_rep__int)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__int_rep__iokit__int32_t)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__int_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__output__defined */


#ifndef __NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__outputCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__outputCnt__defined
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__outputCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__outputCnt__defined
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__outputCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__outputCnt__defined */



#ifndef __NDR_convert__char_rep__Reply__io_async_method_scalarI_scalarO_t__output__defined
#if	defined(__NDR_convert__char_rep__iokit__io_scalar_inband_t__defined)
#define	__NDR_convert__char_rep__Reply__io_async_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__char_rep__Reply__io_async_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__char_rep__iokit__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_scalar_inband_t__defined)
#define	__NDR_convert__char_rep__Reply__io_async_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__char_rep__Reply__io_async_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__char_rep__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__iokit__io_user_scalar_t__defined)
#define	__NDR_convert__char_rep__Reply__io_async_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__char_rep__Reply__io_async_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__ARRAY((io_user_scalar_t *)(a), f, c, __NDR_convert__char_rep__iokit__io_user_scalar_t)
#elif	defined(__NDR_convert__char_rep__io_user_scalar_t__defined)
#define	__NDR_convert__char_rep__Reply__io_async_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__char_rep__Reply__io_async_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__ARRAY((io_user_scalar_t *)(a), f, c, __NDR_convert__char_rep__io_user_scalar_t)
#elif	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Reply__io_async_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__char_rep__Reply__io_async_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__char_rep__iokit__int)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Reply__io_async_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__char_rep__Reply__io_async_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__char_rep__int)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__io_async_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__char_rep__Reply__io_async_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__char_rep__iokit__int32_t)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__io_async_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__char_rep__Reply__io_async_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__char_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_async_method_scalarI_scalarO_t__output__defined */




#ifndef __NDR_convert__float_rep__Reply__io_async_method_scalarI_scalarO_t__output__defined
#if	defined(__NDR_convert__float_rep__iokit__io_scalar_inband_t__defined)
#define	__NDR_convert__float_rep__Reply__io_async_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__float_rep__Reply__io_async_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__float_rep__iokit__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_scalar_inband_t__defined)
#define	__NDR_convert__float_rep__Reply__io_async_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__float_rep__Reply__io_async_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__float_rep__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__iokit__io_user_scalar_t__defined)
#define	__NDR_convert__float_rep__Reply__io_async_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__float_rep__Reply__io_async_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__ARRAY((io_user_scalar_t *)(a), f, c, __NDR_convert__float_rep__iokit__io_user_scalar_t)
#elif	defined(__NDR_convert__float_rep__io_user_scalar_t__defined)
#define	__NDR_convert__float_rep__Reply__io_async_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__float_rep__Reply__io_async_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__ARRAY((io_user_scalar_t *)(a), f, c, __NDR_convert__float_rep__io_user_scalar_t)
#elif	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Reply__io_async_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__float_rep__Reply__io_async_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__float_rep__iokit__int)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Reply__io_async_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__float_rep__Reply__io_async_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__float_rep__int)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__io_async_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__float_rep__Reply__io_async_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__float_rep__iokit__int32_t)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__io_async_method_scalarI_scalarO_t__output__defined
#define	__NDR_convert__float_rep__Reply__io_async_method_scalarI_scalarO_t__output(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__float_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_async_method_scalarI_scalarO_t__output__defined */




mig_internal kern_return_t __MIG_check__Reply__io_async_method_scalarI_scalarO_t(__Reply__io_async_method_scalarI_scalarO_t *Out0P)
{

	typedef __Reply__io_async_method_scalarI_scalarO_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

	if (Out0P->Head.msgh_id != 2945) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    ((msgh_size > (mach_msg_size_t)sizeof(__Reply) || msgh_size < (mach_msg_size_t)(sizeof(__Reply) - 64)) &&
	     (msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	      Out0P->RetCode == KERN_SUCCESS)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (Out0P->RetCode != KERN_SUCCESS) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if defined(__NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__outputCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__outputCnt(&Out0P->outputCnt, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__outputCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Reply) - 64) + ((4 * Out0P->outputCnt)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__output__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__outputCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__output__defined)
		__NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__output(&Out0P->output, Out0P->NDR.int_rep, Out0P->outputCnt);
#endif /* __NDR_convert__int_rep__Reply__io_async_method_scalarI_scalarO_t__output__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__io_async_method_scalarI_scalarO_t__output__defined) || \
	0
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__io_async_method_scalarI_scalarO_t__output__defined)
		__NDR_convert__char_rep__Reply__io_async_method_scalarI_scalarO_t__output(&Out0P->output, Out0P->NDR.char_rep, Out0P->outputCnt);
#endif /* __NDR_convert__char_rep__Reply__io_async_method_scalarI_scalarO_t__output__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__io_async_method_scalarI_scalarO_t__output__defined) || \
	0
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__io_async_method_scalarI_scalarO_t__output__defined)
		__NDR_convert__float_rep__Reply__io_async_method_scalarI_scalarO_t__output(&Out0P->output, Out0P->NDR.float_rep, Out0P->outputCnt);
#endif /* __NDR_convert__float_rep__Reply__io_async_method_scalarI_scalarO_t__output__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_async_method_scalarI_scalarO_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_async_method_scalarI_scalarO */
mig_external kern_return_t io_async_method_scalarI_scalarO
(
	mach_port_t connection,
	mach_port_t wake_port,
	io_async_ref_t reference,
	mach_msg_type_number_t referenceCnt,
	uint32_t selector,
	io_scalar_inband_t input,
	mach_msg_type_number_t inputCnt,
	io_scalar_inband_t output,
	mach_msg_type_number_t *outputCnt
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t wake_port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t referenceCnt;
		io_user_reference_t reference[8];
		uint32_t selector;
		mach_msg_type_number_t inputCnt;
		io_user_scalar_t input[16];
		mach_msg_type_number_t outputCnt;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t outputCnt;
		io_user_scalar_t output[16];
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t outputCnt;
		io_user_scalar_t output[16];
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;
	unsigned int msgh_size_delta;


#ifdef	__MIG_check__Reply__io_async_method_scalarI_scalarO_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_async_method_scalarI_scalarO_t__defined */

	__DeclareSendRpc(2845, "io_async_method_scalarI_scalarO")

#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t wake_portTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		20,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 1;
#if	UseStaticTemplates
	InP->wake_port = wake_portTemplate;
	InP->wake_port.name = wake_port;
#else	/* UseStaticTemplates */
	InP->wake_port.name = wake_port;
	InP->wake_port.disposition = 20;
	InP->wake_port.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	if (referenceCnt > 8) {
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) InP->reference, (const char *) reference, 4 * referenceCnt);

	InP->referenceCnt = referenceCnt;

	msgh_size_delta = (4 * referenceCnt);
	msgh_size = (mach_msg_size_t)(sizeof(Request) - 96) + msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 32);

	InP->selector = selector;

	if (inputCnt > 16) {
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) InP->input, (const char *) input, 4 * inputCnt);

	InP->inputCnt = inputCnt;

	msgh_size_delta = (4 * inputCnt);
	msgh_size += msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 64);

	if (*outputCnt < 16)
		InP->outputCnt = *outputCnt;
	else
		InP->outputCnt = 16;

	InP = &Mess.In;
	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = connection;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2845;

	__BeforeSendRpc(2845, "io_async_method_scalarI_scalarO")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, msgh_size, (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2845, "io_async_method_scalarI_scalarO")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_async_method_scalarI_scalarO_t__defined)
	check_result = __MIG_check__Reply__io_async_method_scalarI_scalarO_t((__Reply__io_async_method_scalarI_scalarO_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_async_method_scalarI_scalarO_t__defined) */

	if (Out0P->outputCnt > *outputCnt) {
		(void)memcpy((char *) output, (const char *) Out0P->output, 4 *  *outputCnt);
		*outputCnt = Out0P->outputCnt;
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) output, (const char *) Out0P->output, 4 * Out0P->outputCnt);

	*outputCnt = Out0P->outputCnt;

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_async_method_scalarI_structureO_t__defined)
#define __MIG_check__Reply__io_async_method_scalarI_structureO_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_async_method_scalarI_structureO_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_structureO_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_structureO_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_structureO_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_structureO_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_async_method_scalarI_structureO_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__io_async_method_scalarI_structureO_t__output__defined
#if	defined(__NDR_convert__int_rep__iokit__io_struct_inband_t__defined)
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_structureO_t__output__defined
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_structureO_t__output(a, f, c) \
	__NDR_convert__int_rep__iokit__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_struct_inband_t__defined)
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_structureO_t__output__defined
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_structureO_t__output(a, f, c) \
	__NDR_convert__int_rep__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__iokit__char__defined)
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_structureO_t__output__defined
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_structureO_t__output(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__int_rep__iokit__char)
#elif	defined(__NDR_convert__int_rep__char__defined)
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_structureO_t__output__defined
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_structureO_t__output(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__int_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_async_method_scalarI_structureO_t__output__defined */


#ifndef __NDR_convert__int_rep__Reply__io_async_method_scalarI_structureO_t__outputCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_structureO_t__outputCnt__defined
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_structureO_t__outputCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_structureO_t__outputCnt__defined
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_structureO_t__outputCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_async_method_scalarI_structureO_t__outputCnt__defined */



#ifndef __NDR_convert__char_rep__Reply__io_async_method_scalarI_structureO_t__output__defined
#if	defined(__NDR_convert__char_rep__iokit__io_struct_inband_t__defined)
#define	__NDR_convert__char_rep__Reply__io_async_method_scalarI_structureO_t__output__defined
#define	__NDR_convert__char_rep__Reply__io_async_method_scalarI_structureO_t__output(a, f, c) \
	__NDR_convert__char_rep__iokit__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_struct_inband_t__defined)
#define	__NDR_convert__char_rep__Reply__io_async_method_scalarI_structureO_t__output__defined
#define	__NDR_convert__char_rep__Reply__io_async_method_scalarI_structureO_t__output(a, f, c) \
	__NDR_convert__char_rep__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__iokit__char__defined)
#define	__NDR_convert__char_rep__Reply__io_async_method_scalarI_structureO_t__output__defined
#define	__NDR_convert__char_rep__Reply__io_async_method_scalarI_structureO_t__output(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__char_rep__iokit__char)
#elif	defined(__NDR_convert__char_rep__char__defined)
#define	__NDR_convert__char_rep__Reply__io_async_method_scalarI_structureO_t__output__defined
#define	__NDR_convert__char_rep__Reply__io_async_method_scalarI_structureO_t__output(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__char_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_async_method_scalarI_structureO_t__output__defined */




#ifndef __NDR_convert__float_rep__Reply__io_async_method_scalarI_structureO_t__output__defined
#if	defined(__NDR_convert__float_rep__iokit__io_struct_inband_t__defined)
#define	__NDR_convert__float_rep__Reply__io_async_method_scalarI_structureO_t__output__defined
#define	__NDR_convert__float_rep__Reply__io_async_method_scalarI_structureO_t__output(a, f, c) \
	__NDR_convert__float_rep__iokit__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_struct_inband_t__defined)
#define	__NDR_convert__float_rep__Reply__io_async_method_scalarI_structureO_t__output__defined
#define	__NDR_convert__float_rep__Reply__io_async_method_scalarI_structureO_t__output(a, f, c) \
	__NDR_convert__float_rep__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__iokit__char__defined)
#define	__NDR_convert__float_rep__Reply__io_async_method_scalarI_structureO_t__output__defined
#define	__NDR_convert__float_rep__Reply__io_async_method_scalarI_structureO_t__output(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__float_rep__iokit__char)
#elif	defined(__NDR_convert__float_rep__char__defined)
#define	__NDR_convert__float_rep__Reply__io_async_method_scalarI_structureO_t__output__defined
#define	__NDR_convert__float_rep__Reply__io_async_method_scalarI_structureO_t__output(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__float_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_async_method_scalarI_structureO_t__output__defined */




mig_internal kern_return_t __MIG_check__Reply__io_async_method_scalarI_structureO_t(__Reply__io_async_method_scalarI_structureO_t *Out0P)
{

	typedef __Reply__io_async_method_scalarI_structureO_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

	if (Out0P->Head.msgh_id != 2946) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    ((msgh_size > (mach_msg_size_t)sizeof(__Reply) || msgh_size < (mach_msg_size_t)(sizeof(__Reply) - 4096)) &&
	     (msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	      Out0P->RetCode == KERN_SUCCESS)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (Out0P->RetCode != KERN_SUCCESS) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if defined(__NDR_convert__int_rep__Reply__io_async_method_scalarI_structureO_t__outputCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__io_async_method_scalarI_structureO_t__outputCnt(&Out0P->outputCnt, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__io_async_method_scalarI_structureO_t__outputCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Reply) - 4096) + (_WALIGN_(Out0P->outputCnt)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Reply__io_async_method_scalarI_structureO_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_async_method_scalarI_structureO_t__output__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_async_method_scalarI_structureO_t__outputCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__io_async_method_scalarI_structureO_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__io_async_method_scalarI_structureO_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_async_method_scalarI_structureO_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__io_async_method_scalarI_structureO_t__output__defined)
		__NDR_convert__int_rep__Reply__io_async_method_scalarI_structureO_t__output(&Out0P->output, Out0P->NDR.int_rep, Out0P->outputCnt);
#endif /* __NDR_convert__int_rep__Reply__io_async_method_scalarI_structureO_t__output__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__io_async_method_scalarI_structureO_t__output__defined) || \
	0
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__io_async_method_scalarI_structureO_t__output__defined)
		__NDR_convert__char_rep__Reply__io_async_method_scalarI_structureO_t__output(&Out0P->output, Out0P->NDR.char_rep, Out0P->outputCnt);
#endif /* __NDR_convert__char_rep__Reply__io_async_method_scalarI_structureO_t__output__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__io_async_method_scalarI_structureO_t__output__defined) || \
	0
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__io_async_method_scalarI_structureO_t__output__defined)
		__NDR_convert__float_rep__Reply__io_async_method_scalarI_structureO_t__output(&Out0P->output, Out0P->NDR.float_rep, Out0P->outputCnt);
#endif /* __NDR_convert__float_rep__Reply__io_async_method_scalarI_structureO_t__output__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_async_method_scalarI_structureO_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_async_method_scalarI_structureO */
mig_external kern_return_t io_async_method_scalarI_structureO
(
	mach_port_t connection,
	mach_port_t wake_port,
	io_async_ref_t reference,
	mach_msg_type_number_t referenceCnt,
	uint32_t selector,
	io_scalar_inband_t input,
	mach_msg_type_number_t inputCnt,
	io_struct_inband_t output,
	mach_msg_type_number_t *outputCnt
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t wake_port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t referenceCnt;
		io_user_reference_t reference[8];
		uint32_t selector;
		mach_msg_type_number_t inputCnt;
		io_user_scalar_t input[16];
		mach_msg_type_number_t outputCnt;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t outputCnt;
		char output[4096];
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t outputCnt;
		char output[4096];
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;
	unsigned int msgh_size_delta;


#ifdef	__MIG_check__Reply__io_async_method_scalarI_structureO_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_async_method_scalarI_structureO_t__defined */

	__DeclareSendRpc(2846, "io_async_method_scalarI_structureO")

#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t wake_portTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		20,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 1;
#if	UseStaticTemplates
	InP->wake_port = wake_portTemplate;
	InP->wake_port.name = wake_port;
#else	/* UseStaticTemplates */
	InP->wake_port.name = wake_port;
	InP->wake_port.disposition = 20;
	InP->wake_port.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	if (referenceCnt > 8) {
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) InP->reference, (const char *) reference, 4 * referenceCnt);

	InP->referenceCnt = referenceCnt;

	msgh_size_delta = (4 * referenceCnt);
	msgh_size = (mach_msg_size_t)(sizeof(Request) - 96) + msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 32);

	InP->selector = selector;

	if (inputCnt > 16) {
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) InP->input, (const char *) input, 4 * inputCnt);

	InP->inputCnt = inputCnt;

	msgh_size_delta = (4 * inputCnt);
	msgh_size += msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 64);

	if (*outputCnt < 4096)
		InP->outputCnt = *outputCnt;
	else
		InP->outputCnt = 4096;

	InP = &Mess.In;
	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = connection;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2846;

	__BeforeSendRpc(2846, "io_async_method_scalarI_structureO")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, msgh_size, (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2846, "io_async_method_scalarI_structureO")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_async_method_scalarI_structureO_t__defined)
	check_result = __MIG_check__Reply__io_async_method_scalarI_structureO_t((__Reply__io_async_method_scalarI_structureO_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_async_method_scalarI_structureO_t__defined) */

	if (Out0P->outputCnt > *outputCnt) {
		(void)memcpy((char *) output, (const char *) Out0P->output,  *outputCnt);
		*outputCnt = Out0P->outputCnt;
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) output, (const char *) Out0P->output, Out0P->outputCnt);

	*outputCnt = Out0P->outputCnt;

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_async_method_scalarI_structureI_t__defined)
#define __MIG_check__Reply__io_async_method_scalarI_structureI_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_async_method_scalarI_structureI_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_structureI_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_structureI_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_structureI_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_async_method_scalarI_structureI_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_async_method_scalarI_structureI_t__RetCode__defined */





mig_internal kern_return_t __MIG_check__Reply__io_async_method_scalarI_structureI_t(__Reply__io_async_method_scalarI_structureI_t *Out0P)
{

	typedef __Reply__io_async_method_scalarI_structureI_t __Reply;
	if (Out0P->Head.msgh_id != 2947) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (Out0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Reply)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Reply__io_async_method_scalarI_structureI_t__RetCode__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__io_async_method_scalarI_structureI_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__io_async_method_scalarI_structureI_t__RetCode__defined */
	{
		return Out0P->RetCode;
	}
}
#endif /* !defined(__MIG_check__Reply__io_async_method_scalarI_structureI_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_async_method_scalarI_structureI */
mig_external kern_return_t io_async_method_scalarI_structureI
(
	mach_port_t connection,
	mach_port_t wake_port,
	io_async_ref_t reference,
	mach_msg_type_number_t referenceCnt,
	uint32_t selector,
	io_scalar_inband_t input,
	mach_msg_type_number_t inputCnt,
	io_struct_inband_t inputStruct,
	mach_msg_type_number_t inputStructCnt
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t wake_port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t referenceCnt;
		io_user_reference_t reference[8];
		uint32_t selector;
		mach_msg_type_number_t inputCnt;
		io_user_scalar_t input[16];
		mach_msg_type_number_t inputStructCnt;
		char inputStruct[4096];
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;
	unsigned int msgh_size_delta;


#ifdef	__MIG_check__Reply__io_async_method_scalarI_structureI_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_async_method_scalarI_structureI_t__defined */

	__DeclareSendRpc(2847, "io_async_method_scalarI_structureI")

#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t wake_portTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		20,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 1;
#if	UseStaticTemplates
	InP->wake_port = wake_portTemplate;
	InP->wake_port.name = wake_port;
#else	/* UseStaticTemplates */
	InP->wake_port.name = wake_port;
	InP->wake_port.disposition = 20;
	InP->wake_port.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	if (referenceCnt > 8) {
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) InP->reference, (const char *) reference, 4 * referenceCnt);

	InP->referenceCnt = referenceCnt;

	msgh_size_delta = (4 * referenceCnt);
	msgh_size = (mach_msg_size_t)(sizeof(Request) - 4192) + msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 32);

	InP->selector = selector;

	if (inputCnt > 16) {
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) InP->input, (const char *) input, 4 * inputCnt);

	InP->inputCnt = inputCnt;

	msgh_size_delta = (4 * inputCnt);
	msgh_size += msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 64);

	if (inputStructCnt > 4096) {
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) InP->inputStruct, (const char *) inputStruct, inputStructCnt);

	InP->inputStructCnt = inputStructCnt;

	msgh_size += _WALIGN_(inputStructCnt);
	InP = &Mess.In;
	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = connection;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2847;

	__BeforeSendRpc(2847, "io_async_method_scalarI_structureI")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, msgh_size, (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2847, "io_async_method_scalarI_structureI")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_async_method_scalarI_structureI_t__defined)
	check_result = __MIG_check__Reply__io_async_method_scalarI_structureI_t((__Reply__io_async_method_scalarI_structureI_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_async_method_scalarI_structureI_t__defined) */

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_async_method_structureI_structureO_t__defined)
#define __MIG_check__Reply__io_async_method_structureI_structureO_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_async_method_structureI_structureO_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_async_method_structureI_structureO_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_async_method_structureI_structureO_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_async_method_structureI_structureO_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_async_method_structureI_structureO_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_async_method_structureI_structureO_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__io_async_method_structureI_structureO_t__output__defined
#if	defined(__NDR_convert__int_rep__iokit__io_struct_inband_t__defined)
#define	__NDR_convert__int_rep__Reply__io_async_method_structureI_structureO_t__output__defined
#define	__NDR_convert__int_rep__Reply__io_async_method_structureI_structureO_t__output(a, f, c) \
	__NDR_convert__int_rep__iokit__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_struct_inband_t__defined)
#define	__NDR_convert__int_rep__Reply__io_async_method_structureI_structureO_t__output__defined
#define	__NDR_convert__int_rep__Reply__io_async_method_structureI_structureO_t__output(a, f, c) \
	__NDR_convert__int_rep__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__iokit__char__defined)
#define	__NDR_convert__int_rep__Reply__io_async_method_structureI_structureO_t__output__defined
#define	__NDR_convert__int_rep__Reply__io_async_method_structureI_structureO_t__output(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__int_rep__iokit__char)
#elif	defined(__NDR_convert__int_rep__char__defined)
#define	__NDR_convert__int_rep__Reply__io_async_method_structureI_structureO_t__output__defined
#define	__NDR_convert__int_rep__Reply__io_async_method_structureI_structureO_t__output(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__int_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_async_method_structureI_structureO_t__output__defined */


#ifndef __NDR_convert__int_rep__Reply__io_async_method_structureI_structureO_t__outputCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_async_method_structureI_structureO_t__outputCnt__defined
#define	__NDR_convert__int_rep__Reply__io_async_method_structureI_structureO_t__outputCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_async_method_structureI_structureO_t__outputCnt__defined
#define	__NDR_convert__int_rep__Reply__io_async_method_structureI_structureO_t__outputCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_async_method_structureI_structureO_t__outputCnt__defined */



#ifndef __NDR_convert__char_rep__Reply__io_async_method_structureI_structureO_t__output__defined
#if	defined(__NDR_convert__char_rep__iokit__io_struct_inband_t__defined)
#define	__NDR_convert__char_rep__Reply__io_async_method_structureI_structureO_t__output__defined
#define	__NDR_convert__char_rep__Reply__io_async_method_structureI_structureO_t__output(a, f, c) \
	__NDR_convert__char_rep__iokit__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_struct_inband_t__defined)
#define	__NDR_convert__char_rep__Reply__io_async_method_structureI_structureO_t__output__defined
#define	__NDR_convert__char_rep__Reply__io_async_method_structureI_structureO_t__output(a, f, c) \
	__NDR_convert__char_rep__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__iokit__char__defined)
#define	__NDR_convert__char_rep__Reply__io_async_method_structureI_structureO_t__output__defined
#define	__NDR_convert__char_rep__Reply__io_async_method_structureI_structureO_t__output(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__char_rep__iokit__char)
#elif	defined(__NDR_convert__char_rep__char__defined)
#define	__NDR_convert__char_rep__Reply__io_async_method_structureI_structureO_t__output__defined
#define	__NDR_convert__char_rep__Reply__io_async_method_structureI_structureO_t__output(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__char_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_async_method_structureI_structureO_t__output__defined */




#ifndef __NDR_convert__float_rep__Reply__io_async_method_structureI_structureO_t__output__defined
#if	defined(__NDR_convert__float_rep__iokit__io_struct_inband_t__defined)
#define	__NDR_convert__float_rep__Reply__io_async_method_structureI_structureO_t__output__defined
#define	__NDR_convert__float_rep__Reply__io_async_method_structureI_structureO_t__output(a, f, c) \
	__NDR_convert__float_rep__iokit__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_struct_inband_t__defined)
#define	__NDR_convert__float_rep__Reply__io_async_method_structureI_structureO_t__output__defined
#define	__NDR_convert__float_rep__Reply__io_async_method_structureI_structureO_t__output(a, f, c) \
	__NDR_convert__float_rep__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__iokit__char__defined)
#define	__NDR_convert__float_rep__Reply__io_async_method_structureI_structureO_t__output__defined
#define	__NDR_convert__float_rep__Reply__io_async_method_structureI_structureO_t__output(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__float_rep__iokit__char)
#elif	defined(__NDR_convert__float_rep__char__defined)
#define	__NDR_convert__float_rep__Reply__io_async_method_structureI_structureO_t__output__defined
#define	__NDR_convert__float_rep__Reply__io_async_method_structureI_structureO_t__output(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__float_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_async_method_structureI_structureO_t__output__defined */




mig_internal kern_return_t __MIG_check__Reply__io_async_method_structureI_structureO_t(__Reply__io_async_method_structureI_structureO_t *Out0P)
{

	typedef __Reply__io_async_method_structureI_structureO_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

	if (Out0P->Head.msgh_id != 2948) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    ((msgh_size > (mach_msg_size_t)sizeof(__Reply) || msgh_size < (mach_msg_size_t)(sizeof(__Reply) - 4096)) &&
	     (msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	      Out0P->RetCode == KERN_SUCCESS)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (Out0P->RetCode != KERN_SUCCESS) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if defined(__NDR_convert__int_rep__Reply__io_async_method_structureI_structureO_t__outputCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__io_async_method_structureI_structureO_t__outputCnt(&Out0P->outputCnt, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__io_async_method_structureI_structureO_t__outputCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Reply) - 4096) + (_WALIGN_(Out0P->outputCnt)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Reply__io_async_method_structureI_structureO_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_async_method_structureI_structureO_t__output__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_async_method_structureI_structureO_t__outputCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__io_async_method_structureI_structureO_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__io_async_method_structureI_structureO_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_async_method_structureI_structureO_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__io_async_method_structureI_structureO_t__output__defined)
		__NDR_convert__int_rep__Reply__io_async_method_structureI_structureO_t__output(&Out0P->output, Out0P->NDR.int_rep, Out0P->outputCnt);
#endif /* __NDR_convert__int_rep__Reply__io_async_method_structureI_structureO_t__output__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__io_async_method_structureI_structureO_t__output__defined) || \
	0
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__io_async_method_structureI_structureO_t__output__defined)
		__NDR_convert__char_rep__Reply__io_async_method_structureI_structureO_t__output(&Out0P->output, Out0P->NDR.char_rep, Out0P->outputCnt);
#endif /* __NDR_convert__char_rep__Reply__io_async_method_structureI_structureO_t__output__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__io_async_method_structureI_structureO_t__output__defined) || \
	0
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__io_async_method_structureI_structureO_t__output__defined)
		__NDR_convert__float_rep__Reply__io_async_method_structureI_structureO_t__output(&Out0P->output, Out0P->NDR.float_rep, Out0P->outputCnt);
#endif /* __NDR_convert__float_rep__Reply__io_async_method_structureI_structureO_t__output__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_async_method_structureI_structureO_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_async_method_structureI_structureO */
mig_external kern_return_t io_async_method_structureI_structureO
(
	mach_port_t connection,
	mach_port_t wake_port,
	io_async_ref_t reference,
	mach_msg_type_number_t referenceCnt,
	uint32_t selector,
	io_struct_inband_t input,
	mach_msg_type_number_t inputCnt,
	io_struct_inband_t output,
	mach_msg_type_number_t *outputCnt
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t wake_port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t referenceCnt;
		io_user_reference_t reference[8];
		uint32_t selector;
		mach_msg_type_number_t inputCnt;
		char input[4096];
		mach_msg_type_number_t outputCnt;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t outputCnt;
		char output[4096];
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t outputCnt;
		char output[4096];
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;
	unsigned int msgh_size_delta;


#ifdef	__MIG_check__Reply__io_async_method_structureI_structureO_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_async_method_structureI_structureO_t__defined */

	__DeclareSendRpc(2848, "io_async_method_structureI_structureO")

#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t wake_portTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		20,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 1;
#if	UseStaticTemplates
	InP->wake_port = wake_portTemplate;
	InP->wake_port.name = wake_port;
#else	/* UseStaticTemplates */
	InP->wake_port.name = wake_port;
	InP->wake_port.disposition = 20;
	InP->wake_port.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	if (referenceCnt > 8) {
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) InP->reference, (const char *) reference, 4 * referenceCnt);

	InP->referenceCnt = referenceCnt;

	msgh_size_delta = (4 * referenceCnt);
	msgh_size = (mach_msg_size_t)(sizeof(Request) - 4128) + msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 32);

	InP->selector = selector;

	if (inputCnt > 4096) {
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) InP->input, (const char *) input, inputCnt);

	InP->inputCnt = inputCnt;

	msgh_size_delta = _WALIGN_(inputCnt);
	msgh_size += msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 4096);

	if (*outputCnt < 4096)
		InP->outputCnt = *outputCnt;
	else
		InP->outputCnt = 4096;

	InP = &Mess.In;
	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = connection;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2848;

	__BeforeSendRpc(2848, "io_async_method_structureI_structureO")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, msgh_size, (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2848, "io_async_method_structureI_structureO")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_async_method_structureI_structureO_t__defined)
	check_result = __MIG_check__Reply__io_async_method_structureI_structureO_t((__Reply__io_async_method_structureI_structureO_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_async_method_structureI_structureO_t__defined) */

	if (Out0P->outputCnt > *outputCnt) {
		(void)memcpy((char *) output, (const char *) Out0P->output,  *outputCnt);
		*outputCnt = Out0P->outputCnt;
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) output, (const char *) Out0P->output, Out0P->outputCnt);

	*outputCnt = Out0P->outputCnt;

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_service_add_notification_t__defined)
#define __MIG_check__Reply__io_service_add_notification_t__defined

mig_internal kern_return_t __MIG_check__Reply__io_service_add_notification_t(__Reply__io_service_add_notification_t *Out0P)
{

	typedef __Reply__io_service_add_notification_t __Reply;
	boolean_t msgh_simple;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 2949) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

	msgh_simple = !(Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX);
#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((msgh_simple || Out0P->msgh_body.msgh_descriptor_count != 1 ||
	    msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	    (!msgh_simple || msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	    ((mig_reply_error_t *)Out0P)->RetCode == KERN_SUCCESS))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (msgh_simple) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	__MigTypeCheck
	if (Out0P->notification.type != MACH_MSG_PORT_DESCRIPTOR ||
	    Out0P->notification.disposition != 17) {
		return MIG_TYPE_ERROR;
	}
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_service_add_notification_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_service_add_notification */
mig_external kern_return_t io_service_add_notification
(
	mach_port_t master_port,
	io_name_t notification_type,
	io_string_t matching,
	mach_port_t wake_port,
	io_async_ref_t reference,
	mach_msg_type_number_t referenceCnt,
	mach_port_t *notification
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t wake_port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t notification_typeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t notification_typeCnt;
		char notification_type[128];
		mach_msg_type_number_t matchingOffset; /* MiG doesn't use it */
		mach_msg_type_number_t matchingCnt;
		char matching[512];
		mach_msg_type_number_t referenceCnt;
		io_user_reference_t reference[8];
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t notification;
		/* end of the kernel processed data */
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t notification;
		/* end of the kernel processed data */
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;
	unsigned int msgh_size_delta;


#ifdef	__MIG_check__Reply__io_service_add_notification_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_service_add_notification_t__defined */

	__DeclareSendRpc(2849, "io_service_add_notification")

#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t wake_portTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		20,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 1;
#if	UseStaticTemplates
	InP->wake_port = wake_portTemplate;
	InP->wake_port.name = wake_port;
#else	/* UseStaticTemplates */
	InP->wake_port.name = wake_port;
	InP->wake_port.disposition = 20;
	InP->wake_port.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	InP->notification_typeCnt = mig_strncpy(InP->notification_type, notification_type, 128);

	msgh_size_delta = _WALIGN_(InP->notification_typeCnt);
	msgh_size = (mach_msg_size_t)(sizeof(Request) - 672) + msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 128);

	InP->matchingCnt = mig_strncpy(InP->matching, matching, 512);

	msgh_size_delta = _WALIGN_(InP->matchingCnt);
	msgh_size += msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 512);

	if (referenceCnt > 8) {
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) InP->reference, (const char *) reference, 4 * referenceCnt);

	InP->referenceCnt = referenceCnt;

	msgh_size += (4 * referenceCnt);
	InP = &Mess.In;
	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = master_port;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2849;

	__BeforeSendRpc(2849, "io_service_add_notification")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, msgh_size, (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2849, "io_service_add_notification")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_service_add_notification_t__defined)
	check_result = __MIG_check__Reply__io_service_add_notification_t((__Reply__io_service_add_notification_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_service_add_notification_t__defined) */

	*notification = Out0P->notification.name;
	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_service_add_interest_notification_t__defined)
#define __MIG_check__Reply__io_service_add_interest_notification_t__defined

mig_internal kern_return_t __MIG_check__Reply__io_service_add_interest_notification_t(__Reply__io_service_add_interest_notification_t *Out0P)
{

	typedef __Reply__io_service_add_interest_notification_t __Reply;
	boolean_t msgh_simple;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 2950) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

	msgh_simple = !(Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX);
#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((msgh_simple || Out0P->msgh_body.msgh_descriptor_count != 1 ||
	    msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	    (!msgh_simple || msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	    ((mig_reply_error_t *)Out0P)->RetCode == KERN_SUCCESS))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (msgh_simple) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	__MigTypeCheck
	if (Out0P->notification.type != MACH_MSG_PORT_DESCRIPTOR ||
	    Out0P->notification.disposition != 17) {
		return MIG_TYPE_ERROR;
	}
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_service_add_interest_notification_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_service_add_interest_notification */
mig_external kern_return_t io_service_add_interest_notification
(
	mach_port_t service,
	io_name_t type_of_interest,
	mach_port_t wake_port,
	io_async_ref_t reference,
	mach_msg_type_number_t referenceCnt,
	mach_port_t *notification
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t wake_port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t type_of_interestOffset; /* MiG doesn't use it */
		mach_msg_type_number_t type_of_interestCnt;
		char type_of_interest[128];
		mach_msg_type_number_t referenceCnt;
		io_user_reference_t reference[8];
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t notification;
		/* end of the kernel processed data */
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t notification;
		/* end of the kernel processed data */
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;
	unsigned int msgh_size_delta;


#ifdef	__MIG_check__Reply__io_service_add_interest_notification_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_service_add_interest_notification_t__defined */

	__DeclareSendRpc(2850, "io_service_add_interest_notification")

#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t wake_portTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		20,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 1;
#if	UseStaticTemplates
	InP->wake_port = wake_portTemplate;
	InP->wake_port.name = wake_port;
#else	/* UseStaticTemplates */
	InP->wake_port.name = wake_port;
	InP->wake_port.disposition = 20;
	InP->wake_port.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	InP->type_of_interestCnt = mig_strncpy(InP->type_of_interest, type_of_interest, 128);

	msgh_size_delta = _WALIGN_(InP->type_of_interestCnt);
	msgh_size = (mach_msg_size_t)(sizeof(Request) - 160) + msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 128);

	if (referenceCnt > 8) {
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) InP->reference, (const char *) reference, 4 * referenceCnt);

	InP->referenceCnt = referenceCnt;

	msgh_size += (4 * referenceCnt);
	InP = &Mess.In;
	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = service;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2850;

	__BeforeSendRpc(2850, "io_service_add_interest_notification")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, msgh_size, (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2850, "io_service_add_interest_notification")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_service_add_interest_notification_t__defined)
	check_result = __MIG_check__Reply__io_service_add_interest_notification_t((__Reply__io_service_add_interest_notification_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_service_add_interest_notification_t__defined) */

	*notification = Out0P->notification.name;
	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_service_acknowledge_notification_t__defined)
#define __MIG_check__Reply__io_service_acknowledge_notification_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_service_acknowledge_notification_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_acknowledge_notification_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_service_acknowledge_notification_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_acknowledge_notification_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_service_acknowledge_notification_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_service_acknowledge_notification_t__RetCode__defined */





mig_internal kern_return_t __MIG_check__Reply__io_service_acknowledge_notification_t(__Reply__io_service_acknowledge_notification_t *Out0P)
{

	typedef __Reply__io_service_acknowledge_notification_t __Reply;
	if (Out0P->Head.msgh_id != 2951) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (Out0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Reply)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Reply__io_service_acknowledge_notification_t__RetCode__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__io_service_acknowledge_notification_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__io_service_acknowledge_notification_t__RetCode__defined */
	{
		return Out0P->RetCode;
	}
}
#endif /* !defined(__MIG_check__Reply__io_service_acknowledge_notification_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_service_acknowledge_notification */
mig_external kern_return_t io_service_acknowledge_notification
(
	mach_port_t service,
	natural_t notify_ref,
	natural_t response
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		natural_t notify_ref;
		natural_t response;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__io_service_acknowledge_notification_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_service_acknowledge_notification_t__defined */

	__DeclareSendRpc(2851, "io_service_acknowledge_notification")

	InP->NDR = NDR_record;

	InP->notify_ref = notify_ref;

	InP->response = response;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = service;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2851;

	__BeforeSendRpc(2851, "io_service_acknowledge_notification")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2851, "io_service_acknowledge_notification")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_service_acknowledge_notification_t__defined)
	check_result = __MIG_check__Reply__io_service_acknowledge_notification_t((__Reply__io_service_acknowledge_notification_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_service_acknowledge_notification_t__defined) */

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_connect_get_notification_semaphore_t__defined)
#define __MIG_check__Reply__io_connect_get_notification_semaphore_t__defined

mig_internal kern_return_t __MIG_check__Reply__io_connect_get_notification_semaphore_t(__Reply__io_connect_get_notification_semaphore_t *Out0P)
{

	typedef __Reply__io_connect_get_notification_semaphore_t __Reply;
	boolean_t msgh_simple;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 2952) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

	msgh_simple = !(Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX);
#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((msgh_simple || Out0P->msgh_body.msgh_descriptor_count != 1 ||
	    msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	    (!msgh_simple || msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	    ((mig_reply_error_t *)Out0P)->RetCode == KERN_SUCCESS))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (msgh_simple) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	__MigTypeCheck
	if (Out0P->semaphore.type != MACH_MSG_PORT_DESCRIPTOR ||
	    Out0P->semaphore.disposition != 17) {
		return MIG_TYPE_ERROR;
	}
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_connect_get_notification_semaphore_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_connect_get_notification_semaphore */
mig_external kern_return_t io_connect_get_notification_semaphore
(
	mach_port_t connection,
	natural_t notification_type,
	semaphore_t *semaphore
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		natural_t notification_type;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t semaphore;
		/* end of the kernel processed data */
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t semaphore;
		/* end of the kernel processed data */
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__io_connect_get_notification_semaphore_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_connect_get_notification_semaphore_t__defined */

	__DeclareSendRpc(2852, "io_connect_get_notification_semaphore")

	InP->NDR = NDR_record;

	InP->notification_type = notification_type;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = connection;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2852;

	__BeforeSendRpc(2852, "io_connect_get_notification_semaphore")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2852, "io_connect_get_notification_semaphore")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_connect_get_notification_semaphore_t__defined)
	check_result = __MIG_check__Reply__io_connect_get_notification_semaphore_t((__Reply__io_connect_get_notification_semaphore_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_connect_get_notification_semaphore_t__defined) */

	*semaphore = Out0P->semaphore.name;
	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_connect_unmap_memory_t__defined)
#define __MIG_check__Reply__io_connect_unmap_memory_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_connect_unmap_memory_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_unmap_memory_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_connect_unmap_memory_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_unmap_memory_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_connect_unmap_memory_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_connect_unmap_memory_t__RetCode__defined */





mig_internal kern_return_t __MIG_check__Reply__io_connect_unmap_memory_t(__Reply__io_connect_unmap_memory_t *Out0P)
{

	typedef __Reply__io_connect_unmap_memory_t __Reply;
	if (Out0P->Head.msgh_id != 2953) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (Out0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Reply)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Reply__io_connect_unmap_memory_t__RetCode__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__io_connect_unmap_memory_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__io_connect_unmap_memory_t__RetCode__defined */
	{
		return Out0P->RetCode;
	}
}
#endif /* !defined(__MIG_check__Reply__io_connect_unmap_memory_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_connect_unmap_memory */
mig_external kern_return_t io_connect_unmap_memory
(
	mach_port_t connection,
	uint32_t memory_type,
	task_t into_task,
	vm_address_t address
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t into_task;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint32_t memory_type;
		vm_address_t address;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__io_connect_unmap_memory_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_connect_unmap_memory_t__defined */

	__DeclareSendRpc(2853, "io_connect_unmap_memory")

#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t into_taskTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 1;
#if	UseStaticTemplates
	InP->into_task = into_taskTemplate;
	InP->into_task.name = into_task;
#else	/* UseStaticTemplates */
	InP->into_task.name = into_task;
	InP->into_task.disposition = 19;
	InP->into_task.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	InP->memory_type = memory_type;

	InP->address = address;

	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = connection;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2853;

	__BeforeSendRpc(2853, "io_connect_unmap_memory")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2853, "io_connect_unmap_memory")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_connect_unmap_memory_t__defined)
	check_result = __MIG_check__Reply__io_connect_unmap_memory_t((__Reply__io_connect_unmap_memory_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_connect_unmap_memory_t__defined) */

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_registry_entry_get_location_in_plane_t__defined)
#define __MIG_check__Reply__io_registry_entry_get_location_in_plane_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_registry_entry_get_location_in_plane_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_location_in_plane_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_location_in_plane_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_location_in_plane_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_location_in_plane_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_get_location_in_plane_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__io_registry_entry_get_location_in_plane_t__location__defined
#if	defined(__NDR_convert__int_rep__iokit__io_name_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_location_in_plane_t__location__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_location_in_plane_t__location(a, f, c) \
	__NDR_convert__int_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_name_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_location_in_plane_t__location__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_location_in_plane_t__location(a, f, c) \
	__NDR_convert__int_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_get_location_in_plane_t__location__defined */


#ifndef __NDR_convert__int_rep__Reply__io_registry_entry_get_location_in_plane_t__locationCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_location_in_plane_t__locationCnt__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_location_in_plane_t__locationCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_location_in_plane_t__locationCnt__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_location_in_plane_t__locationCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_get_location_in_plane_t__locationCnt__defined */



#ifndef __NDR_convert__char_rep__Reply__io_registry_entry_get_location_in_plane_t__location__defined
#if	defined(__NDR_convert__char_rep__iokit__io_name_t__defined)
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_location_in_plane_t__location__defined
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_location_in_plane_t__location(a, f, c) \
	__NDR_convert__char_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_name_t__defined)
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_location_in_plane_t__location__defined
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_location_in_plane_t__location(a, f, c) \
	__NDR_convert__char_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_registry_entry_get_location_in_plane_t__location__defined */




#ifndef __NDR_convert__float_rep__Reply__io_registry_entry_get_location_in_plane_t__location__defined
#if	defined(__NDR_convert__float_rep__iokit__io_name_t__defined)
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_location_in_plane_t__location__defined
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_location_in_plane_t__location(a, f, c) \
	__NDR_convert__float_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_name_t__defined)
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_location_in_plane_t__location__defined
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_location_in_plane_t__location(a, f, c) \
	__NDR_convert__float_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_registry_entry_get_location_in_plane_t__location__defined */




mig_internal kern_return_t __MIG_check__Reply__io_registry_entry_get_location_in_plane_t(__Reply__io_registry_entry_get_location_in_plane_t *Out0P)
{

	typedef __Reply__io_registry_entry_get_location_in_plane_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

	if (Out0P->Head.msgh_id != 2954) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    ((msgh_size > (mach_msg_size_t)sizeof(__Reply) || msgh_size < (mach_msg_size_t)(sizeof(__Reply) - 128)) &&
	     (msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	      Out0P->RetCode == KERN_SUCCESS)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (Out0P->RetCode != KERN_SUCCESS) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_location_in_plane_t__locationCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__io_registry_entry_get_location_in_plane_t__locationCnt(&Out0P->locationCnt, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__io_registry_entry_get_location_in_plane_t__locationCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Reply) - 128) + (_WALIGN_(Out0P->locationCnt)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_location_in_plane_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_location_in_plane_t__location__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_location_in_plane_t__locationCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_location_in_plane_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__io_registry_entry_get_location_in_plane_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_get_location_in_plane_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_location_in_plane_t__location__defined)
		__NDR_convert__int_rep__Reply__io_registry_entry_get_location_in_plane_t__location(&Out0P->location, Out0P->NDR.int_rep, Out0P->locationCnt);
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_get_location_in_plane_t__location__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__io_registry_entry_get_location_in_plane_t__location__defined) || \
	0
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__io_registry_entry_get_location_in_plane_t__location__defined)
		__NDR_convert__char_rep__Reply__io_registry_entry_get_location_in_plane_t__location(&Out0P->location, Out0P->NDR.char_rep, Out0P->locationCnt);
#endif /* __NDR_convert__char_rep__Reply__io_registry_entry_get_location_in_plane_t__location__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__io_registry_entry_get_location_in_plane_t__location__defined) || \
	0
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__io_registry_entry_get_location_in_plane_t__location__defined)
		__NDR_convert__float_rep__Reply__io_registry_entry_get_location_in_plane_t__location(&Out0P->location, Out0P->NDR.float_rep, Out0P->locationCnt);
#endif /* __NDR_convert__float_rep__Reply__io_registry_entry_get_location_in_plane_t__location__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_registry_entry_get_location_in_plane_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_registry_entry_get_location_in_plane */
mig_external kern_return_t io_registry_entry_get_location_in_plane
(
	mach_port_t registry_entry,
	io_name_t plane,
	io_name_t location
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t planeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t planeCnt;
		char plane[128];
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t locationOffset; /* MiG doesn't use it */
		mach_msg_type_number_t locationCnt;
		char location[128];
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t locationOffset; /* MiG doesn't use it */
		mach_msg_type_number_t locationCnt;
		char location[128];
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;

#ifdef	__MIG_check__Reply__io_registry_entry_get_location_in_plane_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_registry_entry_get_location_in_plane_t__defined */

	__DeclareSendRpc(2854, "io_registry_entry_get_location_in_plane")

	InP->NDR = NDR_record;

	InP->planeCnt = mig_strncpy(InP->plane, plane, 128);

	msgh_size = (mach_msg_size_t)(sizeof(Request) - 128) + (_WALIGN_(InP->planeCnt));
	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = registry_entry;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2854;

	__BeforeSendRpc(2854, "io_registry_entry_get_location_in_plane")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, msgh_size, (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2854, "io_registry_entry_get_location_in_plane")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_registry_entry_get_location_in_plane_t__defined)
	check_result = __MIG_check__Reply__io_registry_entry_get_location_in_plane_t((__Reply__io_registry_entry_get_location_in_plane_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_registry_entry_get_location_in_plane_t__defined) */

	(void) mig_strncpy(location, Out0P->location, 128);

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_registry_entry_get_property_recursively_t__defined)
#define __MIG_check__Reply__io_registry_entry_get_property_recursively_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_registry_entry_get_property_recursively_t__properties__defined
#if	defined(__NDR_convert__int_rep__iokit__io_buf_ptr_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_property_recursively_t__properties__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_property_recursively_t__properties(a, f, c) \
	__NDR_convert__int_rep__iokit__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_buf_ptr_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_property_recursively_t__properties__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_property_recursively_t__properties(a, f, c) \
	__NDR_convert__int_rep__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_get_property_recursively_t__properties__defined */


#ifndef __NDR_convert__int_rep__Reply__io_registry_entry_get_property_recursively_t__propertiesCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_property_recursively_t__propertiesCnt__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_property_recursively_t__propertiesCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_property_recursively_t__propertiesCnt__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_property_recursively_t__propertiesCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_get_property_recursively_t__propertiesCnt__defined */


#ifndef __NDR_convert__char_rep__Reply__io_registry_entry_get_property_recursively_t__properties__defined
#if	defined(__NDR_convert__char_rep__iokit__io_buf_ptr_t__defined)
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_property_recursively_t__properties__defined
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_property_recursively_t__properties(a, f, c) \
	__NDR_convert__char_rep__iokit__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_buf_ptr_t__defined)
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_property_recursively_t__properties__defined
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_property_recursively_t__properties(a, f, c) \
	__NDR_convert__char_rep__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_registry_entry_get_property_recursively_t__properties__defined */



#ifndef __NDR_convert__float_rep__Reply__io_registry_entry_get_property_recursively_t__properties__defined
#if	defined(__NDR_convert__float_rep__iokit__io_buf_ptr_t__defined)
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_property_recursively_t__properties__defined
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_property_recursively_t__properties(a, f, c) \
	__NDR_convert__float_rep__iokit__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_buf_ptr_t__defined)
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_property_recursively_t__properties__defined
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_property_recursively_t__properties(a, f, c) \
	__NDR_convert__float_rep__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_registry_entry_get_property_recursively_t__properties__defined */




mig_internal kern_return_t __MIG_check__Reply__io_registry_entry_get_property_recursively_t(__Reply__io_registry_entry_get_property_recursively_t *Out0P)
{

	typedef __Reply__io_registry_entry_get_property_recursively_t __Reply;
	boolean_t msgh_simple;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 2955) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

	msgh_simple = !(Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX);
#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((msgh_simple || Out0P->msgh_body.msgh_descriptor_count != 1 ||
	    msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	    (!msgh_simple || msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	    ((mig_reply_error_t *)Out0P)->RetCode == KERN_SUCCESS))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (msgh_simple) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	__MigTypeCheck
	if (Out0P->properties.type != MACH_MSG_OOL_DESCRIPTOR) {
		return MIG_TYPE_ERROR;
	}
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_property_recursively_t__properties__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_property_recursively_t__propertiesCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_property_recursively_t__propertiesCnt__defined)
		__NDR_convert__int_rep__Reply__io_registry_entry_get_property_recursively_t__propertiesCnt(&Out0P->propertiesCnt, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__io_registry_entry_get_property_recursively_t__propertiesCnt__defined */
#if defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_property_recursively_t__properties__defined)
		__NDR_convert__int_rep__Reply__io_registry_entry_get_property_recursively_t__properties((io_buf_ptr_t)(Out0P->properties.address), Out0P->NDR.int_rep, Out0P->propertiesCnt);
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_get_property_recursively_t__properties__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Reply__io_registry_entry_get_property_recursively_t__properties__defined) || \
	0
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__io_registry_entry_get_property_recursively_t__properties__defined)
		__NDR_convert__char_rep__Reply__io_registry_entry_get_property_recursively_t__properties((io_buf_ptr_t)(Out0P->properties.address), Out0P->NDR.char_rep, Out0P->propertiesCnt);
#endif /* __NDR_convert__char_rep__Reply__io_registry_entry_get_property_recursively_t__properties__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Reply__io_registry_entry_get_property_recursively_t__properties__defined) || \
	0
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__io_registry_entry_get_property_recursively_t__properties__defined)
		__NDR_convert__float_rep__Reply__io_registry_entry_get_property_recursively_t__properties((io_buf_ptr_t)(Out0P->properties.address), Out0P->NDR.float_rep, Out0P->propertiesCnt);
#endif /* __NDR_convert__float_rep__Reply__io_registry_entry_get_property_recursively_t__properties__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_registry_entry_get_property_recursively_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_registry_entry_get_property_recursively */
mig_external kern_return_t io_registry_entry_get_property_recursively
(
	mach_port_t registry_entry,
	io_name_t plane,
	io_name_t property_name,
	uint32_t options,
	io_buf_ptr_t *properties,
	mach_msg_type_number_t *propertiesCnt
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t planeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t planeCnt;
		char plane[128];
		mach_msg_type_number_t property_nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t property_nameCnt;
		char property_name[128];
		uint32_t options;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t properties;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t propertiesCnt;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t properties;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t propertiesCnt;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;
	unsigned int msgh_size_delta;


#ifdef	__MIG_check__Reply__io_registry_entry_get_property_recursively_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_registry_entry_get_property_recursively_t__defined */

	__DeclareSendRpc(2855, "io_registry_entry_get_property_recursively")

	InP->NDR = NDR_record;

	InP->planeCnt = mig_strncpy(InP->plane, plane, 128);

	msgh_size_delta = _WALIGN_(InP->planeCnt);
	msgh_size = (mach_msg_size_t)(sizeof(Request) - 256) + msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 128);

	InP->property_nameCnt = mig_strncpy(InP->property_name, property_name, 128);

	msgh_size_delta = _WALIGN_(InP->property_nameCnt);
	msgh_size += msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 128);

	InP->options = options;

	InP = &Mess.In;
	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = registry_entry;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2855;

	__BeforeSendRpc(2855, "io_registry_entry_get_property_recursively")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, msgh_size, (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2855, "io_registry_entry_get_property_recursively")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_registry_entry_get_property_recursively_t__defined)
	check_result = __MIG_check__Reply__io_registry_entry_get_property_recursively_t((__Reply__io_registry_entry_get_property_recursively_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_registry_entry_get_property_recursively_t__defined) */

	*properties = (io_buf_ptr_t)(Out0P->properties.address);
	*propertiesCnt = Out0P->propertiesCnt;

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_service_get_state_t__defined)
#define __MIG_check__Reply__io_service_get_state_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_service_get_state_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_get_state_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_service_get_state_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_get_state_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_service_get_state_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_service_get_state_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__io_service_get_state_t__state__defined
#if	defined(__NDR_convert__int_rep__iokit__uint64_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_get_state_t__state__defined
#define	__NDR_convert__int_rep__Reply__io_service_get_state_t__state(a, f) \
	__NDR_convert__int_rep__iokit__uint64_t((uint64_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint64_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_get_state_t__state__defined
#define	__NDR_convert__int_rep__Reply__io_service_get_state_t__state(a, f) \
	__NDR_convert__int_rep__uint64_t((uint64_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_service_get_state_t__state__defined */


#ifndef __NDR_convert__int_rep__Reply__io_service_get_state_t__busy_state__defined
#if	defined(__NDR_convert__int_rep__iokit__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_get_state_t__busy_state__defined
#define	__NDR_convert__int_rep__Reply__io_service_get_state_t__busy_state(a, f) \
	__NDR_convert__int_rep__iokit__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_get_state_t__busy_state__defined
#define	__NDR_convert__int_rep__Reply__io_service_get_state_t__busy_state(a, f) \
	__NDR_convert__int_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_service_get_state_t__busy_state__defined */


#ifndef __NDR_convert__int_rep__Reply__io_service_get_state_t__accumulated_busy_time__defined
#if	defined(__NDR_convert__int_rep__iokit__uint64_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_get_state_t__accumulated_busy_time__defined
#define	__NDR_convert__int_rep__Reply__io_service_get_state_t__accumulated_busy_time(a, f) \
	__NDR_convert__int_rep__iokit__uint64_t((uint64_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint64_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_get_state_t__accumulated_busy_time__defined
#define	__NDR_convert__int_rep__Reply__io_service_get_state_t__accumulated_busy_time(a, f) \
	__NDR_convert__int_rep__uint64_t((uint64_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_service_get_state_t__accumulated_busy_time__defined */



#ifndef __NDR_convert__char_rep__Reply__io_service_get_state_t__state__defined
#if	defined(__NDR_convert__char_rep__iokit__uint64_t__defined)
#define	__NDR_convert__char_rep__Reply__io_service_get_state_t__state__defined
#define	__NDR_convert__char_rep__Reply__io_service_get_state_t__state(a, f) \
	__NDR_convert__char_rep__iokit__uint64_t((uint64_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint64_t__defined)
#define	__NDR_convert__char_rep__Reply__io_service_get_state_t__state__defined
#define	__NDR_convert__char_rep__Reply__io_service_get_state_t__state(a, f) \
	__NDR_convert__char_rep__uint64_t((uint64_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_service_get_state_t__state__defined */


#ifndef __NDR_convert__char_rep__Reply__io_service_get_state_t__busy_state__defined
#if	defined(__NDR_convert__char_rep__iokit__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__io_service_get_state_t__busy_state__defined
#define	__NDR_convert__char_rep__Reply__io_service_get_state_t__busy_state(a, f) \
	__NDR_convert__char_rep__iokit__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__io_service_get_state_t__busy_state__defined
#define	__NDR_convert__char_rep__Reply__io_service_get_state_t__busy_state(a, f) \
	__NDR_convert__char_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_service_get_state_t__busy_state__defined */


#ifndef __NDR_convert__char_rep__Reply__io_service_get_state_t__accumulated_busy_time__defined
#if	defined(__NDR_convert__char_rep__iokit__uint64_t__defined)
#define	__NDR_convert__char_rep__Reply__io_service_get_state_t__accumulated_busy_time__defined
#define	__NDR_convert__char_rep__Reply__io_service_get_state_t__accumulated_busy_time(a, f) \
	__NDR_convert__char_rep__iokit__uint64_t((uint64_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint64_t__defined)
#define	__NDR_convert__char_rep__Reply__io_service_get_state_t__accumulated_busy_time__defined
#define	__NDR_convert__char_rep__Reply__io_service_get_state_t__accumulated_busy_time(a, f) \
	__NDR_convert__char_rep__uint64_t((uint64_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_service_get_state_t__accumulated_busy_time__defined */



#ifndef __NDR_convert__float_rep__Reply__io_service_get_state_t__state__defined
#if	defined(__NDR_convert__float_rep__iokit__uint64_t__defined)
#define	__NDR_convert__float_rep__Reply__io_service_get_state_t__state__defined
#define	__NDR_convert__float_rep__Reply__io_service_get_state_t__state(a, f) \
	__NDR_convert__float_rep__iokit__uint64_t((uint64_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint64_t__defined)
#define	__NDR_convert__float_rep__Reply__io_service_get_state_t__state__defined
#define	__NDR_convert__float_rep__Reply__io_service_get_state_t__state(a, f) \
	__NDR_convert__float_rep__uint64_t((uint64_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_service_get_state_t__state__defined */


#ifndef __NDR_convert__float_rep__Reply__io_service_get_state_t__busy_state__defined
#if	defined(__NDR_convert__float_rep__iokit__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__io_service_get_state_t__busy_state__defined
#define	__NDR_convert__float_rep__Reply__io_service_get_state_t__busy_state(a, f) \
	__NDR_convert__float_rep__iokit__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__io_service_get_state_t__busy_state__defined
#define	__NDR_convert__float_rep__Reply__io_service_get_state_t__busy_state(a, f) \
	__NDR_convert__float_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_service_get_state_t__busy_state__defined */


#ifndef __NDR_convert__float_rep__Reply__io_service_get_state_t__accumulated_busy_time__defined
#if	defined(__NDR_convert__float_rep__iokit__uint64_t__defined)
#define	__NDR_convert__float_rep__Reply__io_service_get_state_t__accumulated_busy_time__defined
#define	__NDR_convert__float_rep__Reply__io_service_get_state_t__accumulated_busy_time(a, f) \
	__NDR_convert__float_rep__iokit__uint64_t((uint64_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint64_t__defined)
#define	__NDR_convert__float_rep__Reply__io_service_get_state_t__accumulated_busy_time__defined
#define	__NDR_convert__float_rep__Reply__io_service_get_state_t__accumulated_busy_time(a, f) \
	__NDR_convert__float_rep__uint64_t((uint64_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_service_get_state_t__accumulated_busy_time__defined */



mig_internal kern_return_t __MIG_check__Reply__io_service_get_state_t(__Reply__io_service_get_state_t *Out0P)
{

	typedef __Reply__io_service_get_state_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 2956) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    ((msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	     (msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	      Out0P->RetCode == KERN_SUCCESS)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (Out0P->RetCode != KERN_SUCCESS) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	defined(__NDR_convert__int_rep__Reply__io_service_get_state_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_service_get_state_t__state__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_service_get_state_t__busy_state__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_service_get_state_t__accumulated_busy_time__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__io_service_get_state_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__io_service_get_state_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_service_get_state_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__io_service_get_state_t__state__defined)
		__NDR_convert__int_rep__Reply__io_service_get_state_t__state(&Out0P->state, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_service_get_state_t__state__defined */
#if defined(__NDR_convert__int_rep__Reply__io_service_get_state_t__busy_state__defined)
		__NDR_convert__int_rep__Reply__io_service_get_state_t__busy_state(&Out0P->busy_state, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_service_get_state_t__busy_state__defined */
#if defined(__NDR_convert__int_rep__Reply__io_service_get_state_t__accumulated_busy_time__defined)
		__NDR_convert__int_rep__Reply__io_service_get_state_t__accumulated_busy_time(&Out0P->accumulated_busy_time, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_service_get_state_t__accumulated_busy_time__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__io_service_get_state_t__state__defined) || \
	defined(__NDR_convert__char_rep__Reply__io_service_get_state_t__busy_state__defined) || \
	defined(__NDR_convert__char_rep__Reply__io_service_get_state_t__accumulated_busy_time__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__io_service_get_state_t__state__defined)
		__NDR_convert__char_rep__Reply__io_service_get_state_t__state(&Out0P->state, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__io_service_get_state_t__state__defined */
#if defined(__NDR_convert__char_rep__Reply__io_service_get_state_t__busy_state__defined)
		__NDR_convert__char_rep__Reply__io_service_get_state_t__busy_state(&Out0P->busy_state, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__io_service_get_state_t__busy_state__defined */
#if defined(__NDR_convert__char_rep__Reply__io_service_get_state_t__accumulated_busy_time__defined)
		__NDR_convert__char_rep__Reply__io_service_get_state_t__accumulated_busy_time(&Out0P->accumulated_busy_time, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__io_service_get_state_t__accumulated_busy_time__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__io_service_get_state_t__state__defined) || \
	defined(__NDR_convert__float_rep__Reply__io_service_get_state_t__busy_state__defined) || \
	defined(__NDR_convert__float_rep__Reply__io_service_get_state_t__accumulated_busy_time__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__io_service_get_state_t__state__defined)
		__NDR_convert__float_rep__Reply__io_service_get_state_t__state(&Out0P->state, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__io_service_get_state_t__state__defined */
#if defined(__NDR_convert__float_rep__Reply__io_service_get_state_t__busy_state__defined)
		__NDR_convert__float_rep__Reply__io_service_get_state_t__busy_state(&Out0P->busy_state, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__io_service_get_state_t__busy_state__defined */
#if defined(__NDR_convert__float_rep__Reply__io_service_get_state_t__accumulated_busy_time__defined)
		__NDR_convert__float_rep__Reply__io_service_get_state_t__accumulated_busy_time(&Out0P->accumulated_busy_time, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__io_service_get_state_t__accumulated_busy_time__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_service_get_state_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_service_get_state */
mig_external kern_return_t io_service_get_state
(
	mach_port_t service,
	uint64_t *state,
	uint32_t *busy_state,
	uint64_t *accumulated_busy_time
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		uint64_t state;
		uint32_t busy_state;
		uint64_t accumulated_busy_time;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		uint64_t state;
		uint32_t busy_state;
		uint64_t accumulated_busy_time;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__io_service_get_state_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_service_get_state_t__defined */

	__DeclareSendRpc(2856, "io_service_get_state")

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = service;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2856;

	__BeforeSendRpc(2856, "io_service_get_state")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2856, "io_service_get_state")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_service_get_state_t__defined)
	check_result = __MIG_check__Reply__io_service_get_state_t((__Reply__io_service_get_state_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_service_get_state_t__defined) */

	*state = Out0P->state;

	*busy_state = Out0P->busy_state;

	*accumulated_busy_time = Out0P->accumulated_busy_time;

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_service_get_matching_services_ool_t__defined)
#define __MIG_check__Reply__io_service_get_matching_services_ool_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_service_get_matching_services_ool_t__result__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_get_matching_services_ool_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_service_get_matching_services_ool_t__result(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_get_matching_services_ool_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_service_get_matching_services_ool_t__result(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Reply__io_service_get_matching_services_ool_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_service_get_matching_services_ool_t__result(a, f) \
	__NDR_convert__int_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Reply__io_service_get_matching_services_ool_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_service_get_matching_services_ool_t__result(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_get_matching_services_ool_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_service_get_matching_services_ool_t__result(a, f) \
	__NDR_convert__int_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_get_matching_services_ool_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_service_get_matching_services_ool_t__result(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_service_get_matching_services_ool_t__result__defined */


#ifndef __NDR_convert__char_rep__Reply__io_service_get_matching_services_ool_t__result__defined
#if	defined(__NDR_convert__char_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__char_rep__Reply__io_service_get_matching_services_ool_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_service_get_matching_services_ool_t__result(a, f) \
	__NDR_convert__char_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__kern_return_t__defined)
#define	__NDR_convert__char_rep__Reply__io_service_get_matching_services_ool_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_service_get_matching_services_ool_t__result(a, f) \
	__NDR_convert__char_rep__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Reply__io_service_get_matching_services_ool_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_service_get_matching_services_ool_t__result(a, f) \
	__NDR_convert__char_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Reply__io_service_get_matching_services_ool_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_service_get_matching_services_ool_t__result(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__io_service_get_matching_services_ool_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_service_get_matching_services_ool_t__result(a, f) \
	__NDR_convert__char_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__io_service_get_matching_services_ool_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_service_get_matching_services_ool_t__result(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_service_get_matching_services_ool_t__result__defined */


#ifndef __NDR_convert__float_rep__Reply__io_service_get_matching_services_ool_t__result__defined
#if	defined(__NDR_convert__float_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__float_rep__Reply__io_service_get_matching_services_ool_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_service_get_matching_services_ool_t__result(a, f) \
	__NDR_convert__float_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__kern_return_t__defined)
#define	__NDR_convert__float_rep__Reply__io_service_get_matching_services_ool_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_service_get_matching_services_ool_t__result(a, f) \
	__NDR_convert__float_rep__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Reply__io_service_get_matching_services_ool_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_service_get_matching_services_ool_t__result(a, f) \
	__NDR_convert__float_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Reply__io_service_get_matching_services_ool_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_service_get_matching_services_ool_t__result(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__io_service_get_matching_services_ool_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_service_get_matching_services_ool_t__result(a, f) \
	__NDR_convert__float_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__io_service_get_matching_services_ool_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_service_get_matching_services_ool_t__result(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_service_get_matching_services_ool_t__result__defined */



mig_internal kern_return_t __MIG_check__Reply__io_service_get_matching_services_ool_t(__Reply__io_service_get_matching_services_ool_t *Out0P)
{

	typedef __Reply__io_service_get_matching_services_ool_t __Reply;
	boolean_t msgh_simple;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 2957) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

	msgh_simple = !(Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX);
#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((msgh_simple || Out0P->msgh_body.msgh_descriptor_count != 1 ||
	    msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	    (!msgh_simple || msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	    ((mig_reply_error_t *)Out0P)->RetCode == KERN_SUCCESS))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (msgh_simple) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	__MigTypeCheck
	if (Out0P->existing.type != MACH_MSG_PORT_DESCRIPTOR ||
	    Out0P->existing.disposition != 17) {
		return MIG_TYPE_ERROR;
	}
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Reply__io_service_get_matching_services_ool_t__result__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__io_service_get_matching_services_ool_t__result__defined)
		__NDR_convert__int_rep__Reply__io_service_get_matching_services_ool_t__result(&Out0P->result, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_service_get_matching_services_ool_t__result__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Reply__io_service_get_matching_services_ool_t__result__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__io_service_get_matching_services_ool_t__result__defined)
		__NDR_convert__char_rep__Reply__io_service_get_matching_services_ool_t__result(&Out0P->result, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__io_service_get_matching_services_ool_t__result__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Reply__io_service_get_matching_services_ool_t__result__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__io_service_get_matching_services_ool_t__result__defined)
		__NDR_convert__float_rep__Reply__io_service_get_matching_services_ool_t__result(&Out0P->result, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__io_service_get_matching_services_ool_t__result__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_service_get_matching_services_ool_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_service_get_matching_services_ool */
mig_external kern_return_t io_service_get_matching_services_ool
(
	mach_port_t master_port,
	io_buf_ptr_t matching,
	mach_msg_type_number_t matchingCnt,
	kern_return_t *result,
	mach_port_t *existing
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t matching;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t matchingCnt;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t existing;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		kern_return_t result;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t existing;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		kern_return_t result;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__io_service_get_matching_services_ool_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_service_get_matching_services_ool_t__defined */

	__DeclareSendRpc(2857, "io_service_get_matching_services_ool")

#if	UseStaticTemplates
	const static mach_msg_ool_descriptor_t matchingTemplate = {
		/* addr = */		(void *)0,
		/* size = */		0,
		/* deal = */		FALSE,
		/* copy = */		MACH_MSG_PHYSICAL_COPY,
		/* pad2 = */		0,
		/* type = */		MACH_MSG_OOL_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 1;
#if	UseStaticTemplates
	InP->matching = matchingTemplate;
	InP->matching.address = (void *)(matching);
	InP->matching.size = matchingCnt;
#else	/* UseStaticTemplates */
	InP->matching.address = (void *)(matching);
	InP->matching.size = matchingCnt;
	InP->matching.deallocate =  FALSE;
	InP->matching.copy = MACH_MSG_PHYSICAL_COPY;
	InP->matching.type = MACH_MSG_OOL_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	InP->matchingCnt = matchingCnt;

	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = master_port;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2857;

	__BeforeSendRpc(2857, "io_service_get_matching_services_ool")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2857, "io_service_get_matching_services_ool")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_service_get_matching_services_ool_t__defined)
	check_result = __MIG_check__Reply__io_service_get_matching_services_ool_t((__Reply__io_service_get_matching_services_ool_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_service_get_matching_services_ool_t__defined) */

	*result = Out0P->result;

	*existing = Out0P->existing.name;
	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_service_match_property_table_ool_t__defined)
#define __MIG_check__Reply__io_service_match_property_table_ool_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_service_match_property_table_ool_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_match_property_table_ool_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_service_match_property_table_ool_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_match_property_table_ool_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_service_match_property_table_ool_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_service_match_property_table_ool_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__io_service_match_property_table_ool_t__result__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_match_property_table_ool_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_service_match_property_table_ool_t__result(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_match_property_table_ool_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_service_match_property_table_ool_t__result(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Reply__io_service_match_property_table_ool_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_service_match_property_table_ool_t__result(a, f) \
	__NDR_convert__int_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Reply__io_service_match_property_table_ool_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_service_match_property_table_ool_t__result(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_match_property_table_ool_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_service_match_property_table_ool_t__result(a, f) \
	__NDR_convert__int_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_match_property_table_ool_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_service_match_property_table_ool_t__result(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_service_match_property_table_ool_t__result__defined */


#ifndef __NDR_convert__int_rep__Reply__io_service_match_property_table_ool_t__matches__defined
#if	defined(__NDR_convert__int_rep__iokit__boolean_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_match_property_table_ool_t__matches__defined
#define	__NDR_convert__int_rep__Reply__io_service_match_property_table_ool_t__matches(a, f) \
	__NDR_convert__int_rep__iokit__boolean_t((boolean_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__boolean_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_match_property_table_ool_t__matches__defined
#define	__NDR_convert__int_rep__Reply__io_service_match_property_table_ool_t__matches(a, f) \
	__NDR_convert__int_rep__boolean_t((boolean_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_service_match_property_table_ool_t__matches__defined */



#ifndef __NDR_convert__char_rep__Reply__io_service_match_property_table_ool_t__result__defined
#if	defined(__NDR_convert__char_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__char_rep__Reply__io_service_match_property_table_ool_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_service_match_property_table_ool_t__result(a, f) \
	__NDR_convert__char_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__kern_return_t__defined)
#define	__NDR_convert__char_rep__Reply__io_service_match_property_table_ool_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_service_match_property_table_ool_t__result(a, f) \
	__NDR_convert__char_rep__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Reply__io_service_match_property_table_ool_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_service_match_property_table_ool_t__result(a, f) \
	__NDR_convert__char_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Reply__io_service_match_property_table_ool_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_service_match_property_table_ool_t__result(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__io_service_match_property_table_ool_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_service_match_property_table_ool_t__result(a, f) \
	__NDR_convert__char_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__io_service_match_property_table_ool_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_service_match_property_table_ool_t__result(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_service_match_property_table_ool_t__result__defined */


#ifndef __NDR_convert__char_rep__Reply__io_service_match_property_table_ool_t__matches__defined
#if	defined(__NDR_convert__char_rep__iokit__boolean_t__defined)
#define	__NDR_convert__char_rep__Reply__io_service_match_property_table_ool_t__matches__defined
#define	__NDR_convert__char_rep__Reply__io_service_match_property_table_ool_t__matches(a, f) \
	__NDR_convert__char_rep__iokit__boolean_t((boolean_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__boolean_t__defined)
#define	__NDR_convert__char_rep__Reply__io_service_match_property_table_ool_t__matches__defined
#define	__NDR_convert__char_rep__Reply__io_service_match_property_table_ool_t__matches(a, f) \
	__NDR_convert__char_rep__boolean_t((boolean_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_service_match_property_table_ool_t__matches__defined */



#ifndef __NDR_convert__float_rep__Reply__io_service_match_property_table_ool_t__result__defined
#if	defined(__NDR_convert__float_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__float_rep__Reply__io_service_match_property_table_ool_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_service_match_property_table_ool_t__result(a, f) \
	__NDR_convert__float_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__kern_return_t__defined)
#define	__NDR_convert__float_rep__Reply__io_service_match_property_table_ool_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_service_match_property_table_ool_t__result(a, f) \
	__NDR_convert__float_rep__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Reply__io_service_match_property_table_ool_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_service_match_property_table_ool_t__result(a, f) \
	__NDR_convert__float_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Reply__io_service_match_property_table_ool_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_service_match_property_table_ool_t__result(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__io_service_match_property_table_ool_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_service_match_property_table_ool_t__result(a, f) \
	__NDR_convert__float_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__io_service_match_property_table_ool_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_service_match_property_table_ool_t__result(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_service_match_property_table_ool_t__result__defined */


#ifndef __NDR_convert__float_rep__Reply__io_service_match_property_table_ool_t__matches__defined
#if	defined(__NDR_convert__float_rep__iokit__boolean_t__defined)
#define	__NDR_convert__float_rep__Reply__io_service_match_property_table_ool_t__matches__defined
#define	__NDR_convert__float_rep__Reply__io_service_match_property_table_ool_t__matches(a, f) \
	__NDR_convert__float_rep__iokit__boolean_t((boolean_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__boolean_t__defined)
#define	__NDR_convert__float_rep__Reply__io_service_match_property_table_ool_t__matches__defined
#define	__NDR_convert__float_rep__Reply__io_service_match_property_table_ool_t__matches(a, f) \
	__NDR_convert__float_rep__boolean_t((boolean_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_service_match_property_table_ool_t__matches__defined */



mig_internal kern_return_t __MIG_check__Reply__io_service_match_property_table_ool_t(__Reply__io_service_match_property_table_ool_t *Out0P)
{

	typedef __Reply__io_service_match_property_table_ool_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 2958) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    ((msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	     (msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	      Out0P->RetCode == KERN_SUCCESS)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (Out0P->RetCode != KERN_SUCCESS) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	defined(__NDR_convert__int_rep__Reply__io_service_match_property_table_ool_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_service_match_property_table_ool_t__result__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_service_match_property_table_ool_t__matches__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__io_service_match_property_table_ool_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__io_service_match_property_table_ool_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_service_match_property_table_ool_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__io_service_match_property_table_ool_t__result__defined)
		__NDR_convert__int_rep__Reply__io_service_match_property_table_ool_t__result(&Out0P->result, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_service_match_property_table_ool_t__result__defined */
#if defined(__NDR_convert__int_rep__Reply__io_service_match_property_table_ool_t__matches__defined)
		__NDR_convert__int_rep__Reply__io_service_match_property_table_ool_t__matches(&Out0P->matches, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_service_match_property_table_ool_t__matches__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__io_service_match_property_table_ool_t__result__defined) || \
	defined(__NDR_convert__char_rep__Reply__io_service_match_property_table_ool_t__matches__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__io_service_match_property_table_ool_t__result__defined)
		__NDR_convert__char_rep__Reply__io_service_match_property_table_ool_t__result(&Out0P->result, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__io_service_match_property_table_ool_t__result__defined */
#if defined(__NDR_convert__char_rep__Reply__io_service_match_property_table_ool_t__matches__defined)
		__NDR_convert__char_rep__Reply__io_service_match_property_table_ool_t__matches(&Out0P->matches, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__io_service_match_property_table_ool_t__matches__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__io_service_match_property_table_ool_t__result__defined) || \
	defined(__NDR_convert__float_rep__Reply__io_service_match_property_table_ool_t__matches__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__io_service_match_property_table_ool_t__result__defined)
		__NDR_convert__float_rep__Reply__io_service_match_property_table_ool_t__result(&Out0P->result, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__io_service_match_property_table_ool_t__result__defined */
#if defined(__NDR_convert__float_rep__Reply__io_service_match_property_table_ool_t__matches__defined)
		__NDR_convert__float_rep__Reply__io_service_match_property_table_ool_t__matches(&Out0P->matches, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__io_service_match_property_table_ool_t__matches__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_service_match_property_table_ool_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_service_match_property_table_ool */
mig_external kern_return_t io_service_match_property_table_ool
(
	mach_port_t service,
	io_buf_ptr_t matching,
	mach_msg_type_number_t matchingCnt,
	kern_return_t *result,
	boolean_t *matches
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t matching;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t matchingCnt;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		kern_return_t result;
		boolean_t matches;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		kern_return_t result;
		boolean_t matches;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__io_service_match_property_table_ool_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_service_match_property_table_ool_t__defined */

	__DeclareSendRpc(2858, "io_service_match_property_table_ool")

#if	UseStaticTemplates
	const static mach_msg_ool_descriptor_t matchingTemplate = {
		/* addr = */		(void *)0,
		/* size = */		0,
		/* deal = */		FALSE,
		/* copy = */		MACH_MSG_PHYSICAL_COPY,
		/* pad2 = */		0,
		/* type = */		MACH_MSG_OOL_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 1;
#if	UseStaticTemplates
	InP->matching = matchingTemplate;
	InP->matching.address = (void *)(matching);
	InP->matching.size = matchingCnt;
#else	/* UseStaticTemplates */
	InP->matching.address = (void *)(matching);
	InP->matching.size = matchingCnt;
	InP->matching.deallocate =  FALSE;
	InP->matching.copy = MACH_MSG_PHYSICAL_COPY;
	InP->matching.type = MACH_MSG_OOL_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	InP->matchingCnt = matchingCnt;

	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = service;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2858;

	__BeforeSendRpc(2858, "io_service_match_property_table_ool")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2858, "io_service_match_property_table_ool")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_service_match_property_table_ool_t__defined)
	check_result = __MIG_check__Reply__io_service_match_property_table_ool_t((__Reply__io_service_match_property_table_ool_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_service_match_property_table_ool_t__defined) */

	*result = Out0P->result;

	*matches = Out0P->matches;

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_service_add_notification_ool_t__defined)
#define __MIG_check__Reply__io_service_add_notification_ool_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_service_add_notification_ool_t__result__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_add_notification_ool_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_service_add_notification_ool_t__result(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_add_notification_ool_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_service_add_notification_ool_t__result(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Reply__io_service_add_notification_ool_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_service_add_notification_ool_t__result(a, f) \
	__NDR_convert__int_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Reply__io_service_add_notification_ool_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_service_add_notification_ool_t__result(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_add_notification_ool_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_service_add_notification_ool_t__result(a, f) \
	__NDR_convert__int_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_add_notification_ool_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_service_add_notification_ool_t__result(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_service_add_notification_ool_t__result__defined */


#ifndef __NDR_convert__char_rep__Reply__io_service_add_notification_ool_t__result__defined
#if	defined(__NDR_convert__char_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__char_rep__Reply__io_service_add_notification_ool_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_service_add_notification_ool_t__result(a, f) \
	__NDR_convert__char_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__kern_return_t__defined)
#define	__NDR_convert__char_rep__Reply__io_service_add_notification_ool_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_service_add_notification_ool_t__result(a, f) \
	__NDR_convert__char_rep__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Reply__io_service_add_notification_ool_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_service_add_notification_ool_t__result(a, f) \
	__NDR_convert__char_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Reply__io_service_add_notification_ool_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_service_add_notification_ool_t__result(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__io_service_add_notification_ool_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_service_add_notification_ool_t__result(a, f) \
	__NDR_convert__char_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__io_service_add_notification_ool_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_service_add_notification_ool_t__result(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_service_add_notification_ool_t__result__defined */


#ifndef __NDR_convert__float_rep__Reply__io_service_add_notification_ool_t__result__defined
#if	defined(__NDR_convert__float_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__float_rep__Reply__io_service_add_notification_ool_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_service_add_notification_ool_t__result(a, f) \
	__NDR_convert__float_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__kern_return_t__defined)
#define	__NDR_convert__float_rep__Reply__io_service_add_notification_ool_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_service_add_notification_ool_t__result(a, f) \
	__NDR_convert__float_rep__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Reply__io_service_add_notification_ool_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_service_add_notification_ool_t__result(a, f) \
	__NDR_convert__float_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Reply__io_service_add_notification_ool_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_service_add_notification_ool_t__result(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__io_service_add_notification_ool_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_service_add_notification_ool_t__result(a, f) \
	__NDR_convert__float_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__io_service_add_notification_ool_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_service_add_notification_ool_t__result(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_service_add_notification_ool_t__result__defined */



mig_internal kern_return_t __MIG_check__Reply__io_service_add_notification_ool_t(__Reply__io_service_add_notification_ool_t *Out0P)
{

	typedef __Reply__io_service_add_notification_ool_t __Reply;
	boolean_t msgh_simple;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 2959) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

	msgh_simple = !(Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX);
#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((msgh_simple || Out0P->msgh_body.msgh_descriptor_count != 1 ||
	    msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	    (!msgh_simple || msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	    ((mig_reply_error_t *)Out0P)->RetCode == KERN_SUCCESS))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (msgh_simple) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	__MigTypeCheck
	if (Out0P->notification.type != MACH_MSG_PORT_DESCRIPTOR ||
	    Out0P->notification.disposition != 17) {
		return MIG_TYPE_ERROR;
	}
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Reply__io_service_add_notification_ool_t__result__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__io_service_add_notification_ool_t__result__defined)
		__NDR_convert__int_rep__Reply__io_service_add_notification_ool_t__result(&Out0P->result, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_service_add_notification_ool_t__result__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Reply__io_service_add_notification_ool_t__result__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__io_service_add_notification_ool_t__result__defined)
		__NDR_convert__char_rep__Reply__io_service_add_notification_ool_t__result(&Out0P->result, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__io_service_add_notification_ool_t__result__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Reply__io_service_add_notification_ool_t__result__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__io_service_add_notification_ool_t__result__defined)
		__NDR_convert__float_rep__Reply__io_service_add_notification_ool_t__result(&Out0P->result, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__io_service_add_notification_ool_t__result__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_service_add_notification_ool_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_service_add_notification_ool */
mig_external kern_return_t io_service_add_notification_ool
(
	mach_port_t master_port,
	io_name_t notification_type,
	io_buf_ptr_t matching,
	mach_msg_type_number_t matchingCnt,
	mach_port_t wake_port,
	io_async_ref_t reference,
	mach_msg_type_number_t referenceCnt,
	kern_return_t *result,
	mach_port_t *notification
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t matching;
		mach_msg_port_descriptor_t wake_port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t notification_typeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t notification_typeCnt;
		char notification_type[128];
		mach_msg_type_number_t matchingCnt;
		mach_msg_type_number_t referenceCnt;
		io_user_reference_t reference[8];
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t notification;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		kern_return_t result;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t notification;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		kern_return_t result;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;
	unsigned int msgh_size_delta;


#ifdef	__MIG_check__Reply__io_service_add_notification_ool_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_service_add_notification_ool_t__defined */

	__DeclareSendRpc(2859, "io_service_add_notification_ool")

#if	UseStaticTemplates
	const static mach_msg_ool_descriptor_t matchingTemplate = {
		/* addr = */		(void *)0,
		/* size = */		0,
		/* deal = */		FALSE,
		/* copy = */		MACH_MSG_PHYSICAL_COPY,
		/* pad2 = */		0,
		/* type = */		MACH_MSG_OOL_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t wake_portTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		20,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 2;
#if	UseStaticTemplates
	InP->matching = matchingTemplate;
	InP->matching.address = (void *)(matching);
	InP->matching.size = matchingCnt;
#else	/* UseStaticTemplates */
	InP->matching.address = (void *)(matching);
	InP->matching.size = matchingCnt;
	InP->matching.deallocate =  FALSE;
	InP->matching.copy = MACH_MSG_PHYSICAL_COPY;
	InP->matching.type = MACH_MSG_OOL_DESCRIPTOR;
#endif	/* UseStaticTemplates */

#if	UseStaticTemplates
	InP->wake_port = wake_portTemplate;
	InP->wake_port.name = wake_port;
#else	/* UseStaticTemplates */
	InP->wake_port.name = wake_port;
	InP->wake_port.disposition = 20;
	InP->wake_port.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	InP->notification_typeCnt = mig_strncpy(InP->notification_type, notification_type, 128);

	msgh_size_delta = _WALIGN_(InP->notification_typeCnt);
	msgh_size = (mach_msg_size_t)(sizeof(Request) - 160) + msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 128);

	InP->matchingCnt = matchingCnt;

	if (referenceCnt > 8) {
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) InP->reference, (const char *) reference, 4 * referenceCnt);

	InP->referenceCnt = referenceCnt;

	msgh_size += (4 * referenceCnt);
	InP = &Mess.In;
	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = master_port;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2859;

	__BeforeSendRpc(2859, "io_service_add_notification_ool")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, msgh_size, (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2859, "io_service_add_notification_ool")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_service_add_notification_ool_t__defined)
	check_result = __MIG_check__Reply__io_service_add_notification_ool_t((__Reply__io_service_add_notification_ool_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_service_add_notification_ool_t__defined) */

	*result = Out0P->result;

	*notification = Out0P->notification.name;
	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_object_get_superclass_t__defined)
#define __MIG_check__Reply__io_object_get_superclass_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_object_get_superclass_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_object_get_superclass_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_object_get_superclass_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_object_get_superclass_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_object_get_superclass_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_object_get_superclass_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__io_object_get_superclass_t__class_name__defined
#if	defined(__NDR_convert__int_rep__iokit__io_name_t__defined)
#define	__NDR_convert__int_rep__Reply__io_object_get_superclass_t__class_name__defined
#define	__NDR_convert__int_rep__Reply__io_object_get_superclass_t__class_name(a, f, c) \
	__NDR_convert__int_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_name_t__defined)
#define	__NDR_convert__int_rep__Reply__io_object_get_superclass_t__class_name__defined
#define	__NDR_convert__int_rep__Reply__io_object_get_superclass_t__class_name(a, f, c) \
	__NDR_convert__int_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_object_get_superclass_t__class_name__defined */


#ifndef __NDR_convert__int_rep__Reply__io_object_get_superclass_t__class_nameCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_object_get_superclass_t__class_nameCnt__defined
#define	__NDR_convert__int_rep__Reply__io_object_get_superclass_t__class_nameCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_object_get_superclass_t__class_nameCnt__defined
#define	__NDR_convert__int_rep__Reply__io_object_get_superclass_t__class_nameCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_object_get_superclass_t__class_nameCnt__defined */



#ifndef __NDR_convert__char_rep__Reply__io_object_get_superclass_t__class_name__defined
#if	defined(__NDR_convert__char_rep__iokit__io_name_t__defined)
#define	__NDR_convert__char_rep__Reply__io_object_get_superclass_t__class_name__defined
#define	__NDR_convert__char_rep__Reply__io_object_get_superclass_t__class_name(a, f, c) \
	__NDR_convert__char_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_name_t__defined)
#define	__NDR_convert__char_rep__Reply__io_object_get_superclass_t__class_name__defined
#define	__NDR_convert__char_rep__Reply__io_object_get_superclass_t__class_name(a, f, c) \
	__NDR_convert__char_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_object_get_superclass_t__class_name__defined */




#ifndef __NDR_convert__float_rep__Reply__io_object_get_superclass_t__class_name__defined
#if	defined(__NDR_convert__float_rep__iokit__io_name_t__defined)
#define	__NDR_convert__float_rep__Reply__io_object_get_superclass_t__class_name__defined
#define	__NDR_convert__float_rep__Reply__io_object_get_superclass_t__class_name(a, f, c) \
	__NDR_convert__float_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_name_t__defined)
#define	__NDR_convert__float_rep__Reply__io_object_get_superclass_t__class_name__defined
#define	__NDR_convert__float_rep__Reply__io_object_get_superclass_t__class_name(a, f, c) \
	__NDR_convert__float_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_object_get_superclass_t__class_name__defined */




mig_internal kern_return_t __MIG_check__Reply__io_object_get_superclass_t(__Reply__io_object_get_superclass_t *Out0P)
{

	typedef __Reply__io_object_get_superclass_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

	if (Out0P->Head.msgh_id != 2960) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    ((msgh_size > (mach_msg_size_t)sizeof(__Reply) || msgh_size < (mach_msg_size_t)(sizeof(__Reply) - 128)) &&
	     (msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	      Out0P->RetCode == KERN_SUCCESS)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (Out0P->RetCode != KERN_SUCCESS) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if defined(__NDR_convert__int_rep__Reply__io_object_get_superclass_t__class_nameCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__io_object_get_superclass_t__class_nameCnt(&Out0P->class_nameCnt, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__io_object_get_superclass_t__class_nameCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Reply) - 128) + (_WALIGN_(Out0P->class_nameCnt)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Reply__io_object_get_superclass_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_object_get_superclass_t__class_name__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_object_get_superclass_t__class_nameCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__io_object_get_superclass_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__io_object_get_superclass_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_object_get_superclass_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__io_object_get_superclass_t__class_name__defined)
		__NDR_convert__int_rep__Reply__io_object_get_superclass_t__class_name(&Out0P->class_name, Out0P->NDR.int_rep, Out0P->class_nameCnt);
#endif /* __NDR_convert__int_rep__Reply__io_object_get_superclass_t__class_name__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__io_object_get_superclass_t__class_name__defined) || \
	0
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__io_object_get_superclass_t__class_name__defined)
		__NDR_convert__char_rep__Reply__io_object_get_superclass_t__class_name(&Out0P->class_name, Out0P->NDR.char_rep, Out0P->class_nameCnt);
#endif /* __NDR_convert__char_rep__Reply__io_object_get_superclass_t__class_name__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__io_object_get_superclass_t__class_name__defined) || \
	0
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__io_object_get_superclass_t__class_name__defined)
		__NDR_convert__float_rep__Reply__io_object_get_superclass_t__class_name(&Out0P->class_name, Out0P->NDR.float_rep, Out0P->class_nameCnt);
#endif /* __NDR_convert__float_rep__Reply__io_object_get_superclass_t__class_name__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_object_get_superclass_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_object_get_superclass */
mig_external kern_return_t io_object_get_superclass
(
	mach_port_t master_port,
	io_name_t obj_name,
	io_name_t class_name
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t obj_nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t obj_nameCnt;
		char obj_name[128];
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t class_nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t class_nameCnt;
		char class_name[128];
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t class_nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t class_nameCnt;
		char class_name[128];
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;

#ifdef	__MIG_check__Reply__io_object_get_superclass_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_object_get_superclass_t__defined */

	__DeclareSendRpc(2860, "io_object_get_superclass")

	InP->NDR = NDR_record;

	InP->obj_nameCnt = mig_strncpy(InP->obj_name, obj_name, 128);

	msgh_size = (mach_msg_size_t)(sizeof(Request) - 128) + (_WALIGN_(InP->obj_nameCnt));
	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = master_port;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2860;

	__BeforeSendRpc(2860, "io_object_get_superclass")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, msgh_size, (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2860, "io_object_get_superclass")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_object_get_superclass_t__defined)
	check_result = __MIG_check__Reply__io_object_get_superclass_t((__Reply__io_object_get_superclass_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_object_get_superclass_t__defined) */

	(void) mig_strncpy(class_name, Out0P->class_name, 128);

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_object_get_bundle_identifier_t__defined)
#define __MIG_check__Reply__io_object_get_bundle_identifier_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_object_get_bundle_identifier_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_object_get_bundle_identifier_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_object_get_bundle_identifier_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_object_get_bundle_identifier_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_object_get_bundle_identifier_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_object_get_bundle_identifier_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__io_object_get_bundle_identifier_t__class_name__defined
#if	defined(__NDR_convert__int_rep__iokit__io_name_t__defined)
#define	__NDR_convert__int_rep__Reply__io_object_get_bundle_identifier_t__class_name__defined
#define	__NDR_convert__int_rep__Reply__io_object_get_bundle_identifier_t__class_name(a, f, c) \
	__NDR_convert__int_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_name_t__defined)
#define	__NDR_convert__int_rep__Reply__io_object_get_bundle_identifier_t__class_name__defined
#define	__NDR_convert__int_rep__Reply__io_object_get_bundle_identifier_t__class_name(a, f, c) \
	__NDR_convert__int_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_object_get_bundle_identifier_t__class_name__defined */


#ifndef __NDR_convert__int_rep__Reply__io_object_get_bundle_identifier_t__class_nameCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_object_get_bundle_identifier_t__class_nameCnt__defined
#define	__NDR_convert__int_rep__Reply__io_object_get_bundle_identifier_t__class_nameCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_object_get_bundle_identifier_t__class_nameCnt__defined
#define	__NDR_convert__int_rep__Reply__io_object_get_bundle_identifier_t__class_nameCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_object_get_bundle_identifier_t__class_nameCnt__defined */



#ifndef __NDR_convert__char_rep__Reply__io_object_get_bundle_identifier_t__class_name__defined
#if	defined(__NDR_convert__char_rep__iokit__io_name_t__defined)
#define	__NDR_convert__char_rep__Reply__io_object_get_bundle_identifier_t__class_name__defined
#define	__NDR_convert__char_rep__Reply__io_object_get_bundle_identifier_t__class_name(a, f, c) \
	__NDR_convert__char_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_name_t__defined)
#define	__NDR_convert__char_rep__Reply__io_object_get_bundle_identifier_t__class_name__defined
#define	__NDR_convert__char_rep__Reply__io_object_get_bundle_identifier_t__class_name(a, f, c) \
	__NDR_convert__char_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_object_get_bundle_identifier_t__class_name__defined */




#ifndef __NDR_convert__float_rep__Reply__io_object_get_bundle_identifier_t__class_name__defined
#if	defined(__NDR_convert__float_rep__iokit__io_name_t__defined)
#define	__NDR_convert__float_rep__Reply__io_object_get_bundle_identifier_t__class_name__defined
#define	__NDR_convert__float_rep__Reply__io_object_get_bundle_identifier_t__class_name(a, f, c) \
	__NDR_convert__float_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_name_t__defined)
#define	__NDR_convert__float_rep__Reply__io_object_get_bundle_identifier_t__class_name__defined
#define	__NDR_convert__float_rep__Reply__io_object_get_bundle_identifier_t__class_name(a, f, c) \
	__NDR_convert__float_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_object_get_bundle_identifier_t__class_name__defined */




mig_internal kern_return_t __MIG_check__Reply__io_object_get_bundle_identifier_t(__Reply__io_object_get_bundle_identifier_t *Out0P)
{

	typedef __Reply__io_object_get_bundle_identifier_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

	if (Out0P->Head.msgh_id != 2961) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    ((msgh_size > (mach_msg_size_t)sizeof(__Reply) || msgh_size < (mach_msg_size_t)(sizeof(__Reply) - 128)) &&
	     (msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	      Out0P->RetCode == KERN_SUCCESS)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (Out0P->RetCode != KERN_SUCCESS) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if defined(__NDR_convert__int_rep__Reply__io_object_get_bundle_identifier_t__class_nameCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__io_object_get_bundle_identifier_t__class_nameCnt(&Out0P->class_nameCnt, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__io_object_get_bundle_identifier_t__class_nameCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Reply) - 128) + (_WALIGN_(Out0P->class_nameCnt)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Reply__io_object_get_bundle_identifier_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_object_get_bundle_identifier_t__class_name__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_object_get_bundle_identifier_t__class_nameCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__io_object_get_bundle_identifier_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__io_object_get_bundle_identifier_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_object_get_bundle_identifier_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__io_object_get_bundle_identifier_t__class_name__defined)
		__NDR_convert__int_rep__Reply__io_object_get_bundle_identifier_t__class_name(&Out0P->class_name, Out0P->NDR.int_rep, Out0P->class_nameCnt);
#endif /* __NDR_convert__int_rep__Reply__io_object_get_bundle_identifier_t__class_name__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__io_object_get_bundle_identifier_t__class_name__defined) || \
	0
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__io_object_get_bundle_identifier_t__class_name__defined)
		__NDR_convert__char_rep__Reply__io_object_get_bundle_identifier_t__class_name(&Out0P->class_name, Out0P->NDR.char_rep, Out0P->class_nameCnt);
#endif /* __NDR_convert__char_rep__Reply__io_object_get_bundle_identifier_t__class_name__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__io_object_get_bundle_identifier_t__class_name__defined) || \
	0
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__io_object_get_bundle_identifier_t__class_name__defined)
		__NDR_convert__float_rep__Reply__io_object_get_bundle_identifier_t__class_name(&Out0P->class_name, Out0P->NDR.float_rep, Out0P->class_nameCnt);
#endif /* __NDR_convert__float_rep__Reply__io_object_get_bundle_identifier_t__class_name__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_object_get_bundle_identifier_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_object_get_bundle_identifier */
mig_external kern_return_t io_object_get_bundle_identifier
(
	mach_port_t master_port,
	io_name_t obj_name,
	io_name_t class_name
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t obj_nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t obj_nameCnt;
		char obj_name[128];
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t class_nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t class_nameCnt;
		char class_name[128];
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t class_nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t class_nameCnt;
		char class_name[128];
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;

#ifdef	__MIG_check__Reply__io_object_get_bundle_identifier_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_object_get_bundle_identifier_t__defined */

	__DeclareSendRpc(2861, "io_object_get_bundle_identifier")

	InP->NDR = NDR_record;

	InP->obj_nameCnt = mig_strncpy(InP->obj_name, obj_name, 128);

	msgh_size = (mach_msg_size_t)(sizeof(Request) - 128) + (_WALIGN_(InP->obj_nameCnt));
	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = master_port;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2861;

	__BeforeSendRpc(2861, "io_object_get_bundle_identifier")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, msgh_size, (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2861, "io_object_get_bundle_identifier")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_object_get_bundle_identifier_t__defined)
	check_result = __MIG_check__Reply__io_object_get_bundle_identifier_t((__Reply__io_object_get_bundle_identifier_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_object_get_bundle_identifier_t__defined) */

	(void) mig_strncpy(class_name, Out0P->class_name, 128);

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_service_open_extended_t__defined)
#define __MIG_check__Reply__io_service_open_extended_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_service_open_extended_t__result__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_open_extended_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_service_open_extended_t__result(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_open_extended_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_service_open_extended_t__result(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Reply__io_service_open_extended_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_service_open_extended_t__result(a, f) \
	__NDR_convert__int_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Reply__io_service_open_extended_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_service_open_extended_t__result(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_open_extended_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_service_open_extended_t__result(a, f) \
	__NDR_convert__int_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__io_service_open_extended_t__result__defined
#define	__NDR_convert__int_rep__Reply__io_service_open_extended_t__result(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_service_open_extended_t__result__defined */


#ifndef __NDR_convert__char_rep__Reply__io_service_open_extended_t__result__defined
#if	defined(__NDR_convert__char_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__char_rep__Reply__io_service_open_extended_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_service_open_extended_t__result(a, f) \
	__NDR_convert__char_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__kern_return_t__defined)
#define	__NDR_convert__char_rep__Reply__io_service_open_extended_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_service_open_extended_t__result(a, f) \
	__NDR_convert__char_rep__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Reply__io_service_open_extended_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_service_open_extended_t__result(a, f) \
	__NDR_convert__char_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Reply__io_service_open_extended_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_service_open_extended_t__result(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__io_service_open_extended_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_service_open_extended_t__result(a, f) \
	__NDR_convert__char_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__io_service_open_extended_t__result__defined
#define	__NDR_convert__char_rep__Reply__io_service_open_extended_t__result(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_service_open_extended_t__result__defined */


#ifndef __NDR_convert__float_rep__Reply__io_service_open_extended_t__result__defined
#if	defined(__NDR_convert__float_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__float_rep__Reply__io_service_open_extended_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_service_open_extended_t__result(a, f) \
	__NDR_convert__float_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__kern_return_t__defined)
#define	__NDR_convert__float_rep__Reply__io_service_open_extended_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_service_open_extended_t__result(a, f) \
	__NDR_convert__float_rep__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Reply__io_service_open_extended_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_service_open_extended_t__result(a, f) \
	__NDR_convert__float_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Reply__io_service_open_extended_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_service_open_extended_t__result(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__io_service_open_extended_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_service_open_extended_t__result(a, f) \
	__NDR_convert__float_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__io_service_open_extended_t__result__defined
#define	__NDR_convert__float_rep__Reply__io_service_open_extended_t__result(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_service_open_extended_t__result__defined */



mig_internal kern_return_t __MIG_check__Reply__io_service_open_extended_t(__Reply__io_service_open_extended_t *Out0P)
{

	typedef __Reply__io_service_open_extended_t __Reply;
	boolean_t msgh_simple;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 2962) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

	msgh_simple = !(Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX);
#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((msgh_simple || Out0P->msgh_body.msgh_descriptor_count != 1 ||
	    msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	    (!msgh_simple || msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	    ((mig_reply_error_t *)Out0P)->RetCode == KERN_SUCCESS))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (msgh_simple) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	__MigTypeCheck
	if (Out0P->connection.type != MACH_MSG_PORT_DESCRIPTOR ||
	    Out0P->connection.disposition != 17) {
		return MIG_TYPE_ERROR;
	}
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Reply__io_service_open_extended_t__result__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__io_service_open_extended_t__result__defined)
		__NDR_convert__int_rep__Reply__io_service_open_extended_t__result(&Out0P->result, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_service_open_extended_t__result__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Reply__io_service_open_extended_t__result__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__io_service_open_extended_t__result__defined)
		__NDR_convert__char_rep__Reply__io_service_open_extended_t__result(&Out0P->result, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__io_service_open_extended_t__result__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Reply__io_service_open_extended_t__result__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__io_service_open_extended_t__result__defined)
		__NDR_convert__float_rep__Reply__io_service_open_extended_t__result(&Out0P->result, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__io_service_open_extended_t__result__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_service_open_extended_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_service_open_extended */
mig_external kern_return_t io_service_open_extended
(
	mach_port_t service,
	task_t owningTask,
	uint32_t connect_type,
	NDR_record_t ndr,
	io_buf_ptr_t properties,
	mach_msg_type_number_t propertiesCnt,
	kern_return_t *result,
	mach_port_t *connection
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t owningTask;
		mach_msg_ool_descriptor_t properties;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint32_t connect_type;
		NDR_record_t ndr;
		mach_msg_type_number_t propertiesCnt;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t connection;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		kern_return_t result;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t connection;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		kern_return_t result;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__io_service_open_extended_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_service_open_extended_t__defined */

	__DeclareSendRpc(2862, "io_service_open_extended")

#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t owningTaskTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#if	UseStaticTemplates
	const static mach_msg_ool_descriptor_t propertiesTemplate = {
		/* addr = */		(void *)0,
		/* size = */		0,
		/* deal = */		FALSE,
		/* copy = */		MACH_MSG_PHYSICAL_COPY,
		/* pad2 = */		0,
		/* type = */		MACH_MSG_OOL_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 2;
#if	UseStaticTemplates
	InP->owningTask = owningTaskTemplate;
	InP->owningTask.name = owningTask;
#else	/* UseStaticTemplates */
	InP->owningTask.name = owningTask;
	InP->owningTask.disposition = 19;
	InP->owningTask.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */

#if	UseStaticTemplates
	InP->properties = propertiesTemplate;
	InP->properties.address = (void *)(properties);
	InP->properties.size = propertiesCnt;
#else	/* UseStaticTemplates */
	InP->properties.address = (void *)(properties);
	InP->properties.size = propertiesCnt;
	InP->properties.deallocate =  FALSE;
	InP->properties.copy = MACH_MSG_PHYSICAL_COPY;
	InP->properties.type = MACH_MSG_OOL_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	InP->connect_type = connect_type;

	InP->ndr = ndr;

	InP->propertiesCnt = propertiesCnt;

	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = service;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2862;

	__BeforeSendRpc(2862, "io_service_open_extended")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2862, "io_service_open_extended")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_service_open_extended_t__defined)
	check_result = __MIG_check__Reply__io_service_open_extended_t((__Reply__io_service_open_extended_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_service_open_extended_t__defined) */

	*result = Out0P->result;

	*connection = Out0P->connection.name;
	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_connect_map_memory_into_task_t__defined)
#define __MIG_check__Reply__io_connect_map_memory_into_task_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_connect_map_memory_into_task_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_into_task_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_into_task_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_into_task_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_into_task_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_connect_map_memory_into_task_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__io_connect_map_memory_into_task_t__address__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_vm_address_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_into_task_t__address__defined
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_into_task_t__address(a, f) \
	__NDR_convert__int_rep__iokit__mach_vm_address_t((mach_vm_address_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_vm_address_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_into_task_t__address__defined
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_into_task_t__address(a, f) \
	__NDR_convert__int_rep__mach_vm_address_t((mach_vm_address_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__uint64_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_into_task_t__address__defined
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_into_task_t__address(a, f) \
	__NDR_convert__int_rep__iokit__uint64_t((uint64_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint64_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_into_task_t__address__defined
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_into_task_t__address(a, f) \
	__NDR_convert__int_rep__uint64_t((uint64_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_connect_map_memory_into_task_t__address__defined */


#ifndef __NDR_convert__int_rep__Reply__io_connect_map_memory_into_task_t__size__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_vm_size_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_into_task_t__size__defined
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_into_task_t__size(a, f) \
	__NDR_convert__int_rep__iokit__mach_vm_size_t((mach_vm_size_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_vm_size_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_into_task_t__size__defined
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_into_task_t__size(a, f) \
	__NDR_convert__int_rep__mach_vm_size_t((mach_vm_size_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__uint64_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_into_task_t__size__defined
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_into_task_t__size(a, f) \
	__NDR_convert__int_rep__iokit__uint64_t((uint64_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint64_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_into_task_t__size__defined
#define	__NDR_convert__int_rep__Reply__io_connect_map_memory_into_task_t__size(a, f) \
	__NDR_convert__int_rep__uint64_t((uint64_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_connect_map_memory_into_task_t__size__defined */



#ifndef __NDR_convert__char_rep__Reply__io_connect_map_memory_into_task_t__address__defined
#if	defined(__NDR_convert__char_rep__iokit__mach_vm_address_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_into_task_t__address__defined
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_into_task_t__address(a, f) \
	__NDR_convert__char_rep__iokit__mach_vm_address_t((mach_vm_address_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__mach_vm_address_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_into_task_t__address__defined
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_into_task_t__address(a, f) \
	__NDR_convert__char_rep__mach_vm_address_t((mach_vm_address_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__uint64_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_into_task_t__address__defined
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_into_task_t__address(a, f) \
	__NDR_convert__char_rep__iokit__uint64_t((uint64_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint64_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_into_task_t__address__defined
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_into_task_t__address(a, f) \
	__NDR_convert__char_rep__uint64_t((uint64_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_connect_map_memory_into_task_t__address__defined */


#ifndef __NDR_convert__char_rep__Reply__io_connect_map_memory_into_task_t__size__defined
#if	defined(__NDR_convert__char_rep__iokit__mach_vm_size_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_into_task_t__size__defined
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_into_task_t__size(a, f) \
	__NDR_convert__char_rep__iokit__mach_vm_size_t((mach_vm_size_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__mach_vm_size_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_into_task_t__size__defined
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_into_task_t__size(a, f) \
	__NDR_convert__char_rep__mach_vm_size_t((mach_vm_size_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__uint64_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_into_task_t__size__defined
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_into_task_t__size(a, f) \
	__NDR_convert__char_rep__iokit__uint64_t((uint64_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint64_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_into_task_t__size__defined
#define	__NDR_convert__char_rep__Reply__io_connect_map_memory_into_task_t__size(a, f) \
	__NDR_convert__char_rep__uint64_t((uint64_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_connect_map_memory_into_task_t__size__defined */



#ifndef __NDR_convert__float_rep__Reply__io_connect_map_memory_into_task_t__address__defined
#if	defined(__NDR_convert__float_rep__iokit__mach_vm_address_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_into_task_t__address__defined
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_into_task_t__address(a, f) \
	__NDR_convert__float_rep__iokit__mach_vm_address_t((mach_vm_address_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__mach_vm_address_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_into_task_t__address__defined
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_into_task_t__address(a, f) \
	__NDR_convert__float_rep__mach_vm_address_t((mach_vm_address_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__uint64_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_into_task_t__address__defined
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_into_task_t__address(a, f) \
	__NDR_convert__float_rep__iokit__uint64_t((uint64_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint64_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_into_task_t__address__defined
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_into_task_t__address(a, f) \
	__NDR_convert__float_rep__uint64_t((uint64_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_connect_map_memory_into_task_t__address__defined */


#ifndef __NDR_convert__float_rep__Reply__io_connect_map_memory_into_task_t__size__defined
#if	defined(__NDR_convert__float_rep__iokit__mach_vm_size_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_into_task_t__size__defined
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_into_task_t__size(a, f) \
	__NDR_convert__float_rep__iokit__mach_vm_size_t((mach_vm_size_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__mach_vm_size_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_into_task_t__size__defined
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_into_task_t__size(a, f) \
	__NDR_convert__float_rep__mach_vm_size_t((mach_vm_size_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__uint64_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_into_task_t__size__defined
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_into_task_t__size(a, f) \
	__NDR_convert__float_rep__iokit__uint64_t((uint64_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint64_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_into_task_t__size__defined
#define	__NDR_convert__float_rep__Reply__io_connect_map_memory_into_task_t__size(a, f) \
	__NDR_convert__float_rep__uint64_t((uint64_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_connect_map_memory_into_task_t__size__defined */



mig_internal kern_return_t __MIG_check__Reply__io_connect_map_memory_into_task_t(__Reply__io_connect_map_memory_into_task_t *Out0P)
{

	typedef __Reply__io_connect_map_memory_into_task_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 2963) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    ((msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	     (msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	      Out0P->RetCode == KERN_SUCCESS)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (Out0P->RetCode != KERN_SUCCESS) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	defined(__NDR_convert__int_rep__Reply__io_connect_map_memory_into_task_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_connect_map_memory_into_task_t__address__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_connect_map_memory_into_task_t__size__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__io_connect_map_memory_into_task_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__io_connect_map_memory_into_task_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_connect_map_memory_into_task_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__io_connect_map_memory_into_task_t__address__defined)
		__NDR_convert__int_rep__Reply__io_connect_map_memory_into_task_t__address(&Out0P->address, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_connect_map_memory_into_task_t__address__defined */
#if defined(__NDR_convert__int_rep__Reply__io_connect_map_memory_into_task_t__size__defined)
		__NDR_convert__int_rep__Reply__io_connect_map_memory_into_task_t__size(&Out0P->size, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_connect_map_memory_into_task_t__size__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__io_connect_map_memory_into_task_t__address__defined) || \
	defined(__NDR_convert__char_rep__Reply__io_connect_map_memory_into_task_t__size__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__io_connect_map_memory_into_task_t__address__defined)
		__NDR_convert__char_rep__Reply__io_connect_map_memory_into_task_t__address(&Out0P->address, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__io_connect_map_memory_into_task_t__address__defined */
#if defined(__NDR_convert__char_rep__Reply__io_connect_map_memory_into_task_t__size__defined)
		__NDR_convert__char_rep__Reply__io_connect_map_memory_into_task_t__size(&Out0P->size, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__io_connect_map_memory_into_task_t__size__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__io_connect_map_memory_into_task_t__address__defined) || \
	defined(__NDR_convert__float_rep__Reply__io_connect_map_memory_into_task_t__size__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__io_connect_map_memory_into_task_t__address__defined)
		__NDR_convert__float_rep__Reply__io_connect_map_memory_into_task_t__address(&Out0P->address, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__io_connect_map_memory_into_task_t__address__defined */
#if defined(__NDR_convert__float_rep__Reply__io_connect_map_memory_into_task_t__size__defined)
		__NDR_convert__float_rep__Reply__io_connect_map_memory_into_task_t__size(&Out0P->size, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__io_connect_map_memory_into_task_t__size__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_connect_map_memory_into_task_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_connect_map_memory_into_task */
mig_external kern_return_t io_connect_map_memory_into_task
(
	mach_port_t connection,
	uint32_t memory_type,
	task_t into_task,
	mach_vm_address_t *address,
	mach_vm_size_t *size,
	uint32_t flags
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t into_task;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint32_t memory_type;
		mach_vm_address_t address;
		mach_vm_size_t size;
		uint32_t flags;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_vm_address_t address;
		mach_vm_size_t size;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_vm_address_t address;
		mach_vm_size_t size;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__io_connect_map_memory_into_task_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_connect_map_memory_into_task_t__defined */

	__DeclareSendRpc(2863, "io_connect_map_memory_into_task")

#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t into_taskTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 1;
#if	UseStaticTemplates
	InP->into_task = into_taskTemplate;
	InP->into_task.name = into_task;
#else	/* UseStaticTemplates */
	InP->into_task.name = into_task;
	InP->into_task.disposition = 19;
	InP->into_task.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	InP->memory_type = memory_type;

	InP->address = *address;

	InP->size = *size;

	InP->flags = flags;

	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = connection;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2863;

	__BeforeSendRpc(2863, "io_connect_map_memory_into_task")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2863, "io_connect_map_memory_into_task")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_connect_map_memory_into_task_t__defined)
	check_result = __MIG_check__Reply__io_connect_map_memory_into_task_t((__Reply__io_connect_map_memory_into_task_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_connect_map_memory_into_task_t__defined) */

	*address = Out0P->address;

	*size = Out0P->size;

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_connect_unmap_memory_from_task_t__defined)
#define __MIG_check__Reply__io_connect_unmap_memory_from_task_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_connect_unmap_memory_from_task_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_unmap_memory_from_task_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_connect_unmap_memory_from_task_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_unmap_memory_from_task_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_connect_unmap_memory_from_task_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_connect_unmap_memory_from_task_t__RetCode__defined */





mig_internal kern_return_t __MIG_check__Reply__io_connect_unmap_memory_from_task_t(__Reply__io_connect_unmap_memory_from_task_t *Out0P)
{

	typedef __Reply__io_connect_unmap_memory_from_task_t __Reply;
	if (Out0P->Head.msgh_id != 2964) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (Out0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Reply)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Reply__io_connect_unmap_memory_from_task_t__RetCode__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__io_connect_unmap_memory_from_task_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__io_connect_unmap_memory_from_task_t__RetCode__defined */
	{
		return Out0P->RetCode;
	}
}
#endif /* !defined(__MIG_check__Reply__io_connect_unmap_memory_from_task_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_connect_unmap_memory_from_task */
mig_external kern_return_t io_connect_unmap_memory_from_task
(
	mach_port_t connection,
	uint32_t memory_type,
	task_t from_task,
	mach_vm_address_t address
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t from_task;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint32_t memory_type;
		mach_vm_address_t address;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__io_connect_unmap_memory_from_task_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_connect_unmap_memory_from_task_t__defined */

	__DeclareSendRpc(2864, "io_connect_unmap_memory_from_task")

#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t from_taskTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 1;
#if	UseStaticTemplates
	InP->from_task = from_taskTemplate;
	InP->from_task.name = from_task;
#else	/* UseStaticTemplates */
	InP->from_task.name = from_task;
	InP->from_task.disposition = 19;
	InP->from_task.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	InP->memory_type = memory_type;

	InP->address = address;

	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = connection;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2864;

	__BeforeSendRpc(2864, "io_connect_unmap_memory_from_task")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2864, "io_connect_unmap_memory_from_task")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_connect_unmap_memory_from_task_t__defined)
	check_result = __MIG_check__Reply__io_connect_unmap_memory_from_task_t((__Reply__io_connect_unmap_memory_from_task_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_connect_unmap_memory_from_task_t__defined) */

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_connect_method_t__defined)
#define __MIG_check__Reply__io_connect_method_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_connect_method_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_connect_method_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__io_connect_method_t__scalar_output__defined
#if	defined(__NDR_convert__int_rep__iokit__io_scalar_inband64_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_t__scalar_output__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_t__scalar_output(a, f, c) \
	__NDR_convert__int_rep__iokit__io_scalar_inband64_t((io_scalar_inband64_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_scalar_inband64_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_t__scalar_output__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_t__scalar_output(a, f, c) \
	__NDR_convert__int_rep__io_scalar_inband64_t((io_scalar_inband64_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__iokit__uint64_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_t__scalar_output__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_t__scalar_output(a, f, c) \
	__NDR_convert__ARRAY((uint64_t *)(a), f, c, __NDR_convert__int_rep__iokit__uint64_t)
#elif	defined(__NDR_convert__int_rep__uint64_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_t__scalar_output__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_t__scalar_output(a, f, c) \
	__NDR_convert__ARRAY((uint64_t *)(a), f, c, __NDR_convert__int_rep__uint64_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_connect_method_t__scalar_output__defined */


#ifndef __NDR_convert__int_rep__Reply__io_connect_method_t__scalar_outputCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_t__scalar_outputCnt__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_t__scalar_outputCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_t__scalar_outputCnt__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_t__scalar_outputCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_connect_method_t__scalar_outputCnt__defined */


#ifndef __NDR_convert__int_rep__Reply__io_connect_method_t__inband_output__defined
#if	defined(__NDR_convert__int_rep__iokit__io_struct_inband_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_t__inband_output__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_t__inband_output(a, f, c) \
	__NDR_convert__int_rep__iokit__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_struct_inband_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_t__inband_output__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_t__inband_output(a, f, c) \
	__NDR_convert__int_rep__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__iokit__char__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_t__inband_output__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_t__inband_output(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__int_rep__iokit__char)
#elif	defined(__NDR_convert__int_rep__char__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_t__inband_output__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_t__inband_output(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__int_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_connect_method_t__inband_output__defined */


#ifndef __NDR_convert__int_rep__Reply__io_connect_method_t__inband_outputCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_t__inband_outputCnt__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_t__inband_outputCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_t__inband_outputCnt__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_t__inband_outputCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_connect_method_t__inband_outputCnt__defined */


#ifndef __NDR_convert__int_rep__Reply__io_connect_method_t__ool_output_size__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_vm_size_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_t__ool_output_size__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_t__ool_output_size(a, f) \
	__NDR_convert__int_rep__iokit__mach_vm_size_t((mach_vm_size_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_vm_size_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_t__ool_output_size__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_t__ool_output_size(a, f) \
	__NDR_convert__int_rep__mach_vm_size_t((mach_vm_size_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__uint64_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_t__ool_output_size__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_t__ool_output_size(a, f) \
	__NDR_convert__int_rep__iokit__uint64_t((uint64_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint64_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_method_t__ool_output_size__defined
#define	__NDR_convert__int_rep__Reply__io_connect_method_t__ool_output_size(a, f) \
	__NDR_convert__int_rep__uint64_t((uint64_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_connect_method_t__ool_output_size__defined */



#ifndef __NDR_convert__char_rep__Reply__io_connect_method_t__scalar_output__defined
#if	defined(__NDR_convert__char_rep__iokit__io_scalar_inband64_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_method_t__scalar_output__defined
#define	__NDR_convert__char_rep__Reply__io_connect_method_t__scalar_output(a, f, c) \
	__NDR_convert__char_rep__iokit__io_scalar_inband64_t((io_scalar_inband64_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_scalar_inband64_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_method_t__scalar_output__defined
#define	__NDR_convert__char_rep__Reply__io_connect_method_t__scalar_output(a, f, c) \
	__NDR_convert__char_rep__io_scalar_inband64_t((io_scalar_inband64_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__iokit__uint64_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_method_t__scalar_output__defined
#define	__NDR_convert__char_rep__Reply__io_connect_method_t__scalar_output(a, f, c) \
	__NDR_convert__ARRAY((uint64_t *)(a), f, c, __NDR_convert__char_rep__iokit__uint64_t)
#elif	defined(__NDR_convert__char_rep__uint64_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_method_t__scalar_output__defined
#define	__NDR_convert__char_rep__Reply__io_connect_method_t__scalar_output(a, f, c) \
	__NDR_convert__ARRAY((uint64_t *)(a), f, c, __NDR_convert__char_rep__uint64_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_connect_method_t__scalar_output__defined */



#ifndef __NDR_convert__char_rep__Reply__io_connect_method_t__inband_output__defined
#if	defined(__NDR_convert__char_rep__iokit__io_struct_inband_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_method_t__inband_output__defined
#define	__NDR_convert__char_rep__Reply__io_connect_method_t__inband_output(a, f, c) \
	__NDR_convert__char_rep__iokit__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_struct_inband_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_method_t__inband_output__defined
#define	__NDR_convert__char_rep__Reply__io_connect_method_t__inband_output(a, f, c) \
	__NDR_convert__char_rep__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__iokit__char__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_method_t__inband_output__defined
#define	__NDR_convert__char_rep__Reply__io_connect_method_t__inband_output(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__char_rep__iokit__char)
#elif	defined(__NDR_convert__char_rep__char__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_method_t__inband_output__defined
#define	__NDR_convert__char_rep__Reply__io_connect_method_t__inband_output(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__char_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_connect_method_t__inband_output__defined */



#ifndef __NDR_convert__char_rep__Reply__io_connect_method_t__ool_output_size__defined
#if	defined(__NDR_convert__char_rep__iokit__mach_vm_size_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_method_t__ool_output_size__defined
#define	__NDR_convert__char_rep__Reply__io_connect_method_t__ool_output_size(a, f) \
	__NDR_convert__char_rep__iokit__mach_vm_size_t((mach_vm_size_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__mach_vm_size_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_method_t__ool_output_size__defined
#define	__NDR_convert__char_rep__Reply__io_connect_method_t__ool_output_size(a, f) \
	__NDR_convert__char_rep__mach_vm_size_t((mach_vm_size_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__uint64_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_method_t__ool_output_size__defined
#define	__NDR_convert__char_rep__Reply__io_connect_method_t__ool_output_size(a, f) \
	__NDR_convert__char_rep__iokit__uint64_t((uint64_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint64_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_method_t__ool_output_size__defined
#define	__NDR_convert__char_rep__Reply__io_connect_method_t__ool_output_size(a, f) \
	__NDR_convert__char_rep__uint64_t((uint64_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_connect_method_t__ool_output_size__defined */



#ifndef __NDR_convert__float_rep__Reply__io_connect_method_t__scalar_output__defined
#if	defined(__NDR_convert__float_rep__iokit__io_scalar_inband64_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_method_t__scalar_output__defined
#define	__NDR_convert__float_rep__Reply__io_connect_method_t__scalar_output(a, f, c) \
	__NDR_convert__float_rep__iokit__io_scalar_inband64_t((io_scalar_inband64_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_scalar_inband64_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_method_t__scalar_output__defined
#define	__NDR_convert__float_rep__Reply__io_connect_method_t__scalar_output(a, f, c) \
	__NDR_convert__float_rep__io_scalar_inband64_t((io_scalar_inband64_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__iokit__uint64_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_method_t__scalar_output__defined
#define	__NDR_convert__float_rep__Reply__io_connect_method_t__scalar_output(a, f, c) \
	__NDR_convert__ARRAY((uint64_t *)(a), f, c, __NDR_convert__float_rep__iokit__uint64_t)
#elif	defined(__NDR_convert__float_rep__uint64_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_method_t__scalar_output__defined
#define	__NDR_convert__float_rep__Reply__io_connect_method_t__scalar_output(a, f, c) \
	__NDR_convert__ARRAY((uint64_t *)(a), f, c, __NDR_convert__float_rep__uint64_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_connect_method_t__scalar_output__defined */



#ifndef __NDR_convert__float_rep__Reply__io_connect_method_t__inband_output__defined
#if	defined(__NDR_convert__float_rep__iokit__io_struct_inband_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_method_t__inband_output__defined
#define	__NDR_convert__float_rep__Reply__io_connect_method_t__inband_output(a, f, c) \
	__NDR_convert__float_rep__iokit__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_struct_inband_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_method_t__inband_output__defined
#define	__NDR_convert__float_rep__Reply__io_connect_method_t__inband_output(a, f, c) \
	__NDR_convert__float_rep__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__iokit__char__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_method_t__inband_output__defined
#define	__NDR_convert__float_rep__Reply__io_connect_method_t__inband_output(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__float_rep__iokit__char)
#elif	defined(__NDR_convert__float_rep__char__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_method_t__inband_output__defined
#define	__NDR_convert__float_rep__Reply__io_connect_method_t__inband_output(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__float_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_connect_method_t__inband_output__defined */



#ifndef __NDR_convert__float_rep__Reply__io_connect_method_t__ool_output_size__defined
#if	defined(__NDR_convert__float_rep__iokit__mach_vm_size_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_method_t__ool_output_size__defined
#define	__NDR_convert__float_rep__Reply__io_connect_method_t__ool_output_size(a, f) \
	__NDR_convert__float_rep__iokit__mach_vm_size_t((mach_vm_size_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__mach_vm_size_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_method_t__ool_output_size__defined
#define	__NDR_convert__float_rep__Reply__io_connect_method_t__ool_output_size(a, f) \
	__NDR_convert__float_rep__mach_vm_size_t((mach_vm_size_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__uint64_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_method_t__ool_output_size__defined
#define	__NDR_convert__float_rep__Reply__io_connect_method_t__ool_output_size(a, f) \
	__NDR_convert__float_rep__iokit__uint64_t((uint64_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint64_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_method_t__ool_output_size__defined
#define	__NDR_convert__float_rep__Reply__io_connect_method_t__ool_output_size(a, f) \
	__NDR_convert__float_rep__uint64_t((uint64_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_connect_method_t__ool_output_size__defined */



mig_internal kern_return_t __MIG_check__Reply__io_connect_method_t(__Reply__io_connect_method_t *Out0P, __Reply__io_connect_method_t **Out1PP, __Reply__io_connect_method_t **Out2PP)
{

	typedef __Reply__io_connect_method_t __Reply;
	__Reply *Out1P;
	__Reply *Out2P;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	unsigned int msgh_size_delta;

	if (Out0P->Head.msgh_id != 2965) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    ((msgh_size > (mach_msg_size_t)sizeof(__Reply) || msgh_size < (mach_msg_size_t)(sizeof(__Reply) - 4224)) &&
	     (msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	      Out0P->RetCode == KERN_SUCCESS)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (Out0P->RetCode != KERN_SUCCESS) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if defined(__NDR_convert__int_rep__Reply__io_connect_method_t__scalar_outputCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__io_connect_method_t__scalar_outputCnt(&Out0P->scalar_outputCnt, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__io_connect_method_t__scalar_outputCnt__defined */
	msgh_size_delta = (8 * Out0P->scalar_outputCnt);
#if	__MigTypeCheck
	if (msgh_size < (mach_msg_size_t)(sizeof(__Reply) - 4224) + msgh_size_delta)
		{ return MIG_TYPE_ERROR; }
	msgh_size -= msgh_size_delta;
#endif	/* __MigTypeCheck */

	*Out1PP = Out1P = (__Reply *) ((pointer_t) Out0P + msgh_size_delta - 128);

#if defined(__NDR_convert__int_rep__Reply__io_connect_method_t__inband_outputCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__io_connect_method_t__inband_outputCnt(&Out1P->inband_outputCnt, Out1P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__io_connect_method_t__inband_outputCnt__defined */
	msgh_size_delta = _WALIGN_(Out1P->inband_outputCnt);
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Reply) - 4224) + msgh_size_delta)
		{ return MIG_TYPE_ERROR; }
#endif	/* __MigTypeCheck */

	*Out2PP = Out2P = (__Reply *) ((pointer_t) Out1P + msgh_size_delta - 4096);

#if	defined(__NDR_convert__int_rep__Reply__io_connect_method_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_connect_method_t__scalar_output__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_connect_method_t__scalar_outputCnt__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_connect_method_t__inband_output__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_connect_method_t__inband_outputCnt__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_connect_method_t__ool_output_size__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__io_connect_method_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__io_connect_method_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_connect_method_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__io_connect_method_t__scalar_output__defined)
		__NDR_convert__int_rep__Reply__io_connect_method_t__scalar_output(&Out0P->scalar_output, Out0P->NDR.int_rep, Out0P->scalar_outputCnt);
#endif /* __NDR_convert__int_rep__Reply__io_connect_method_t__scalar_output__defined */
#if defined(__NDR_convert__int_rep__Reply__io_connect_method_t__inband_output__defined)
		__NDR_convert__int_rep__Reply__io_connect_method_t__inband_output(&Out1P->inband_output, Out0P->NDR.int_rep, Out1P->inband_outputCnt);
#endif /* __NDR_convert__int_rep__Reply__io_connect_method_t__inband_output__defined */
#if defined(__NDR_convert__int_rep__Reply__io_connect_method_t__ool_output_size__defined)
		__NDR_convert__int_rep__Reply__io_connect_method_t__ool_output_size(&Out2P->ool_output_size, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_connect_method_t__ool_output_size__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__io_connect_method_t__scalar_output__defined) || \
	0 || \
	defined(__NDR_convert__char_rep__Reply__io_connect_method_t__inband_output__defined) || \
	0 || \
	defined(__NDR_convert__char_rep__Reply__io_connect_method_t__ool_output_size__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__io_connect_method_t__scalar_output__defined)
		__NDR_convert__char_rep__Reply__io_connect_method_t__scalar_output(&Out0P->scalar_output, Out0P->NDR.char_rep, Out0P->scalar_outputCnt);
#endif /* __NDR_convert__char_rep__Reply__io_connect_method_t__scalar_output__defined */
#if defined(__NDR_convert__char_rep__Reply__io_connect_method_t__inband_output__defined)
		__NDR_convert__char_rep__Reply__io_connect_method_t__inband_output(&Out1P->inband_output, Out0P->NDR.char_rep, Out1P->inband_outputCnt);
#endif /* __NDR_convert__char_rep__Reply__io_connect_method_t__inband_output__defined */
#if defined(__NDR_convert__char_rep__Reply__io_connect_method_t__ool_output_size__defined)
		__NDR_convert__char_rep__Reply__io_connect_method_t__ool_output_size(&Out2P->ool_output_size, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__io_connect_method_t__ool_output_size__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__io_connect_method_t__scalar_output__defined) || \
	0 || \
	defined(__NDR_convert__float_rep__Reply__io_connect_method_t__inband_output__defined) || \
	0 || \
	defined(__NDR_convert__float_rep__Reply__io_connect_method_t__ool_output_size__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__io_connect_method_t__scalar_output__defined)
		__NDR_convert__float_rep__Reply__io_connect_method_t__scalar_output(&Out0P->scalar_output, Out0P->NDR.float_rep, Out0P->scalar_outputCnt);
#endif /* __NDR_convert__float_rep__Reply__io_connect_method_t__scalar_output__defined */
#if defined(__NDR_convert__float_rep__Reply__io_connect_method_t__inband_output__defined)
		__NDR_convert__float_rep__Reply__io_connect_method_t__inband_output(&Out1P->inband_output, Out0P->NDR.float_rep, Out1P->inband_outputCnt);
#endif /* __NDR_convert__float_rep__Reply__io_connect_method_t__inband_output__defined */
#if defined(__NDR_convert__float_rep__Reply__io_connect_method_t__ool_output_size__defined)
		__NDR_convert__float_rep__Reply__io_connect_method_t__ool_output_size(&Out2P->ool_output_size, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__io_connect_method_t__ool_output_size__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_connect_method_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_connect_method */
mig_external kern_return_t io_connect_method
(
	mach_port_t connection,
	uint32_t selector,
	io_scalar_inband64_t scalar_input,
	mach_msg_type_number_t scalar_inputCnt,
	io_struct_inband_t inband_input,
	mach_msg_type_number_t inband_inputCnt,
	mach_vm_address_t ool_input,
	mach_vm_size_t ool_input_size,
	io_scalar_inband64_t scalar_output,
	mach_msg_type_number_t *scalar_outputCnt,
	io_struct_inband_t inband_output,
	mach_msg_type_number_t *inband_outputCnt,
	mach_vm_address_t ool_output,
	mach_vm_size_t *ool_output_size
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint32_t selector;
		mach_msg_type_number_t scalar_inputCnt;
		uint64_t scalar_input[16];
		mach_msg_type_number_t inband_inputCnt;
		char inband_input[4096];
		mach_vm_address_t ool_input;
		mach_vm_size_t ool_input_size;
		mach_msg_type_number_t scalar_outputCnt;
		mach_msg_type_number_t inband_outputCnt;
		mach_vm_address_t ool_output;
		mach_vm_size_t ool_output_size;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t scalar_outputCnt;
		uint64_t scalar_output[16];
		mach_msg_type_number_t inband_outputCnt;
		char inband_output[4096];
		mach_vm_size_t ool_output_size;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t scalar_outputCnt;
		uint64_t scalar_output[16];
		mach_msg_type_number_t inband_outputCnt;
		char inband_output[4096];
		mach_vm_size_t ool_output_size;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;
	Reply *Out1P = NULL;
	Reply *Out2P = NULL;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;
	unsigned int msgh_size_delta;


#ifdef	__MIG_check__Reply__io_connect_method_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_connect_method_t__defined */

	__DeclareSendRpc(2865, "io_connect_method")

	InP->NDR = NDR_record;

	InP->selector = selector;

	if (scalar_inputCnt > 16) {
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) InP->scalar_input, (const char *) scalar_input, 8 * scalar_inputCnt);

	InP->scalar_inputCnt = scalar_inputCnt;

	msgh_size_delta = (8 * scalar_inputCnt);
	msgh_size = (mach_msg_size_t)(sizeof(Request) - 4224) + msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 128);

	if (inband_inputCnt > 4096) {
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) InP->inband_input, (const char *) inband_input, inband_inputCnt);

	InP->inband_inputCnt = inband_inputCnt;

	msgh_size_delta = _WALIGN_(inband_inputCnt);
	msgh_size += msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 4096);

	InP->ool_input = ool_input;

	InP->ool_input_size = ool_input_size;

	if (*scalar_outputCnt < 16)
		InP->scalar_outputCnt = *scalar_outputCnt;
	else
		InP->scalar_outputCnt = 16;

	if (*inband_outputCnt < 4096)
		InP->inband_outputCnt = *inband_outputCnt;
	else
		InP->inband_outputCnt = 4096;

	InP->ool_output = ool_output;

	InP->ool_output_size = *ool_output_size;

	InP = &Mess.In;
	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = connection;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2865;

	__BeforeSendRpc(2865, "io_connect_method")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, msgh_size, (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2865, "io_connect_method")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_connect_method_t__defined)
	check_result = __MIG_check__Reply__io_connect_method_t((__Reply__io_connect_method_t *)Out0P, (__Reply__io_connect_method_t **)&Out1P, (__Reply__io_connect_method_t **)&Out2P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_connect_method_t__defined) */

	if (Out0P->scalar_outputCnt > *scalar_outputCnt) {
		(void)memcpy((char *) scalar_output, (const char *) Out0P->scalar_output, 8 *  *scalar_outputCnt);
		*scalar_outputCnt = Out0P->scalar_outputCnt;
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) scalar_output, (const char *) Out0P->scalar_output, 8 * Out0P->scalar_outputCnt);

	*scalar_outputCnt = Out0P->scalar_outputCnt;

	if (Out1P->inband_outputCnt > *inband_outputCnt) {
		(void)memcpy((char *) inband_output, (const char *) Out1P->inband_output,  *inband_outputCnt);
		*inband_outputCnt = Out1P->inband_outputCnt;
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) inband_output, (const char *) Out1P->inband_output, Out1P->inband_outputCnt);

	*inband_outputCnt = Out1P->inband_outputCnt;

	*ool_output_size = Out2P->ool_output_size;

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_connect_async_method_t__defined)
#define __MIG_check__Reply__io_connect_async_method_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_connect_async_method_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_async_method_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_connect_async_method_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_async_method_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_connect_async_method_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_connect_async_method_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__io_connect_async_method_t__scalar_output__defined
#if	defined(__NDR_convert__int_rep__iokit__io_scalar_inband64_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_async_method_t__scalar_output__defined
#define	__NDR_convert__int_rep__Reply__io_connect_async_method_t__scalar_output(a, f, c) \
	__NDR_convert__int_rep__iokit__io_scalar_inband64_t((io_scalar_inband64_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_scalar_inband64_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_async_method_t__scalar_output__defined
#define	__NDR_convert__int_rep__Reply__io_connect_async_method_t__scalar_output(a, f, c) \
	__NDR_convert__int_rep__io_scalar_inband64_t((io_scalar_inband64_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__iokit__uint64_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_async_method_t__scalar_output__defined
#define	__NDR_convert__int_rep__Reply__io_connect_async_method_t__scalar_output(a, f, c) \
	__NDR_convert__ARRAY((uint64_t *)(a), f, c, __NDR_convert__int_rep__iokit__uint64_t)
#elif	defined(__NDR_convert__int_rep__uint64_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_async_method_t__scalar_output__defined
#define	__NDR_convert__int_rep__Reply__io_connect_async_method_t__scalar_output(a, f, c) \
	__NDR_convert__ARRAY((uint64_t *)(a), f, c, __NDR_convert__int_rep__uint64_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_connect_async_method_t__scalar_output__defined */


#ifndef __NDR_convert__int_rep__Reply__io_connect_async_method_t__scalar_outputCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_async_method_t__scalar_outputCnt__defined
#define	__NDR_convert__int_rep__Reply__io_connect_async_method_t__scalar_outputCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_async_method_t__scalar_outputCnt__defined
#define	__NDR_convert__int_rep__Reply__io_connect_async_method_t__scalar_outputCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_connect_async_method_t__scalar_outputCnt__defined */


#ifndef __NDR_convert__int_rep__Reply__io_connect_async_method_t__inband_output__defined
#if	defined(__NDR_convert__int_rep__iokit__io_struct_inband_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_async_method_t__inband_output__defined
#define	__NDR_convert__int_rep__Reply__io_connect_async_method_t__inband_output(a, f, c) \
	__NDR_convert__int_rep__iokit__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_struct_inband_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_async_method_t__inband_output__defined
#define	__NDR_convert__int_rep__Reply__io_connect_async_method_t__inband_output(a, f, c) \
	__NDR_convert__int_rep__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__iokit__char__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_async_method_t__inband_output__defined
#define	__NDR_convert__int_rep__Reply__io_connect_async_method_t__inband_output(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__int_rep__iokit__char)
#elif	defined(__NDR_convert__int_rep__char__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_async_method_t__inband_output__defined
#define	__NDR_convert__int_rep__Reply__io_connect_async_method_t__inband_output(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__int_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_connect_async_method_t__inband_output__defined */


#ifndef __NDR_convert__int_rep__Reply__io_connect_async_method_t__inband_outputCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_async_method_t__inband_outputCnt__defined
#define	__NDR_convert__int_rep__Reply__io_connect_async_method_t__inband_outputCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_async_method_t__inband_outputCnt__defined
#define	__NDR_convert__int_rep__Reply__io_connect_async_method_t__inband_outputCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_connect_async_method_t__inband_outputCnt__defined */


#ifndef __NDR_convert__int_rep__Reply__io_connect_async_method_t__ool_output_size__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_vm_size_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_async_method_t__ool_output_size__defined
#define	__NDR_convert__int_rep__Reply__io_connect_async_method_t__ool_output_size(a, f) \
	__NDR_convert__int_rep__iokit__mach_vm_size_t((mach_vm_size_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_vm_size_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_async_method_t__ool_output_size__defined
#define	__NDR_convert__int_rep__Reply__io_connect_async_method_t__ool_output_size(a, f) \
	__NDR_convert__int_rep__mach_vm_size_t((mach_vm_size_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__uint64_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_async_method_t__ool_output_size__defined
#define	__NDR_convert__int_rep__Reply__io_connect_async_method_t__ool_output_size(a, f) \
	__NDR_convert__int_rep__iokit__uint64_t((uint64_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint64_t__defined)
#define	__NDR_convert__int_rep__Reply__io_connect_async_method_t__ool_output_size__defined
#define	__NDR_convert__int_rep__Reply__io_connect_async_method_t__ool_output_size(a, f) \
	__NDR_convert__int_rep__uint64_t((uint64_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_connect_async_method_t__ool_output_size__defined */



#ifndef __NDR_convert__char_rep__Reply__io_connect_async_method_t__scalar_output__defined
#if	defined(__NDR_convert__char_rep__iokit__io_scalar_inband64_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_async_method_t__scalar_output__defined
#define	__NDR_convert__char_rep__Reply__io_connect_async_method_t__scalar_output(a, f, c) \
	__NDR_convert__char_rep__iokit__io_scalar_inband64_t((io_scalar_inband64_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_scalar_inband64_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_async_method_t__scalar_output__defined
#define	__NDR_convert__char_rep__Reply__io_connect_async_method_t__scalar_output(a, f, c) \
	__NDR_convert__char_rep__io_scalar_inband64_t((io_scalar_inband64_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__iokit__uint64_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_async_method_t__scalar_output__defined
#define	__NDR_convert__char_rep__Reply__io_connect_async_method_t__scalar_output(a, f, c) \
	__NDR_convert__ARRAY((uint64_t *)(a), f, c, __NDR_convert__char_rep__iokit__uint64_t)
#elif	defined(__NDR_convert__char_rep__uint64_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_async_method_t__scalar_output__defined
#define	__NDR_convert__char_rep__Reply__io_connect_async_method_t__scalar_output(a, f, c) \
	__NDR_convert__ARRAY((uint64_t *)(a), f, c, __NDR_convert__char_rep__uint64_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_connect_async_method_t__scalar_output__defined */



#ifndef __NDR_convert__char_rep__Reply__io_connect_async_method_t__inband_output__defined
#if	defined(__NDR_convert__char_rep__iokit__io_struct_inband_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_async_method_t__inband_output__defined
#define	__NDR_convert__char_rep__Reply__io_connect_async_method_t__inband_output(a, f, c) \
	__NDR_convert__char_rep__iokit__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_struct_inband_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_async_method_t__inband_output__defined
#define	__NDR_convert__char_rep__Reply__io_connect_async_method_t__inband_output(a, f, c) \
	__NDR_convert__char_rep__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__iokit__char__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_async_method_t__inband_output__defined
#define	__NDR_convert__char_rep__Reply__io_connect_async_method_t__inband_output(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__char_rep__iokit__char)
#elif	defined(__NDR_convert__char_rep__char__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_async_method_t__inband_output__defined
#define	__NDR_convert__char_rep__Reply__io_connect_async_method_t__inband_output(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__char_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_connect_async_method_t__inband_output__defined */



#ifndef __NDR_convert__char_rep__Reply__io_connect_async_method_t__ool_output_size__defined
#if	defined(__NDR_convert__char_rep__iokit__mach_vm_size_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_async_method_t__ool_output_size__defined
#define	__NDR_convert__char_rep__Reply__io_connect_async_method_t__ool_output_size(a, f) \
	__NDR_convert__char_rep__iokit__mach_vm_size_t((mach_vm_size_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__mach_vm_size_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_async_method_t__ool_output_size__defined
#define	__NDR_convert__char_rep__Reply__io_connect_async_method_t__ool_output_size(a, f) \
	__NDR_convert__char_rep__mach_vm_size_t((mach_vm_size_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__uint64_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_async_method_t__ool_output_size__defined
#define	__NDR_convert__char_rep__Reply__io_connect_async_method_t__ool_output_size(a, f) \
	__NDR_convert__char_rep__iokit__uint64_t((uint64_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint64_t__defined)
#define	__NDR_convert__char_rep__Reply__io_connect_async_method_t__ool_output_size__defined
#define	__NDR_convert__char_rep__Reply__io_connect_async_method_t__ool_output_size(a, f) \
	__NDR_convert__char_rep__uint64_t((uint64_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_connect_async_method_t__ool_output_size__defined */



#ifndef __NDR_convert__float_rep__Reply__io_connect_async_method_t__scalar_output__defined
#if	defined(__NDR_convert__float_rep__iokit__io_scalar_inband64_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_async_method_t__scalar_output__defined
#define	__NDR_convert__float_rep__Reply__io_connect_async_method_t__scalar_output(a, f, c) \
	__NDR_convert__float_rep__iokit__io_scalar_inband64_t((io_scalar_inband64_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_scalar_inband64_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_async_method_t__scalar_output__defined
#define	__NDR_convert__float_rep__Reply__io_connect_async_method_t__scalar_output(a, f, c) \
	__NDR_convert__float_rep__io_scalar_inband64_t((io_scalar_inband64_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__iokit__uint64_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_async_method_t__scalar_output__defined
#define	__NDR_convert__float_rep__Reply__io_connect_async_method_t__scalar_output(a, f, c) \
	__NDR_convert__ARRAY((uint64_t *)(a), f, c, __NDR_convert__float_rep__iokit__uint64_t)
#elif	defined(__NDR_convert__float_rep__uint64_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_async_method_t__scalar_output__defined
#define	__NDR_convert__float_rep__Reply__io_connect_async_method_t__scalar_output(a, f, c) \
	__NDR_convert__ARRAY((uint64_t *)(a), f, c, __NDR_convert__float_rep__uint64_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_connect_async_method_t__scalar_output__defined */



#ifndef __NDR_convert__float_rep__Reply__io_connect_async_method_t__inband_output__defined
#if	defined(__NDR_convert__float_rep__iokit__io_struct_inband_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_async_method_t__inband_output__defined
#define	__NDR_convert__float_rep__Reply__io_connect_async_method_t__inband_output(a, f, c) \
	__NDR_convert__float_rep__iokit__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_struct_inband_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_async_method_t__inband_output__defined
#define	__NDR_convert__float_rep__Reply__io_connect_async_method_t__inband_output(a, f, c) \
	__NDR_convert__float_rep__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__iokit__char__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_async_method_t__inband_output__defined
#define	__NDR_convert__float_rep__Reply__io_connect_async_method_t__inband_output(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__float_rep__iokit__char)
#elif	defined(__NDR_convert__float_rep__char__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_async_method_t__inband_output__defined
#define	__NDR_convert__float_rep__Reply__io_connect_async_method_t__inband_output(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__float_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_connect_async_method_t__inband_output__defined */



#ifndef __NDR_convert__float_rep__Reply__io_connect_async_method_t__ool_output_size__defined
#if	defined(__NDR_convert__float_rep__iokit__mach_vm_size_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_async_method_t__ool_output_size__defined
#define	__NDR_convert__float_rep__Reply__io_connect_async_method_t__ool_output_size(a, f) \
	__NDR_convert__float_rep__iokit__mach_vm_size_t((mach_vm_size_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__mach_vm_size_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_async_method_t__ool_output_size__defined
#define	__NDR_convert__float_rep__Reply__io_connect_async_method_t__ool_output_size(a, f) \
	__NDR_convert__float_rep__mach_vm_size_t((mach_vm_size_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__uint64_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_async_method_t__ool_output_size__defined
#define	__NDR_convert__float_rep__Reply__io_connect_async_method_t__ool_output_size(a, f) \
	__NDR_convert__float_rep__iokit__uint64_t((uint64_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint64_t__defined)
#define	__NDR_convert__float_rep__Reply__io_connect_async_method_t__ool_output_size__defined
#define	__NDR_convert__float_rep__Reply__io_connect_async_method_t__ool_output_size(a, f) \
	__NDR_convert__float_rep__uint64_t((uint64_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_connect_async_method_t__ool_output_size__defined */



mig_internal kern_return_t __MIG_check__Reply__io_connect_async_method_t(__Reply__io_connect_async_method_t *Out0P, __Reply__io_connect_async_method_t **Out1PP, __Reply__io_connect_async_method_t **Out2PP)
{

	typedef __Reply__io_connect_async_method_t __Reply;
	__Reply *Out1P;
	__Reply *Out2P;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	unsigned int msgh_size_delta;

	if (Out0P->Head.msgh_id != 2966) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    ((msgh_size > (mach_msg_size_t)sizeof(__Reply) || msgh_size < (mach_msg_size_t)(sizeof(__Reply) - 4224)) &&
	     (msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	      Out0P->RetCode == KERN_SUCCESS)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (Out0P->RetCode != KERN_SUCCESS) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if defined(__NDR_convert__int_rep__Reply__io_connect_async_method_t__scalar_outputCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__io_connect_async_method_t__scalar_outputCnt(&Out0P->scalar_outputCnt, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__io_connect_async_method_t__scalar_outputCnt__defined */
	msgh_size_delta = (8 * Out0P->scalar_outputCnt);
#if	__MigTypeCheck
	if (msgh_size < (mach_msg_size_t)(sizeof(__Reply) - 4224) + msgh_size_delta)
		{ return MIG_TYPE_ERROR; }
	msgh_size -= msgh_size_delta;
#endif	/* __MigTypeCheck */

	*Out1PP = Out1P = (__Reply *) ((pointer_t) Out0P + msgh_size_delta - 128);

#if defined(__NDR_convert__int_rep__Reply__io_connect_async_method_t__inband_outputCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__io_connect_async_method_t__inband_outputCnt(&Out1P->inband_outputCnt, Out1P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__io_connect_async_method_t__inband_outputCnt__defined */
	msgh_size_delta = _WALIGN_(Out1P->inband_outputCnt);
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Reply) - 4224) + msgh_size_delta)
		{ return MIG_TYPE_ERROR; }
#endif	/* __MigTypeCheck */

	*Out2PP = Out2P = (__Reply *) ((pointer_t) Out1P + msgh_size_delta - 4096);

#if	defined(__NDR_convert__int_rep__Reply__io_connect_async_method_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_connect_async_method_t__scalar_output__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_connect_async_method_t__scalar_outputCnt__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_connect_async_method_t__inband_output__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_connect_async_method_t__inband_outputCnt__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_connect_async_method_t__ool_output_size__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__io_connect_async_method_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__io_connect_async_method_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_connect_async_method_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__io_connect_async_method_t__scalar_output__defined)
		__NDR_convert__int_rep__Reply__io_connect_async_method_t__scalar_output(&Out0P->scalar_output, Out0P->NDR.int_rep, Out0P->scalar_outputCnt);
#endif /* __NDR_convert__int_rep__Reply__io_connect_async_method_t__scalar_output__defined */
#if defined(__NDR_convert__int_rep__Reply__io_connect_async_method_t__inband_output__defined)
		__NDR_convert__int_rep__Reply__io_connect_async_method_t__inband_output(&Out1P->inband_output, Out0P->NDR.int_rep, Out1P->inband_outputCnt);
#endif /* __NDR_convert__int_rep__Reply__io_connect_async_method_t__inband_output__defined */
#if defined(__NDR_convert__int_rep__Reply__io_connect_async_method_t__ool_output_size__defined)
		__NDR_convert__int_rep__Reply__io_connect_async_method_t__ool_output_size(&Out2P->ool_output_size, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_connect_async_method_t__ool_output_size__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__io_connect_async_method_t__scalar_output__defined) || \
	0 || \
	defined(__NDR_convert__char_rep__Reply__io_connect_async_method_t__inband_output__defined) || \
	0 || \
	defined(__NDR_convert__char_rep__Reply__io_connect_async_method_t__ool_output_size__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__io_connect_async_method_t__scalar_output__defined)
		__NDR_convert__char_rep__Reply__io_connect_async_method_t__scalar_output(&Out0P->scalar_output, Out0P->NDR.char_rep, Out0P->scalar_outputCnt);
#endif /* __NDR_convert__char_rep__Reply__io_connect_async_method_t__scalar_output__defined */
#if defined(__NDR_convert__char_rep__Reply__io_connect_async_method_t__inband_output__defined)
		__NDR_convert__char_rep__Reply__io_connect_async_method_t__inband_output(&Out1P->inband_output, Out0P->NDR.char_rep, Out1P->inband_outputCnt);
#endif /* __NDR_convert__char_rep__Reply__io_connect_async_method_t__inband_output__defined */
#if defined(__NDR_convert__char_rep__Reply__io_connect_async_method_t__ool_output_size__defined)
		__NDR_convert__char_rep__Reply__io_connect_async_method_t__ool_output_size(&Out2P->ool_output_size, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__io_connect_async_method_t__ool_output_size__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__io_connect_async_method_t__scalar_output__defined) || \
	0 || \
	defined(__NDR_convert__float_rep__Reply__io_connect_async_method_t__inband_output__defined) || \
	0 || \
	defined(__NDR_convert__float_rep__Reply__io_connect_async_method_t__ool_output_size__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__io_connect_async_method_t__scalar_output__defined)
		__NDR_convert__float_rep__Reply__io_connect_async_method_t__scalar_output(&Out0P->scalar_output, Out0P->NDR.float_rep, Out0P->scalar_outputCnt);
#endif /* __NDR_convert__float_rep__Reply__io_connect_async_method_t__scalar_output__defined */
#if defined(__NDR_convert__float_rep__Reply__io_connect_async_method_t__inband_output__defined)
		__NDR_convert__float_rep__Reply__io_connect_async_method_t__inband_output(&Out1P->inband_output, Out0P->NDR.float_rep, Out1P->inband_outputCnt);
#endif /* __NDR_convert__float_rep__Reply__io_connect_async_method_t__inband_output__defined */
#if defined(__NDR_convert__float_rep__Reply__io_connect_async_method_t__ool_output_size__defined)
		__NDR_convert__float_rep__Reply__io_connect_async_method_t__ool_output_size(&Out2P->ool_output_size, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__io_connect_async_method_t__ool_output_size__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_connect_async_method_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_connect_async_method */
mig_external kern_return_t io_connect_async_method
(
	mach_port_t connection,
	mach_port_t wake_port,
	io_async_ref64_t reference,
	mach_msg_type_number_t referenceCnt,
	uint32_t selector,
	io_scalar_inband64_t scalar_input,
	mach_msg_type_number_t scalar_inputCnt,
	io_struct_inband_t inband_input,
	mach_msg_type_number_t inband_inputCnt,
	mach_vm_address_t ool_input,
	mach_vm_size_t ool_input_size,
	io_scalar_inband64_t scalar_output,
	mach_msg_type_number_t *scalar_outputCnt,
	io_struct_inband_t inband_output,
	mach_msg_type_number_t *inband_outputCnt,
	mach_vm_address_t ool_output,
	mach_vm_size_t *ool_output_size
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t wake_port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t referenceCnt;
		uint64_t reference[8];
		uint32_t selector;
		mach_msg_type_number_t scalar_inputCnt;
		uint64_t scalar_input[16];
		mach_msg_type_number_t inband_inputCnt;
		char inband_input[4096];
		mach_vm_address_t ool_input;
		mach_vm_size_t ool_input_size;
		mach_msg_type_number_t scalar_outputCnt;
		mach_msg_type_number_t inband_outputCnt;
		mach_vm_address_t ool_output;
		mach_vm_size_t ool_output_size;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t scalar_outputCnt;
		uint64_t scalar_output[16];
		mach_msg_type_number_t inband_outputCnt;
		char inband_output[4096];
		mach_vm_size_t ool_output_size;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t scalar_outputCnt;
		uint64_t scalar_output[16];
		mach_msg_type_number_t inband_outputCnt;
		char inband_output[4096];
		mach_vm_size_t ool_output_size;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;
	Reply *Out1P = NULL;
	Reply *Out2P = NULL;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;
	unsigned int msgh_size_delta;


#ifdef	__MIG_check__Reply__io_connect_async_method_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_connect_async_method_t__defined */

	__DeclareSendRpc(2866, "io_connect_async_method")

#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t wake_portTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		20,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 1;
#if	UseStaticTemplates
	InP->wake_port = wake_portTemplate;
	InP->wake_port.name = wake_port;
#else	/* UseStaticTemplates */
	InP->wake_port.name = wake_port;
	InP->wake_port.disposition = 20;
	InP->wake_port.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	if (referenceCnt > 8) {
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) InP->reference, (const char *) reference, 8 * referenceCnt);

	InP->referenceCnt = referenceCnt;

	msgh_size_delta = (8 * referenceCnt);
	msgh_size = (mach_msg_size_t)(sizeof(Request) - 4288) + msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 64);

	InP->selector = selector;

	if (scalar_inputCnt > 16) {
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) InP->scalar_input, (const char *) scalar_input, 8 * scalar_inputCnt);

	InP->scalar_inputCnt = scalar_inputCnt;

	msgh_size_delta = (8 * scalar_inputCnt);
	msgh_size += msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 128);

	if (inband_inputCnt > 4096) {
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) InP->inband_input, (const char *) inband_input, inband_inputCnt);

	InP->inband_inputCnt = inband_inputCnt;

	msgh_size_delta = _WALIGN_(inband_inputCnt);
	msgh_size += msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 4096);

	InP->ool_input = ool_input;

	InP->ool_input_size = ool_input_size;

	if (*scalar_outputCnt < 16)
		InP->scalar_outputCnt = *scalar_outputCnt;
	else
		InP->scalar_outputCnt = 16;

	if (*inband_outputCnt < 4096)
		InP->inband_outputCnt = *inband_outputCnt;
	else
		InP->inband_outputCnt = 4096;

	InP->ool_output = ool_output;

	InP->ool_output_size = *ool_output_size;

	InP = &Mess.In;
	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = connection;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2866;

	__BeforeSendRpc(2866, "io_connect_async_method")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, msgh_size, (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2866, "io_connect_async_method")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_connect_async_method_t__defined)
	check_result = __MIG_check__Reply__io_connect_async_method_t((__Reply__io_connect_async_method_t *)Out0P, (__Reply__io_connect_async_method_t **)&Out1P, (__Reply__io_connect_async_method_t **)&Out2P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_connect_async_method_t__defined) */

	if (Out0P->scalar_outputCnt > *scalar_outputCnt) {
		(void)memcpy((char *) scalar_output, (const char *) Out0P->scalar_output, 8 *  *scalar_outputCnt);
		*scalar_outputCnt = Out0P->scalar_outputCnt;
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) scalar_output, (const char *) Out0P->scalar_output, 8 * Out0P->scalar_outputCnt);

	*scalar_outputCnt = Out0P->scalar_outputCnt;

	if (Out1P->inband_outputCnt > *inband_outputCnt) {
		(void)memcpy((char *) inband_output, (const char *) Out1P->inband_output,  *inband_outputCnt);
		*inband_outputCnt = Out1P->inband_outputCnt;
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) inband_output, (const char *) Out1P->inband_output, Out1P->inband_outputCnt);

	*inband_outputCnt = Out1P->inband_outputCnt;

	*ool_output_size = Out2P->ool_output_size;

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__iokit_subsystem__
#if !defined(__MIG_check__Reply__io_registry_entry_get_registry_entry_id_t__defined)
#define __MIG_check__Reply__io_registry_entry_get_registry_entry_id_t__defined
#ifndef __NDR_convert__int_rep__Reply__io_registry_entry_get_registry_entry_id_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__iokit__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_registry_entry_id_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_registry_entry_id_t__RetCode(a, f) \
	__NDR_convert__int_rep__iokit__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_registry_entry_id_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_registry_entry_id_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_get_registry_entry_id_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__io_registry_entry_get_registry_entry_id_t__entry_id__defined
#if	defined(__NDR_convert__int_rep__iokit__uint64_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_registry_entry_id_t__entry_id__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_registry_entry_id_t__entry_id(a, f) \
	__NDR_convert__int_rep__iokit__uint64_t((uint64_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint64_t__defined)
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_registry_entry_id_t__entry_id__defined
#define	__NDR_convert__int_rep__Reply__io_registry_entry_get_registry_entry_id_t__entry_id(a, f) \
	__NDR_convert__int_rep__uint64_t((uint64_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_get_registry_entry_id_t__entry_id__defined */



#ifndef __NDR_convert__char_rep__Reply__io_registry_entry_get_registry_entry_id_t__entry_id__defined
#if	defined(__NDR_convert__char_rep__iokit__uint64_t__defined)
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_registry_entry_id_t__entry_id__defined
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_registry_entry_id_t__entry_id(a, f) \
	__NDR_convert__char_rep__iokit__uint64_t((uint64_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint64_t__defined)
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_registry_entry_id_t__entry_id__defined
#define	__NDR_convert__char_rep__Reply__io_registry_entry_get_registry_entry_id_t__entry_id(a, f) \
	__NDR_convert__char_rep__uint64_t((uint64_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__io_registry_entry_get_registry_entry_id_t__entry_id__defined */



#ifndef __NDR_convert__float_rep__Reply__io_registry_entry_get_registry_entry_id_t__entry_id__defined
#if	defined(__NDR_convert__float_rep__iokit__uint64_t__defined)
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_registry_entry_id_t__entry_id__defined
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_registry_entry_id_t__entry_id(a, f) \
	__NDR_convert__float_rep__iokit__uint64_t((uint64_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint64_t__defined)
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_registry_entry_id_t__entry_id__defined
#define	__NDR_convert__float_rep__Reply__io_registry_entry_get_registry_entry_id_t__entry_id(a, f) \
	__NDR_convert__float_rep__uint64_t((uint64_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__io_registry_entry_get_registry_entry_id_t__entry_id__defined */



mig_internal kern_return_t __MIG_check__Reply__io_registry_entry_get_registry_entry_id_t(__Reply__io_registry_entry_get_registry_entry_id_t *Out0P)
{

	typedef __Reply__io_registry_entry_get_registry_entry_id_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 2971) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    ((msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	     (msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	      Out0P->RetCode == KERN_SUCCESS)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (Out0P->RetCode != KERN_SUCCESS) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_registry_entry_id_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_registry_entry_id_t__entry_id__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_registry_entry_id_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__io_registry_entry_get_registry_entry_id_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_get_registry_entry_id_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__io_registry_entry_get_registry_entry_id_t__entry_id__defined)
		__NDR_convert__int_rep__Reply__io_registry_entry_get_registry_entry_id_t__entry_id(&Out0P->entry_id, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__io_registry_entry_get_registry_entry_id_t__entry_id__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__io_registry_entry_get_registry_entry_id_t__entry_id__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__io_registry_entry_get_registry_entry_id_t__entry_id__defined)
		__NDR_convert__char_rep__Reply__io_registry_entry_get_registry_entry_id_t__entry_id(&Out0P->entry_id, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__io_registry_entry_get_registry_entry_id_t__entry_id__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__io_registry_entry_get_registry_entry_id_t__entry_id__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__io_registry_entry_get_registry_entry_id_t__entry_id__defined)
		__NDR_convert__float_rep__Reply__io_registry_entry_get_registry_entry_id_t__entry_id(&Out0P->entry_id, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__io_registry_entry_get_registry_entry_id_t__entry_id__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__io_registry_entry_get_registry_entry_id_t__defined) */
#endif /* __MIG_check__Reply__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_registry_entry_get_registry_entry_id */
mig_external kern_return_t io_registry_entry_get_registry_entry_id
(
	mach_port_t registry_entry,
	uint64_t *entry_id
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		uint64_t entry_id;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		uint64_t entry_id;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__io_registry_entry_get_registry_entry_id_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__io_registry_entry_get_registry_entry_id_t__defined */

	__DeclareSendRpc(2871, "io_registry_entry_get_registry_entry_id")

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = registry_entry;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2871;

	__BeforeSendRpc(2871, "io_registry_entry_get_registry_entry_id")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(2871, "io_registry_entry_get_registry_entry_id")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__io_registry_entry_get_registry_entry_id_t__defined)
	check_result = __MIG_check__Reply__io_registry_entry_get_registry_entry_id_t((__Reply__io_registry_entry_get_registry_entry_id_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__io_registry_entry_get_registry_entry_id_t__defined) */

	*entry_id = Out0P->entry_id;

	return KERN_SUCCESS;
}
