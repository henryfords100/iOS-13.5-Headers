/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXViewportChangeListener.h>
#import <libobjc.A.dylib/SXComponentStyleRenderer.h>

@protocol SXComponentStyleRenderer <NSObject>
@required
-(void)componentVisiblityStateDidChange:(long long)arg1;
-(void)prepareForComponentView:(id)arg1;
-(void)applyComponentStyle;

@end


@protocol SXComponentStyle, SXVideoFillViewFactory, SXImageFillViewFactory, SXGradientFactory, SXRepeatableImageFillViewFactory;
@class SXViewport, SXComponentView, SXGradientFillView, SXImageFillView, SXVideoFillView, SXRepeatableImageFillView, SXLayer, SXShapeLayer, NSString;

@interface SXComponentStyleRenderer : NSObject <SXViewportChangeListener, SXComponentStyleRenderer> {

	BOOL _didRegisterForDynamicBounds;
	id<SXComponentStyle> _componentStyle;
	SXViewport* _viewport;
	id<SXVideoFillViewFactory> _videoFillViewFactory;
	id<SXImageFillViewFactory> _imageFillViewFactory;
	id<SXGradientFactory> _gradientFactory;
	id<SXRepeatableImageFillViewFactory> _repeatableImageFillViewFactory;
	SXComponentView* _componentView;
	SXGradientFillView* _gradientFillView;
	SXImageFillView* _imageFillView;
	SXVideoFillView* _videoFillView;
	SXRepeatableImageFillView* _repeatableImageFillView;
	SXLayer* _shadowLayer;
	SXShapeLayer* _borderLayer;
	SXShapeLayer* _topBorderLayer;
	SXShapeLayer* _rightBorderLayer;
	SXShapeLayer* _bottomBorderLayer;
	SXShapeLayer* _leftBorderLayer;

}

@property (nonatomic,readonly) id<SXComponentStyle> componentStyle;                                              //@synthesize componentStyle=_componentStyle - In the implementation block
@property (nonatomic,readonly) SXViewport * viewport;                                                            //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,readonly) id<SXVideoFillViewFactory> videoFillViewFactory;                                  //@synthesize videoFillViewFactory=_videoFillViewFactory - In the implementation block
@property (nonatomic,readonly) id<SXImageFillViewFactory> imageFillViewFactory;                                  //@synthesize imageFillViewFactory=_imageFillViewFactory - In the implementation block
@property (nonatomic,readonly) id<SXGradientFactory> gradientFactory;                                            //@synthesize gradientFactory=_gradientFactory - In the implementation block
@property (nonatomic,readonly) id<SXRepeatableImageFillViewFactory> repeatableImageFillViewFactory;              //@synthesize repeatableImageFillViewFactory=_repeatableImageFillViewFactory - In the implementation block
@property (nonatomic,__weak,readonly) SXComponentView * componentView;                                           //@synthesize componentView=_componentView - In the implementation block
@property (nonatomic,retain) SXGradientFillView * gradientFillView;                                              //@synthesize gradientFillView=_gradientFillView - In the implementation block
@property (nonatomic,retain) SXImageFillView * imageFillView;                                                    //@synthesize imageFillView=_imageFillView - In the implementation block
@property (nonatomic,retain) SXVideoFillView * videoFillView;                                                    //@synthesize videoFillView=_videoFillView - In the implementation block
@property (nonatomic,retain) SXRepeatableImageFillView * repeatableImageFillView;                                //@synthesize repeatableImageFillView=_repeatableImageFillView - In the implementation block
@property (assign,nonatomic) BOOL didRegisterForDynamicBounds;                                                   //@synthesize didRegisterForDynamicBounds=_didRegisterForDynamicBounds - In the implementation block
@property (nonatomic,retain) SXLayer * shadowLayer;                                                              //@synthesize shadowLayer=_shadowLayer - In the implementation block
@property (nonatomic,retain) SXShapeLayer * borderLayer;                                                         //@synthesize borderLayer=_borderLayer - In the implementation block
@property (nonatomic,retain) SXShapeLayer * topBorderLayer;                                                      //@synthesize topBorderLayer=_topBorderLayer - In the implementation block
@property (nonatomic,retain) SXShapeLayer * rightBorderLayer;                                                    //@synthesize rightBorderLayer=_rightBorderLayer - In the implementation block
@property (nonatomic,retain) SXShapeLayer * bottomBorderLayer;                                                   //@synthesize bottomBorderLayer=_bottomBorderLayer - In the implementation block
@property (nonatomic,retain) SXShapeLayer * leftBorderLayer;                                                     //@synthesize leftBorderLayer=_leftBorderLayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(SXViewport *)viewport;
-(SXComponentView *)componentView;
-(void)setShadowLayer:(SXLayer *)arg1 ;
-(SXLayer *)shadowLayer;
-(SXShapeLayer *)borderLayer;
-(void)setBorderLayer:(SXShapeLayer *)arg1 ;
-(void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(CGRect)arg2 ;
-(void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2 ;
-(id<SXComponentStyle>)componentStyle;
-(void)componentVisiblityStateDidChange:(long long)arg1 ;
-(void)prepareForComponentView:(id)arg1 ;
-(void)applyComponentStyle;
-(id<SXGradientFactory>)gradientFactory;
-(id<SXImageFillViewFactory>)imageFillViewFactory;
-(id<SXVideoFillViewFactory>)videoFillViewFactory;
-(id<SXRepeatableImageFillViewFactory>)repeatableImageFillViewFactory;
-(id)initWithComponentStyle:(id)arg1 viewport:(id)arg2 imageFillViewFactory:(id)arg3 videoFillViewFactory:(id)arg4 gradientViewFactory:(id)arg5 repeatableImageFillViewFactory:(id)arg6 ;
-(SXGradientFillView *)gradientFillView;
-(SXImageFillView *)imageFillView;
-(SXVideoFillView *)videoFillView;
-(SXRepeatableImageFillView *)repeatableImageFillView;
-(SXShapeLayer *)topBorderLayer;
-(SXShapeLayer *)rightBorderLayer;
-(SXShapeLayer *)bottomBorderLayer;
-(SXShapeLayer *)leftBorderLayer;
-(void)applyCornerRadius:(double)arg1 cornerMask:(unsigned long long)arg2 curve:(id)arg3 onView:(id)arg4 ;
-(void)prepareShadow:(id)arg1 ;
-(void)prepareFill:(id)arg1 ;
-(void)prepareBorder:(id)arg1 ;
-(void)applyMask:(id)arg1 ;
-(void)applyBorder:(id)arg1 ;
-(void)applyBackgroundColor:(id)arg1 ;
-(void)applyOpacity:(double)arg1 ;
-(void)applyFill:(id)arg1 ;
-(void)applyShadow:(id)arg1 ;
-(id)viewForFill:(id)arg1 ;
-(BOOL)didRegisterForDynamicBounds;
-(void)setDidRegisterForDynamicBounds:(BOOL)arg1 ;
-(void)setTopBorderLayer:(SXShapeLayer *)arg1 ;
-(void)setRightBorderLayer:(SXShapeLayer *)arg1 ;
-(void)setBottomBorderLayer:(SXShapeLayer *)arg1 ;
-(void)setLeftBorderLayer:(SXShapeLayer *)arg1 ;
-(void)applyStrokeStyle:(id)arg1 borderLayer:(id)arg2 path:(id)arg3 lineWidth:(double)arg4 ;
-(id)videoPlayerViewForFill:(id)arg1 ;
-(id)imageViewForFill:(id)arg1 ;
-(id)gradientViewForFill:(id)arg1 ;
-(id)repeatableImageFillViewForFill:(id)arg1 ;
-(void)setGradientFillView:(SXGradientFillView *)arg1 ;
-(void)setImageFillView:(SXImageFillView *)arg1 ;
-(void)setVideoFillView:(SXVideoFillView *)arg1 ;
-(void)setRepeatableImageFillView:(SXRepeatableImageFillView *)arg1 ;
@end

