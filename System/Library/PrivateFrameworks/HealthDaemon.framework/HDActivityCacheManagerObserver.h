/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDActivityCacheManagerObserver <NSObject>
@optional
-(void)activityCacheManager:(id)arg1 changedYesterdayActivityCache:(id)arg2;
-(void)activityCacheManager:(id)arg1 changedHeartRateSummary:(id)arg2 isToday:(BOOL)arg3;

@required
-(void)activityCacheManager:(id)arg1 changedTodayActivityCache:(id)arg2;

@end

