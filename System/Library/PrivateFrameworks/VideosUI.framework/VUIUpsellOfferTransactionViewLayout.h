/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout, VUIButtonLayout;

@interface VUIUpsellOfferTransactionViewLayout : TVViewLayout {

	VUITextLayout* _disclaimerTextLayout;
	VUIButtonLayout* _buttonLayout;

}

@property (nonatomic,readonly) VUITextLayout * disclaimerTextLayout;              //@synthesize disclaimerTextLayout=_disclaimerTextLayout - In the implementation block
@property (nonatomic,readonly) VUIButtonLayout * buttonLayout;                    //@synthesize buttonLayout=_buttonLayout - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
-(id)init;
-(double)buttonHeight;
-(double)buttonSpacing;
-(void)_configureLayout;
-(VUITextLayout *)disclaimerTextLayout;
-(VUIButtonLayout *)buttonLayout;
-(UIEdgeInsets)safeAreaInsetsPhone;
-(UIEdgeInsets)safeAreaInsetsPad;
-(double)disclaimerBottomMargin;
@end
