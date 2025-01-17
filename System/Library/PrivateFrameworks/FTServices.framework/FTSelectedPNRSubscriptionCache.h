/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CTXPCServiceSubscriptionInfo, CTXPCContexts, CTXPCServiceSubscriptionContext, NSString;

@interface FTSelectedPNRSubscriptionCache : NSObject {

	CTXPCServiceSubscriptionInfo* _subscriptionInfo;
	CTXPCContexts* _activeSubscriptionInfo;
	CTXPCServiceSubscriptionContext* _selectedContext;
	NSString* _phoneNumber;
	long long _dualSIMCapability;

}

@property (nonatomic,retain) CTXPCServiceSubscriptionInfo * subscriptionInfo;                //@synthesize subscriptionInfo=_subscriptionInfo - In the implementation block
@property (nonatomic,retain) CTXPCContexts * activeSubscriptionInfo;                         //@synthesize activeSubscriptionInfo=_activeSubscriptionInfo - In the implementation block
@property (nonatomic,retain) CTXPCServiceSubscriptionContext * selectedContext;              //@synthesize selectedContext=_selectedContext - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                                         //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (assign,nonatomic) long long dualSIMCapability;                                    //@synthesize dualSIMCapability=_dualSIMCapability - In the implementation block
-(id)debugDescription;
-(NSString *)phoneNumber;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(CTXPCServiceSubscriptionInfo *)subscriptionInfo;
-(void)setSubscriptionInfo:(CTXPCServiceSubscriptionInfo *)arg1 ;
-(long long)dualSIMCapability;
-(CTXPCServiceSubscriptionContext *)selectedContext;
-(CTXPCContexts *)activeSubscriptionInfo;
-(void)setActiveSubscriptionInfo:(CTXPCContexts *)arg1 ;
-(void)setSelectedContext:(CTXPCServiceSubscriptionContext *)arg1 ;
-(void)setDualSIMCapability:(long long)arg1 ;
@end

