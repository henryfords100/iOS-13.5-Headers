/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class UIProgressHUD, HKHealthStore;

@interface HKHealthManageStorageViewController : PSListController {

	long long _status;
	UIProgressHUD* _spinnerView;
	HKHealthStore* _healthStore;

}

@property (nonatomic,readonly) HKHealthStore * healthStore;              //@synthesize healthStore=_healthStore - In the implementation block
-(id)init;
-(HKHealthStore *)healthStore;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)specifiers;
-(void)showSpinnerMessage:(id)arg1 ;
-(void)hideSpinner;
-(void)_loadCloudSyncStorageStatus;
-(void)confirmDisable:(id)arg1 ;
-(void)_disableAndDelete:(id)arg1 ;
@end

