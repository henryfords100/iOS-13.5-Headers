/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyPreferences/TelephonyPreferences-Structs.h>
#import <libobjc.A.dylib/TPSSecureObject.h>

@class CTXPCServiceSubscriptionContext, NSString;

@interface TPSRequest : NSObject <TPSSecureObject> {

	CTXPCServiceSubscriptionContext* _subscriptionContext;

}

@property (nonatomic,retain) CTXPCServiceSubscriptionContext * subscriptionContext;              //@synthesize subscriptionContext=_subscriptionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)unarchivedObjectClasses;
+(id)unarchivedObjectFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)archivedDataWithError:(id*)arg1 ;
-(BOOL)isEqualToRequest:(id)arg1 ;
-(CTXPCServiceSubscriptionContext *)subscriptionContext;
-(void)setSubscriptionContext:(CTXPCServiceSubscriptionContext *)arg1 ;
-(id)initWithSubscriptionContext:(id)arg1 ;
@end

