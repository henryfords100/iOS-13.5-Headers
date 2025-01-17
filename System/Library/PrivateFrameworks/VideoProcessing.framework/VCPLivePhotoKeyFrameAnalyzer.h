/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPLivePhotoKeyFrameAnalyzer : NSObject {

	BOOL _photoSharpnessReliable;
	float _photoSharpness;
	BOOL _petsDominant;
	BOOL _ignoreFace;
	float* _faceHeatMap;
	int _width;
	int _height;

}
-(void)dealloc;
-(id)initWithWidth:(int)arg1 height:(int)arg2 ;
-(void)createFaceHeatMap:(id)arg1 imageFaces:(id)arg2 ;
-(float)computeOverallFaceQualityScore:(id)arg1 ;
-(SCD_Struct_VC28)selectKeyFrameRangeWithMotion:(id)arg1 stillTimestamp:(float)arg2 isMetaMotion:(BOOL)arg3 ;
-(void)fetchAndComputeScoreForKeyFrame:(id)arg1 withResult:(id)arg2 ;
-(float)computeScoreForPhoto:(float)arg1 withRefKeyFrame:(id)arg2 ;
-(int)reportLivePhotoKeyFrameAnalysisResults:(BOOL)arg1 selectedKeyFrame:(id)arg2 originalStillKeyFrame:(id)arg3 stillScore:(float)arg4 stillFQScore:(float)arg5 stillTimestamp:(float)arg6 useSemanticOnly:(BOOL)arg7 isKeyFrameSuggested:(BOOL)arg8 ;
-(float)getFaceHeat:(CGRect)arg1 ;
-(void)updateFaceHeatMap:(id)arg1 numOfFrames:(int)arg2 ;
-(int)analyzeLivePhotoKeyFrame:(id)arg1 irisPhotoOffsetSec:(float)arg2 originalIrisPhotoOffsetSec:(float)arg3 photoTextureScore:(float)arg4 hadFlash:(BOOL)arg5 cancel:(/*^block*/id)arg6 ;
@end

