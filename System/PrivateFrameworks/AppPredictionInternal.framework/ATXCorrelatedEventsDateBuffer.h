/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ATXCorrelatedEventsDateBuffer : NSObject {

	double _bufferSeconds;
	long long _bufferType;

}

@property (nonatomic,readonly) double bufferSeconds;              //@synthesize bufferSeconds=_bufferSeconds - In the implementation block
@property (nonatomic,readonly) long long bufferType;              //@synthesize bufferType=_bufferType - In the implementation block
-(id)initWithBufferSeconds:(double)arg1 andBufferType:(long long)arg2 ;
-(id)startDateWithBufferForEvent:(id)arg1 ;
-(id)endDateWithBufferForEvent:(id)arg1 ;
-(double)bufferSeconds;
-(long long)bufferType;
@end
