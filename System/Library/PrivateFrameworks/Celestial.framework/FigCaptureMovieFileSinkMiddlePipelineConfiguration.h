/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FigCaptureMovieFileSinkPipelineConfiguration, BWPipelineStage;

@interface FigCaptureMovieFileSinkMiddlePipelineConfiguration : NSObject {

	FigCaptureMovieFileSinkPipelineConfiguration* _movieFileSinkPipelineConfiguration;
	BWPipelineStage* _movieFilePipelineStage;

}

@property (nonatomic,retain) FigCaptureMovieFileSinkPipelineConfiguration * movieFileSinkPipelineConfiguration;              //@synthesize movieFileSinkPipelineConfiguration=_movieFileSinkPipelineConfiguration - In the implementation block
@property (nonatomic,retain) BWPipelineStage * movieFilePipelineStage;                                                       //@synthesize movieFilePipelineStage=_movieFilePipelineStage - In the implementation block
-(id)init;
-(void)dealloc;
-(FigCaptureMovieFileSinkPipelineConfiguration *)movieFileSinkPipelineConfiguration;
-(void)setMovieFileSinkPipelineConfiguration:(FigCaptureMovieFileSinkPipelineConfiguration *)arg1 ;
-(BWPipelineStage *)movieFilePipelineStage;
-(void)setMovieFilePipelineStage:(BWPipelineStage *)arg1 ;
@end

