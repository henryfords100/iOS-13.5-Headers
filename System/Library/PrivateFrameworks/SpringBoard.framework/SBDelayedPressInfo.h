/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBDelayedPressInfo : NSObject {

	long long _type;
	long long _phase;
	double _timestamp;

}

@property (assign,nonatomic) long long type;                //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long phase;               //@synthesize phase=_phase - In the implementation block
@property (assign,nonatomic) double timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
-(long long)type;
-(void)setType:(long long)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(long long)phase;
-(void)setPhase:(long long)arg1 ;
@end
