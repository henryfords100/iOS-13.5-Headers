/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class NSArray;

@interface HKQuantitySeriesTableViewCell : UITableViewCell {

	NSArray* _currentConstraints;

}

@property (nonatomic,retain) NSArray * currentConstraints;              //@synthesize currentConstraints=_currentConstraints - In the implementation block
+(id)reuseIdentifier;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSArray *)currentConstraints;
-(void)setCurrentConstraints:(NSArray *)arg1 ;
-(id)_makeConstraints;
-(void)_configureLabels;
-(void)_configureLayoutForTraitCollection:(id)arg1 ;
-(id)_makeAccessibilityConstraints;
@end

