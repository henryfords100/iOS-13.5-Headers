/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFLActionUserInterface <NSObject>
@optional
-(void)action:(id)arg1 requiresContinuingInAppWithProceedHandler:(/*^block*/id)arg2;
-(void)handleIntentAction:(id)arg1 requiresUserConfirmation:(BOOL)arg2 requiresUserAuthentication:(BOOL)arg3 withIntentResponse:(id)arg4 proceedHandler:(/*^block*/id)arg5;
-(void)logDebugInformation:(id)arg1;
-(void)action:(id)arg1 requiresUserConfirmation:(BOOL)arg2 proceedHandler:(/*^block*/id)arg3;
-(void)action:(id)arg1 requiresUserConfirmation:(BOOL)arg2 requiresUserAuthentication:(BOOL)arg3 proceedHandler:(/*^block*/id)arg4;

@end
