/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreAnalytics.framework/CoreAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, AnalyticsEventObserverDelegate;
#import <CoreAnalytics/CoreAnalytics-Structs.h>
@class NSObject;

@interface AnalyticsEventObserver : NSObject {

	shared_ptr<(anonymous namespace)::EventObserverImpl>* observer;
	NSObject*<OS_dispatch_queue> _queue;
	id<AnalyticsEventObserverDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<AnalyticsEventObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                      //@synthesize delegateQueue=_delegateQueue - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<AnalyticsEventObserverDelegate>)delegate;
-(void)setDelegate:(id<AnalyticsEventObserverDelegate>)arg1 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(BOOL)stopObserving;
-(void)setEventObserverDelegate:(id)arg1 queue:(id)arg2 ;
-(BOOL)startObservingEventList:(id)arg1 ;
@end
