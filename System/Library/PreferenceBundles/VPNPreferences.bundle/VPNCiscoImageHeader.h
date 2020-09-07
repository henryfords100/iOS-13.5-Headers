/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PreferenceBundles/VPNPreferences.bundle/VPNPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UIImageView;

@interface VPNCiscoImageHeader : UIView <PSHeaderFooterView> {

	UIImageView* _imageView;

}

@property (retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)setImageHidden:(BOOL)arg1 ;
@end
