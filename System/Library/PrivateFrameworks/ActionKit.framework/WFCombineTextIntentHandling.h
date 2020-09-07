/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFCombineTextIntentHandling <NSObject>
@optional
-(void)confirmCombineText:(id)arg1 completion:(/*^block*/id)arg2;

@required
-(void)handleCombineText:(id)arg1 completion:(/*^block*/id)arg2;
-(void)resolveTextForCombineText:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveSeparatorForCombineText:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveCustomSeparatorForCombineText:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end
