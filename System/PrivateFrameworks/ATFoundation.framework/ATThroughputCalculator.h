/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ATMovingAverage;

@interface ATThroughputCalculator : NSObject {

	BOOL _suspended;
	double _lastUpdate;
	double _startTime;
	double _currentValue;
	ATMovingAverage* _average;

}

@property (nonatomic,readonly) double throughput; 
-(id)init;
-(void)resume;
-(void)suspend;
-(double)throughput;
-(BOOL)update:(double)arg1 ;
@end
