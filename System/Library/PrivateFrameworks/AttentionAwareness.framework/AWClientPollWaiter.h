/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class AWAttentionAwarenessClient, NSObject;

@interface AWClientPollWaiter : NSObject {

	AWAttentionAwarenessClient* _client;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _clientQueue;
	/*^block*/id _clientBlock;
	NSObject*<OS_dispatch_source> _timer;
	int _pollState;

}
-(void)invalidate;
-(void)cancel;
-(void)notifyPollEventType:(unsigned long long)arg1 event:(id)arg2 ;
-(id)initWithClient:(id)arg1 timeout:(unsigned long long)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)invokeClientBlock:(unsigned long long)arg1 event:(id)arg2 ;
@end

