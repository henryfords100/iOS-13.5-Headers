/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfigurationUI/MCUIBundleController.h>

@interface MCUIBundleController_iOS : MCUIBundleController {

	BOOL _isOnsiteProfileInstallation;

}

@property (assign,nonatomic) BOOL isOnsiteProfileInstallation;              //@synthesize isOnsiteProfileInstallation=_isOnsiteProfileInstallation - In the implementation block
-(id)specifiersWithSpecifier:(id)arg1 ;
-(id)initWithParentListController:(id)arg1 properties:(id)arg2 ;
-(BOOL)isOnsiteProfileInstallation;
-(id)_createOnsiteProfileInstallationSpecifier;
-(void)_presentInstallProfileVC;
-(void)setIsOnsiteProfileInstallation:(BOOL)arg1 ;
@end
