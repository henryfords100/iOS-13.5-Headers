/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIButton.h>

@class NSString, TLKEmbossedLabel, UIButton;

@interface SearchUIOfferButtonView : UIButton {

	NSString* _offerTitle;
	NSString* _symbolImageName;
	TLKEmbossedLabel* _label;
	UIButton* _button;

}

@property (nonatomic,retain) TLKEmbossedLabel * label;                    //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIButton * button;                           //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) NSString * offerTitle;                       //@synthesize offerTitle=_offerTitle - In the implementation block
@property (assign,nonatomic) BOOL adjustsFontSizeToFitWidth; 
@property (nonatomic,retain) NSString * symbolImageName;                  //@synthesize symbolImageName=_symbolImageName - In the implementation block
-(id)init;
-(void)setLabel:(TLKEmbossedLabel *)arg1 ;
-(TLKEmbossedLabel *)label;
-(UIButton *)button;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)didMoveToWindow;
-(BOOL)adjustsFontSizeToFitWidth;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setButton:(UIButton *)arg1 ;
-(NSString *)symbolImageName;
-(void)setSymbolImageName:(NSString *)arg1 ;
-(void)setOfferTitle:(NSString *)arg1 ;
-(NSString *)offerTitle;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(void)updateSelectionState:(BOOL)arg1 ;
@end

