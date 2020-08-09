/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>
#import <libobjc.A.dylib/CKSearchResultSupplementryCell.h>

@class UISegmentedControl, NSString;

@interface CKPhotosSearchResultsModeHeaderReusableView : UICollectionReusableView <CKSearchResultSupplementryCell> {

	UISegmentedControl* _control;
	UIEdgeInsets marginInsets;

}

@property (nonatomic,retain) UISegmentedControl * control;              //@synthesize control=_control - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) UIEdgeInsets marginInsets; 
+(id)reuseIdentifier;
+(id)supplementaryViewType;
+(double)desiredZPosition;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(void)setControl:(UISegmentedControl *)arg1 ;
-(UISegmentedControl *)control;
-(void)_controlIndexDidChange:(id)arg1 ;
-(UIEdgeInsets)marginInsets;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
@end
