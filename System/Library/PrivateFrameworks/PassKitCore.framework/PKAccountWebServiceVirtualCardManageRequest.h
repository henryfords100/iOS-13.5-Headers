/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKAccountWebServiceRequest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKAccountVirtualCardEncryptionFields, NSString, NSURL;

@interface PKAccountWebServiceVirtualCardManageRequest : PKAccountWebServiceRequest <NSSecureCoding> {

	PKAccountVirtualCardEncryptionFields* _encryptionFields;
	long long _action;
	NSString* _accountIdentifier;
	NSURL* _baseURL;
	NSString* _virtualCardIdentifier;

}

@property (nonatomic,copy) NSString * accountIdentifier;                  //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                             //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy) NSString * virtualCardIdentifier;              //@synthesize virtualCardIdentifier=_virtualCardIdentifier - In the implementation block
-(NSURL *)baseURL;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(void)setAction:(long long)arg1 withQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)virtualCardIdentifier;
-(void)setVirtualCardIdentifier:(NSString *)arg1 ;
@end

