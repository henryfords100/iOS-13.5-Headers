/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, INDateComponentsRange;


@protocol INSearchForMessagesIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSArray * recipients; 
@property (nonatomic,copy) NSArray * senders; 
@property (nonatomic,copy) NSArray * searchTerms; 
@property (assign,nonatomic) unsigned long long attributes; 
@property (nonatomic,copy) INDateComponentsRange * dateTimeRange; 
@property (nonatomic,copy) NSArray * identifiers; 
@property (nonatomic,copy) NSArray * notificationIdentifiers; 
@property (nonatomic,copy) NSArray * speakableGroupNames; 
@property (nonatomic,copy) NSArray * conversationIdentifiers; 
@required
-(id)init;
-(unsigned long long)attributes;
-(void)setAttributes:(unsigned long long)arg1;
-(NSArray *)recipients;
-(void)setRecipients:(id)arg1;
-(NSArray *)identifiers;
-(void)setIdentifiers:(id)arg1;
-(NSArray *)searchTerms;
-(void)setSearchTerms:(id)arg1;
-(INDateComponentsRange *)dateTimeRange;
-(void)setDateTimeRange:(id)arg1;
-(NSArray *)senders;
-(void)setSenders:(id)arg1;
-(NSArray *)notificationIdentifiers;
-(void)setNotificationIdentifiers:(id)arg1;
-(NSArray *)speakableGroupNames;
-(void)setSpeakableGroupNames:(id)arg1;
-(NSArray *)conversationIdentifiers;
-(void)setConversationIdentifiers:(id)arg1;

@end
