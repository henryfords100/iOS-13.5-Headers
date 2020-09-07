/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBUIBackgroundStyleTransitioning <NSObject>
@property (assign,nonatomic) long long backgroundStyle; 
@property (getter=isTransitioningBackgroundStyle,nonatomic,readonly) BOOL transitioningBackgroundStyle; 
@required
-(void)setBackgroundStyle:(long long)arg1;
-(long long)backgroundStyle;
-(void)beginTransitionToBackgroundStyle:(long long)arg1;
-(void)completeTransitionToBackgroundStyle:(long long)arg1;
-(void)updateBackgroundStyleTransitionProgress:(double)arg1;
-(BOOL)isTransitioningBackgroundStyle;

@end
