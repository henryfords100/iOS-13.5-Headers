/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIVisualEffectView.h>
#import <UIKitCore/_UILumaTrackingBackdropViewDelegate.h>

@interface _UIPointerEffectTintView : UIVisualEffectView <_UILumaTrackingBackdropViewDelegate> {

	unsigned long long _luminance;
	BOOL _disabled;
	BOOL _pressed;

}

@property (assign,getter=isDisabled,nonatomic) BOOL disabled;              //@synthesize disabled=_disabled - In the implementation block
@property (assign,getter=isPressed,nonatomic) BOOL pressed;                //@synthesize pressed=_pressed - In the implementation block
-(BOOL)isDisabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isPressed;
-(void)setPressed:(BOOL)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(void)_updateAlpha;
-(void)backgroundLumaView:(id)arg1 didTransitionToLevel:(unsigned long long)arg2 ;
-(void)_updateBackgroundEffects;
@end

