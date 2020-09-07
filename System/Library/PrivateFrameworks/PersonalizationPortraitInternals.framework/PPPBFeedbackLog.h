/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, PPPBFeedbackMetadata;

@interface PPPBFeedbackLog : PBCodable <NSCopying> {

	NSString* _assetVersion;
	NSMutableArray* _experimentalGroups;
	NSMutableArray* _extractedDonations;
	PPPBFeedbackMetadata* _feedbackMetadata;
	NSString* _homeLocationGeohash;
	int _predictionType;
	NSMutableArray* _scoredItems;
	SCD_Struct_PP1 _has;

}

@property (nonatomic,readonly) BOOL hasFeedbackMetadata; 
@property (nonatomic,retain) PPPBFeedbackMetadata * feedbackMetadata;              //@synthesize feedbackMetadata=_feedbackMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasPredictionType; 
@property (assign,nonatomic) int predictionType;                                   //@synthesize predictionType=_predictionType - In the implementation block
@property (nonatomic,retain) NSMutableArray * scoredItems;                         //@synthesize scoredItems=_scoredItems - In the implementation block
@property (nonatomic,retain) NSMutableArray * extractedDonations;                  //@synthesize extractedDonations=_extractedDonations - In the implementation block
@property (nonatomic,retain) NSMutableArray * experimentalGroups;                  //@synthesize experimentalGroups=_experimentalGroups - In the implementation block
@property (nonatomic,readonly) BOOL hasHomeLocationGeohash; 
@property (nonatomic,retain) NSString * homeLocationGeohash;                       //@synthesize homeLocationGeohash=_homeLocationGeohash - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetVersion; 
@property (nonatomic,retain) NSString * assetVersion;                              //@synthesize assetVersion=_assetVersion - In the implementation block
+(Class)scoredItemsType;
+(Class)extractedDonationsType;
+(Class)experimentalGroupsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSString *)assetVersion;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setAssetVersion:(NSString *)arg1 ;
-(BOOL)hasFeedbackMetadata;
-(int)predictionType;
-(void)setPredictionType:(int)arg1 ;
-(void)setHasPredictionType:(BOOL)arg1 ;
-(BOOL)hasPredictionType;
-(void)clearScoredItems;
-(void)addScoredItems:(id)arg1 ;
-(unsigned long long)scoredItemsCount;
-(id)scoredItemsAtIndex:(unsigned long long)arg1 ;
-(void)clearExtractedDonations;
-(void)addExtractedDonations:(id)arg1 ;
-(unsigned long long)extractedDonationsCount;
-(id)extractedDonationsAtIndex:(unsigned long long)arg1 ;
-(void)clearExperimentalGroups;
-(void)addExperimentalGroups:(id)arg1 ;
-(unsigned long long)experimentalGroupsCount;
-(id)experimentalGroupsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasHomeLocationGeohash;
-(BOOL)hasAssetVersion;
-(PPPBFeedbackMetadata *)feedbackMetadata;
-(void)setFeedbackMetadata:(PPPBFeedbackMetadata *)arg1 ;
-(NSMutableArray *)scoredItems;
-(void)setScoredItems:(NSMutableArray *)arg1 ;
-(NSMutableArray *)extractedDonations;
-(void)setExtractedDonations:(NSMutableArray *)arg1 ;
-(NSMutableArray *)experimentalGroups;
-(void)setExperimentalGroups:(NSMutableArray *)arg1 ;
-(NSString *)homeLocationGeohash;
-(void)setHomeLocationGeohash:(NSString *)arg1 ;
@end
