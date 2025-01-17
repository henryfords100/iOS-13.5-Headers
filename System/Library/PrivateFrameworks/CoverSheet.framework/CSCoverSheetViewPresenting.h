/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CSAppearance, CSBehavior, CSPresentation;


@protocol CSCoverSheetViewPresenting <CSCoverSheetViewControlling,CSActionHandling>
@property (nonatomic,copy,readonly) CSAppearance * activeAppearance; 
@property (nonatomic,copy,readonly) CSBehavior * activeBehavior; 
@property (nonatomic,copy,readonly) CSPresentation * externalPresentation; 
@required
-(CSBehavior *)activeBehavior;
-(CSAppearance *)activeAppearance;
-(void)updateAppearanceForController:(id)arg1;
-(void)updateBehaviorForController:(id)arg1;
-(void)updateAppearanceForController:(id)arg1 withAnimationSettings:(id)arg2 completion:(/*^block*/id)arg3;
-(void)_conformsToCSCoverSheetViewPresenting;
-(CSPresentation *)externalPresentation;

@end

