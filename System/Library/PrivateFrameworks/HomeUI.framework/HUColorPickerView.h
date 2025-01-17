/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/HUQuickControlInteractiveView.h>

@protocol HUQuickControlColorPickerViewInteractionDelegate;
@class HUQuickControlColorViewProfile, HUColorWheelView, HUQuickControlMagnifierView, UILongPressGestureRecognizer, NSString;

@interface HUColorPickerView : UIView <UIGestureRecognizerDelegate, HUQuickControlInteractiveView> {

	BOOL _userInteractionActive;
	id<HUQuickControlColorPickerViewInteractionDelegate> _interactionDelegate;
	HUQuickControlColorViewProfile* _profile;
	unsigned long long _reachabilityState;
	unsigned long long _colorPickerMode;
	double _magnifierLength;
	unsigned long long _mirroringAxisBias;
	HUColorWheelView* _colorWheelView;
	HUQuickControlMagnifierView* _magnifierView;
	UILongPressGestureRecognizer* _gestureRecognizer;
	double _touchDownTimestamp;
	CGSize _selectedColorCoordinate;
	UIEdgeInsets _selectedColor;

}

@property (assign,nonatomic) unsigned long long mirroringAxisBias;                                                         //@synthesize mirroringAxisBias=_mirroringAxisBias - In the implementation block
@property (nonatomic,readonly) id<HUColorWheelSpace> colorWheelSpace; 
@property (nonatomic,retain) HUColorWheelView * colorWheelView;                                                            //@synthesize colorWheelView=_colorWheelView - In the implementation block
@property (nonatomic,retain) HUQuickControlMagnifierView * magnifierView;                                                  //@synthesize magnifierView=_magnifierView - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * gestureRecognizer;                                             //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (assign,nonatomic) double touchDownTimestamp;                                                                    //@synthesize touchDownTimestamp=_touchDownTimestamp - In the implementation block
@property (assign,nonatomic) CGPoint magnifierLocation; 
@property (assign,nonatomic) CGSize selectedColorCoordinate;                                                               //@synthesize selectedColorCoordinate=_selectedColorCoordinate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets selectedColor;                                                                   //@synthesize selectedColor=_selectedColor - In the implementation block
@property (assign,nonatomic) unsigned long long colorPickerMode;                                                           //@synthesize colorPickerMode=_colorPickerMode - In the implementation block
@property (assign,nonatomic) double wheelHoleRadius; 
@property (assign,nonatomic) double magnifierLength;                                                                       //@synthesize magnifierLength=_magnifierLength - In the implementation block
@property (nonatomic,copy) HUQuickControlColorViewProfile * profile;                                                       //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic,__weak) id<HUQuickControlColorPickerViewInteractionDelegate> interactionDelegate;              //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
@property (assign,getter=isUserInteractionActive,nonatomic) BOOL userInteractionActive;                                    //@synthesize userInteractionActive=_userInteractionActive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id value; 
@property (nonatomic,retain) id secondaryValue; 
@property (assign,nonatomic) unsigned long long reachabilityState;                                                         //@synthesize reachabilityState=_reachabilityState - In the implementation block
-(id)value;
-(void)setValue:(id)arg1 ;
-(HUQuickControlColorViewProfile *)profile;
-(void)setProfile:(HUQuickControlColorViewProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)setInteractionDelegate:(id<HUQuickControlColorPickerViewInteractionDelegate>)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)layoutSubviews;
-(void)setGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)gestureRecognizer;
-(id<HUQuickControlColorPickerViewInteractionDelegate>)interactionDelegate;
-(UIEdgeInsets)selectedColor;
-(void)setSelectedColor:(UIEdgeInsets)arg1 ;
-(void)setColorPickerMode:(unsigned long long)arg1 ;
-(unsigned long long)colorPickerMode;
-(void)_handleGesture:(id)arg1 ;
-(double)touchDownTimestamp;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1 ;
-(id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1 ;
-(void)setUserInteractionActive:(BOOL)arg1 ;
-(unsigned long long)reachabilityState;
-(void)_updateUIForReachabilityState:(unsigned long long)arg1 ;
-(void)setReachabilityState:(unsigned long long)arg1 ;
-(BOOL)isUserInteractionActive;
-(double)wheelHoleRadius;
-(id<HUColorWheelSpace>)colorWheelSpace;
-(void)setWheelHoleRadius:(double)arg1 ;
-(void)setMagnifierLength:(double)arg1 ;
-(id)_colorWheelSpaceForMode:(unsigned long long)arg1 ;
-(void)setColorWheelView:(HUColorWheelView *)arg1 ;
-(HUColorWheelView *)colorWheelView;
-(void)setMagnifierView:(HUQuickControlMagnifierView *)arg1 ;
-(HUQuickControlMagnifierView *)magnifierView;
-(void)_updateMagnifierPosition;
-(void)_updateMagnifierView;
-(double)magnifierLength;
-(void)_updateMirroringAxisBiasIfNecessary;
-(void)_updateMagnifierTransformForTouchLocation:(CGPoint)arg1 ;
-(void)_setColorPickerMode:(unsigned long long)arg1 notifyDelegate:(BOOL)arg2 ;
-(void)_applyMirroringAxisBiasToColorWheelSpaceIfNecessary;
-(void)_updateDerivedSelectedColorCoordinate;
-(void)setSelectedColorCoordinate:(CGSize)arg1 ;
-(CGSize)selectedColorCoordinate;
-(void)setMagnifierLocation:(CGPoint)arg1 ;
-(unsigned long long)mirroringAxisBias;
-(void)setMirroringAxisBias:(unsigned long long)arg1 ;
-(void)setTouchDownTimestamp:(double)arg1 ;
-(CGPoint)magnifierLocation;
@end

