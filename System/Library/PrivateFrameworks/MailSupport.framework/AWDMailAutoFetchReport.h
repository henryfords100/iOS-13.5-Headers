/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailSupport/MailSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDMailError;

@interface AWDMailAutoFetchReport : PBCodable <NSCopying> {

	unsigned long long _bucketedLocalNonDeletedCount;
	unsigned long long _duration;
	unsigned long long _fetchSize;
	unsigned long long _numMessagesFetched;
	unsigned long long _options;
	unsigned long long _timestamp;
	int _emailProvider;
	AWDMailError* _mailError;
	int _mailboxType;
	int _newMessagesState;
	int _protocol;
	int _totalBytesReceived;
	int _totalBytesSent;
	int _trigger;
	BOOL _didTimeout;
	BOOL _foreground;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasProtocol; 
@property (assign,nonatomic) int protocol;                                                 //@synthesize protocol=_protocol - In the implementation block
@property (assign,nonatomic) BOOL hasEmailProvider; 
@property (assign,nonatomic) int emailProvider;                                            //@synthesize emailProvider=_emailProvider - In the implementation block
@property (assign,nonatomic) BOOL hasMailboxType; 
@property (assign,nonatomic) int mailboxType;                                              //@synthesize mailboxType=_mailboxType - In the implementation block
@property (nonatomic,readonly) BOOL hasMailError; 
@property (nonatomic,retain) AWDMailError * mailError;                                     //@synthesize mailError=_mailError - In the implementation block
@property (assign,nonatomic) BOOL hasTrigger; 
@property (assign,nonatomic) int trigger;                                                  //@synthesize trigger=_trigger - In the implementation block
@property (assign,nonatomic) BOOL hasNewMessagesState; 
@property (assign,nonatomic) int newMessagesState;                                         //@synthesize newMessagesState=_newMessagesState - In the implementation block
@property (assign,nonatomic) BOOL hasForeground; 
@property (assign,nonatomic) BOOL foreground;                                              //@synthesize foreground=_foreground - In the implementation block
@property (assign,nonatomic) BOOL hasDidTimeout; 
@property (assign,nonatomic) BOOL didTimeout;                                              //@synthesize didTimeout=_didTimeout - In the implementation block
@property (assign,nonatomic) BOOL hasOptions; 
@property (assign,nonatomic) unsigned long long options;                                   //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) BOOL hasFetchSize; 
@property (assign,nonatomic) unsigned long long fetchSize;                                 //@synthesize fetchSize=_fetchSize - In the implementation block
@property (assign,nonatomic) BOOL hasNumMessagesFetched; 
@property (assign,nonatomic) unsigned long long numMessagesFetched;                        //@synthesize numMessagesFetched=_numMessagesFetched - In the implementation block
@property (assign,nonatomic) BOOL hasTotalBytesSent; 
@property (assign,nonatomic) int totalBytesSent;                                           //@synthesize totalBytesSent=_totalBytesSent - In the implementation block
@property (assign,nonatomic) BOOL hasTotalBytesReceived; 
@property (assign,nonatomic) int totalBytesReceived;                                       //@synthesize totalBytesReceived=_totalBytesReceived - In the implementation block
@property (assign,nonatomic) BOOL hasBucketedLocalNonDeletedCount; 
@property (assign,nonatomic) unsigned long long bucketedLocalNonDeletedCount;              //@synthesize bucketedLocalNonDeletedCount=_bucketedLocalNonDeletedCount - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;                                  //@synthesize duration=_duration - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(int)protocol;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)setOptions:(unsigned long long)arg1 ;
-(unsigned long long)duration;
-(void)setProtocol:(int)arg1 ;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDuration:(unsigned long long)arg1 ;
-(void)setForeground:(BOOL)arg1 ;
-(int)trigger;
-(BOOL)foreground;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(void)setTrigger:(int)arg1 ;
-(void)setHasTrigger:(BOOL)arg1 ;
-(BOOL)hasTrigger;
-(id)triggerAsString:(int)arg1 ;
-(int)StringAsTrigger:(id)arg1 ;
-(BOOL)hasOptions;
-(void)setHasDuration:(BOOL)arg1 ;
-(int)totalBytesReceived;
-(void)setDidTimeout:(BOOL)arg1 ;
-(BOOL)didTimeout;
-(int)mailboxType;
-(void)setMailboxType:(int)arg1 ;
-(void)setTotalBytesReceived:(int)arg1 ;
-(void)setHasOptions:(BOOL)arg1 ;
-(void)setHasMailboxType:(BOOL)arg1 ;
-(BOOL)hasMailboxType;
-(id)mailboxTypeAsString:(int)arg1 ;
-(int)StringAsMailboxType:(id)arg1 ;
-(void)setMailError:(AWDMailError *)arg1 ;
-(void)setHasProtocol:(BOOL)arg1 ;
-(BOOL)hasProtocol;
-(id)protocolAsString:(int)arg1 ;
-(int)StringAsProtocol:(id)arg1 ;
-(int)emailProvider;
-(void)setEmailProvider:(int)arg1 ;
-(void)setHasEmailProvider:(BOOL)arg1 ;
-(BOOL)hasEmailProvider;
-(id)emailProviderAsString:(int)arg1 ;
-(int)StringAsEmailProvider:(id)arg1 ;
-(BOOL)hasMailError;
-(int)newMessagesState;
-(void)setNewMessagesState:(int)arg1 ;
-(void)setHasNewMessagesState:(BOOL)arg1 ;
-(BOOL)hasNewMessagesState;
-(id)newMessagesStateAsString:(int)arg1 ;
-(int)StringAsNewMessagesState:(id)arg1 ;
-(void)setHasForeground:(BOOL)arg1 ;
-(BOOL)hasForeground;
-(void)setHasDidTimeout:(BOOL)arg1 ;
-(BOOL)hasDidTimeout;
-(void)setFetchSize:(unsigned long long)arg1 ;
-(void)setHasFetchSize:(BOOL)arg1 ;
-(BOOL)hasFetchSize;
-(void)setNumMessagesFetched:(unsigned long long)arg1 ;
-(void)setHasNumMessagesFetched:(BOOL)arg1 ;
-(BOOL)hasNumMessagesFetched;
-(int)totalBytesSent;
-(void)setTotalBytesSent:(int)arg1 ;
-(void)setHasTotalBytesSent:(BOOL)arg1 ;
-(BOOL)hasTotalBytesSent;
-(id)totalBytesSentAsString:(int)arg1 ;
-(int)StringAsTotalBytesSent:(id)arg1 ;
-(void)setHasTotalBytesReceived:(BOOL)arg1 ;
-(BOOL)hasTotalBytesReceived;
-(id)totalBytesReceivedAsString:(int)arg1 ;
-(int)StringAsTotalBytesReceived:(id)arg1 ;
-(void)setBucketedLocalNonDeletedCount:(unsigned long long)arg1 ;
-(void)setHasBucketedLocalNonDeletedCount:(BOOL)arg1 ;
-(BOOL)hasBucketedLocalNonDeletedCount;
-(AWDMailError *)mailError;
-(unsigned long long)fetchSize;
-(unsigned long long)numMessagesFetched;
-(unsigned long long)bucketedLocalNonDeletedCount;
@end

