/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UILabel, UIScrollView;

@interface PKPaymentSetupAboutView : UIView {

	UILabel* _aboutTextLabel;
	UIScrollView* _scrollView;

}

@property (nonatomic,readonly) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(UIScrollView *)scrollView;
-(id)initWithBodyText:(id)arg1 detailButtonText:(id)arg2 ;
-(id)initWithBodyText:(id)arg1 ;
@end

