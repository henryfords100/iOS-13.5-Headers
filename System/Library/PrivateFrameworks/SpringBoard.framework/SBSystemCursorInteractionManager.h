/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/_UICursorInteractionDelegate.h>

@class _UICursorInteraction, NSMapTable, UIWindow, UIView, NSString;

@interface SBSystemCursorInteractionManager : NSObject <_UICursorInteractionDelegate> {

	_UICursorInteraction* _cursorInteraction;
	NSMapTable* _registeredViewsToDelegates;
	UIWindow* _window;
	UIView* _activeCursorRegionView;

}

@property (nonatomic,readonly) UIWindow * window;                            //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) UIView * activeCursorRegionView;              //@synthesize activeCursorRegionView=_activeCursorRegionView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIWindow *)window;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(void)cursorInteraction:(id)arg1 willEnterRegion:(id)arg2 withAnimator:(id)arg3 ;
-(void)cursorInteraction:(id)arg1 willExitRegion:(id)arg2 withAnimator:(id)arg3 ;
-(void)registerView:(id)arg1 delegate:(id)arg2 ;
-(void)unregisterView:(id)arg1 ;
-(id)initWithCursorInteractionWindow:(id)arg1 ;
-(UIView *)activeCursorRegionView;
@end
