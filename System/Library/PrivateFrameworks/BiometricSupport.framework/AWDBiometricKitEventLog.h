/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiometricSupport/BiometricSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDBiometricKitEventLog : PBCodable <NSCopying> {

	SCD_Struct_AW6* _events;
	unsigned long long _timestamp;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long eventsCount; 
@property (nonatomic,readonly) unsigned* events; 
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
-(unsigned*)events;
-(unsigned long long)eventsCount;
-(void)clearEvents;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)addEvent:(unsigned)arg1 ;
-(unsigned)eventAtIndex:(unsigned long long)arg1 ;
-(void)setEvents:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end

