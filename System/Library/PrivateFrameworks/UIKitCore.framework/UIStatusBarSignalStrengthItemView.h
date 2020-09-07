/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIStatusBarItemView.h>

@interface UIStatusBarSignalStrengthItemView : UIStatusBarItemView {

	int _signalStrengthRaw;
	int _signalStrengthBars;
	BOOL _enableRSSI;
	BOOL _showRSSI;
	BOOL _showFailure;
	BOOL _useSmallBars;

}
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)accessibilityHUDRepresentation;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(id)contentsImage;
-(double)extraRightPadding;
-(double)extraLeftPadding;
-(id)_stringForRSSI;
-(BOOL)_updateWithRaw:(int)arg1 bars:(int)arg2 enableRSSI:(BOOL)arg3 showFailure:(BOOL)arg4 useSmallBars:(BOOL)arg5 ;
-(id)_signalStrengthBarsImageName;
@end
