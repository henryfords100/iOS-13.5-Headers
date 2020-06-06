/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUItemTableModuleController.h>
#import <libobjc.A.dylib/HUNetworkConfigurationSettingsModuleDelegate.h>
#import <libobjc.A.dylib/HUTappableTextViewDelegate.h>

@class NSString;

@interface HUNetworkConfigurationSettingsModuleController : HUItemTableModuleController <HUNetworkConfigurationSettingsModuleDelegate, HUTappableTextViewDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)initWithModule:(id)arg1 ;
-(BOOL)canSelectItem:(id)arg1 ;
-(unsigned long long)didSelectItem:(id)arg1 ;
-(Class)cellClassForItem:(id)arg1 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3 ;
-(void)tappableTextView:(id)arg1 tappedAtIndex:(unsigned long long)arg2 withAttributes:(id)arg3 ;
-(void)networkConfigurationSettingsModuleUpdateDidTimeout:(id)arg1 ;
-(id)_presentNetworkConfigurationSettingsMismatchViewController;
@end
