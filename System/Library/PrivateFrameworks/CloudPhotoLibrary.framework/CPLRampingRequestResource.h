/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CPLRampingRequestResource : PBCodable <NSCopying> {

	long long _numRequested;
	NSString* _resource;
	SCD_Struct_CP2 _has;

}

@property (nonatomic,readonly) BOOL hasResource; 
@property (nonatomic,retain) NSString * resource;                 //@synthesize resource=_resource - In the implementation block
@property (assign,nonatomic) BOOL hasNumRequested; 
@property (assign,nonatomic) long long numRequested;              //@synthesize numRequested=_numRequested - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)resource;
-(void)setResource:(NSString *)arg1 ;
-(BOOL)hasResource;
-(void)setNumRequested:(long long)arg1 ;
-(void)setHasNumRequested:(BOOL)arg1 ;
-(BOOL)hasNumRequested;
-(long long)numRequested;
@end

