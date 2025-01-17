/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_UIScrollViewLayoutObserver.h>
#import <libobjc.A.dylib/SFAutomaticPasswordScrollViewContentViewLayoutObserver.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UIScrollView, SFAutomaticPasswordScrollViewContentView, UIImageView, NSLayoutConstraint, NSArray, UILayoutGuide, UILabel, UIButton, NSString;

@interface SFAutomaticPasswordExplanationView : UIView <_UIScrollViewLayoutObserver, SFAutomaticPasswordScrollViewContentViewLayoutObserver, UIScrollViewDelegate> {

	BOOL _isPad;
	long long _keyboardType;
	UIScrollView* _scrollView;
	SFAutomaticPasswordScrollViewContentView* _scrollableContentView;
	UIImageView* _shadowImageView;
	NSLayoutConstraint* _strongPasswordButtonWidthConstraint;
	NSLayoutConstraint* _strongPasswordButtonHeightConstraint;
	NSLayoutConstraint* _useCustomPasswordButtonWidthConstraint;
	NSLayoutConstraint* _useCustomPasswordBaselineToBottomConstraint;
	NSArray* _wideShadowImageViewConstraints;
	NSArray* _narrowShadowImageViewConstraints;
	UILayoutGuide* _contentLayoutGuide;
	NSLayoutConstraint* _contentLayoutGuideBottomConstraint;
	UILayoutGuide* _scrollableContentCenterLayoutGuide;
	BOOL _requiresWideAppearance;
	double _wideContentMaximumPadding;
	NSLayoutConstraint* _wideContentLeadingConstraint;
	NSLayoutConstraint* _wideContentTrailingConstraint;
	NSLayoutConstraint* _narrowContentLeadingConstraint;
	NSLayoutConstraint* _narrowContentTrailingConstraint;
	NSLayoutConstraint* _iPadWidthConstraint;
	BOOL _scrollViewNeedsShadowCachedValue;
	UILabel* _explanationLabel;
	UILabel* _passwordRetrievalExpalantionLabel;
	UIButton* _useStrongPasswordButton;
	UIButton* _useOtherPasswordButton;
	long long _keyboardAppearance;

}

@property (nonatomic,readonly) UILabel * explanationLabel;                               //@synthesize explanationLabel=_explanationLabel - In the implementation block
@property (nonatomic,readonly) UILabel * passwordRetrievalExpalantionLabel;              //@synthesize passwordRetrievalExpalantionLabel=_passwordRetrievalExpalantionLabel - In the implementation block
@property (nonatomic,readonly) UIButton * useStrongPasswordButton;                       //@synthesize useStrongPasswordButton=_useStrongPasswordButton - In the implementation block
@property (nonatomic,readonly) UIButton * useOtherPasswordButton;                        //@synthesize useOtherPasswordButton=_useOtherPasswordButton - In the implementation block
@property (assign,nonatomic) long long keyboardAppearance;                               //@synthesize keyboardAppearance=_keyboardAppearance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(void)updateConstraints;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)safeAreaInsetsDidChange;
-(void)setKeyboardAppearance:(long long)arg1 ;
-(long long)keyboardAppearance;
-(void)_scrollViewDidLayoutSubviews:(id)arg1 ;
-(id)initWithKeyboardType:(long long)arg1 ;
-(void)_createSubviews;
-(UIButton *)useStrongPasswordButton;
-(UIButton *)useOtherPasswordButton;
-(void)automaticPasswordScrollContentViewDidLayout:(id)arg1 ;
-(void)_createLayoutConstraints;
-(void)_updateTextAndButtonColor;
-(void)_updateStrongPasswordHeightConstraint;
-(void)_updateWideAppearanceRequirement;
-(void)_updateMaximumPadding;
-(void)_updateContentLayoutGuideBottomConstraint;
-(void)_updateUseCustomPasswordBaselineToBottomConstraint;
-(BOOL)_scrollViewNeedsShadow:(BOOL)arg1 ;
-(void)_updateShadowViewAlpha;
-(UILabel *)explanationLabel;
-(UILabel *)passwordRetrievalExpalantionLabel;
@end

