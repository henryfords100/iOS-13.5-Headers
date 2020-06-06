/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDQueryServer.h>
#import <libobjc.A.dylib/HDActivityCacheManagerObserver.h>

@class NSDateComponents, NSCalendar, HKActivityCache, HDActivityCacheManager, NSString;

@interface HDCurrentActivityCacheQueryServer : HDQueryServer <HDActivityCacheManagerObserver> {

	NSDateComponents* _statisticsIntervalComponents;
	NSCalendar* _calendar;
	HKActivityCache* _lastActivityCache;
	HDActivityCacheManager* _activityCacheManager;

}

@property (assign,nonatomic,__weak) HDActivityCacheManager * activityCacheManager;              //@synthesize activityCacheManager=_activityCacheManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)queryClass;
+(id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id*)arg5 ;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)_queue_start;
-(void)_queue_stop;
-(BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
-(HDActivityCacheManager *)activityCacheManager;
-(void)setActivityCacheManager:(HDActivityCacheManager *)arg1 ;
-(void)activityCacheManager:(id)arg1 changedTodayActivityCache:(id)arg2 ;
-(BOOL)shouldObserveActivityCache;
@end
