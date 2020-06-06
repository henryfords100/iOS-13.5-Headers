/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSDecimalNumber, NSDate, NSArray, NSSet;

@interface PKTransitAppletHistory : NSObject <NSSecureCoding> {

	BOOL _blacklisted;
	long long _source;
	NSString* _serviceProvider;
	NSNumber* _serverRefreshIdentifier;
	NSString* _currency;
	NSDecimalNumber* _balance;
	NSNumber* _loyaltyBalance;
	NSDate* _expirationDate;
	NSArray* _balances;
	NSArray* _historyRecords;
	NSArray* _inStationDetails;
	NSSet* _enrouteTransitTypes;

}

@property (assign,nonatomic) long long source;                                   //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * serviceProvider;                           //@synthesize serviceProvider=_serviceProvider - In the implementation block
@property (nonatomic,copy) NSNumber * serverRefreshIdentifier;                   //@synthesize serverRefreshIdentifier=_serverRefreshIdentifier - In the implementation block
@property (assign,getter=isBlacklisted,nonatomic) BOOL blacklisted;              //@synthesize blacklisted=_blacklisted - In the implementation block
@property (nonatomic,copy) NSString * currency;                                  //@synthesize currency=_currency - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * balance;                            //@synthesize balance=_balance - In the implementation block
@property (nonatomic,copy) NSNumber * loyaltyBalance;                            //@synthesize loyaltyBalance=_loyaltyBalance - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                            //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy) NSArray * balances;                                   //@synthesize balances=_balances - In the implementation block
@property (nonatomic,copy) NSArray * historyRecords;                             //@synthesize historyRecords=_historyRecords - In the implementation block
@property (nonatomic,copy) NSArray * inStationDetails;                           //@synthesize inStationDetails=_inStationDetails - In the implementation block
@property (nonatomic,copy) NSSet * enrouteTransitTypes;                          //@synthesize enrouteTransitTypes=_enrouteTransitTypes - In the implementation block
@property (getter=isInStation,nonatomic,readonly) BOOL inStation; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSource:(long long)arg1 ;
-(long long)source;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSString *)serviceProvider;
-(NSDecimalNumber *)balance;
-(void)setBalance:(NSDecimalNumber *)arg1 ;
-(NSString *)currency;
-(id)felicaHistory;
-(id)initWithDictionary:(id)arg1 source:(long long)arg2 ;
-(NSArray *)historyRecords;
-(void)setCurrency:(NSString *)arg1 ;
-(NSSet *)enrouteTransitTypes;
-(void)setEnrouteTransitTypes:(NSSet *)arg1 ;
-(void)sanitizeValuesWithState:(id)arg1 ;
-(BOOL)isBlacklisted;
-(void)setBlacklisted:(BOOL)arg1 ;
-(BOOL)isInStation;
-(NSArray *)balances;
-(void)setBalances:(NSArray *)arg1 ;
-(NSNumber *)loyaltyBalance;
-(void)setLoyaltyBalance:(NSNumber *)arg1 ;
-(NSNumber *)serverRefreshIdentifier;
-(void)setServerRefreshIdentifier:(NSNumber *)arg1 ;
-(void)setServiceProvider:(NSString *)arg1 ;
-(void)setHistoryRecords:(NSArray *)arg1 ;
-(NSArray *)inStationDetails;
-(void)setInStationDetails:(NSArray *)arg1 ;
@end
