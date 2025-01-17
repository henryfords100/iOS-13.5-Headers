/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveML/PMLProtoBufTracker.h>

@class PMLTrackerMockAdapter, NSArray;

@interface PMLAWDLogisticRegTrackerMock : PMLProtoBufTracker {

	PMLTrackerMockAdapter* _adapter;

}

@property (readonly) NSArray * trackedGradients; 
@property (readonly) NSArray * trackedWeights; 
+(id)mockTracker;
+(id)mockTrackerForPlanId:(id)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(void)clearTrackedMessages;
-(id)initWithAdapter:(id)arg1 modelInfo:(id)arg2 ;
-(NSArray *)trackedGradients;
-(NSArray *)trackedWeights;
@end

