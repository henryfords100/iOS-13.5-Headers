/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDictionary;

@interface _DECResult : NSObject <NSSecureCoding> {

	NSUUID* _identifier;
	unsigned long long _consumer;
	NSDictionary* _results;
	long long _reason;
	NSDictionary* _reasonMetadata;

}

@property (nonatomic,readonly) unsigned long long consumer;              //@synthesize consumer=_consumer - In the implementation block
@property (nonatomic,retain) NSDictionary * results;                     //@synthesize results=_results - In the implementation block
@property (assign,nonatomic) long long reason;                           //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) NSDictionary * reasonMetadata;              //@synthesize reasonMetadata=_reasonMetadata - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                      //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)reason;
-(NSUUID *)identifier;
-(NSDictionary *)results;
-(void)setReason:(long long)arg1 ;
-(unsigned long long)consumer;
-(void)setResults:(NSDictionary *)arg1 ;
-(id)initWithConsumer:(unsigned long long)arg1 ;
-(id)resultForCategory:(unsigned long long)arg1 ;
-(NSDictionary *)reasonMetadata;
-(void)setReasonMetadata:(NSDictionary *)arg1 ;
-(BOOL)isEquivalentToResult:(id)arg1 limit:(unsigned long long)arg2 ;
-(BOOL)isEquivalentToResult:(id)arg1 ;
@end

