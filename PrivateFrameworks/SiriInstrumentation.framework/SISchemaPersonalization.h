/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaPersonalization : PBCodable {

	BOOL _personalDomainsSetup;
	BOOL _appleMusicSubscriber;

}

@property (assign,nonatomic) BOOL personalDomainsSetup;              //@synthesize personalDomainsSetup=_personalDomainsSetup - In the implementation block
@property (assign,nonatomic) BOOL appleMusicSubscriber;              //@synthesize appleMusicSubscriber=_appleMusicSubscriber - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(void)setPersonalDomainsSetup:(BOOL)arg1 ;
-(void)setAppleMusicSubscriber:(BOOL)arg1 ;
-(BOOL)personalDomainsSetup;
-(BOOL)appleMusicSubscriber;
@end
