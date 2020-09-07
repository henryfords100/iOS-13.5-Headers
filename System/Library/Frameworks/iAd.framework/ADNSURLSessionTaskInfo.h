/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSURLSessionDataDelegate;
@class NSURLSessionDataTask, NSThread, NSArray;

@interface ADNSURLSessionTaskInfo : NSObject {

	NSURLSessionDataTask* _task;
	id<NSURLSessionDataDelegate> _delegate;
	NSThread* _thread;
	NSArray* _modes;

}

@property (retain) NSThread * thread;                                  //@synthesize thread=_thread - In the implementation block
@property (copy) NSArray * modes;                                      //@synthesize modes=_modes - In the implementation block
@property (readonly) NSURLSessionDataTask * task;                      //@synthesize task=_task - In the implementation block
@property (__weak) id<NSURLSessionDataDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)invalidate;
-(id<NSURLSessionDataDelegate>)delegate;
-(void)setDelegate:(id<NSURLSessionDataDelegate>)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(NSArray *)modes;
-(void)performBlockAndWait:(/*^block*/id)arg1 ;
-(NSURLSessionDataTask *)task;
-(NSThread *)thread;
-(void)perform:(/*^block*/id)arg1 waitUntilDone:(BOOL)arg2 ;
-(void)performBlockOnClientThread:(/*^block*/id)arg1 ;
-(void)setThread:(NSThread *)arg1 ;
-(id)initWithTask:(id)arg1 delegate:(id)arg2 modes:(id)arg3 ;
-(void)setModes:(NSArray *)arg1 ;
@end
