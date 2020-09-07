/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAMPSetQueueQueueFilter : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * mediaItemProperty; 
@property (nonatomic,copy) NSString * operation; 
@property (nonatomic,copy) NSString * value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)setQueueQueueFilter;
+(id)setQueueQueueFilterWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)value;
-(NSString *)operation;
-(void)setOperation:(NSString *)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)mediaItemProperty;
-(void)setMediaItemProperty:(NSString *)arg1 ;
@end
