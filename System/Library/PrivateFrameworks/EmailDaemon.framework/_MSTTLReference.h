/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface _MSTTLReference : NSObject {

	id _value;
	double _ttl;
	NSDate* _lastSet;

}

@property (nonatomic,retain) id value;                      //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) double ttl;                    //@synthesize ttl=_ttl - In the implementation block
@property (nonatomic,retain) NSDate * lastSet;              //@synthesize lastSet=_lastSet - In the implementation block
-(id)value;
-(void)setValue:(id)arg1 ;
-(double)ttl;
-(void)setTtl:(double)arg1 ;
-(id)initWithTTL:(double)arg1 ;
-(NSDate *)lastSet;
-(void)setLastSet:(NSDate *)arg1 ;
-(id)getValueWithGenerator:(/*^block*/id)arg1 ;
@end

