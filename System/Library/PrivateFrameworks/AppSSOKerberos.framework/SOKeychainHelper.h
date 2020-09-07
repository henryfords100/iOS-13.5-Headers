/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppSSOKerberos/AppSSOKerberos-Structs.h>
@interface SOKeychainHelper : NSObject
+(SecIdentityRef)identityForUUIDString:(id)arg1 ;
+(int)addCredentialsToKeychainWithService:(id)arg1 withUsername:(id)arg2 withPassword:(id)arg3 requireUserPresence:(BOOL)arg4 ;
+(int)retrieveCredentialsFromKeychainWithService:(id)arg1 returnedUsername:(id*)arg2 returnedPassword:(id*)arg3 ;
+(int)removeCredentialsFromKeychainWithService:(id)arg1 ;
@end
