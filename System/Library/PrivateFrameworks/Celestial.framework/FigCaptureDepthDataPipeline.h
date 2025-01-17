/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/FigCaptureRemoteQueueSinkPipeline.h>

@class BWDepthConverterNode, BWNodeOutput, BWPipelineStage, NSString;

@interface FigCaptureDepthDataPipeline : FigCaptureRemoteQueueSinkPipeline {

	BWDepthConverterNode* _depthDataConverterNode;
	BWNodeOutput* _videoAndConvertedDepthDataOutput;
	BWPipelineStage* _pipelineStage;
	NSString* _sourceID;
	int _sourceDeviceType;

}

@property (nonatomic,readonly) NSString * sourceID;                                          //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,readonly) int sourceDeviceType;                                         //@synthesize sourceDeviceType=_sourceDeviceType - In the implementation block
@property (nonatomic,readonly) BWPipelineStage * pipelineStage;                              //@synthesize pipelineStage=_pipelineStage - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * videoAndConvertedDepthDataOutput;              //@synthesize videoAndConvertedDepthDataOutput=_videoAndConvertedDepthDataOutput - In the implementation block
+(void)initialize;
-(void)dealloc;
-(NSString *)sourceID;
-(int)sourceDeviceType;
-(id)initWithConfiguration:(id)arg1 sourceOutput:(id)arg2 graph:(id)arg3 name:(id)arg4 delegate:(id)arg5 ;
-(BWPipelineStage *)pipelineStage;
-(BWNodeOutput *)videoAndConvertedDepthDataOutput;
-(int)_buildDepthPipelineWithConfiguration:(id)arg1 sourceOutput:(id)arg2 graph:(id)arg3 delegate:(id)arg4 ;
-(int)_buildDepthConversionPipelineWithConfiguration:(id)arg1 sourceOutput:(id)arg2 graph:(id)arg3 convertedDepthOutputsOut:(id*)arg4 ;
-(int)_buildDepthDataSinkPipeline:(id)arg1 sourceOutput:(id)arg2 graph:(id)arg3 clientPID:(id)arg4 delegate:(id)arg5 ;
@end

