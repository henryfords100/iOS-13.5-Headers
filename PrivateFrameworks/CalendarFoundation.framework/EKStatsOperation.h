/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EKStatsOperation : NSObject {

	int _type;
	long long _intValue;
	double _doubleValue;

}

@property (assign) int type;                        //@synthesize type=_type - In the implementation block
@property (assign) long long intValue;              //@synthesize intValue=_intValue - In the implementation block
@property (assign) double doubleValue;              //@synthesize doubleValue=_doubleValue - In the implementation block
-(double)doubleValue;
-(long long)intValue;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)setDoubleValue:(double)arg1 ;
-(void)setIntValue:(long long)arg1 ;
-(id)initWithType:(int)arg1 doubleValue:(double)arg2 ;
-(id)initWithType:(int)arg1 intValue:(long long)arg2 ;
@end
