/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LSApplicationWorkspaceObserverProtocol <NSObject>
@optional
-(void)applicationInstallsDidCancel:(id)arg1;
-(void)applicationInstallsDidPause:(id)arg1;
-(void)applicationInstallsDidPrioritize:(id)arg1;
-(void)applicationInstallsDidResume:(id)arg1;
-(void)networkUsageChanged:(BOOL)arg1;
-(void)pluginsDidInstall:(id)arg1;
-(void)pluginsDidUninstall:(id)arg1;
-(void)pluginsWillUninstall:(id)arg1;
-(void)applicationStateDidChange:(id)arg1;
-(void)deviceManagementPolicyDidChange:(id)arg1;
-(void)applicationInstallsDidChange:(id)arg1;
-(BOOL)observeLaunchProhibitedApps;
-(void)applicationInstallsDidStart:(id)arg1;
-(void)applicationInstallsDidUpdateIcon:(id)arg1;
-(void)applicationsWillInstall:(id)arg1;
-(void)applicationsDidInstall:(id)arg1;
-(void)applicationsDidFailToInstall:(id)arg1;
-(void)applicationsWillUninstall:(id)arg1;
-(void)applicationsDidUninstall:(id)arg1;
-(void)applicationsDidFailToUninstall:(id)arg1;
-(void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2;
-(void)applicationIconDidChange:(id)arg1;

@end

