/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, HMDAccessoryNetworkCredential;

@interface HMDUnpairedHAPAccessoryConfiguration : NSObject {

	BOOL _requiresUserConsent;
	NSString* _homeName;
	NSString* _setupCode;
	/*^block*/id _setupCodeProvider;
	HMDAccessoryNetworkCredential* _networkCredential;
	NSString* _isoCountryCode;

}

@property (readonly) NSString * homeName;                                            //@synthesize homeName=_homeName - In the implementation block
@property (readonly) NSString * setupCode;                                           //@synthesize setupCode=_setupCode - In the implementation block
@property (readonly) id setupCodeProvider;                                           //@synthesize setupCodeProvider=_setupCodeProvider - In the implementation block
@property (readonly) BOOL requiresUserConsent;                                       //@synthesize requiresUserConsent=_requiresUserConsent - In the implementation block
@property (readonly) HMDAccessoryNetworkCredential * networkCredential;              //@synthesize networkCredential=_networkCredential - In the implementation block
@property (readonly) NSString * isoCountryCode;                                      //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
-(NSString *)isoCountryCode;
-(BOOL)requiresUserConsent;
-(NSString *)homeName;
-(NSString *)setupCode;
-(id)initWithHomeName:(id)arg1 setupCode:(id)arg2 setupCodeProvider:(/*^block*/id)arg3 requiresUserConsent:(BOOL)arg4 networkCredential:(id)arg5 country:(id)arg6 ;
-(HMDAccessoryNetworkCredential *)networkCredential;
-(id)setupCodeProvider;
@end

