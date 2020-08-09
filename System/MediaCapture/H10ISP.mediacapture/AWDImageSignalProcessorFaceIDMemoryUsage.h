/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:04:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/MediaCapture/H10ISP.mediacapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <H10ISP.mediacapture/H10ISP.mediacapture-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDImageSignalProcessorFaceIDMemoryUsage : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _numAttemptsTotal;
	unsigned _numBuffersInUseHighWatermark;
	unsigned _numBuffersTotal;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasNumBuffersInUseHighWatermark; 
@property (assign,nonatomic) unsigned numBuffersInUseHighWatermark;              //@synthesize numBuffersInUseHighWatermark=_numBuffersInUseHighWatermark - In the implementation block
@property (assign,nonatomic) BOOL hasNumBuffersTotal; 
@property (assign,nonatomic) unsigned numBuffersTotal;                           //@synthesize numBuffersTotal=_numBuffersTotal - In the implementation block
@property (assign,nonatomic) BOOL hasNumAttemptsTotal; 
@property (assign,nonatomic) unsigned numAttemptsTotal;                          //@synthesize numAttemptsTotal=_numAttemptsTotal - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setNumBuffersInUseHighWatermark:(unsigned)arg1 ;
-(void)setHasNumBuffersInUseHighWatermark:(BOOL)arg1 ;
-(BOOL)hasNumBuffersInUseHighWatermark;
-(void)setNumBuffersTotal:(unsigned)arg1 ;
-(void)setHasNumBuffersTotal:(BOOL)arg1 ;
-(BOOL)hasNumBuffersTotal;
-(void)setNumAttemptsTotal:(unsigned)arg1 ;
-(void)setHasNumAttemptsTotal:(BOOL)arg1 ;
-(BOOL)hasNumAttemptsTotal;
-(unsigned)numBuffersInUseHighWatermark;
-(unsigned)numBuffersTotal;
-(unsigned)numAttemptsTotal;
@end
