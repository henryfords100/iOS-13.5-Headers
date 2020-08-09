/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRecognition/CoreRecognition-Structs.h>
#import <QuartzCore/CALayer.h>

@class CALayer, CRColor, NSMutableArray, CAShapeLayer;

@interface DiagnosticHUDLayer : CALayer {

	CALayer* _previewLayer;
	CRColor* _freshPointColor;
	CRColor* _stalePointColor;
	NSMutableArray* _pointLayers;
	CAShapeLayer* _cameraAreaLayer;
	CAShapeLayer* _focusIndicatorLayer;
	CAShapeLayer* _focusPointLayer;
	CAShapeLayer* _frameIndicator;
	CGSize _cameraResolution;
	CGRect _previewLayerVisibleRect;

}

@property (retain) CALayer * previewLayer;                          //@synthesize previewLayer=_previewLayer - In the implementation block
@property (assign) CGRect previewLayerVisibleRect;                  //@synthesize previewLayerVisibleRect=_previewLayerVisibleRect - In the implementation block
@property (assign) CGSize cameraResolution;                         //@synthesize cameraResolution=_cameraResolution - In the implementation block
@property (retain) CRColor * freshPointColor;                       //@synthesize freshPointColor=_freshPointColor - In the implementation block
@property (retain) CRColor * stalePointColor;                       //@synthesize stalePointColor=_stalePointColor - In the implementation block
@property (retain) NSMutableArray * pointLayers;                    //@synthesize pointLayers=_pointLayers - In the implementation block
@property (retain) CAShapeLayer * cameraAreaLayer;                  //@synthesize cameraAreaLayer=_cameraAreaLayer - In the implementation block
@property (retain) CAShapeLayer * focusIndicatorLayer;              //@synthesize focusIndicatorLayer=_focusIndicatorLayer - In the implementation block
@property (retain) CAShapeLayer * focusPointLayer;                  //@synthesize focusPointLayer=_focusPointLayer - In the implementation block
@property (retain) CAShapeLayer * frameIndicator;                   //@synthesize frameIndicator=_frameIndicator - In the implementation block
+(id)layer;
-(id)init;
-(void)layoutSublayers;
-(void)setCameraResolution:(CGSize)arg1 ;
-(CGSize)cameraResolution;
-(CALayer *)previewLayer;
-(void)setPreviewLayer:(id)arg1 visibleRect:(CGRect)arg2 cameraResolution:(CGSize)arg3 ;
-(void)refreshFrameIndicator;
-(void)setBoxPoints:(id)arg1 ;
-(void)setAdjustingFocus:(BOOL)arg1 pointOfInterestSupported:(BOOL)arg2 focusPoint:(CGPoint)arg3 ;
-(void)setFreshPointColor:(CRColor *)arg1 ;
-(void)setStalePointColor:(CRColor *)arg1 ;
-(void)setCameraAreaLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)cameraAreaLayer;
-(void)setPointLayers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)pointLayers;
-(void)setFocusIndicatorLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)focusIndicatorLayer;
-(void)setFocusPointLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)focusPointLayer;
-(void)setFrameIndicator:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)frameIndicator;
-(CRColor *)freshPointColor;
-(CRColor *)stalePointColor;
-(void)setPreviewLayer:(CALayer *)arg1 ;
-(void)setPreviewLayerVisibleRect:(CGRect)arg1 ;
-(CGRect)previewLayerVisibleRect;
@end
