/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StoreServices/StoreServices-Structs.h>
@class NSNumber, NSString, NSArray, NSDate;

@interface SSVSubscriptionEntitlements : NSObject {

	NSNumber* _accountIdentifier;
	NSNumber* _accountStoreFrontIdentifier;
	NSString* _accountISO3Country;
	NSArray* _entitledSubscriptions;
	NSDate* _cachedTimestamp;

}

@property (nonatomic,copy) NSDate * cachedTimestamp;                            //@synthesize cachedTimestamp=_cachedTimestamp - In the implementation block
@property (nonatomic,copy) NSNumber * accountIdentifier;                        //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * accountStoreFrontIdentifier;              //@synthesize accountStoreFrontIdentifier=_accountStoreFrontIdentifier - In the implementation block
@property (nonatomic,copy) NSString * accountISO3Country;                       //@synthesize accountISO3Country=_accountISO3Country - In the implementation block
@property (nonatomic,copy) NSArray * entitledSubscriptions;                     //@synthesize entitledSubscriptions=_entitledSubscriptions - In the implementation block
+(id)_valueForKey:(id)arg1 fromDictionary:(id)arg2 ofType:(Class)arg3 ;
+(id)_parseJSONDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)accountIdentifier;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setAccountISO3Country:(NSString *)arg1 ;
-(void)setAccountStoreFrontIdentifier:(NSNumber *)arg1 ;
-(void)setCachedTimestamp:(NSDate *)arg1 ;
-(void)setEntitledSubscriptions:(NSArray *)arg1 ;
-(NSNumber *)accountStoreFrontIdentifier;
-(NSString *)accountISO3Country;
-(NSDate *)cachedTimestamp;
-(NSArray *)entitledSubscriptions;
@end

