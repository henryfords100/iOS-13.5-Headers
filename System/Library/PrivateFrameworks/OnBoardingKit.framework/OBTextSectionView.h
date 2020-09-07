/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIStackView.h>

@class UILabel;

@interface OBTextSectionView : UIStackView {

	UILabel* _headerLabel;
	UILabel* _contentLabel;

}

@property (nonatomic,retain) UILabel * headerLabel;               //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) UILabel * contentLabel;              //@synthesize contentLabel=_contentLabel - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithHeader:(id)arg1 content:(id)arg2 ;
-(void)addAccessoryButton:(id)arg1 ;
-(id)_headerFont;
-(void)setHeaderLabel:(UILabel *)arg1 ;
-(UILabel *)headerLabel;
-(void)setContentLabel:(UILabel *)arg1 ;
-(UILabel *)contentLabel;
-(id)_contentFont;
@end
