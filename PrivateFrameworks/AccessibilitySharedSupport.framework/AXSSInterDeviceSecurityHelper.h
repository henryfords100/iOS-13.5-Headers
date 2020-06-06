/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccessibilitySharedSupport/AccessibilitySharedSupport-Structs.h>
@class NSArray;

@interface AXSSInterDeviceSecurityHelper : NSObject {

	SecIdentityRef _cachedAppleIDIdentity;
	NSArray* _cachedCertificateChain;
	NSArray* _cachedSecurityIdentity;

}
-(id)init;
-(void)dealloc;
-(id)_certificateChain;
-(SecIdentityRef)_appleIDIdentity;
-(id)securityIdentity;
-(void)_appleIDsDidChange;
-(BOOL)shouldTrustCertificate:(id)arg1 ;
@end
