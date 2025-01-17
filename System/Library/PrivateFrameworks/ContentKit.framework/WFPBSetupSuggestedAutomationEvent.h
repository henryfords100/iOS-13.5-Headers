/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBSetupSuggestedAutomationEvent : PBCodable <NSCopying> {

	unsigned _currentStep;
	NSString* _key;
	NSString* _suggestedAutomationIdentifier;
	BOOL _completed;
	SCD_Struct_WF12 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                                        //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestedAutomationIdentifier; 
@property (nonatomic,retain) NSString * suggestedAutomationIdentifier;              //@synthesize suggestedAutomationIdentifier=_suggestedAutomationIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentStep; 
@property (assign,nonatomic) unsigned currentStep;                                  //@synthesize currentStep=_currentStep - In the implementation block
@property (assign,nonatomic) BOOL hasCompleted; 
@property (assign,nonatomic) BOOL completed;                                        //@synthesize completed=_completed - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)completed;
-(void)setCompleted:(BOOL)arg1 ;
-(BOOL)hasKey;
-(unsigned)currentStep;
-(void)setHasCompleted:(BOOL)arg1 ;
-(BOOL)hasCompleted;
-(BOOL)hasSuggestedAutomationIdentifier;
-(NSString *)suggestedAutomationIdentifier;
-(void)setSuggestedAutomationIdentifier:(NSString *)arg1 ;
-(void)setCurrentStep:(unsigned)arg1 ;
-(void)setHasCurrentStep:(BOOL)arg1 ;
-(BOOL)hasCurrentStep;
@end

