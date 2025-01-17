/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UIStackView, UILabel, UITextField;

@interface FPUIAuthenticationTextInputCell : UITableViewCell {

	UIStackView* _stackView;
	UILabel* _label;
	UITextField* _textField;

}

@property (nonatomic,__weak,readonly) UILabel * label;                      //@synthesize label=_label - In the implementation block
@property (nonatomic,__weak,readonly) UITextField * textField;              //@synthesize textField=_textField - In the implementation block
-(void)prepareForReuse;
-(UILabel *)label;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UITextField *)textField;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)_isLargeTextTraitCollection:(id)arg1 ;
@end

