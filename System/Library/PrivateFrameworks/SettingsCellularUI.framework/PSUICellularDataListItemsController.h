/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListItemsController.h>
#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>

@class RadiosPreferences;

@interface PSUICellularDataListItemsController : PSListItemsController <RadiosPreferencesDelegate> {

	RadiosPreferences* _radioPreferences;

}

@property (nonatomic,retain) RadiosPreferences * radioPreferences;              //@synthesize radioPreferences=_radioPreferences - In the implementation block
-(id)init;
-(void)dealloc;
-(void)airplaneModeChanged;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(void)setRadioPreferences:(RadiosPreferences *)arg1 ;
-(RadiosPreferences *)radioPreferences;
-(void)reloadCache;
@end
