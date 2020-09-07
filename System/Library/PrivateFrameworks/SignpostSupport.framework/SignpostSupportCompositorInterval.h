/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SignpostSupport/SignpostAnimationSubInterval.h>
#import <SignpostSupport/SignpostSerializable.h>

@class NSArray, NSString;

@interface SignpostSupportCompositorInterval : SignpostAnimationSubInterval <SignpostSerializable> {

	NSArray* _contributingPids;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSArray * contributingPids;              //@synthesize contributingPids=_contributingPids - In the implementation block
+(id)serializationTypeNumber;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(void)setContributingPids:(NSArray *)arg1 ;
-(id)initWithStartContinuousTime:(unsigned long long)arg1 endContinuousTime:(unsigned long long)arg2 timebaseRatio:(double)arg3 contributingPids:(id)arg4 ;
-(id)serializeableDictionaryWithShouldRedact:(BOOL)arg1 ;
-(id)humanReadableType;
-(id)humanReadableDictionaryRepresentation;
-(BOOL)isEqualToSignpostSupportCompositorInterval:(id)arg1 ;
-(NSArray *)contributingPids;
@end
