/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSControlTableCell.h>

@class UIActivityIndicatorView;

@interface PSSwitchTableCell : PSControlTableCell {

	UIActivityIndicatorView* _activityIndicator;

}

@property (assign,nonatomic) BOOL loading; 
-(void)setValue:(id)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(BOOL)loading;
-(id)controlValue;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(BOOL)canReload;
-(void)reloadWithSpecifier:(id)arg1 animated:(BOOL)arg2 ;
-(void)setCellEnabled:(BOOL)arg1 ;
-(id)newControl;
-(void)setLoading:(BOOL)arg1 ;
@end
