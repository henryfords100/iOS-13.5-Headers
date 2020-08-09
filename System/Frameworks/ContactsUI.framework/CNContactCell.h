/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class NSArray, CNCardGroupItem;

@interface CNContactCell : UITableViewCell {

	NSArray* _constantConstraints;
	NSArray* _variableConstraints;
	CNCardGroupItem* _cardGroupItem;

}

@property (nonatomic,readonly) NSArray * constantConstraints; 
@property (nonatomic,readonly) NSArray * variableConstraints; 
@property (nonatomic,readonly) double minCellHeight; 
@property (nonatomic,retain) CNCardGroupItem * cardGroupItem;                           //@synthesize cardGroupItem=_cardGroupItem - In the implementation block
@property (assign,nonatomic) BOOL showSeparator; 
@property (nonatomic,readonly) BOOL hasGapBetweenSeparatorAndTrailingEdge; 
-(void)dealloc;
-(void)prepareForReuse;
-(void)updateConstraints;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSArray *)variableConstraints;
-(double)minCellHeight;
-(BOOL)shouldPerformDefaultAction;
-(void)setCardGroupItem:(CNCardGroupItem *)arg1 ;
-(NSArray *)constantConstraints;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)performDefaultAction;
-(BOOL)shouldPerformAccessoryAction;
-(void)performAccessoryAction;
-(void)setShowSeparator:(BOOL)arg1 ;
-(BOOL)showSeparator;
-(BOOL)hasGapBetweenSeparatorAndTrailingEdge;
-(CNCardGroupItem *)cardGroupItem;
@end
