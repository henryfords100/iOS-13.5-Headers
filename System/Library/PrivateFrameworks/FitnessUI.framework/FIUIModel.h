/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class FIUIWeeklyGoalModel, NSHashTable, NSMutableDictionary, _HKCurrentActivitySummaryQuery, HKCurrentActivityCacheQuery, HKActivitySummary, HKActivityCache, NSObject, NSPredicate, HKHealthStore, NSDictionary;

@interface FIUIModel : NSObject {

	FIUIWeeklyGoalModel* _weeklyGoalModel;
	NSHashTable* _observers;
	NSMutableDictionary* _currentActivitySummaryQueryClients;
	NSMutableDictionary* _currentActivityCacheQueryClients;
	_HKCurrentActivitySummaryQuery* _queue_currentActivitySummaryQuery;
	HKCurrentActivityCacheQuery* _queue_currentActivityCacheQuery;
	long long _queue_activitySummaryQueryRetries;
	long long _queue_activityCacheQueryRetries;
	HKActivitySummary* _queue_currentActivitySummaryForClients;
	HKActivityCache* _queue_currentActivityCacheForClients;
	NSObject*<OS_dispatch_queue> _activityQueryClientQueue;
	NSPredicate* _sourcesPredicate;
	NSObject*<OS_dispatch_queue> _sourcesQueue;
	HKHealthStore* _healthStore;
	NSDictionary* _currentActivitySummaryQueryCollectionIntervalOverrides;

}

@property (nonatomic,readonly) FIUIWeeklyGoalModel * weeklyGoalModel; 
@property (nonatomic,readonly) NSPredicate * sourcesPredicate; 
@property (nonatomic,readonly) HKHealthStore * healthStore;                                                      //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) NSDictionary * currentActivitySummaryQueryCollectionIntervalOverrides;              //@synthesize currentActivitySummaryQueryCollectionIntervalOverrides=_currentActivitySummaryQueryCollectionIntervalOverrides - In the implementation block
+(BOOL)isWheelchairUser;
+(id)_dailyTotalsQueryFromDate:(id)arg1 toDate:(id)arg2 dataType:(id)arg3 predicate:(id)arg4 sendUpdates:(BOOL)arg5 handler:(/*^block*/id)arg6 ;
+(id)dailyTotalQueryForDate:(id)arg1 dataType:(id)arg2 predicate:(id)arg3 sendUpdates:(BOOL)arg4 handler:(/*^block*/id)arg5 ;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(HKHealthStore *)healthStore;
-(void)executeQuery:(id)arg1 ;
-(id)initWithHealthStore:(id)arg1 ;
-(void)stopQuery:(id)arg1 ;
-(id)startCurrentActivitySummaryQueryWithHandler:(/*^block*/id)arg1 ;
-(void)stopCurrentActivitySummaryQueryForClientToken:(id)arg1 ;
-(void)_setKnownSources:(id)arg1 ;
-(id)_createCurrentActivitySummaryQuery;
-(void)_queue_restartCurrentActivitySummaryQueryAfterError;
-(NSPredicate *)sourcesPredicate;
-(FIUIWeeklyGoalModel *)weeklyGoalModel;
-(void)_printStatisticsCollection:(id)arg1 ;
-(void)_printUpdatedStatistics:(id)arg1 ;
-(NSDictionary *)currentActivitySummaryQueryCollectionIntervalOverrides;
-(void)setCurrentActivitySummaryQueryCollectionIntervalOverrides:(NSDictionary *)arg1 ;
@end

