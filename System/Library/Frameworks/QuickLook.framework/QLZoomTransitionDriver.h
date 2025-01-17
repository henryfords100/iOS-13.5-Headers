/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLTransitionDriver.h>

@class UIView;

@interface QLZoomTransitionDriver : QLTransitionDriver {

	UIView* _uncroppedView;

}
+(void)cropView:(id)arg1 toAvoidNavigationOffset:(double)arg2 presenting:(BOOL)arg3 animationDuration:(double)arg4 ;
-(void)tearDown;
-(void)animateTransition;
-(void)animateFinishTransition;
-(void)_performZoomTransition;
@end

