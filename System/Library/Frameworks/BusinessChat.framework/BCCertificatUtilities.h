/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BusinessChat/BusinessChat-Structs.h>
@interface BCCertificatUtilities : NSObject
+(SecPolicyRef)sslPolicyForHost:(id)arg1 client:(BOOL)arg2 ;
+(BOOL)trustIncludesRevokedCertificate:(SecTrustRef)arg1 ;
+(SecTrustRef)trustReferenceWithCertificates:(id)arg1 forPolicy:(SecPolicyRef)arg2 ;
@end

