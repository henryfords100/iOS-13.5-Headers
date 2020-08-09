/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/_TVBgImageLoadingViewController.h>

@class IKViewElement, VUIUpsellOfferView, UIScrollView, VUIUpsellOfferTransactionView;

@interface VUIUpsellOfferViewController : _TVBgImageLoadingViewController {

	IKViewElement* _viewElement;
	VUIUpsellOfferView* _upsellView;
	UIScrollView* _scrollView;
	VUIUpsellOfferTransactionView* _transactionView;

}

@property (nonatomic,retain) IKViewElement * viewElement;                                  //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) VUIUpsellOfferView * upsellView;                              //@synthesize upsellView=_upsellView - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                    //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) VUIUpsellOfferTransactionView * transactionView;              //@synthesize transactionView=_transactionView - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(VUIUpsellOfferTransactionView *)transactionView;
-(void)updateWithViewElement:(id)arg1 ;
-(long long)_overrideLargeTitleDisplayMode;
-(VUIUpsellOfferView *)upsellView;
-(void)setTransactionView:(VUIUpsellOfferTransactionView *)arg1 ;
-(void)setUpsellView:(VUIUpsellOfferView *)arg1 ;
-(void)_iOS_updateViews;
@end
