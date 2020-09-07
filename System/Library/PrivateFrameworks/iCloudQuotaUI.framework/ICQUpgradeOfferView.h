/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCloudQuotaUI/iCloudQuotaUI-Structs.h>
#import <iCloudQuotaUI/ICQPageView.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol ICQPageDelegate;
@class _ICQUpgradeOfferPageSpecification, UIColor, UIImageView, UILabel, _ICQTextView, UIButton, UIActivityIndicatorView, ICQLink, UIScrollView, UIView, UIVisualEffectView, UILayoutGuide, NSArray, UIFont, NSString;

@interface ICQUpgradeOfferView : ICQPageView <UITextViewDelegate, UIScrollViewDelegate> {

	_ICQUpgradeOfferPageSpecification* _upgradeOfferPageSpecification;
	long long _upgradeMode;
	UIColor* _buttonTintColor;
	id<ICQPageDelegate> _delegate;
	UIImageView* _iconView;
	UILabel* _titleLabel;
	_ICQTextView* _messageView;
	_ICQTextView* _fineprintView;
	UIButton* _purchaseButton;
	UIButton* _purchase2Button;
	UIButton* _bottomButton;
	UIActivityIndicatorView* _spinner;
	ICQLink* _purchaseLink;
	ICQLink* _purchase2Link;
	ICQLink* _bottomLink;
	UIScrollView* _scrollView;
	UIView* _contentView;
	UIView* _headerView;
	UIView* _footerView;
	UIView* _trayView;
	UIVisualEffectView* _blurBackdrop;
	UILayoutGuide* _scrollVisibleLayoutGuide;
	UILayoutGuide* _aboveSpinnerLayoutGuide;
	UILayoutGuide* _belowSpinnerLayoutGuide;
	NSArray* _activeConstraints;

}

@property (nonatomic,readonly) ICQLink * purchaseLink;                                                       //@synthesize purchaseLink=_purchaseLink - In the implementation block
@property (nonatomic,readonly) ICQLink * purchase2Link;                                                      //@synthesize purchase2Link=_purchase2Link - In the implementation block
@property (nonatomic,readonly) ICQLink * bottomLink;                                                         //@synthesize bottomLink=_bottomLink - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;                                                    //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                                                         //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) UIView * headerView;                                                          //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,readonly) UIView * footerView;                                                          //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,readonly) UIView * trayView;                                                            //@synthesize trayView=_trayView - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * blurBackdrop;                                            //@synthesize blurBackdrop=_blurBackdrop - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * scrollVisibleLayoutGuide;                                     //@synthesize scrollVisibleLayoutGuide=_scrollVisibleLayoutGuide - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * aboveSpinnerLayoutGuide;                                      //@synthesize aboveSpinnerLayoutGuide=_aboveSpinnerLayoutGuide - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * belowSpinnerLayoutGuide;                                      //@synthesize belowSpinnerLayoutGuide=_belowSpinnerLayoutGuide - In the implementation block
@property (nonatomic,retain) NSArray * activeConstraints;                                                    //@synthesize activeConstraints=_activeConstraints - In the implementation block
@property (nonatomic,readonly) UIFont * titleFont; 
@property (nonatomic,readonly) UIFont * messageFont; 
@property (nonatomic,readonly) UIFont * purchaseButtonFont; 
@property (nonatomic,readonly) UIFont * linkButtonFont; 
@property (nonatomic,readonly) UIFont * fineprintFont; 
@property (nonatomic,readonly) UIColor * fineprintColor; 
@property (nonatomic,retain) _ICQUpgradeOfferPageSpecification * upgradeOfferPageSpecification; 
@property (nonatomic,copy) UIColor * buttonTintColor;                                                        //@synthesize buttonTintColor=_buttonTintColor - In the implementation block
@property (assign,nonatomic) long long upgradeMode;                                                          //@synthesize upgradeMode=_upgradeMode - In the implementation block
@property (assign,nonatomic,__weak) id<ICQPageDelegate> delegate;                                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                                                         //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) _ICQTextView * messageView;                                                     //@synthesize messageView=_messageView - In the implementation block
@property (nonatomic,retain) _ICQTextView * fineprintView;                                                   //@synthesize fineprintView=_fineprintView - In the implementation block
@property (nonatomic,retain) UIButton * purchaseButton;                                                      //@synthesize purchaseButton=_purchaseButton - In the implementation block
@property (nonatomic,retain) UIButton * purchase2Button;                                                     //@synthesize purchase2Button=_purchase2Button - In the implementation block
@property (nonatomic,retain) UIButton * bottomButton;                                                        //@synthesize bottomButton=_bottomButton - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                                              //@synthesize spinner=_spinner - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<ICQPageDelegate>)delegate;
-(void)setDelegate:(id<ICQPageDelegate>)arg1 ;
-(UIView *)contentView;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIView *)headerView;
-(UIScrollView *)scrollView;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(UIFont *)titleFont;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(id)_buttons;
-(UIView *)footerView;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
-(void)_updateTrayVisibility;
-(NSArray *)activeConstraints;
-(void)setActiveConstraints:(NSArray *)arg1 ;
-(UIFont *)messageFont;
-(_ICQTextView *)messageView;
-(void)setMessageView:(_ICQTextView *)arg1 ;
-(void)setButtonTintColor:(UIColor *)arg1 ;
-(UIColor *)buttonTintColor;
-(id)messageParagraphStyle;
-(ICQLink *)bottomLink;
-(id)defaultButtonColor;
-(ICQLink *)purchaseLink;
-(ICQLink *)purchase2Link;
-(void)setUpgradeMode:(long long)arg1 ;
-(id)horizontalConstraintsForView:(id)arg1 margin:(double)arg2 ;
-(long long)_styleOfView:(id)arg1 ;
-(_ICQUpgradeOfferPageSpecification *)upgradeOfferPageSpecification;
-(UIFont *)purchaseButtonFont;
-(UIFont *)linkButtonFont;
-(id)_makePurchaseButton;
-(void)purchaseButtonTapped:(id)arg1 ;
-(id)_makeLinkButton;
-(void)purchase2ButtonTapped:(id)arg1 ;
-(void)bottomButtonTapped:(id)arg1 ;
-(UIFont *)fineprintFont;
-(UIColor *)fineprintColor;
-(void)_setButtonTintColor:(id)arg1 ;
-(void)_setButton:(id)arg1 backgroundColor:(id)arg2 ;
-(void)_setLinkTextColor:(id)arg1 ;
-(id)messageTextColor;
-(id)fineprintParagraphStyle;
-(id)_imageForGenericCloud;
-(id)_imageForBundleIdentifier:(id)arg1 ;
-(id)messageAttributes;
-(id)fineprintAttributes;
-(id)_constraintsForView:(id)arg1 equalToView:(id)arg2 ;
-(double)_marginForButton:(id)arg1 ;
-(id)_anchorForLowerView:(id)arg1 ;
-(id)_anchorForUpperView:(id)arg1 ;
-(double)_spacingFromUpperView:(id)arg1 toLowerView:(id)arg2 ;
-(void)flashScrollIndicatorsIfNeeded;
-(void)setUpgradeOfferPageSpecification:(_ICQUpgradeOfferPageSpecification *)arg1 ;
-(long long)upgradeMode;
-(_ICQTextView *)fineprintView;
-(void)setFineprintView:(_ICQTextView *)arg1 ;
-(UIButton *)purchaseButton;
-(void)setPurchaseButton:(UIButton *)arg1 ;
-(UIButton *)purchase2Button;
-(void)setPurchase2Button:(UIButton *)arg1 ;
-(UIButton *)bottomButton;
-(void)setBottomButton:(UIButton *)arg1 ;
-(UIView *)trayView;
-(UIVisualEffectView *)blurBackdrop;
-(UILayoutGuide *)scrollVisibleLayoutGuide;
-(UILayoutGuide *)aboveSpinnerLayoutGuide;
-(UILayoutGuide *)belowSpinnerLayoutGuide;
@end
