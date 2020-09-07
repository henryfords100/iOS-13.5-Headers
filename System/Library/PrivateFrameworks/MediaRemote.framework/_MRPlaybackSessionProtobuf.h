/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface _MRPlaybackSessionProtobuf : PBCodable <NSCopying> {

	NSString* _identifier;
	NSData* _playbackSessionData;
	NSString* _type;

}

@property (nonatomic,readonly) BOOL hasPlaybackSessionData; 
@property (nonatomic,retain) NSData * playbackSessionData;               //@synthesize playbackSessionData=_playbackSessionData - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasType; 
@property (nonatomic,retain) NSString * type;                            //@synthesize type=_type - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasType;
-(BOOL)hasIdentifier;
-(NSData *)playbackSessionData;
-(void)setPlaybackSessionData:(NSData *)arg1 ;
-(BOOL)hasPlaybackSessionData;
@end
