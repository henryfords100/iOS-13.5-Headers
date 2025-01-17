/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PIAdjustmentController.h>

@class NSDictionary;

@interface PIDepthAdjustmentController : PIAdjustmentController

@property (nonatomic,copy) NSDictionary * depthInfo; 
@property (assign,nonatomic) double aperture; 
+(id)depthInfoKey;
+(id)apertureKey;
-(NSDictionary *)depthInfo;
-(void)setAperture:(double)arg1 ;
-(double)aperture;
-(void)setDepthInfo:(NSDictionary *)arg1 ;
-(id)capturedAperture;
-(BOOL)canRenderDepth;
-(id)initWithAdjustment:(id)arg1 ;
@end

