/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPVideoKeyFrameAnalyzer, VCPMovieHighlightAnalyzer, NSArray, NSDictionary;

@interface VCPMovieCurationAnalyzer : NSObject {

	VCPVideoKeyFrameAnalyzer* _keyFrameAnalyzer;
	VCPMovieHighlightAnalyzer* _highlightAnalyzer;
	NSArray* _descriptorResults;
	NSArray* _qualityResuls;
	NSArray* _junkResults;
	NSArray* _faceResults;
	NSArray* _actionResults;
	NSArray* _subtleMotionResults;
	NSArray* _voiceResults;
	NSArray* _humanActionResults;
	NSArray* _humanPoseResults;
	NSArray* _cameraMotionResults;
	NSArray* _saliencyResults;
	NSDictionary* _faceRanges;
	SCD_Struct_VC28 _timeRange;
	CGSize _frameSize;
	BOOL _isLivePhoto;
	BOOL _hadFlash;

}
-(id)results;
-(int)postProcessKeyFrames;
-(void)reportMovieCurationAnalysisResults:(id)arg1 withSummaryAnalytics:(id)arg2 ;
-(void)addHighlight:(id)arg1 to:(id)arg2 ;
-(void)addSummary:(id)arg1 to:(id)arg2 ;
-(id)initWithAnalysisTypes:(unsigned long long)arg1 transform:(CGAffineTransform)arg2 timeRange:(SCD_Struct_VC28)arg3 isLivePhoto:(BOOL)arg4 frameStats:(id)arg5 hadFlash:(BOOL)arg6 keyFrameResults:(id)arg7 ;
-(int)analyzeKeyFrame:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_VC6)arg2 andDuration:(SCD_Struct_VC6)arg3 flags:(unsigned long long*)arg4 ;
-(void)loadVideoAnalysisResults:(id)arg1 audioAnalysisResults:(id)arg2 andFaceRanges:(id)arg3 frameSize:(CGSize)arg4 ;
-(int)generateMovieCurations;
@end
