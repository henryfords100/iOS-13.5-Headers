/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CSPageViewController;


@protocol CSSpotlightPresenting <NSObject>
@property (assign,nonatomic,__weak) CSPageViewController * todayPageViewController; 
@required
-(void)launchSpotlightForSourceViewController:(id)arg1 interactive:(BOOL)arg2;
-(void)setTodayPageViewController:(id)arg1;
-(id)createSpotlightLegiblitySettingsProvider;
-(void)dismissSpotlightWithCompletion:(/*^block*/id)arg1;
-(void)launchSpotlightForSourceViewController:(id)arg1 interactive:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)dismissSpotlight;
-(CSPageViewController *)todayPageViewController;

@end

