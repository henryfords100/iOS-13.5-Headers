/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUIFavoriteBannerLayout, UIView, NSArray, VUILabel;

@interface VUIFavoriteBannerView : UIView {

	VUIFavoriteBannerLayout* _layout;
	UIView* _backgroundView;
	NSArray* _backgroundImageLogos;
	VUILabel* _titleLabel;
	VUILabel* _subtitleLabel;

}

@property (nonatomic,retain) VUIFavoriteBannerLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                       //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) NSArray * backgroundImageLogos;                //@synthesize backgroundImageLogos=_backgroundImageLogos - In the implementation block
@property (nonatomic,retain) VUILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) VUILabel * subtitleLabel;                      //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
-(VUIFavoriteBannerLayout *)layout;
-(void)setLayout:(VUIFavoriteBannerLayout *)arg1 ;
-(VUILabel *)titleLabel;
-(UIView *)backgroundView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)setSubtitleLabel:(VUILabel *)arg1 ;
-(VUILabel *)subtitleLabel;
-(void)prepareForCellReuse;
-(CGSize)_layoutSubviewsWithSize:(CGSize)arg1 computationOnly:(BOOL)arg2 ;
-(NSArray *)backgroundImageLogos;
-(CGSize)imageSizeForBannerStyle:(unsigned long long)arg1 ;
-(void)setBackgroundImageLogos:(NSArray *)arg1 ;
-(id)_generateSiderowImagePointsForSize:(CGSize)arg1 ;
-(id)_generateSingleRowImagePoints;
-(id)_generatePlainWeaveImagePointsForSize:(CGSize)arg1 ;
-(id)_generatePointsForPlainWeaveSide:(double)arg1 containerRect:(CGRect)arg2 imageSize:(CGSize)arg3 direction:(unsigned long long)arg4 ;
@end

