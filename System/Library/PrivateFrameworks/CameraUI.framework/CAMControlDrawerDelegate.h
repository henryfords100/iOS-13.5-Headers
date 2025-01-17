/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CAMControlDrawerDelegate <NSObject>
@required
-(void)controlDrawer:(id)arg1 didChangeFlashMode:(long long)arg2;
-(void)controlDrawer:(id)arg1 didChangeLivePhotoMode:(long long)arg2;
-(void)controlDrawer:(id)arg1 didChangeAspectRatio:(long long)arg2;
-(void)controlDrawer:(id)arg1 didChangeTimerDuration:(long long)arg2;
-(void)controlDrawer:(id)arg1 didChangeHDRMode:(long long)arg2;
-(void)controlDrawerFlashButtonUnavailable:(id)arg1;
-(void)controlDrawer:(id)arg1 wantsFilterScrubberVisible:(BOOL)arg2;
-(void)controlDrawerDidCreateFilterScrubber:(id)arg1;
-(void)controlDrawerDidCreateApertureSlider:(id)arg1;
-(void)controlDrawerDidCreateIntensitySlider:(id)arg1;
-(void)controlDrawerDidCreateLowLightSlider:(id)arg1;
-(void)controlDrawer:(id)arg1 didCreateControlForType:(long long)arg2;
-(void)controlDrawer:(id)arg1 didSelectMenuItemForControlType:(long long)arg2;

@end

