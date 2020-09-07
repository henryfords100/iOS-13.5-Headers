/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, _HDDemoDataModuleDelegate;
@class NSOperationQueue, NSObject, NSDate;

@interface _HDDemoDataModule : NSObject {

	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_source> _timerSource;
	id<_HDDemoDataModuleDelegate> _delegate;
	NSDate* _lastFireDate;

}

@property (nonatomic,readonly) NSDate * lastFireDate;                                    //@synthesize lastFireDate=_lastFireDate - In the implementation block
@property (nonatomic,readonly) double nextFireInterval; 
@property (assign,nonatomic,__weak) id<_HDDemoDataModuleDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<_HDDemoDataModuleDelegate>)delegate;
-(void)setDelegate:(id<_HDDemoDataModuleDelegate>)arg1 ;
-(void)stop;
-(void)start;
-(double)nextFireInterval;
-(id)initWithOperationQueue:(id)arg1 ;
-(NSDate *)lastFireDate;
-(void)scheduleNextFire;
-(void)scheduleNextFireWithInterval:(double)arg1 ;
-(void)timerDidFireWithInterval:(double)arg1 ;
-(void)handleDataObject:(id)arg1 ;
@end
