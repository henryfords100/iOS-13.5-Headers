/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSURL, NSData;

@interface SAStructuredDictationAddressResult : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * addressLabel; 
@property (nonatomic,copy) NSURL * contactId; 
@property (nonatomic,copy) NSString * contactName; 
@property (nonatomic,copy) NSData * forwardGeoProtobuf; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)structuredDictationAddressResult;
+(id)structuredDictationAddressResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSURL *)contactId;
-(NSString *)contactName;
-(void)setContactName:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)addressLabel;
-(void)setAddressLabel:(NSString *)arg1 ;
-(void)setContactId:(NSURL *)arg1 ;
-(NSData *)forwardGeoProtobuf;
-(void)setForwardGeoProtobuf:(NSData *)arg1 ;
@end

