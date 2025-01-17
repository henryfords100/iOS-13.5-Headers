/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <SecurityFoundation/SecurityFoundation-Structs.h>
@class _SFCredentialStore, NSObject;

@interface _SFKeychainManager : NSObject {

	_SFCredentialStore* _credentialStore;
	NSObject*<OS_dispatch_queue> _keychainManagerQueue;
	NSObject*<OS_dispatch_queue> _keychainReplyQueue;

}

@property (retain) _SFCredentialStore * credentialStore;                           //@synthesize credentialStore=_credentialStore - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> keychainManagerQueue;              //@synthesize keychainManagerQueue=_keychainManagerQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> keychainReplyQueue;                //@synthesize keychainReplyQueue=_keychainReplyQueue - In the implementation block
+(id)defaultManager;
+(id)defaultOverCommitManager;
-(id)initManager;
-(_SFCredentialStore *)credentialStore;
-(id)initOverCommitManager;
-(void)setKeychainReplyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)keychainReplyQueue;
-(id)_symmetricKeyAttributesForIdentifier:(id)arg1 accessPolicy:(id)arg2 key:(id)arg3 ;
-(CFDictionaryRef)_commonKeyAttributesForIdentityIdentifier:(id)arg1 accessPolicy:(id)arg2 key:(id)arg3 ;
-(CFDictionaryRef)_privateKeyAttributesForIdentityIdentifier:(id)arg1 accessPolicy:(id)arg2 key:(id)arg3 ;
-(CFDictionaryRef)_publicKeyAttributesForIdentityIdentifier:(id)arg1 accessPolicy:(id)arg2 key:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)keychainManagerQueue;
-(CFDictionaryRef)_certificateAttributesForIdentityIdentifier:(id)arg1 accessPolicy:(id)arg2 ;
-(void)setKey:(id)arg1 forIdentifier:(id)arg2 accessPolicy:(id)arg3 resultHandler:(/*^block*/id)arg4 ;
-(void)setIdentity:(id)arg1 forIdentifier:(id)arg2 accessPolicy:(id)arg3 resultHandler:(/*^block*/id)arg4 ;
-(void)setData:(id)arg1 forIdentifier:(id)arg2 accessPolicy:(id)arg3 resultHandler:(/*^block*/id)arg4 ;
-(void)keyForIdentifier:(id)arg1 specifier:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)identityForIdentifier:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)dataForIdentifier:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)keysFilteredBy:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)identitiesFilteredBy:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)removeItemWithIdentifier:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)setCredentialStore:(_SFCredentialStore *)arg1 ;
-(void)setKeychainManagerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

