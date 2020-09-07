/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAIntentGroupSnippetTemplate.h>

@class NSString;

@interface SAIntentGroupMessageContentSnippetTemplate : SAIntentGroupSnippetTemplate

@property (nonatomic,copy) NSString * content; 
@property (assign,nonatomic) BOOL sentStatus; 
+(id)messageContentSnippetTemplate;
+(id)messageContentSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)content;
-(void)setContent:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)sentStatus;
-(void)setSentStatus:(BOOL)arg1 ;
@end
