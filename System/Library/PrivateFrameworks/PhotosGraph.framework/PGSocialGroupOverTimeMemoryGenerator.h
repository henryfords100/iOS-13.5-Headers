/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@interface PGSocialGroupOverTimeMemoryGenerator : PGFeaturedMemoryGenerator {

	unsigned long long _numberOfInsufficientlyFacedRejects;
	unsigned long long _numberOfBuildFailureRejects;
	long long _socialGroupID;

}

@property (assign,nonatomic) long long socialGroupID;              //@synthesize socialGroupID=_socialGroupID - In the implementation block
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(void)_generateExtendedCuratedSetForMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(BOOL)canFallbackToDejunkAndDedupeForShowMore;
-(long long)socialGroupID;
-(void)setSocialGroupID:(long long)arg1 ;
-(id)_computeOverTheTimeFacedAssetsForPersonUUIDs:(id)arg1 inFacedAssets:(id)arg2 ;
@end
