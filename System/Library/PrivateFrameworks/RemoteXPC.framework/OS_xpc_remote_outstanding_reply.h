/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RemoteXPC.framework/RemoteXPC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface OS_xpc_remote_outstanding_reply : NSObject {

	unsigned long long msg_id;
	/*^block*/id reply_handler;
	NSObject*<OS_dispatch_queue> reply_queue;
	OS_xpc_remote_outstanding_reply* link_stqe_next;

}
@end
