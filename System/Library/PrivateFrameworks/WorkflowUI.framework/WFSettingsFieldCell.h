/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUI/WFSettingsCell.h>

@class UITextField;

@interface WFSettingsFieldCell : WFSettingsCell {

	UITextField* _textField;
	double _offsetX;

}

@property (nonatomic,__weak,readonly) UITextField * textField;              //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic) double offsetX;                                //@synthesize offsetX=_offsetX - In the implementation block
-(void)layoutSubviews;
-(UITextField *)textField;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(double)offsetX;
-(void)setOffsetX:(double)arg1 ;
@end

