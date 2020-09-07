/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionWidget.framework/AppPredictionWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionWidget/AppPredictionWidget-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, CADisplayLink, UIColor;

@interface APWDebugLightView : UIView {

	UIView* _ledView;
	BOOL _ledIsOn;
	long long _blinkHertz;
	CADisplayLink* _blinkDisplayLink;
	UIColor* _ledColor;

}

@property (nonatomic,retain) UIColor * ledColor;              //@synthesize ledColor=_ledColor - In the implementation block
-(void)invalidate;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setLedColor:(UIColor *)arg1 ;
-(void)turnOn;
-(void)turnOff;
-(void)blink:(long long)arg1 ;
-(void)_updateLedOnState;
-(void)_startBlinking;
-(void)_stopBlinking;
-(void)_displayLinkDidUpdate:(id)arg1 ;
-(UIColor *)ledColor;
@end
