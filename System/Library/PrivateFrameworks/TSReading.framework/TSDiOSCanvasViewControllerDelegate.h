/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDiOSCanvasViewControllerDelegate <NSObject>
@optional
-(id)viewForGestureRecognizer:(id)arg1;
-(BOOL)allowTouchOutsideCanvasView:(id)arg1 forGesture:(id)arg2;
-(BOOL)shouldIgnoreTextGestures;
-(Class)canvasViewClassOverride;
-(BOOL)isPopoverGestureInFlight;
-(BOOL)allowEditMenuToAppear;
-(BOOL)inFindReplaceMode;
-(void)handleFindTapAtPoint:(CGPoint)arg1;
-(BOOL)canvasViewController:(id)arg1 shouldBeginTapHoldDragAtPoint:(CGPoint)arg2;
-(BOOL)canvasViewControllerShouldShowScaleFeedback:(id)arg1;
-(id)backgroundColorForDragUIPlatter;
-(BOOL)canvasViewController:(id)arg1 enableSwipeGestureWithNumberOfTouches:(unsigned long long)arg2;
-(id)viewControllerForPresentingAnnotationAuthorUI;

@end
