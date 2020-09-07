/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, CNGeminiBadge;

@interface TSCellularPlanUsesTableViewCell : UITableViewCell {

	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	CNGeminiBadge* _badge;

}

@property (retain) CNGeminiBadge * badge;                   //@synthesize badge=_badge - In the implementation block
@property (retain) UILabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (retain) UILabel * descriptionLabel;              //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
-(void)setBadge:(CNGeminiBadge *)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(UILabel *)descriptionLabel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CNGeminiBadge *)badge;
-(void)setLabel:(id)arg1 description:(id)arg2 badge:(id)arg3 ;
@end
