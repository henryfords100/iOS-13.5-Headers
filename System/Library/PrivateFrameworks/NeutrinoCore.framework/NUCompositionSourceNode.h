/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUSourceNode.h>

@class NURenderPipeline, NUComposition;

@interface NUCompositionSourceNode : NUSourceNode {

	NURenderPipeline* _renderPipeline;
	NUComposition* _composition;
	SCD_Struct_NU7 _pixelSize;

}
-(id)initWithSettings:(id)arg1 ;
-(BOOL)load:(out id*)arg1 ;
-(id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(id)_evaluateImageGeometryWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(id)preparedNodeWithSourceContainer:(id)arg1 pipelineState:(id)arg2 pipelineSettings:(id)arg3 sourceSettings:(id)arg4 error:(out id*)arg5 ;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg1 ;
-(SCD_Struct_NU7)pixelSizeWithSourceOptions:(id)arg1 ;
-(id)_evaluateImage:(out id*)arg1 ;
-(id)initWithComposition:(id)arg1 renderPipeline:(id)arg2 settings:(id)arg3 ;
-(id)_compositionRenderNodeForPipelineState:(id)arg1 error:(out id*)arg2 ;
@end
