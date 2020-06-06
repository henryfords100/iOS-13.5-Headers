/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/JTImageViewRendering.h>

@class JTImage, NSString;

@interface JTImageIOSurfaceView : UIView <JTImageViewRendering> {

	BOOL _flipX;
	BOOL _flipY;
	BOOL _enableDebugDrawing;
	JTImage* _jtImage;
	long long _renderingType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) JTImage * jtImage;                      //@synthesize jtImage=_jtImage - In the implementation block
@property (nonatomic,readonly) long long renderingType;              //@synthesize renderingType=_renderingType - In the implementation block
@property (assign,nonatomic) BOOL flipX;                             //@synthesize flipX=_flipX - In the implementation block
@property (assign,nonatomic) BOOL flipY;                             //@synthesize flipY=_flipY - In the implementation block
@property (assign,nonatomic) BOOL enableDebugDrawing;                //@synthesize enableDebugDrawing=_enableDebugDrawing - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)renderingType;
-(void)setJtImage:(JTImage *)arg1 ;
-(void)setRenderingType:(long long)arg1 ;
-(void)JTImageIOSurfaceView_commonInit;
-(void)updateDebugDrawing;
-(JTImage *)jtImage;
-(BOOL)flipX;
-(void)setFlipX:(BOOL)arg1 ;
-(BOOL)flipY;
-(void)setFlipY:(BOOL)arg1 ;
-(BOOL)enableDebugDrawing;
-(void)setEnableDebugDrawing:(BOOL)arg1 ;
@end
