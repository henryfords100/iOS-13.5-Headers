/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXSceneComponentAnimationHandler.h>

@class UIView, SXComponentView;

@interface SXParallaxFadeSceneAnimationHandler : SXSceneComponentAnimationHandler {

	UIView* _overlayView;
	SXComponentView* _headerComponentView;
	double _scrollDistance;
	double _alphaDistance;
	unsigned long long _attachmentType;

}

@property (nonatomic,retain) UIView * overlayView;                               //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) SXComponentView * headerComponentView;              //@synthesize headerComponentView=_headerComponentView - In the implementation block
@property (assign,nonatomic) double scrollDistance;                              //@synthesize scrollDistance=_scrollDistance - In the implementation block
@property (assign,nonatomic) double alphaDistance;                               //@synthesize alphaDistance=_alphaDistance - In the implementation block
@property (assign,nonatomic) unsigned long long attachmentType;                  //@synthesize attachmentType=_attachmentType - In the implementation block
-(void)startAnimation;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)overlayView;
-(unsigned long long)attachmentType;
-(void)finishAnimation;
-(void)setAttachmentType:(unsigned long long)arg1 ;
-(void)prepareAnimation;
-(void)updateAnimationWithFactor:(double)arg1 ;
-(id)componentViewToAnimate;
-(BOOL)shouldFinishAtEndOfScrollView;
-(double)factorForVisibileBounds:(CGRect)arg1 andAbsoluteComponentRect:(CGRect)arg2 ;
-(void)setHeaderComponentView:(SXComponentView *)arg1 ;
-(SXComponentView *)headerComponentView;
-(void)setScrollDistance:(double)arg1 ;
-(void)setAlphaDistance:(double)arg1 ;
-(double)scrollDistance;
-(double)alphaDistance;
@end
