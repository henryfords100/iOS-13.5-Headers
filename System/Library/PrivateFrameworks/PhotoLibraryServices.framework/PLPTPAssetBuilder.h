/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLPTPConversionSupport, PLPTPTransferableAsset, PLFileManager;
@class NSString, PLMutablePTPAsset, NSArray, PLSpatialOverCaptureInformation, NSMutableArray;

@interface PLPTPAssetBuilder : NSObject {

	id<PLPTPConversionSupport> _conversionSupport;
	id<PLPTPTransferableAsset> _asset;
	id<PLFileManager> _fileManager;
	NSString* _filenameForPTP;
	PLMutablePTPAsset* _currentPtpAsset;
	PLMutablePTPAsset* _commonPtpAsset;
	PLMutablePTPAsset* _originalPtpAsset;
	NSArray* _sidecarPtpAssets;
	PLMutablePTPAsset* _diagnosticPtpAsset;
	PLMutablePTPAsset* _adjustmentPtpAsset;
	PLMutablePTPAsset* _fullSizeRenderImagePtpAsset;
	PLMutablePTPAsset* _fullSizeRenderVideoPtpAsset;
	PLMutablePTPAsset* _spatialOverCaptureImagePtpAsset;
	PLMutablePTPAsset* _spatialOverCaptureVideoComplementPtpAsset;
	PLMutablePTPAsset* _originalAdjustmentPtpAsset;
	PLSpatialOverCaptureInformation* _cachedSpatialOverCaptureInformation;
	PLMutablePTPAsset* _penultimateImagePtpAsset;
	PLMutablePTPAsset* _penultimateVideoPtpAsset;
	NSMutableArray* _convertedAssets;
	BOOL _irisSidecarRequiresFormatConversion;

}
+(id)pictureTransferProtocolAssetsForAsset:(id)arg1 withConversionSupport:(id)arg2 ;
+(BOOL)_shouldIncludeDiagnosticFile;
-(id)spatialOverCaptureInformation;
-(BOOL)_suppressPtpInfo;
-(BOOL)_buildDirectoryPathAndFilename;
-(void)_buildExifAvailable;
-(void)_buildFileSize;
-(void)_buildOriginatingAssetID;
-(void)_buildThumbnailOffsetAndLength;
-(void)_buildImageDimensions;
-(void)_buildThumbnailDimensions;
-(void)_buildOrientation;
-(void)_buildPhotoKey;
-(void)_buildModificationAndCreationDate;
-(void)_durationOfTheAsset;
-(void)_buildGPSInformation;
-(void)_buildBurst;
-(void)_buildSlowMo;
-(void)_buildTimelapse;
-(id)initWithAsset:(id)arg1 conversionSupport:(id)arg2 ;
-(id)initWithAsset:(id)arg1 conversionSupport:(id)arg2 fileManager:(id)arg3 ;
-(id)pictureTransferProtocolAssets;
-(void)updateSiblingAssetTypesOnMutablePTPAssets:(id)arg1 ;
-(void)_buildCommonAsset;
-(BOOL)_buildOriginalAsset;
-(void)updateAssetForFormatConversion:(id)arg1 isVideo:(BOOL)arg2 isRender:(BOOL)arg3 forceLegacyConversion:(BOOL)arg4 ;
-(void)_updateAssetForTranscodeChoice:(id)arg1 withConversionResult:(id)arg2 ;
-(void)_updateAsset:(id)arg1 withConversionResult:(id)arg2 ;
-(void)_updateOriginalAssetFormatConversionFromVideoComplement;
-(void)_buildGroupUUID;
-(BOOL)_hasIrisSidecarFile;
-(void)_buildRelatedUUID;
-(void)_buildSpatialOverCaptureGroupIdentifier;
-(void)_buildSpatialOverCaptureLivePhotoPairingIdentifier;
-(void)_buildDeletedFlag;
-(void)_buildSidecarAssets;
-(id)_assetForSidecar:(id)arg1 sidecarPath:(id)arg2 irisSidecarPath:(id)arg3 ;
-(void)_buildDiagnosticAsset;
-(void)_buildAdjustmentAsset;
-(void)_buildFullSizeRenderImageAsset;
-(void)_buildFullSizeRenderVideoAsset;
-(BOOL)hasSpatialOverCaptureContent;
-(void)buildSpatialOverCaptureContentPtpAsset;
-(void)buildSpatialOverCaptureVideoComplementPtpAsset;
-(void)buildOriginalAdjustmentPtpAsset;
-(void)buildPenultimateImagePtpAsset;
-(void)buildPenultimateVideoPtpAsset;
@end
