/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_ATXFeedbackProtocol.h>

@class _ATXAppLaunchCategoricalHistogram;

@interface _ATXFeedbackWithHistogram : NSObject <_ATXFeedbackProtocol> {

	_ATXAppLaunchCategoricalHistogram* _store;
	double _priorAlpha;
	double _priorBeta;

}

@property (nonatomic,readonly) double currentAlpha; 
@property (nonatomic,readonly) double currentBeta; 
-(id)initWithHistogram:(id)arg1 ;
-(void)resetData;
-(void)feedbackLaunched:(id)arg1 rejected:(id)arg2 ;
-(void)feedbackLaunched:(id)arg1 rejected:(id)arg2 inUnitTest:(BOOL)arg3 ;
-(void)decayCounts;
-(void)removeFeedbackForBundle:(id)arg1 ;
-(double)currentAlpha;
-(double)currentBeta;
-(double)getConfirmsForBundle:(id)arg1 ;
-(double)getRejectsForBundle:(id)arg1 ;
-(double)getFeedbackScoreForBundle:(id)arg1 ;
-(void)updatePriors;
@end

