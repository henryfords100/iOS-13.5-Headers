/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKAccountWebServiceRequest.h>

@protocol PKAccountWebServiceApplePayTrustProtocol;
@class PKApplePayTrustSignature;

@interface PKAccountWebServiceApplePayTrustRequest : PKAccountWebServiceRequest {

	id<PKAccountWebServiceApplePayTrustProtocol> _protocol;
	PKApplePayTrustSignature* _signature;

}

@property (nonatomic,retain) PKApplePayTrustSignature * signature;              //@synthesize signature=_signature - In the implementation block
-(PKApplePayTrustSignature *)signature;
-(Class)responseClass;
-(void)setSignature:(PKApplePayTrustSignature *)arg1 ;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(id)initWithApplePayTrustProtocol:(id)arg1 ;
-(id)endpointComponents;
@end

