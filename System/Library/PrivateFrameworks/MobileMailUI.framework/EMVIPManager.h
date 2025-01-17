/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet, EAEmailAddressSet;


@protocol EMVIPManager <NSObject>
@property (nonatomic,readonly) BOOL hasVIPs; 
@property (nonatomic,copy,readonly) NSSet * allVIPs; 
@property (nonatomic,copy,readonly) EAEmailAddressSet * allVIPEmailAddresses; 
@required
-(void)saveVIPs:(id)arg1;
-(void)removeVIPsWithIdentifiers:(id)arg1;
-(void)removeVIPsWithEmailAddresses:(id)arg1;
-(BOOL)isVIPAddress:(id)arg1;
-(EAEmailAddressSet *)allVIPEmailAddresses;
-(id)vipWithIdentifier:(id)arg1;
-(BOOL)hasVIPs;
-(NSSet *)allVIPs;

@end

