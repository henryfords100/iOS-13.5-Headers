/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable;

@interface HFExecutionEnvironment : NSObject {

	BOOL _active;
	unsigned long long _runningState;
	NSHashTable* _observers;

}

@property (nonatomic,retain) NSHashTable * observers;                        //@synthesize observers=_observers - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                    //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) unsigned long long runningState;              //@synthesize runningState=_runningState - In the implementation block
+(id)sharedInstance;
+(id)stringForHFExecutionEnvironmentRunningState:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)isActive;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(unsigned long long)runningState;
-(void)dispatchMessageToObserversWithBlock:(/*^block*/id)arg1 ;
-(void)setRunningState:(unsigned long long)arg1 ;
-(void)executionEnvironmentWillEnterForeground;
-(void)executionEnvironmentDidBecomeActive;
-(void)executionEnvironmentWillResignActive;
-(void)executionEnvironmentDidEnterBackground;
@end

