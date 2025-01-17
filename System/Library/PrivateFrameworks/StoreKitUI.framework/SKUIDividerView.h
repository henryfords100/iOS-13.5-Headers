/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface SKUIDividerView : UIView {

	long long _dividerOrientation;
	double _dividerSize;

}

@property (nonatomic,retain) UIColor * dividerColor; 
@property (assign,nonatomic) long long dividerOrientation;              //@synthesize dividerOrientation=_dividerOrientation - In the implementation block
@property (assign,nonatomic) double dividerSize;                        //@synthesize dividerSize=_dividerSize - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIColor *)dividerColor;
-(void)setDividerColor:(UIColor *)arg1 ;
-(void)setDividerOrientation:(long long)arg1 ;
-(void)setDividerSize:(double)arg1 ;
-(long long)dividerOrientation;
-(double)dividerSize;
@end

