/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDWiFiCLTM : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSMutableArray* _sliceStats;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * sliceStats;               //@synthesize sliceStats=_sliceStats - In the implementation block
+(Class)sliceStatsType;
-(void)dealloc;
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
-(void)setSliceStats:(NSMutableArray *)arg1 ;
-(void)addSliceStats:(id)arg1 ;
-(unsigned long long)sliceStatsCount;
-(void)clearSliceStats;
-(id)sliceStatsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)sliceStats;
@end

