/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVDepthData, AVPortraitEffectsMatte, AVSemanticSegmentationMatte, NSDictionary, CIFilterShape, NSURL;

@interface CIImage : NSObject <NSSecureCoding, NSCopying> {

	void* _priv;

}

@property (nonatomic,readonly) AVDepthData * depthData; 
@property (nonatomic,readonly) AVPortraitEffectsMatte * portraitEffectsMatte; 
@property (nonatomic,readonly) AVSemanticSegmentationMatte * semanticSegmentationMatte; 
@property (nonatomic,readonly) CGRect extent; 
@property (readonly) NSDictionary * properties; 
@property (readonly) CIFilterShape * definition; 
@property (readonly) NSURL * url; 
@property (readonly) CGColorSpaceRef colorSpace; 
@property (nonatomic,readonly) CVBufferRef pixelBuffer; 
@property (nonatomic,readonly) CGImageRef CGImage; 
+(BOOL)supportsSecureCoding;
+(id)imageWithBitmapData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(CGSize)arg3 format:(int)arg4 colorSpace:(CGColorSpaceRef)arg5 ;
+(id)emptyImage;
+(id)imageForRenderingWithMPS:(id)arg1 orNonMPS:(id)arg2 ;
+(id)imageWithInternalRepresentation:(void*)arg1 ;
+(id)imageWithColor:(id)arg1 ;
+(id)imageWithData:(id)arg1 ;
+(id)imageWithData:(id)arg1 options:(id)arg2 ;
+(id)imageWithContentsOfURL:(id)arg1 ;
+(id)imageWithContentsOfURL:(id)arg1 options:(id)arg2 ;
+(id)noiseImageNearest;
+(id)imageWithArrayOfImages:(id)arg1 selector:(/*^block*/id)arg2 ;
+(id)imageWithBitmapData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(CGSize)arg3 format:(int)arg4 options:(id)arg5 ;
+(id)imageWithCGImage:(CGImageRef)arg1 ;
+(id)imageWithMTLTexture:(id)arg1 options:(id)arg2 ;
+(id)imageWithCVPixelBuffer:(CVBufferRef)arg1 options:(id)arg2 ;
+(id)imageWithCVPixelBuffer:(CVBufferRef)arg1 ;
+(id)imageYCC444:(id)arg1 matrix:(int)arg2 fullRange:(BOOL)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
+(id)noiseImage;
+(id)imageWithIOSurface:(IOSurfaceRef)arg1 options:(id)arg2 ;
+(id)imageWithCGImage:(CGImageRef)arg1 options:(id)arg2 ;
+(id)imageWithCGLayer:(CGLayerRef)arg1 options:(id)arg2 ;
+(id)imageWithCVImageBuffer:(CVBufferRef)arg1 options:(id)arg2 ;
+(id)imageWithContentsOfFile:(id)arg1 options:(id)arg2 ;
+(id)blackImage;
+(id)whiteImage;
+(id)grayImage;
+(id)redImage;
+(id)greenImage;
+(id)blueImage;
+(id)cyanImage;
+(id)magentaImage;
+(id)yellowImage;
+(id)clearImage;
+(id)nullImage;
+(id)imageWithIOSurface:(IOSurfaceRef)arg1 ;
+(id)imageWithCGImageSource:(CGImageSourceRef)arg1 index:(unsigned long long)arg2 options:(id)arg3 ;
+(id)imageWithCGLayer:(CGLayerRef)arg1 ;
+(id)imageWithTexture:(unsigned)arg1 size:(CGSize)arg2 flipped:(BOOL)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
+(id)imageWithTexture:(unsigned)arg1 size:(CGSize)arg2 options:(id)arg3 ;
+(id)imageWithTexture:(unsigned)arg1 size:(CGSize)arg2 flipped:(BOOL)arg3 options:(id)arg4 ;
+(id)imageWithCVImageBuffer:(CVBufferRef)arg1 ;
+(id)noiseImagePadded;
+(id)imageWithContentsOfFile:(id)arg1 ;
+(id)imageForRenderingWithMetal:(id)arg1 orNonMetal:(id)arg2 ;
+(id)imageForRenderingWithMetalContext:(id)arg1 orOpenGLContextUsingMetal:(id)arg2 orNonMetalContext:(id)arg3 ;
+(id)imageWithDepthData:(id)arg1 options:(id)arg2 ;
+(id)imageWithDepthData:(id)arg1 ;
+(id)imageWithPortaitEffectsMatte:(id)arg1 options:(id)arg2 ;
+(id)imageWithPortaitEffectsMatte:(id)arg1 ;
+(id)imageWithPortraitEffectsMatte:(id)arg1 options:(id)arg2 ;
+(id)imageWithPortraitEffectsMatte:(id)arg1 ;
+(id)imageWithSemanticSegmentationMatte:(id)arg1 options:(id)arg2 ;
+(id)imageWithSemanticSegmentationMatte:(id)arg1 ;
+(id)imageWithAttributedString:(id)arg1 format:(int)arg2 ;
+(id)imageWithAttributedString:(id)arg1 format:(int)arg2 options:(id)arg3 ;
+(id)clearImage:(CGRect)arg1 ;
+(id)imageWithImageProvider:(id)arg1 userInfo:(id)arg2 size:(CGSize)arg3 format:(int)arg4 flipped:(BOOL)arg5 colorSpace:(CGColorSpaceRef)arg6 ;
+(id)imageWithImageProvider:(id)arg1 size:(unsigned long long)arg2 :(unsigned long long)arg3 format:(int)arg4 colorSpace:(CGColorSpaceRef)arg5 options:(id)arg6 ;
+(id)imageWithYCCImage:(id)arg1 matrix:(int)arg2 fullRange:(BOOL)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
+(id)imageWithYImage:(id)arg1 CrCbImage:(id)arg2 CrCbScale:(int)arg3 matrix:(int)arg4 fullRange:(BOOL)arg5 colorSpace:(CGColorSpaceRef)arg6 ;
+(id)smartToneAdjustmentsForValue:(double)arg1 andStatistics:(id)arg2 ;
+(id)smartToneAdjustmentsForValue:(double)arg1 localLightAutoValue:(double)arg2 andStatistics:(id)arg3 ;
+(id)smartColorAdjustmentsForValue:(double)arg1 andStatistics:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)finalize;
-(id)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(NSURL *)url;
-(void)setUserInfo:(id)arg1 ;
-(id)TIFFRepresentation;
-(CGRect)extent;
-(id)imageByApplyingTransform:(CGAffineTransform)arg1 ;
-(id)imageByClampingToRect:(CGRect)arg1 ;
-(id)imageByClampingToExtent;
-(id)filteredImage:(id)arg1 keysAndValues:(id)arg2 ;
-(id)imageBySamplingNearest;
-(id)imageByCroppingToRect:(CGRect)arg1 ;
-(id)imageByApplyingFilter:(id)arg1 withInputParameters:(id)arg2 ;
-(id)imageWithExtent:(CGRect)arg1 processorDescription:(id)arg2 argumentDigest:(unsigned long long)arg3 inputFormat:(int)arg4 outputFormat:(int)arg5 options:(id)arg6 roiCallback:(/*^block*/id)arg7 processor:(/*^block*/id)arg8 ;
-(id)imageByCompositingOverImage:(id)arg1 ;
-(id)imageByUnpremultiplyingAlpha;
-(id)imageByPremultiplyingAlpha;
-(void*)_internalRepresentation;
-(id)imageByApplyingGaussianBlurWithSigma:(double)arg1 ;
-(CVBufferRef)pixelBuffer;
-(AVDepthData *)depthData;
-(CGColorSpaceRef)colorSpace;
-(id)_imageByApplyingGamma:(double)arg1 ;
-(id)initWithImageProvider:(/*^block*/id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 format:(int)arg4 colorSpace:(CGColorSpaceRef)arg5 options:(id)arg6 ;
-(BOOL)isOpaque;
-(id)imageByColorMatchingWorkingSpaceToColorSpace:(CGColorSpaceRef)arg1 ;
-(id)imageByColorMatchingColorSpaceToWorkingSpace:(CGColorSpaceRef)arg1 ;
-(id)imageByApplyingFilter:(id)arg1 ;
-(id)_initWithInternalRepresentation:(void*)arg1 ;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 ;
-(CGRect)regionOfInterestForImage:(id)arg1 inRect:(CGRect)arg2 ;
-(id)_pdfDataRepresentation;
-(NSDictionary *)properties;
-(id)imageByApplyingTransform:(CGAffineTransform)arg1 highQualityDownsample:(BOOL)arg2 ;
-(id)imageBySamplingLinear;
-(id)imageBySettingAlphaOneInExtent:(CGRect)arg1 ;
-(id)_imageByRenderingToIntermediate;
-(CGAffineTransform)imageTransformForOrientation:(int)arg1 ;
-(id)imageBySettingProperties:(id)arg1 ;
-(id)initWithColor:(id)arg1 ;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 options:(id)arg2 ;
-(id)_initWithIOSurface:(IOSurfaceRef)arg1 options:(id)arg2 owner:(void*)arg3 ;
-(CGImageRef)CGImage;
-(id)initWithCGImage:(CGImageRef)arg1 options:(id)arg2 ;
-(id)initWithCGImageSource:(CGImageSourceRef)arg1 index:(unsigned long long)arg2 options:(id)arg3 ;
-(id)_initNaiveWithCGImage:(CGImageRef)arg1 options:(id)arg2 ;
-(void)_setOriginalCGImage:(CGImageRef)arg1 options:(id)arg2 ;
-(id)initWithCVPixelBuffer:(CVBufferRef)arg1 options:(id)arg2 ;
-(CVBufferRef)_pixelBufferFromAuxProps:(CFDictionaryRef)arg1 ;
-(id)initAuxiliaryWithImageSource:(CGImageSourceRef)arg1 options:(id)arg2 depth:(BOOL)arg3 ;
-(id)initMatteWithImageSource:(CGImageSourceRef)arg1 options:(id)arg2 ;
-(id)initWithCGLayer:(CGLayerRef)arg1 options:(id)arg2 ;
-(id)initWithBitmapData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(CGSize)arg3 format:(int)arg4 options:(id)arg5 ;
-(id)initWithBitmapData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(CGSize)arg3 format:(int)arg4 colorSpace:(CGColorSpaceRef)arg5 ;
-(id)_initWithBitmapData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(CGSize)arg3 format:(int)arg4 options:(id)arg5 ;
-(id)initWithTexture:(unsigned)arg1 size:(CGSize)arg2 flipped:(BOOL)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
-(id)initWithTexture:(unsigned)arg1 size:(CGSize)arg2 options:(id)arg3 ;
-(id)initWithTexture:(unsigned)arg1 size:(CGSize)arg2 flipped:(BOOL)arg3 options:(id)arg4 ;
-(id)initWithMTLTexture:(id)arg1 options:(id)arg2 ;
-(id)_initWithCVImageBuffer:(CVBufferRef)arg1 options:(id)arg2 ;
-(void)_setOriginalCVPixelBuffer:(CVBufferRef)arg1 options:(id)arg2 ;
-(id)initWithCVImageBuffer:(CVBufferRef)arg1 options:(id)arg2 ;
-(id)initWithEmptyClearColor;
-(CGAffineTransform)imageTransformForCGOrientation:(unsigned)arg1 ;
-(id)initWithData:(id)arg1 options:(id)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 options:(id)arg2 ;
-(id)initWithContentsOfFile:(id)arg1 options:(id)arg2 ;
-(id)initForRenderingWithMetal:(id)arg1 orNonMetal:(id)arg2 ;
-(id)initWithArrayOfImages:(id)arg1 selector:(/*^block*/id)arg2 ;
-(id)initForRenderingWithMPS:(id)arg1 orNonMPS:(id)arg2 ;
-(id)initForRenderingWithMetalContext:(id)arg1 orOpenGLContextUsingMetal:(id)arg2 orNonMetalContext:(id)arg3 ;
-(id)initWithCGImage:(CGImageRef)arg1 ;
-(CGImageRef)_originalCGImage;
-(id)initWithCGLayer:(CGLayerRef)arg1 ;
-(CVBufferRef)_originalCVPixelBuffer;
-(AVPortraitEffectsMatte *)portraitEffectsMatte;
-(AVSemanticSegmentationMatte *)semanticSegmentationMatte;
-(id)initWithCVPixelBuffer:(CVBufferRef)arg1 ;
-(id)initWithCVImageBuffer:(CVBufferRef)arg1 ;
-(id)initWithColorR:(double)arg1 G:(double)arg2 B:(double)arg3 A:(double)arg4 ;
-(id)imageByApplyingOrientation:(int)arg1 ;
-(id)imageByApplyingCGOrientation:(unsigned)arg1 ;
-(id)_imageByPremultiplying;
-(id)_imageByUnpremultiplying;
-(id)_imageByClampingAlpha;
-(id)_imageByApplyingBlur:(double)arg1 ;
-(id)_imageByMatchingWorkingSpaceToColorSpace:(CGColorSpaceRef)arg1 ;
-(id)imageByColorMatchingWorkingSpaceToRGBorGrayColorSpace:(CGColorSpaceRef)arg1 ;
-(id)_imageByMatchingColorSpaceToWorkingSpace:(CGColorSpaceRef)arg1 ;
-(id)imageByTaggingWithColorSpace:(CGColorSpaceRef)arg1 ;
-(id)imageByInsertingIntermediate;
-(id)imageByInsertingIntermediate:(BOOL)arg1 ;
-(id)imageBySettingPropertiesNoCopy:(id)arg1 ;
-(id)_imageBySamplingNearest;
-(id)_imageBySamplingLinear;
-(CIFilterShape *)definition;
-(void)setCacheHint:(BOOL)arg1 ;
-(BOOL)cacheHint;
-(void)writeToTIFF:(id)arg1 ;
-(void)printTree;
-(id)initWithDepthData:(id)arg1 options:(id)arg2 ;
-(id)initWithDepthData:(id)arg1 ;
-(id)initWithPortaitEffectsMatte:(id)arg1 options:(id)arg2 ;
-(id)initWithPortraitEffectsMatte:(id)arg1 options:(id)arg2 ;
-(id)initWithPortaitEffectsMatte:(id)arg1 ;
-(id)initWithPortraitEffectsMatte:(id)arg1 ;
-(id)initWithSemanticSegmentationMatte:(id)arg1 options:(id)arg2 ;
-(id)initWithSemanticSegmentationMatte:(id)arg1 ;
-(id)initWithAttributedString:(id)arg1 format:(int)arg2 options:(id)arg3 ;
-(id)initWithAttributedString:(id)arg1 format:(int)arg2 ;
-(id)_autoRedEyeFilterWithFeatures:(id)arg1 imageProperties:(id)arg2 context:(id)arg3 options:(id)arg4 ;
-(id)_scaleImageToMaxDimension:(unsigned)arg1 ;
-(id)getAutoRotateFilter:(id)arg1 ciImage:(id)arg2 inputRect:(CGRect)arg3 rotateCropRect:(CGRect*)arg4 minTiltAngle:(float)arg5 maxTiltAngle:(float)arg6 detectVerticalLines:(BOOL)arg7 thrVertAngle:(float)arg8 thrDomAngleDiff:(float)arg9 ;
-(void)getAutocropRect:(id)arg1 rotateXfrm:(CGAffineTransform)arg2 inputImageRect:(CGRect)arg3 clipRect:(CGRect*)arg4 ;
-(id)autoAdjustmentFiltersWithOptions:(id)arg1 ;
-(id)autoAdjustmentFiltersWithImageProperties:(id)arg1 options:(id)arg2 ;
-(CGPoint)pointWithDictionary:(id)arg1 name:(id)arg2 index:(int)arg3 transformedBy:(CGAffineTransform)arg4 ;
-(id)_dictForFeature:(id)arg1 invOrientationTransform:(CGAffineTransform)arg2 extent:(CGRect)arg3 ;
-(id)autoAdjustmentFilters;
-(id)imageWithMesh:(id)arg1 transform:(CGAffineTransform)arg2 ;
-(CGAffineTransform)inverseImageTransformForOrientation:(int)arg1 ;
-(id)autoRedEyeFilterWithFeatures:(id)arg1 imageProperties:(id)arg2 options:(id)arg3 ;
-(id)autoRedEyeFilterWithFeatures:(id)arg1 options:(id)arg2 ;
-(id)autoRotateFilterFFT:(id)arg1 image:(CGImageRef)arg2 inputRect:(CGRect)arg3 minTiltAngle:(float)arg4 maxTiltAngle:(float)arg5 detectVerticalLines:(BOOL)arg6 thrVertAngle:(float)arg7 thrDomAngleDiff:(float)arg8 ;
-(CGPoint)calcIntersection:(CGPoint)arg1 slope1:(CGPoint)arg2 pt2:(CGPoint)arg3 slope2:(CGPoint)arg4 ;
-(id)initWithImageProvider:(id)arg1 userInfo:(id)arg2 size:(CGSize)arg3 format:(int)arg4 flipped:(BOOL)arg5 colorSpace:(CGColorSpaceRef)arg6 ;
-(id)initWithImageProvider:(id)arg1 size:(unsigned long long)arg2 :(unsigned long long)arg3 format:(int)arg4 colorSpace:(CGColorSpaceRef)arg5 options:(id)arg6 ;
-(id)_initWithImageProvider:(/*^block*/id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 format:(int)arg4 colorSpace:(CGColorSpaceRef)arg5 surfaceCache:(BOOL)arg6 options:(id)arg7 ;
-(id)localLightStatisticsWithProxy:(BOOL)arg1 ;
-(id)localLightStatistics;
-(id)localLightStatisticsNoProxy;
-(id)autoPerspectiveFilterWithOptions:(id)arg1 ;
-(id)autoPerspectiveResultWithOptions:(id)arg1 ;
-(id)smartBlackAndWhiteStatistics;
-(id)smartBlackAndWhiteAdjustmentsForValue:(double)arg1 andStatistics:(id)arg2 ;
-(id)smartToneAdjustmentsForValue:(double)arg1 andStatistics:(id)arg2 ;
-(id)smartToneAdjustmentsForValue:(double)arg1 localLightAutoValue:(double)arg2 andStatistics:(id)arg3 ;
-(id)smartColorAdjustmentsForValue:(double)arg1 andStatistics:(id)arg2 ;
-(id)smartToneStatistics;
-(id)smartColorStatistics;
-(id)metalImageByApplyingFilter:(id)arg1 withInputParameters:(id)arg2 ;
-(id)metalImageByApplyingFilter:(id)arg1 ;
@end

