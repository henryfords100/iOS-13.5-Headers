/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMailUI/MobileMailUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface SeparatorLayer : UIView {

	UIColor* _tintColor;
	unsigned long long _axis;

}

@property (nonatomic,retain) UIColor * tintColor;                  //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,nonatomic) unsigned long long axis;              //@synthesize axis=_axis - In the implementation block
+(double)separatorHeight;
-(unsigned long long)axis;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setAxis:(unsigned long long)arg1 ;
@end
