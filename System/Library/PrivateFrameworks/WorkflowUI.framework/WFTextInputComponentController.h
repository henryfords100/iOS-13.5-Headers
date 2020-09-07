/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <ComponentKit/CKStatefulViewComponentController.h>
#import <libobjc.A.dylib/WFTextTokenEditorViewDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@class WFVariableEditingContext, NSString;

@interface WFTextInputComponentController : CKStatefulViewComponentController <WFTextTokenEditorViewDelegate, UITextViewDelegate> {

	WFVariableEditingContext* _editingContext;

}

@property (nonatomic,retain) WFVariableEditingContext * editingContext;              //@synthesize editingContext=_editingContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newStatefulView:(id)arg1 ;
+(void)configureStatefulView:(id)arg1 forComponent:(id)arg2 ;
+(id)contextForNewStatefulView:(id)arg1 ;
-(id)field;
-(void)textDidChange;
-(WFVariableEditingContext *)editingContext;
-(void)setEditingContext:(WFVariableEditingContext *)arg1 ;
-(void)didAcquireStatefulView:(id)arg1 ;
-(void)willRelinquishStatefulView:(id)arg1 ;
-(void)textTokenEditorTextDidBeginEditing:(id)arg1 ;
-(void)textTokenEditorTextDidChange:(id)arg1 ;
-(void)textTokenEditorTextDidEndEditing:(id)arg1 ;
-(void)componentTreeWillAppear;
-(void)componentTreeDidDisappear;
-(void)textDidChangeThrottled;
@end
