/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentSession.h>

@interface PKApplePayTrustSession : PKPaymentSession
-(id)keyWithIdentifier:(id)arg1 ;
-(BOOL)deleteKeyWithIdentifier:(id)arg1 ;
-(id)createKeyWithRequest:(id)arg1 error:(id*)arg2 ;
-(id)initWithInternalSession:(id)arg1 targetQueue:(id)arg2 ;
-(id)signatureForRequest:(id)arg1 withAuthorization:(id)arg2 ;
@end
