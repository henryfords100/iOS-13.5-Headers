/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDS/IDSDaemonListenerProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, IDSDaemonRequestTimer, NSString;

@interface IDSPhoneCertificateVendor : NSObject <IDSDaemonListenerProtocol> {

	NSObject*<OS_dispatch_queue> _queue;
	IDSPhoneCertificateVendor* _strongSelfReference;
	IDSDaemonRequestTimer* _daemonRequestTimer;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) IDSPhoneCertificateVendor * strongSelfReference;              //@synthesize strongSelfReference=_strongSelfReference - In the implementation block
@property (nonatomic,readonly) IDSDaemonRequestTimer * daemonRequestTimer;                 //@synthesize daemonRequestTimer=_daemonRequestTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithQueue:(id)arg1 ;
-(void)didAuthenticatePhoneWithAuthenticationCertificateData:(id)arg1 requestUUID:(id)arg2 error:(id)arg3 ;
-(void)didGeneratePhoneAuthenticationSignature:(id)arg1 nonce:(id)arg2 certificates:(id)arg3 labelIDs:(id)arg4 inputData:(id)arg5 requestUUID:(id)arg6 error:(id)arg7 ;
-(void)didRequestCarrierTokenString:(id)arg1 requestUUID:(id)arg2 error:(id)arg3 ;
-(void)didSetPhoneUserSubscriptionSource:(id)arg1 requestUUID:(id)arg2 error:(id)arg3 ;
-(void)didFetchPhoneUserSubscriptionSource:(id)arg1 requestUUID:(id)arg2 error:(id)arg3 ;
-(BOOL)_isPhoneCertificateVendorSupported;
-(id)_clientErrorForCode:(long long)arg1 underlyingError:(id)arg2 ;
-(id)_scheduleTimeoutForPhoneAuthenticationCertificateRequestCompletionBlock:(/*^block*/id)arg1 ;
-(id)_scheduleTimeoutForPhoneAuthenticationSignatureRequestCompletionBlock:(/*^block*/id)arg1 ;
-(id)_scheduleTimeoutForCarrierTokenCompletionBlock:(/*^block*/id)arg1 ;
-(IDSDaemonRequestTimer *)daemonRequestTimer;
-(void)setStrongSelfReference:(IDSPhoneCertificateVendor *)arg1 ;
-(id)_debugDescriptionForErrorCode:(long long)arg1 ;
-(void)_updateSelfRetentionBasedOnInFlightRequestCount;
-(void)authenticatePhoneWithCompletion:(/*^block*/id)arg1 ;
-(void)generatePhoneAuthenticationSignatureOverData:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)requestCarrierTokenWithParameters:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)_subscriptionSourceFromIntegerValue:(long long)arg1 ;
-(long long)_subscriptionSourceForContext:(id)arg1 ;
-(IDSPhoneCertificateVendor *)strongSelfReference;
-(id)_scheduleTimeoutForPhoneSubscriptionSourceCompletionBlock:(/*^block*/id)arg1 ;
-(void)requestCarrierTokenWithMessageBody:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCurrentPhoneUserSubscriptionSource:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestCurrentPhoneUserSubscriptionSourceWithCompletion:(/*^block*/id)arg1 ;
-(long long)currentPhoneUserSubscriptionSourceWithError:(id*)arg1 ;
@end

