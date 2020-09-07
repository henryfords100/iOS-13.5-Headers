/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSString, NSDictionary, AVCameraCalibrationData, AVCaptureResolvedPhotoSettings, AVCapturePhotoSettings, AVDepthData, AVPortraitEffectsMatte, AVSemanticSegmentationMatte, AVCaptureBracketedStillImageSettings, AVCapturePhotoPrivateClientMetadata, AVApplePortraitMetadata;

@interface AVCapturePhotoInternal : NSObject {

	SCD_Struct_AV7 timestamp;
	IOSurfaceRef photoSurface;
	unsigned long long photoSurfaceSize;
	NSString* processedFileType;
	CVBufferRef photoPixelBuffer;
	CVBufferRef previewPixelBuffer;
	CVBufferRef embeddedThumbnailSourcePixelBuffer;
	NSDictionary* embeddedThumbnailPhotoFormat;
	NSDictionary* metadata;
	AVCameraCalibrationData* cameraCalibrationData;
	AVCaptureResolvedPhotoSettings* resolvedSettings;
	AVCapturePhotoSettings* unresolvedSettings;
	AVDepthData* depthData;
	BOOL didTryToDecodeDepthData;
	AVPortraitEffectsMatte* portraitEffectsMatte;
	BOOL didTryToDecodePortraitEffectsMatte;
	AVSemanticSegmentationMatte* hairSegmentationMatte;
	BOOL didTryToDecodeHairSegmentationMatte;
	AVSemanticSegmentationMatte* skinSegmentationMatte;
	BOOL didTryToDecodeSkinSegmentationMatte;
	AVSemanticSegmentationMatte* teethSegmentationMatte;
	BOOL didTryToDecodeTeethSegmentationMatte;
	BOOL isRawPhoto;
	AVCaptureBracketedStillImageSettings* bracketSettings;
	unsigned long long sequenceCount;
	unsigned long long photoCount;
	NSString* sourceDeviceType;
	unsigned expectedPhotoProcessingFlags;
	unsigned actualPhotoProcessingFlags;
	AVCapturePhotoPrivateClientMetadata* privateClientMetadata;
	AVApplePortraitMetadata* portraitMetadata;
	BOOL lensStabilizationSupported;

}
@end
