/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MFDeliveryResult : NSObject {

	BOOL _isWifi;
	long long _status;
	double _duration;
	unsigned long long _bytesSent;
	long long _attributes;

}

@property (assign,nonatomic) long long status;                          //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) double duration;                           //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) unsigned long long bytesSent;              //@synthesize bytesSent=_bytesSent - In the implementation block
@property (assign,nonatomic) BOOL isWifi;                               //@synthesize isWifi=_isWifi - In the implementation block
@property (assign,nonatomic) long long attributes;                      //@synthesize attributes=_attributes - In the implementation block
-(id)description;
-(long long)attributes;
-(void)setAttributes:(long long)arg1 ;
-(long long)status;
-(double)duration;
-(void)setStatus:(long long)arg1 ;
-(void)setDuration:(double)arg1 ;
-(id)initWithStatus:(long long)arg1 ;
-(void)setBytesSent:(unsigned long long)arg1 ;
-(unsigned long long)bytesSent;
-(BOOL)isWifi;
-(void)setIsWifi:(BOOL)arg1 ;
@end

