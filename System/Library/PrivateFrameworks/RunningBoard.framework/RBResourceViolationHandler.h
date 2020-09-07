/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RBAssertionManaging, OS_dispatch_queue, OS_xpc_object;
@class NSObject;

@interface RBResourceViolationHandler : NSObject {

	id<RBAssertionManaging> _assertionManager;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _listener;

}
+(id)sharedInstance;
-(void)handleCPUViolationMessage:(id)arg1 fromConnection:(id)arg2 ;
-(void)handleMessage:(id)arg1 fromConnection:(id)arg2 ;
-(void)startWithAssertionManager:(id)arg1 ;
@end
