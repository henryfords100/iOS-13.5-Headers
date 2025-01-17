/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDExternalActionFilter : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE1* _componentTypes;

}

@property (nonatomic,readonly) unsigned long long componentTypesCount; 
@property (nonatomic,readonly) int* componentTypes; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)dealloc;
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
-(unsigned long long)componentTypesCount;
-(void)clearComponentTypes;
-(int)componentTypeAtIndex:(unsigned long long)arg1 ;
-(void)addComponentType:(int)arg1 ;
-(int*)componentTypes;
-(void)setComponentTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)componentTypesAsString:(int)arg1 ;
-(int)StringAsComponentTypes:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
@end

