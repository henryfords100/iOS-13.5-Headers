/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ACTFramework.framework/ACTFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ACTFramework/ACTFramework-Structs.h>
#import <ACTFramework/ACTVideoProcessor.h>

@class NSURL, NSDictionary, ACTSlowmoResults;

@interface ACTVideoMotionDetector : ACTVideoProcessor {

	NSURL* _url;
	NSDictionary* _result;
	double _startTimestamp;
	sbp_Slowmo_Projection* _projections[2];
	int _curProjIndex;
	int _frameCount;
	int _processedFrameCount;
	double _lastFrameTimestamp;
	ACTSlowmoResults* _results;
	BOOL _outputRawMarkers;
	BOOL _verbose;
	BOOL _skipSecondPass;
	BOOL _singleTimeRange;
	float _rowGradient[3264];
	float _colGradient[3264];

}

@property (readonly) NSURL * url;                        //@synthesize url=_url - In the implementation block
@property (readonly) NSDictionary * result;              //@synthesize result=_result - In the implementation block
+(id)motionDetectorWithURL:(id)arg1 options:(id)arg2 ;
-(void)dealloc;
-(void)finishProcessing;
-(NSDictionary *)result;
-(NSURL *)url;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(void)processBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(unsigned char)calculateProjectionSignature:(_sbp_Slowmo_Projection*)arg1 buffer:(CVBufferRef)arg2 ;
-(void)gradientForSignature:(float*)arg1 gradient:(float*)arg2 count:(int)arg3 ;
-(void)startProcessing;
-(void)processVideo;
@end

