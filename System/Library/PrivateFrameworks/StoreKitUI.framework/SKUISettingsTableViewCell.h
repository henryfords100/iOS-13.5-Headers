/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIImageView, SKUISettingDescriptionView;

@interface SKUISettingsTableViewCell : UITableViewCell {

	UIEdgeInsets _contentInset;
	UIImageView* _disclosureChevron;
	BOOL _hasDisclosureChevron;
	SKUISettingDescriptionView* _settingDescriptionView;

}

@property (nonatomic,readonly) SKUISettingDescriptionView * settingDescriptionView; 
-(void)prepareForReuse;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(void)displaySettingDescriptionView:(id)arg1 ;
-(SKUISettingDescriptionView *)settingDescriptionView;
@end

