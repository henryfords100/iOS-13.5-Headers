/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricMeasurement/MXMSampleSet.h>

@interface MXMMutableSampleSet : MXMSampleSet
-(void)appendSet:(id)arg1 ;
-(void)appendAttribute:(id)arg1 ;
-(void)appendSample:(id)arg1 ;
-(void)appendIntValue:(int)arg1 timestamp:(unsigned long long)arg2 ;
-(void)appendIntegerValue:(long long)arg1 timestamp:(unsigned long long)arg2 ;
-(void)appendUnsignedIntValue:(unsigned)arg1 timestamp:(unsigned long long)arg2 ;
-(void)appendUnsignedIntegerValue:(unsigned long long)arg1 timestamp:(unsigned long long)arg2 ;
-(void)appendDoubleValue:(double)arg1 timestamp:(unsigned long long)arg2 ;
-(void)appendFloatValue:(float)arg1 timestamp:(unsigned long long)arg2 ;
@end

