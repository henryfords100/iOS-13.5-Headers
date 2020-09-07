/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UITouch;


@protocol PKDrawingGestureRecognizerProtocol <NSObject>
@property (nonatomic,readonly) UITouch * drawingTouch; 
@property (assign,nonatomic,__weak) id<PKDrawingGestureRecognizerDelegate> delegate; 
@property (assign,nonatomic,__weak) id<PKDrawingGestureTarget> drawingTarget; 
@required
-(id<PKDrawingGestureRecognizerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)cancel;
-(void)end;
-(id<PKDrawingGestureTarget>)drawingTarget;
-(void)setDrawingTarget:(id)arg1;
-(UITouch *)drawingTouch;

@end
