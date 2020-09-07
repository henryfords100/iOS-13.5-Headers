/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKSampleType, NSDateInterval;

@interface HKSampleTypeChange : NSObject <NSSecureCoding> {

	BOOL _samplesWereDeleted;
	BOOL _hasUnfrozenSeries;
	HKSampleType* _sampleType;
	double _startTime;
	double _endTime;
	long long _queryStrategy;

}

@property (nonatomic,readonly) double startTime;                                //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double endTime;                                  //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) long long queryStrategy;                         //@synthesize queryStrategy=_queryStrategy - In the implementation block
@property (nonatomic,copy,readonly) HKSampleType * sampleType;                  //@synthesize sampleType=_sampleType - In the implementation block
@property (nonatomic,copy,readonly) NSDateInterval * dateInterval; 
@property (nonatomic,readonly) BOOL samplesWereDeleted;                         //@synthesize samplesWereDeleted=_samplesWereDeleted - In the implementation block
@property (nonatomic,readonly) BOOL hasUnfrozenSeries;                          //@synthesize hasUnfrozenSeries=_hasUnfrozenSeries - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sampleTypeChangeWithSampleType:(id)arg1 dateInterval:(id)arg2 samplesWereDeleted:(BOOL)arg3 hasUnfrozenSeries:(BOOL)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDateInterval *)dateInterval;
-(double)startTime;
-(double)endTime;
-(HKSampleType *)sampleType;
-(id)_initWithSampleType:(id)arg1 startTime:(double)arg2 endTime:(double)arg3 deletions:(BOOL)arg4 hasUnfrozenSeries:(BOOL)arg5 queryStrategy:(long long)arg6 ;
-(void)_extendDateIntervalWithSample:(id)arg1 ;
-(BOOL)samplesWereDeleted;
-(BOOL)hasUnfrozenSeries;
-(long long)queryStrategy;
@end
