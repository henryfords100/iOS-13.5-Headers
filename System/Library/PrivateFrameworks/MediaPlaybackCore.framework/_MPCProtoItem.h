/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MPCProtoItemIdentifierSet;

@interface _MPCProtoItem : PBCodable <NSCopying> {

	_MPCProtoItemIdentifierSet* _identifierSet;
	int _mediaType;
	BOOL _excludeFromShuffle;
	SCD_Struct_MP22 _has;

}

@property (assign,nonatomic) BOOL hasMediaType; 
@property (assign,nonatomic) int mediaType;                                           //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifierSet; 
@property (nonatomic,retain) _MPCProtoItemIdentifierSet * identifierSet;              //@synthesize identifierSet=_identifierSet - In the implementation block
@property (assign,nonatomic) BOOL hasExcludeFromShuffle; 
@property (assign,nonatomic) BOOL excludeFromShuffle;                                 //@synthesize excludeFromShuffle=_excludeFromShuffle - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(int)mediaType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setMediaType:(int)arg1 ;
-(BOOL)hasMediaType;
-(void)setHasMediaType:(BOOL)arg1 ;
-(void)setExcludeFromShuffle:(BOOL)arg1 ;
-(void)setHasExcludeFromShuffle:(BOOL)arg1 ;
-(BOOL)hasExcludeFromShuffle;
-(BOOL)excludeFromShuffle;
-(_MPCProtoItemIdentifierSet *)identifierSet;
-(void)setIdentifierSet:(_MPCProtoItemIdentifierSet *)arg1 ;
-(BOOL)hasIdentifierSet;
@end

