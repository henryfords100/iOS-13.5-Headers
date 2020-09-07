/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface HMPBMetadata : PBCodable <NSCopying> {

	NSMutableArray* _hapCategories;
	NSMutableArray* _hapCharacteristics;
	NSMutableArray* _hapServices;
	int _version;
	SCD_Struct_HM1 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) int version;                                      //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSMutableArray * hapCharacteristics;              //@synthesize hapCharacteristics=_hapCharacteristics - In the implementation block
@property (nonatomic,retain) NSMutableArray * hapServices;                     //@synthesize hapServices=_hapServices - In the implementation block
@property (nonatomic,retain) NSMutableArray * hapCategories;                   //@synthesize hapCategories=_hapCategories - In the implementation block
+(Class)hapCharacteristicsType;
+(Class)hapServicesType;
+(Class)hapCategoriesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(unsigned long long)hapCharacteristicsCount;
-(NSMutableArray *)hapCharacteristics;
-(unsigned long long)hapServicesCount;
-(NSMutableArray *)hapServices;
-(unsigned long long)hapCategoriesCount;
-(NSMutableArray *)hapCategories;
-(void)addHapCharacteristics:(id)arg1 ;
-(void)addHapServices:(id)arg1 ;
-(void)addHapCategories:(id)arg1 ;
-(void)clearHapCharacteristics;
-(id)hapCharacteristicsAtIndex:(unsigned long long)arg1 ;
-(void)clearHapServices;
-(id)hapServicesAtIndex:(unsigned long long)arg1 ;
-(void)clearHapCategories;
-(id)hapCategoriesAtIndex:(unsigned long long)arg1 ;
-(void)setHapCharacteristics:(NSMutableArray *)arg1 ;
-(void)setHapServices:(NSMutableArray *)arg1 ;
-(void)setHapCategories:(NSMutableArray *)arg1 ;
@end
