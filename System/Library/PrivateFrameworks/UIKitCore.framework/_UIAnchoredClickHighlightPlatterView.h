/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIHighlightPlatterView.h>

@class _UIMorphingView;

@interface _UIAnchoredClickHighlightPlatterView : _UIHighlightPlatterView {

	_UIMorphingView* _anchorView;

}

@property (assign,nonatomic,__weak) _UIMorphingView * anchorView;              //@synthesize anchorView=_anchorView - In the implementation block
-(id)initWithTargetedPreview:(id)arg1 ;
-(_UIMorphingView *)anchorView;
-(void)setAnchorView:(_UIMorphingView *)arg1 ;
-(void)anchorToContainer;
-(void)deAnchor;
@end

