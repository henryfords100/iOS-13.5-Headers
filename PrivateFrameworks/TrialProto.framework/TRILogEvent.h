/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TrialProto-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TRILogContext, TRIDenormalizedEvent, NSString;

@interface TRILogEvent : PBCodable <NSCopying> {

	TRILogContext* _context;
	TRIDenormalizedEvent* _denormalizedEvent;
	NSString* _logEventId;

}

@property (nonatomic,readonly) BOOL hasContext; 
@property (nonatomic,retain) TRILogContext * context;                               //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL hasLogEventId; 
@property (nonatomic,retain) NSString * logEventId;                                 //@synthesize logEventId=_logEventId - In the implementation block
@property (nonatomic,readonly) BOOL hasDenormalizedEvent; 
@property (nonatomic,retain) TRIDenormalizedEvent * denormalizedEvent;              //@synthesize denormalizedEvent=_denormalizedEvent - In the implementation block
+(id)currentTime;
+(id)eventWithTrackingId:(id)arg1 projectId:(int)arg2 ;
+(id)contextWithTrackingId:(id)arg1 projectId:(int)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(TRILogContext *)context;
-(void)setContext:(TRILogContext *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasContext;
-(TRIDenormalizedEvent *)denormalizedEvent;
-(BOOL)hasDenormalizedEvent;
-(void)setLogEventId:(NSString *)arg1 ;
-(void)setDenormalizedEvent:(TRIDenormalizedEvent *)arg1 ;
-(BOOL)hasLogEventId;
-(NSString *)logEventId;
@end
