/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, HKSample;

@interface HDDataAggregationState : NSObject {

	NSMutableArray* _unaggregatedSensorData;
	HKSample* _openSeries;

}

@property (nonatomic,readonly) NSMutableArray * unaggregatedSensorData;              //@synthesize unaggregatedSensorData=_unaggregatedSensorData - In the implementation block
@property (nonatomic,readonly) HKSample * openSeries;                                //@synthesize openSeries=_openSeries - In the implementation block
-(id)init;
-(NSMutableArray *)unaggregatedSensorData;
-(id)initWithRemainingSensorData:(id)arg1 ;
-(HKSample *)openSeries;
-(id)initWithRemainingSensorData:(id)arg1 currentSeries:(id)arg2 ;
@end
