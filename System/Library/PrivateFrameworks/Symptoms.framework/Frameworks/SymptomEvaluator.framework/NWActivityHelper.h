/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, AnalyticsWorkspace;

@interface NWActivityHelper : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	AnalyticsWorkspace* _workspace;

}
-(id)init;
-(void)_uploadCompleteNWActivityMetrics;
-(void)_garbageCollectNWActivityMetrics;
-(id)_fetchActivitiesWithPredicate:(id)arg1 ;
-(id)analyticsWorkspace;
-(void)_deleteNWActivityFragment:(id)arg1 fromContext:(id)arg2 ;
-(id)_findNWActivityMetricsForUploading;
-(void)sendReportToMetricStream:(id)arg1 ;
-(BOOL)shouldSendMetricStream;
-(void)startNWActivitySuperMetricProcessing;
@end

