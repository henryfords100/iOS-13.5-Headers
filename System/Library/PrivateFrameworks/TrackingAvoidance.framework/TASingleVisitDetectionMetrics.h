/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TAInterVisitMetricPerDevice;

@interface TASingleVisitDetectionMetrics : NSObject {

	TAInterVisitMetricPerDevice* _interVisitMetrics;
	unsigned long long _loiType;

}

@property (nonatomic,readonly) TAInterVisitMetricPerDevice * interVisitMetrics;              //@synthesize interVisitMetrics=_interVisitMetrics - In the implementation block
@property (nonatomic,readonly) unsigned long long loiType;                                   //@synthesize loiType=_loiType - In the implementation block
-(unsigned long long)loiType;
-(id)initWithInterVisitMetrics:(id)arg1 loiType:(unsigned long long)arg2 ;
-(TAInterVisitMetricPerDevice *)interVisitMetrics;
@end
