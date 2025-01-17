/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSConfirmationSpecifier.h>

@class PSListController;

@interface PSUICellularRATWarningSpecifier : PSConfirmationSpecifier {

	PSListController* _RATModeDrillDownController;

}

@property (nonatomic,retain) PSListController * RATModeDrillDownController;              //@synthesize RATModeDrillDownController=_RATModeDrillDownController - In the implementation block
-(id)initWithDrillDownController:(id)arg1 ;
-(void)acceptedRATSwitch;
-(void)canceledRATSwitch;
-(PSListController *)RATModeDrillDownController;
-(void)setRATModeDrillDownController:(PSListController *)arg1 ;
@end

