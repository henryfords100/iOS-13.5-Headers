/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SBStartupTransitionContext;


@protocol SBStartupTransition
@property (nonatomic,readonly) SBStartupTransitionContext * context; 
@property (nonatomic,readonly) unsigned long long destination; 
@required
-(SBStartupTransitionContext *)context;
-(unsigned long long)destination;

@end
