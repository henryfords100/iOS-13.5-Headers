/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <TextInputUI/TUISystemInputAssistantLayout.h>

@interface TUISystemInputAssistantLayoutSplit : TUISystemInputAssistantLayout {

	double _leftSplitWidth;
	double _rightSplitWidth;

}

@property (assign,nonatomic) double leftSplitWidth;               //@synthesize leftSplitWidth=_leftSplitWidth - In the implementation block
@property (assign,nonatomic) double rightSplitWidth;              //@synthesize rightSplitWidth=_rightSplitWidth - In the implementation block
-(id)init;
-(void)setLeftSplitWidth:(double)arg1 ;
-(void)setRightSplitWidth:(double)arg1 ;
-(BOOL)usesUnifiedButtonBar;
-(void)configureButtonBarsInViewSet:(id)arg1 forApplicationAssistantItem:(id)arg2 withSystemAssistantItem:(id)arg3 withAssistantView:(id)arg4 ;
-(void)layoutViewSet:(id)arg1 inBounds:(CGRect)arg2 forAssistantView:(id)arg3 ;
-(double)leftSplitWidth;
-(double)rightSplitWidth;
@end
