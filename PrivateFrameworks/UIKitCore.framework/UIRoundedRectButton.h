/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIBezierPath, UIColor;

@interface UIRoundedRectButton : UIButton {

	UIBezierPath* _fillPath;
	UIColor* _fillColor;

}
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTintColor:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(long long)buttonType;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)_canDrawContent;
-(id)initWithFrame:(CGRect)arg1 fillColor:(id)arg2 ;
-(void)_invalidatePaths;
-(void)_updateState;
-(id)_contentBackgroundColor;
@end
