/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol WFTriggerTextConfigurationViewControllerDelegate;
@class UITextField;

@interface WFTriggerTextConfigurationViewController : UIViewController {

	id<WFTriggerTextConfigurationViewControllerDelegate> _delegate;
	UITextField* _textField;

}

@property (nonatomic,readonly) UITextField * textField;                                                         //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic,__weak) id<WFTriggerTextConfigurationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<WFTriggerTextConfigurationViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFTriggerTextConfigurationViewControllerDelegate>)arg1 ;
-(UITextField *)textField;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)done:(id)arg1 ;
-(void)cancel:(id)arg1 ;
@end
