/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <TVMLKit/_TVBgImageLoadingViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <libobjc.A.dylib/_TVCollectionViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UICollectionView, IKSectionElement, IKHeaderElement, IKViewElement, VUIListLockupCollectionViewCell, VUICollectionHeaderView, VUICollectionFooterView, VUIOfferListContainerView, NSString;

@interface VUIOfferListTemplateController : _TVBgImageLoadingViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, _TVCollectionViewDelegate, UIGestureRecognizerDelegate> {

	BOOL _requiresRelayout;
	UICollectionView* _collectionView;
	IKSectionElement* _sectionElement;
	IKHeaderElement* _headerElement;
	IKViewElement* _footerElement;
	VUIListLockupCollectionViewCell* _computationCell;
	VUICollectionHeaderView* _computationHeaderView;
	VUICollectionFooterView* _computationFooterView;
	VUIOfferListContainerView* _containerView;

}

@property (nonatomic,retain) UICollectionView * collectionView;                              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) IKSectionElement * sectionElement;                              //@synthesize sectionElement=_sectionElement - In the implementation block
@property (nonatomic,retain) IKHeaderElement * headerElement;                                //@synthesize headerElement=_headerElement - In the implementation block
@property (nonatomic,retain) IKViewElement * footerElement;                                  //@synthesize footerElement=_footerElement - In the implementation block
@property (nonatomic,retain) VUIListLockupCollectionViewCell * computationCell;              //@synthesize computationCell=_computationCell - In the implementation block
@property (nonatomic,retain) VUICollectionHeaderView * computationHeaderView;                //@synthesize computationHeaderView=_computationHeaderView - In the implementation block
@property (nonatomic,retain) VUICollectionFooterView * computationFooterView;                //@synthesize computationFooterView=_computationFooterView - In the implementation block
@property (nonatomic,retain) VUIOfferListContainerView * containerView;                      //@synthesize containerView=_containerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didCancel;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(VUIOfferListContainerView *)containerView;
-(void)setContainerView:(VUIOfferListContainerView *)arg1 ;
-(UICollectionView *)collectionView;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3 ;
-(IKHeaderElement *)headerElement;
-(void)updateWithViewElement:(id)arg1 ;
-(IKViewElement *)footerElement;
-(void)setHeaderElement:(IKHeaderElement *)arg1 ;
-(void)setFooterElement:(IKViewElement *)arg1 ;
-(VUIListLockupCollectionViewCell *)computationCell;
-(void)setComputationCell:(VUIListLockupCollectionViewCell *)arg1 ;
-(VUICollectionHeaderView *)computationHeaderView;
-(void)setComputationHeaderView:(VUICollectionHeaderView *)arg1 ;
-(VUICollectionFooterView *)computationFooterView;
-(void)setComputationFooterView:(VUICollectionFooterView *)arg1 ;
-(IKSectionElement *)sectionElement;
-(void)setSectionElement:(IKSectionElement *)arg1 ;
@end

