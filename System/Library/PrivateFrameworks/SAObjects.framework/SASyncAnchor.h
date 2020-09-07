/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SASyncAppMetaData, NSNumber;

@interface SASyncAnchor : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * appBundleId; 
@property (nonatomic,retain) SASyncAppMetaData * appMetaData; 
@property (assign,nonatomic) long long count; 
@property (nonatomic,copy) NSString * generation; 
@property (nonatomic,copy) NSString * intentSlotName; 
@property (nonatomic,copy) NSString * key; 
@property (nonatomic,copy) NSNumber * suspendDurationInSeconds; 
@property (nonatomic,copy) NSString * suspendReason; 
@property (nonatomic,copy) NSString * validity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_af_normalizedKeyForKey:(id)arg1 appBundleID:(id)arg2 syncSlotName:(id)arg3 ;
+(id)anchor;
+(id)anchorWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)_af_normalizedKey;
-(BOOL)_af_isValid;
-(long long)count;
-(NSString *)key;
-(void)setCount:(long long)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)generation;
-(void)setGeneration:(NSString *)arg1 ;
-(NSString *)appBundleId;
-(void)setAppBundleId:(NSString *)arg1 ;
-(NSString *)validity;
-(void)setValidity:(NSString *)arg1 ;
-(NSString *)intentSlotName;
-(void)setIntentSlotName:(NSString *)arg1 ;
-(id)encodedClassName;
-(SASyncAppMetaData *)appMetaData;
-(void)setAppMetaData:(SASyncAppMetaData *)arg1 ;
-(NSNumber *)suspendDurationInSeconds;
-(void)setSuspendDurationInSeconds:(NSNumber *)arg1 ;
-(NSString *)suspendReason;
-(void)setSuspendReason:(NSString *)arg1 ;
@end
