/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:05:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/libAppleSSEExt.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BAASupport : NSObject
+(void)initialize;
+(void)setDelegate:(id)arg1 ;
+(int)prepare;
+(void)setBlessedUser:(unsigned)arg1 keybagUUID:(unsigned char)arg2 ;
+(int)getCertificateExpirationDate:(double*)arg1 ;
+(int)getCertificates:(id*)arg1 ;
+(int)issueNewCertificate;
@end
