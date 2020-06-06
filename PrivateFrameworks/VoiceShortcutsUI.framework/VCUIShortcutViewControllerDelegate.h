/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCUIShortcutViewControllerDelegate <NSObject>
@optional
-(void)shortcutViewController:(id)arg1 didCreateShortcut:(id)arg2;
-(void)shortcutViewController:(id)arg1 didSaveShortcut:(id)arg2;
-(void)shortcutViewController:(id)arg1 didDeleteShortcut:(id)arg2;
-(void)shortcutViewController:(id)arg1 didFinishWithName:(id)arg2;

@required
-(void)shortcutViewControllerDidCancel:(id)arg1;

@end
