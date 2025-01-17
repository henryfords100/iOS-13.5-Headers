/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <libobjc.A.dylib/CLSInvestigationItem.h>

@class CLLocation, NSArray, NSString, NSSet, NSData, VNSceneprint, NSDateComponents, NSDate;

@interface CLSTestInvestigationItem : NSObject <CLSInvestigationItem> {

	BOOL _isUtility;
	BOOL _isBlurry;
	BOOL _isVideo;
	BOOL _isScreenshotOrScreenRecording;
	BOOL _isFavorite;
	BOOL _clsIsAnInterestingVideo;
	BOOL _clsIsAnInterestingPhoto;
	BOOL _clsIsAnInterestingPanorama;
	BOOL _clsIsAnInterestingSDOF;
	BOOL _clsIsAnInterestingHDR;
	BOOL _clsHasInterestingAudioClassification;
	BOOL _clsHasCustomPlaybackVariation;
	BOOL _clsIsAestheticallyPrettyGood;
	BOOL _clsIsInhabited;
	BOOL _clsAvoidIfPossibleForKeyItem;
	BOOL _clsHasPoorResolution;
	BOOL _clsHasInterestingScenes;
	BOOL _clsIsNonMemorable;
	BOOL _clsIsLoopOrBounce;
	BOOL _clsIsLongExposure;
	BOOL _clsIsInterestingReframe;
	NSString* _clsIdentifier;
	CLLocation* _clsLocation;
	NSArray* _clsPeopleNames;
	long long _clsViewCount;
	long long _clsPlayCount;
	long long _clsShareCount;
	double _clsContentScore;
	NSData* _clsDistanceIdentity;
	NSSet* _clsSceneClassifications;
	VNSceneprint* _clsSceneprint;
	NSArray* _clsUnprefetchedPeopleNames;
	double _clsSharpnessScore;
	double _clsExposureScore;
	double _clsAestheticScore;
	double _clsFaceScore;
	NSDate* _cls_universalDate;
	double _clsHighlightVisibilityScore;
	double _clsAutoplaySuggestionScore;
	double _clsDuration;

}

@property (nonatomic,retain) CLLocation * clsLocation;                                  //@synthesize clsLocation=_clsLocation - In the implementation block
@property (nonatomic,retain) NSArray * clsPeopleNames;                                  //@synthesize clsPeopleNames=_clsPeopleNames - In the implementation block
@property (nonatomic,copy) NSSet * clsSceneClassifications;                             //@synthesize clsSceneClassifications=_clsSceneClassifications - In the implementation block
@property (nonatomic,readonly) long long clsViewCount;                                  //@synthesize clsViewCount=_clsViewCount - In the implementation block
@property (nonatomic,readonly) long long clsPlayCount;                                  //@synthesize clsPlayCount=_clsPlayCount - In the implementation block
@property (nonatomic,readonly) long long clsShareCount;                                 //@synthesize clsShareCount=_clsShareCount - In the implementation block
@property (nonatomic,readonly) BOOL isUtility;                                          //@synthesize isUtility=_isUtility - In the implementation block
@property (nonatomic,readonly) NSDateComponents * cls_localDateComponents; 
@property (nonatomic,retain) NSDate * cls_universalDate;                                //@synthesize cls_universalDate=_cls_universalDate - In the implementation block
@property (nonatomic,readonly) NSDate * cls_localDate; 
@property (assign,nonatomic) double clsContentScore;                                    //@synthesize clsContentScore=_clsContentScore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLLocationCoordinate2D pl_coordinate; 
@property (nonatomic,readonly) NSDate * pl_date; 
@property (readonly) VNSceneprint * clsSceneprint; 
@property (readonly) NSString * clsIdentifier; 
@property (readonly) NSData * clsDistanceIdentity; 
@property (nonatomic,readonly) NSArray * clsUnprefetchedPeopleNames;                    //@synthesize clsUnprefetchedPeopleNames=_clsUnprefetchedPeopleNames - In the implementation block
@property (nonatomic,readonly) unsigned long long clsPeopleCount; 
@property (nonatomic,readonly) CLLocation * location; 
@property (nonatomic,readonly) NSArray * peopleNames; 
@property (nonatomic,readonly) double clsExposureScore;                                 //@synthesize clsExposureScore=_clsExposureScore - In the implementation block
@property (nonatomic,readonly) double clsSharpnessScore;                                //@synthesize clsSharpnessScore=_clsSharpnessScore - In the implementation block
@property (nonatomic,readonly) double clsAestheticScore;                                //@synthesize clsAestheticScore=_clsAestheticScore - In the implementation block
@property (nonatomic,readonly) double clsHighlightVisibilityScore;                      //@synthesize clsHighlightVisibilityScore=_clsHighlightVisibilityScore - In the implementation block
@property (nonatomic,readonly) double clsAutoplaySuggestionScore;                       //@synthesize clsAutoplaySuggestionScore=_clsAutoplaySuggestionScore - In the implementation block
@property (nonatomic,readonly) double clsFaceScore;                                     //@synthesize clsFaceScore=_clsFaceScore - In the implementation block
@property (nonatomic,readonly) BOOL isScreenshotOrScreenRecording;                      //@synthesize isScreenshotOrScreenRecording=_isScreenshotOrScreenRecording - In the implementation block
@property (nonatomic,readonly) BOOL isFavorite;                                         //@synthesize isFavorite=_isFavorite - In the implementation block
@property (nonatomic,readonly) BOOL isVideo;                                            //@synthesize isVideo=_isVideo - In the implementation block
@property (nonatomic,readonly) BOOL clsIsAestheticallyPrettyGood;                       //@synthesize clsIsAestheticallyPrettyGood=_clsIsAestheticallyPrettyGood - In the implementation block
@property (nonatomic,readonly) BOOL isBlurry;                                           //@synthesize isBlurry=_isBlurry - In the implementation block
@property (nonatomic,readonly) BOOL clsIsLoopOrBounce;                                  //@synthesize clsIsLoopOrBounce=_clsIsLoopOrBounce - In the implementation block
@property (nonatomic,readonly) BOOL clsIsLongExposure;                                  //@synthesize clsIsLongExposure=_clsIsLongExposure - In the implementation block
@property (nonatomic,readonly) BOOL clsIsInterestingVideo;                              //@synthesize clsIsAnInterestingVideo=_clsIsAnInterestingVideo - In the implementation block
@property (nonatomic,readonly) BOOL clsIsInterestingLivePhoto;                          //@synthesize clsIsAnInterestingPhoto=_clsIsAnInterestingPhoto - In the implementation block
@property (nonatomic,readonly) BOOL clsIsInterestingPanorama;                           //@synthesize clsIsAnInterestingPanorama=_clsIsAnInterestingPanorama - In the implementation block
@property (nonatomic,readonly) BOOL clsIsInterestingSDOF;                               //@synthesize clsIsAnInterestingSDOF=_clsIsAnInterestingSDOF - In the implementation block
@property (nonatomic,readonly) BOOL clsIsInterestingHDR;                                //@synthesize clsIsAnInterestingHDR=_clsIsAnInterestingHDR - In the implementation block
@property (nonatomic,readonly) BOOL clsHasInterestingAudioClassification;               //@synthesize clsHasInterestingAudioClassification=_clsHasInterestingAudioClassification - In the implementation block
@property (nonatomic,readonly) BOOL clsHasCustomPlaybackVariation;                      //@synthesize clsHasCustomPlaybackVariation=_clsHasCustomPlaybackVariation - In the implementation block
@property (nonatomic,readonly) BOOL clsIsNonMemorable;                                  //@synthesize clsIsNonMemorable=_clsIsNonMemorable - In the implementation block
@property (nonatomic,readonly) double clsDuration;                                      //@synthesize clsDuration=_clsDuration - In the implementation block
@property (nonatomic,readonly) BOOL clsIsInterestingReframe;                            //@synthesize clsIsInterestingReframe=_clsIsInterestingReframe - In the implementation block
@property (readonly) BOOL clsIsInhabited;                                               //@synthesize clsIsInhabited=_clsIsInhabited - In the implementation block
@property (readonly) BOOL clsAvoidIfPossibleForKeyItem;                                 //@synthesize clsAvoidIfPossibleForKeyItem=_clsAvoidIfPossibleForKeyItem - In the implementation block
@property (readonly) BOOL clsHasPoorResolution;                                         //@synthesize clsHasPoorResolution=_clsHasPoorResolution - In the implementation block
@property (readonly) BOOL clsHasInterestingScenes;                                      //@synthesize clsHasInterestingScenes=_clsHasInterestingScenes - In the implementation block
+(id)contextForItems:(id)arg1 ;
+(id)itemWithPeopleNames:(id)arg1 universalDate:(id)arg2 coordinate:(CLLocationCoordinate2D)arg3 ;
+(id)itemWithUniversalDate:(id)arg1 sceneClassifications:(id)arg2 ;
-(id)init;
-(CLLocation *)location;
-(BOOL)isVideo;
-(BOOL)isFavorite;
-(NSDate *)pl_date;
-(CLLocationCoordinate2D)pl_coordinate;
-(NSArray *)peopleNames;
-(BOOL)isUtility;
-(BOOL)isBlurry;
-(NSData *)clsDistanceIdentity;
-(CLLocation *)clsLocation;
-(NSDateComponents *)cls_localDateComponents;
-(NSDate *)cls_universalDate;
-(CGImageRef)createThumbnailWithResolution:(unsigned long long)arg1 fillMode:(BOOL)arg2 networkAllowed:(BOOL)arg3 ;
-(double)scoreWithContext:(id)arg1 ;
-(NSArray *)clsPeopleNames;
-(NSArray *)clsUnprefetchedPeopleNames;
-(unsigned long long)clsPeopleCount;
-(NSString *)clsIdentifier;
-(long long)clsViewCount;
-(long long)clsPlayCount;
-(long long)clsShareCount;
-(double)clsContentScore;
-(double)clsExposureScore;
-(double)clsSharpnessScore;
-(double)clsAestheticScore;
-(double)clsHighlightVisibilityScore;
-(double)clsAutoplaySuggestionScore;
-(double)clsFaceScore;
-(BOOL)isScreenshotOrScreenRecording;
-(BOOL)clsIsAestheticallyPrettyGood;
-(BOOL)clsIsLoopOrBounce;
-(BOOL)clsIsLongExposure;
-(BOOL)clsIsInterestingVideo;
-(BOOL)clsIsInterestingLivePhoto;
-(BOOL)clsIsInterestingPanorama;
-(BOOL)clsIsInterestingSDOF;
-(BOOL)clsIsInterestingHDR;
-(BOOL)clsHasInterestingAudioClassification;
-(BOOL)clsHasCustomPlaybackVariation;
-(BOOL)clsIsNonMemorable;
-(double)clsDuration;
-(BOOL)clsIsInterestingReframe;
-(NSSet *)clsSceneClassifications;
-(VNSceneprint *)clsSceneprint;
-(NSDate *)cls_localDate;
-(BOOL)clsIsInhabited;
-(BOOL)clsAvoidIfPossibleForKeyItem;
-(BOOL)clsHasPoorResolution;
-(BOOL)clsHasInterestingScenes;
-(void)setClsLocation:(CLLocation *)arg1 ;
-(void)setClsPeopleNames:(NSArray *)arg1 ;
-(void)setClsContentScore:(double)arg1 ;
-(void)setClsSceneClassifications:(NSSet *)arg1 ;
-(void)setCls_universalDate:(NSDate *)arg1 ;
@end

