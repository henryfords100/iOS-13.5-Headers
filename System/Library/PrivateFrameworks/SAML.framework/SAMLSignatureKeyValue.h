/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/SAMLBaseElement.h>

@class SAMLDSAKeyValue, SAMLRSAKeyValue;

@interface SAMLSignatureKeyValue : SAMLBaseElement

@property (nonatomic,readonly) SAMLDSAKeyValue * dsaKeyValue; 
@property (nonatomic,readonly) SAMLRSAKeyValue * rsaKeyValue; 
+(id)createElement:(id*)arg1 ;
-(SAMLDSAKeyValue *)dsaKeyValue;
-(SAMLRSAKeyValue *)rsaKeyValue;
@end
