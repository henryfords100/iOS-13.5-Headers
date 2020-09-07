/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWInferenceProviderStorage.h>

@class NSMutableDictionary;

@interface BWVisionInferenceStorage : BWInferenceProviderStorage {

	NSMutableDictionary* _requestsByRequirement;

}
+(void)initialize;
-(void)dealloc;
-(id)initWithRequirementsNeedingPixelBuffers:(id)arg1 requirementsNeedingPixelBufferPools:(id)arg2 ;
-(id)newMetadataDictionarySatisfyingRequirement:(id)arg1 ;
-(opaqueCMSampleBufferRef)newSampleBufferSatisfyingRequirement:(id)arg1 withPropagationSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)setRequest:(id)arg1 forRequirement:(id)arg2 ;
-(id)requestForRequirement:(id)arg1 ;
@end
