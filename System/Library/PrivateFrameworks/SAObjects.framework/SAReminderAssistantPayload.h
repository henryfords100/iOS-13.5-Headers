/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAReminderPayload.h>

@class NSString;

@interface SAReminderAssistantPayload : AceObject <SAReminderPayload>

@property (nonatomic,copy) NSString * utterance; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)assistantPayload;
+(id)assistantPayloadWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)utterance;
-(void)setUtterance:(NSString *)arg1 ;
-(id)encodedClassName;
@end

