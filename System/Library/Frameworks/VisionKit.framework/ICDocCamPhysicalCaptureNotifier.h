/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICDocCamPhysicalCaptureNotifierDelegate;
@interface ICDocCamPhysicalCaptureNotifier : NSObject {

	BOOL _enabled;
	id<ICDocCamPhysicalCaptureNotifierDelegate> _delegate;
	long long _state;
	long long __volumeUpButtonState;
	long long __volumeDownButtonState;

}

@property (assign,setter=_setState:,nonatomic) long long state;                                               //@synthesize state=_state - In the implementation block
@property (assign,setter=_setVolumeUpButtonState:,nonatomic) long long _volumeUpButtonState;                  //@synthesize _volumeUpButtonState=__volumeUpButtonState - In the implementation block
@property (assign,setter=_setVolumeDownButtonState:,nonatomic) long long _volumeDownButtonState;              //@synthesize _volumeDownButtonState=__volumeDownButtonState - In the implementation block
@property (assign,nonatomic,__weak) id<ICDocCamPhysicalCaptureNotifierDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                   //@synthesize enabled=_enabled - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(id<ICDocCamPhysicalCaptureNotifierDelegate>)delegate;
-(void)setDelegate:(id<ICDocCamPhysicalCaptureNotifierDelegate>)arg1 ;
-(long long)state;
-(BOOL)isEnabled;
-(void)_setState:(long long)arg1 ;
-(void)_updateCaptureButtonNotifications;
-(void)_handleVolumeUpButtonUpNotification:(id)arg1 ;
-(void)_handleVolumeUpButtonDownNotification:(id)arg1 ;
-(void)_handleVolumeDownButtonUpNotification:(id)arg1 ;
-(void)_handleVolumeDownButtonDownNotification:(id)arg1 ;
-(void)_setVolumeUpButtonState:(long long)arg1 ;
-(void)_setVolumeDownButtonState:(long long)arg1 ;
-(long long)_volumeDownButtonState;
-(void)_updateStateAndNotifyDelegateIfNeeded;
-(long long)_volumeUpButtonState;
@end

