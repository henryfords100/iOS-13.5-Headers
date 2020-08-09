/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:02:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface OctopusDecoder : NSObject
+(id)getTransactionTypeStringFromCode:(unsigned char)arg1 andServiceProviderID:(unsigned char)arg2 ;
+(int)isTransitTransactionCode:(unsigned char)arg1 ;
+(id)getTransactionTypeModifierStringFromCode:(unsigned char)arg1 ;
+(BOOL)isTopUpTransaction:(unsigned char)arg1 ;
+(id)getTransitTransactionTypeNameFromCode:(unsigned char)arg1 andServiceProvider:(unsigned short)arg2 ;
+(id)getPurseBalance:(id)arg1 ;
+(id)parseTLOGBlock:(id)arg1 withBaseDate:(id)arg2 ;
+(id)injectTLOGAAVS:(id)arg1 withAAVSAmount:(id)arg2 andBalance:(id)arg3 ;
+(id)getLoyaltyBalance:(id)arg1 ;
+(id)getNegativeValueLimit:(id)arg1 ;
+(id)getBaseDate:(id)arg1 ;
+(id)getPhysicalID:(id)arg1 ;
+(id)getAAVSAmount:(id)arg1 ;
+(int)isBlackListed:(id)arg1 ;
+(int)getEnRouteStatus:(id)arg1 ;
+(int)filterHistoryEntry:(id)arg1 ;
@end
