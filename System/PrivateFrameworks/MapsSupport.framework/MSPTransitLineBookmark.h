/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, MSPTransitStorageLine;

@interface MSPTransitLineBookmark : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	MSPTransitStorageLine* _transitLineStorage;

}

@property (nonatomic,readonly) BOOL hasTransitLineStorage; 
@property (nonatomic,retain) MSPTransitStorageLine * transitLineStorage;              //@synthesize transitLineStorage=_transitLineStorage - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setTransitLineStorage:(MSPTransitStorageLine *)arg1 ;
-(BOOL)hasTransitLineStorage;
-(MSPTransitStorageLine *)transitLineStorage;
@end
