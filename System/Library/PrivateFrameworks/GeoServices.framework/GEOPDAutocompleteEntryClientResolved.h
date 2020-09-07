/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDAutocompleteEntryClientResolved : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _resolvedItemType;
	SCD_Struct_GE99 _flags;

}

@property (assign,nonatomic) BOOL hasResolvedItemType; 
@property (assign,nonatomic) int resolvedItemType; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(int)resolvedItemType;
-(BOOL)hasResolvedItemType;
-(void)setResolvedItemType:(int)arg1 ;
-(void)setHasResolvedItemType:(BOOL)arg1 ;
-(id)resolvedItemTypeAsString:(int)arg1 ;
-(int)StringAsResolvedItemType:(id)arg1 ;
@end
