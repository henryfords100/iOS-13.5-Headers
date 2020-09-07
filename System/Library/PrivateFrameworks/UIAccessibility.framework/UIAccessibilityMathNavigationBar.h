/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIAccessibility/UIAccessibility-Structs.h>
#import <UIKitCore/UINavigationBar.h>

@class UIView;

@interface UIAccessibilityMathNavigationBar : UINavigationBar {

	UIView* _titleView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(id)_popNavigationItemWithTransition:(int)arg1 ;
-(void)_pushNavigationItem:(id)arg1 transition:(int)arg2 ;
@end
