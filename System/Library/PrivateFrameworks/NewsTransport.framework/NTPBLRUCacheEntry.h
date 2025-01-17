/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NTPBLRUCacheEntry : PBCodable <NSCopying> {

	unsigned long long _lastAccessed;
	NSData* _key;
	NSData* _value;
	SCD_Struct_NT1 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSData * key;                                 //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) NSData * value;                               //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL hasLastAccessed; 
@property (assign,nonatomic) unsigned long long lastAccessed;              //@synthesize lastAccessed=_lastAccessed - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)key;
-(NSData *)value;
-(void)setValue:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setKey:(NSData *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasKey;
-(BOOL)hasValue;
-(void)setLastAccessed:(unsigned long long)arg1 ;
-(unsigned long long)lastAccessed;
-(void)setHasLastAccessed:(BOOL)arg1 ;
-(BOOL)hasLastAccessed;
@end

