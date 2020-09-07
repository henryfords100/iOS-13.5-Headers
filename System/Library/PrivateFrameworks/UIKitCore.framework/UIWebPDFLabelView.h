/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, _UIBackdropView, NSTimer;

@interface UIWebPDFLabelView : UIView {

	UILabel* _label;
	_UIBackdropView* _backdropView;
	NSTimer* _timer;
	unsigned long long currentPageIndex;

}

@property (getter=isTimerInstalled,nonatomic,readonly) BOOL timerInstalled; 
@property (assign,nonatomic) unsigned long long currentPageIndex; 
-(void)dealloc;
-(void)setText:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)sizeToFit;
-(void)clearTimer;
-(double)_fadeOutDuration;
-(void)fadeOut;
-(BOOL)isTimerInstalled;
-(unsigned long long)currentPageIndex;
-(void)setCurrentPageIndex:(unsigned long long)arg1 ;
-(void)showNowInSuperView:(id)arg1 atOrigin:(CGPoint)arg2 withText:(id)arg3 animated:(BOOL)arg4 ;
-(void)_makeRoundedCorners;
-(double)_fadeOutDelay;
-(void)_fadeOutAnimationDidStop;
@end
