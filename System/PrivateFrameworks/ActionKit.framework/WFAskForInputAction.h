/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFHandleCustomIntentAction.h>

@class NSString;

@interface WFAskForInputAction : WFHandleCustomIntentAction

@property (nonatomic,readonly) NSString * inputType; 
@property (nonatomic,readonly) NSString * promptText; 
@property (nonatomic,readonly) NSString * defaultAnswer; 
@property (nonatomic,readonly) long long datePickerMode; 
@property (nonatomic,readonly) BOOL immediatelyActivateWatchDictation; 
-(long long)datePickerMode;
-(NSString *)promptText;
-(NSString *)inputType;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(id)outputContentClasses;
-(void)getOutputFromIntentResponse:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)runWithSiriUserInterface:(id)arg1 input:(id)arg2 ;
-(NSString *)defaultAnswer;
-(BOOL)immediatelyActivateWatchDictation;
-(void)finishRunningWithResultText:(id)arg1 ;
-(void)finishRunningWithDate:(id)arg1 ;
@end
