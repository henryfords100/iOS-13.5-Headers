/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSMutableArray;

@interface NTPBEndOfArticleExposure : PBCodable <NSCopying> {

	long long _backendArticleVersionInt64;
	long long _personalizationTreatmentId;
	long long _publisherArticleVersionInt64;
	NSString* _articleId;
	int _articleType;
	int _backendArticleVersion;
	int _characterCount;
	NSString* _feedId;
	NSData* _feedViewExposureId;
	NSString* _language;
	NSMutableArray* _namedEntities;
	int _publisherArticleVersion;
	NSMutableArray* _recommendedArticleIds;
	NSString* _referencedArticleId;
	NSMutableArray* _referencedRecommendedArticleIds;
	NSString* _sectionHeadlineId;
	NSString* _surfacedByChannelId;
	NSString* _surfacedBySectionId;
	NSString* _surfacedByTopicId;
	BOOL _isUserSubscribedToFeed;
	SCD_Struct_NT6 _has;

}

@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                                          //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasReferencedArticleId; 
@property (nonatomic,retain) NSString * referencedArticleId;                                //@synthesize referencedArticleId=_referencedArticleId - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedId; 
@property (nonatomic,retain) NSString * feedId;                                             //@synthesize feedId=_feedId - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedViewExposureId; 
@property (nonatomic,retain) NSData * feedViewExposureId;                                   //@synthesize feedViewExposureId=_feedViewExposureId - In the implementation block
@property (assign,nonatomic) BOOL hasIsUserSubscribedToFeed; 
@property (assign,nonatomic) BOOL isUserSubscribedToFeed;                                   //@synthesize isUserSubscribedToFeed=_isUserSubscribedToFeed - In the implementation block
@property (nonatomic,retain) NSMutableArray * recommendedArticleIds;                        //@synthesize recommendedArticleIds=_recommendedArticleIds - In the implementation block
@property (nonatomic,retain) NSMutableArray * referencedRecommendedArticleIds;              //@synthesize referencedRecommendedArticleIds=_referencedRecommendedArticleIds - In the implementation block
@property (assign,nonatomic) BOOL hasArticleType; 
@property (assign,nonatomic) int articleType;                                               //@synthesize articleType=_articleType - In the implementation block
@property (assign,nonatomic) BOOL hasCharacterCount; 
@property (assign,nonatomic) int characterCount;                                            //@synthesize characterCount=_characterCount - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language;                                           //@synthesize language=_language - In the implementation block
@property (nonatomic,retain) NSMutableArray * namedEntities;                                //@synthesize namedEntities=_namedEntities - In the implementation block
@property (assign,nonatomic) BOOL hasPublisherArticleVersion; 
@property (assign,nonatomic) int publisherArticleVersion;                                   //@synthesize publisherArticleVersion=_publisherArticleVersion - In the implementation block
@property (assign,nonatomic) BOOL hasBackendArticleVersion; 
@property (assign,nonatomic) int backendArticleVersion;                                     //@synthesize backendArticleVersion=_backendArticleVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasSurfacedByChannelId; 
@property (nonatomic,retain) NSString * surfacedByChannelId;                                //@synthesize surfacedByChannelId=_surfacedByChannelId - In the implementation block
@property (nonatomic,readonly) BOOL hasSurfacedBySectionId; 
@property (nonatomic,retain) NSString * surfacedBySectionId;                                //@synthesize surfacedBySectionId=_surfacedBySectionId - In the implementation block
@property (nonatomic,readonly) BOOL hasSurfacedByTopicId; 
@property (nonatomic,retain) NSString * surfacedByTopicId;                                  //@synthesize surfacedByTopicId=_surfacedByTopicId - In the implementation block
@property (nonatomic,readonly) BOOL hasSectionHeadlineId; 
@property (nonatomic,retain) NSString * sectionHeadlineId;                                  //@synthesize sectionHeadlineId=_sectionHeadlineId - In the implementation block
@property (assign,nonatomic) BOOL hasPersonalizationTreatmentId; 
@property (assign,nonatomic) long long personalizationTreatmentId;                          //@synthesize personalizationTreatmentId=_personalizationTreatmentId - In the implementation block
@property (assign,nonatomic) BOOL hasPublisherArticleVersionInt64; 
@property (assign,nonatomic) long long publisherArticleVersionInt64;                        //@synthesize publisherArticleVersionInt64=_publisherArticleVersionInt64 - In the implementation block
@property (assign,nonatomic) BOOL hasBackendArticleVersionInt64; 
@property (assign,nonatomic) long long backendArticleVersionInt64;                          //@synthesize backendArticleVersionInt64=_backendArticleVersionInt64 - In the implementation block
+(Class)namedEntitiesType;
+(Class)recommendedArticleIdType;
+(Class)referencedRecommendedArticleIdsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(BOOL)hasLanguage;
-(NSString *)feedId;
-(void)setFeedId:(NSString *)arg1 ;
-(BOOL)hasFeedId;
-(NSMutableArray *)namedEntities;
-(void)clearNamedEntities;
-(void)addNamedEntities:(id)arg1 ;
-(id)namedEntitiesAtIndex:(unsigned long long)arg1 ;
-(void)setNamedEntities:(NSMutableArray *)arg1 ;
-(unsigned long long)namedEntitiesCount;
-(int)characterCount;
-(void)setCharacterCount:(int)arg1 ;
-(int)publisherArticleVersion;
-(int)backendArticleVersion;
-(void)setPublisherArticleVersion:(int)arg1 ;
-(void)setBackendArticleVersion:(int)arg1 ;
-(void)setArticleId:(NSString *)arg1 ;
-(BOOL)hasArticleId;
-(int)articleType;
-(void)setArticleType:(int)arg1 ;
-(void)setHasArticleType:(BOOL)arg1 ;
-(BOOL)hasArticleType;
-(id)articleTypeAsString:(int)arg1 ;
-(int)StringAsArticleType:(id)arg1 ;
-(void)setHasPublisherArticleVersion:(BOOL)arg1 ;
-(BOOL)hasPublisherArticleVersion;
-(NSString *)articleId;
-(void)setFeedViewExposureId:(NSData *)arg1 ;
-(BOOL)hasFeedViewExposureId;
-(NSData *)feedViewExposureId;
-(void)setReferencedArticleId:(NSString *)arg1 ;
-(BOOL)hasReferencedArticleId;
-(void)setIsUserSubscribedToFeed:(BOOL)arg1 ;
-(void)setHasIsUserSubscribedToFeed:(BOOL)arg1 ;
-(BOOL)hasIsUserSubscribedToFeed;
-(NSString *)referencedArticleId;
-(BOOL)isUserSubscribedToFeed;
-(void)setSurfacedByChannelId:(NSString *)arg1 ;
-(void)setSurfacedBySectionId:(NSString *)arg1 ;
-(void)setSurfacedByTopicId:(NSString *)arg1 ;
-(void)setSectionHeadlineId:(NSString *)arg1 ;
-(void)setHasBackendArticleVersion:(BOOL)arg1 ;
-(BOOL)hasBackendArticleVersion;
-(BOOL)hasSurfacedByChannelId;
-(BOOL)hasSurfacedBySectionId;
-(BOOL)hasSurfacedByTopicId;
-(BOOL)hasSectionHeadlineId;
-(void)setPersonalizationTreatmentId:(long long)arg1 ;
-(void)setHasPersonalizationTreatmentId:(BOOL)arg1 ;
-(BOOL)hasPersonalizationTreatmentId;
-(void)setPublisherArticleVersionInt64:(long long)arg1 ;
-(void)setHasPublisherArticleVersionInt64:(BOOL)arg1 ;
-(BOOL)hasPublisherArticleVersionInt64;
-(void)setBackendArticleVersionInt64:(long long)arg1 ;
-(void)setHasBackendArticleVersionInt64:(BOOL)arg1 ;
-(BOOL)hasBackendArticleVersionInt64;
-(NSString *)surfacedByChannelId;
-(NSString *)surfacedBySectionId;
-(NSString *)surfacedByTopicId;
-(NSString *)sectionHeadlineId;
-(long long)personalizationTreatmentId;
-(long long)publisherArticleVersionInt64;
-(long long)backendArticleVersionInt64;
-(void)setHasCharacterCount:(BOOL)arg1 ;
-(BOOL)hasCharacterCount;
-(void)addRecommendedArticleId:(id)arg1 ;
-(void)addReferencedRecommendedArticleIds:(id)arg1 ;
-(void)clearRecommendedArticleIds;
-(unsigned long long)recommendedArticleIdsCount;
-(id)recommendedArticleIdAtIndex:(unsigned long long)arg1 ;
-(void)clearReferencedRecommendedArticleIds;
-(unsigned long long)referencedRecommendedArticleIdsCount;
-(id)referencedRecommendedArticleIdsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)recommendedArticleIds;
-(void)setRecommendedArticleIds:(NSMutableArray *)arg1 ;
-(NSMutableArray *)referencedRecommendedArticleIds;
-(void)setReferencedRecommendedArticleIds:(NSMutableArray *)arg1 ;
@end
