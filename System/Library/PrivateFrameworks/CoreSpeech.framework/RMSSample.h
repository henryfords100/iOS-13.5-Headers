/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface RMSSample : NSObject {

	double _RMSScore;
	unsigned long long _lastSampleCount;

}

@property (assign,nonatomic) double RMSScore;                                 //@synthesize RMSScore=_RMSScore - In the implementation block
@property (assign,nonatomic) unsigned long long lastSampleCount;              //@synthesize lastSampleCount=_lastSampleCount - In the implementation block
-(double)RMSScore;
-(id)initWithRMSScore:(double)arg1 lastSampleCount:(unsigned long long)arg2 ;
-(long long)compareScoresDesc:(id)arg1 ;
-(void)setRMSScore:(double)arg1 ;
-(unsigned long long)lastSampleCount;
-(void)setLastSampleCount:(unsigned long long)arg1 ;
@end

