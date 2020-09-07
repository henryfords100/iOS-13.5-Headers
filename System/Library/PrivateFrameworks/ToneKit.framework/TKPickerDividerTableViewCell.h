/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ToneKit/ToneKit-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIView, UIColor;

@interface TKPickerDividerTableViewCell : UITableViewCell {

	UIView* _dividerView;
	long long _contentBackdropOverlayBlendMode;

}

@property (nonatomic,retain) UIColor * contentBackgroundColor; 
@property (assign,nonatomic) long long contentBackdropOverlayBlendMode;              //@synthesize contentBackdropOverlayBlendMode=_contentBackdropOverlayBlendMode - In the implementation block
-(void)layoutSubviews;
-(void)setSeparatorStyle:(long long)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setContentBackdropOverlayBlendMode:(long long)arg1 ;
-(void)setContentBackgroundColor:(UIColor *)arg1 ;
-(CGRect)_dividerViewFrame;
-(UIColor *)contentBackgroundColor;
-(long long)contentBackdropOverlayBlendMode;
@end
