/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface BWInferenceScalingRequirement : NSObject {

	NSArray* _orderedVideoRequirements;

}

@property (nonatomic,readonly) NSArray * orderedVideoRequirements;              //@synthesize orderedVideoRequirements=_orderedVideoRequirements - In the implementation block
-(void)dealloc;
-(void)_appendIntermediateRequirementsToList:(id)arg1 forSatisfyingOutputRequirement:(id)arg2 ;
-(id)initWithInputVideoRequirement:(id)arg1 requestedOutputVideoRequirements:(id)arg2 ;
-(NSArray *)orderedVideoRequirements;
@end
