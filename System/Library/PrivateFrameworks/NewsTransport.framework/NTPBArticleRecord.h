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

@class NSString, NSMutableArray, NSData, NTPBRecordBase, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, NTPBDate, NSArray;

@interface NTPBArticleRecord : PBCodable <NSCopying> {

	long long _backendArticleVersion;
	long long _behaviorFlags;
	long long _bodyTextLength;
	unsigned long long _halfLifeMilliseconds;
	long long _minimumNewsVersion;
	long long _publisherArticleVersion;
	long long _thumbnailFocalFrame;
	long long _thumbnailHQMetadata;
	long long _thumbnailLQMetadata;
	long long _thumbnailMediumMetadata;
	long long _thumbnailMetadata;
	long long _thumbnailUltraHQMetadata;
	long long _thumbnailWidgetHQMetadata;
	long long _thumbnailWidgetLQMetadata;
	long long _thumbnailWidgetMetadata;
	NSString* _accessoryText;
	NSMutableArray* _allowedStorefrontIDs;
	NSData* _articleRecirculationConfiguration;
	NTPBRecordBase* _base;
	NSMutableArray* _blockedStorefrontIDs;
	NSString* _clusterID;
	int _contentType;
	NSString* _contentURL;
	NSString* _coverArt;
	NSString* _excerptURL;
	NSMutableArray* _experimentalTitles;
	NSString* _flintDocumentURL;
	NSMutableArray* _flintFontResourceIDs;
	COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList* _globalCohorts;
	NSMutableArray* _iAdCategories;
	NSMutableArray* _iAdKeywords;
	NSMutableArray* _iAdSectionIDs;
	NSString* _language;
	NSMutableArray* _linkedArticleIDs;
	NSMutableArray* _linkedIssueIDs;
	NSMutableArray* _moreFromPublisherArticleIDs;
	NSString* _parentIssueID;
	NSString* _primaryAudience;
	NTPBDate* _publishDate;
	NSMutableArray* _publisherSpecifiedArticleIds;
	NSString* _referencedArticleID;
	NSMutableArray* _relatedArticleIDs;
	int _role;
	NSString* _shortExcerpt;
	COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList* _sourceChannelCohorts;
	NSString* _sourceChannelTagID;
	NSString* _stocksClusterID;
	NSString* _stocksMetadata;
	NSString* _stocksScores;
	int _storyType;
	NSString* _subtitle;
	NSString* _thumbnailHQURL;
	NSString* _thumbnailLQURL;
	NSString* _thumbnailMediumURL;
	NSString* _thumbnailURL;
	NSString* _thumbnailUltraHQURL;
	NSString* _thumbnailWidgetHQTaggedURL;
	NSString* _thumbnailWidgetHQURL;
	NSString* _thumbnailWidgetLQTaggedURL;
	NSString* _thumbnailWidgetLQURL;
	NSString* _thumbnailWidgetTaggedURL;
	NSString* _thumbnailWidgetURL;
	NSString* _title;
	NSString* _titleCompact;
	NSMutableArray* _topics;
	NSString* _videoCallToActionTitle;
	NSString* _videoCallToActionURL;
	NSString* _videoURL;
	BOOL _isBundlePaid;
	BOOL _isDraft;
	BOOL _isFeatureCandidate;
	BOOL _isIssueOnly;
	BOOL _isPaid;
	BOOL _isSponsored;
	SCD_Struct_NT27 _has;

}

@property (nonatomic,readonly) NSArray * topicIDs; 
@property (nonatomic,readonly) BOOL hasBase; 
@property (nonatomic,retain) NTPBRecordBase * base;                                                           //@synthesize base=_base - In the implementation block
@property (nonatomic,readonly) BOOL hasReferencedArticleID; 
@property (nonatomic,retain) NSString * referencedArticleID;                                                  //@synthesize referencedArticleID=_referencedArticleID - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                                                                //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasSubtitle; 
@property (nonatomic,retain) NSString * subtitle;                                                             //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelTagID; 
@property (nonatomic,retain) NSString * sourceChannelTagID;                                                   //@synthesize sourceChannelTagID=_sourceChannelTagID - In the implementation block
@property (nonatomic,readonly) BOOL hasPublishDate; 
@property (nonatomic,retain) NTPBDate * publishDate;                                                          //@synthesize publishDate=_publishDate - In the implementation block
@property (assign,nonatomic) BOOL hasPublisherArticleVersion; 
@property (assign,nonatomic) long long publisherArticleVersion;                                               //@synthesize publisherArticleVersion=_publisherArticleVersion - In the implementation block
@property (assign,nonatomic) BOOL hasBackendArticleVersion; 
@property (assign,nonatomic) long long backendArticleVersion;                                                 //@synthesize backendArticleVersion=_backendArticleVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasThumbnailLQURL; 
@property (nonatomic,retain) NSString * thumbnailLQURL;                                                       //@synthesize thumbnailLQURL=_thumbnailLQURL - In the implementation block
@property (assign,nonatomic) BOOL hasThumbnailLQMetadata; 
@property (assign,nonatomic) long long thumbnailLQMetadata;                                                   //@synthesize thumbnailLQMetadata=_thumbnailLQMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasPrimaryAudience; 
@property (nonatomic,retain) NSString * primaryAudience;                                                      //@synthesize primaryAudience=_primaryAudience - In the implementation block
@property (nonatomic,readonly) BOOL hasExcerptURL; 
@property (nonatomic,retain) NSString * excerptURL;                                                           //@synthesize excerptURL=_excerptURL - In the implementation block
@property (nonatomic,readonly) BOOL hasShortExcerpt; 
@property (nonatomic,retain) NSString * shortExcerpt;                                                         //@synthesize shortExcerpt=_shortExcerpt - In the implementation block
@property (nonatomic,readonly) BOOL hasAccessoryText; 
@property (nonatomic,retain) NSString * accessoryText;                                                        //@synthesize accessoryText=_accessoryText - In the implementation block
@property (nonatomic,readonly) BOOL hasContentURL; 
@property (nonatomic,retain) NSString * contentURL;                                                           //@synthesize contentURL=_contentURL - In the implementation block
@property (assign,nonatomic) BOOL hasContentType; 
@property (assign,nonatomic) int contentType;                                                                 //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,readonly) BOOL hasClusterID; 
@property (nonatomic,retain) NSString * clusterID;                                                            //@synthesize clusterID=_clusterID - In the implementation block
@property (nonatomic,readonly) BOOL hasFlintDocumentURL; 
@property (nonatomic,retain) NSString * flintDocumentURL;                                                     //@synthesize flintDocumentURL=_flintDocumentURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * flintFontResourceIDs;                                           //@synthesize flintFontResourceIDs=_flintFontResourceIDs - In the implementation block
@property (nonatomic,readonly) BOOL hasVideoURL; 
@property (nonatomic,retain) NSString * videoURL;                                                             //@synthesize videoURL=_videoURL - In the implementation block
@property (assign,nonatomic) BOOL hasIsBundlePaid; 
@property (assign,nonatomic) BOOL isBundlePaid;                                                               //@synthesize isBundlePaid=_isBundlePaid - In the implementation block
@property (assign,nonatomic) BOOL hasIsFeatureCandidate; 
@property (assign,nonatomic) BOOL isFeatureCandidate;                                                         //@synthesize isFeatureCandidate=_isFeatureCandidate - In the implementation block
@property (assign,nonatomic) BOOL hasIsSponsored; 
@property (assign,nonatomic) BOOL isSponsored;                                                                //@synthesize isSponsored=_isSponsored - In the implementation block
@property (nonatomic,retain) NSMutableArray * iAdCategories;                                                  //@synthesize iAdCategories=_iAdCategories - In the implementation block
@property (nonatomic,retain) NSMutableArray * iAdKeywords;                                                    //@synthesize iAdKeywords=_iAdKeywords - In the implementation block
@property (nonatomic,retain) NSMutableArray * iAdSectionIDs;                                                  //@synthesize iAdSectionIDs=_iAdSectionIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * blockedStorefrontIDs;                                           //@synthesize blockedStorefrontIDs=_blockedStorefrontIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * allowedStorefrontIDs;                                           //@synthesize allowedStorefrontIDs=_allowedStorefrontIDs - In the implementation block
@property (assign,nonatomic) BOOL hasIsDraft; 
@property (assign,nonatomic) BOOL isDraft;                                                                    //@synthesize isDraft=_isDraft - In the implementation block
@property (nonatomic,retain) NSMutableArray * relatedArticleIDs;                                              //@synthesize relatedArticleIDs=_relatedArticleIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * moreFromPublisherArticleIDs;                                    //@synthesize moreFromPublisherArticleIDs=_moreFromPublisherArticleIDs - In the implementation block
@property (nonatomic,readonly) BOOL hasThumbnailURL; 
@property (nonatomic,retain) NSString * thumbnailURL;                                                         //@synthesize thumbnailURL=_thumbnailURL - In the implementation block
@property (assign,nonatomic) BOOL hasThumbnailMetadata; 
@property (assign,nonatomic) long long thumbnailMetadata;                                                     //@synthesize thumbnailMetadata=_thumbnailMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasThumbnailFocalFrame; 
@property (assign,nonatomic) long long thumbnailFocalFrame;                                                   //@synthesize thumbnailFocalFrame=_thumbnailFocalFrame - In the implementation block
@property (nonatomic,readonly) BOOL hasThumbnailMediumURL; 
@property (nonatomic,retain) NSString * thumbnailMediumURL;                                                   //@synthesize thumbnailMediumURL=_thumbnailMediumURL - In the implementation block
@property (assign,nonatomic) BOOL hasThumbnailMediumMetadata; 
@property (assign,nonatomic) long long thumbnailMediumMetadata;                                               //@synthesize thumbnailMediumMetadata=_thumbnailMediumMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasThumbnailHQURL; 
@property (nonatomic,retain) NSString * thumbnailHQURL;                                                       //@synthesize thumbnailHQURL=_thumbnailHQURL - In the implementation block
@property (assign,nonatomic) BOOL hasThumbnailHQMetadata; 
@property (assign,nonatomic) long long thumbnailHQMetadata;                                                   //@synthesize thumbnailHQMetadata=_thumbnailHQMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasThumbnailUltraHQURL; 
@property (nonatomic,retain) NSString * thumbnailUltraHQURL;                                                  //@synthesize thumbnailUltraHQURL=_thumbnailUltraHQURL - In the implementation block
@property (assign,nonatomic) BOOL hasThumbnailUltraHQMetadata; 
@property (assign,nonatomic) long long thumbnailUltraHQMetadata;                                              //@synthesize thumbnailUltraHQMetadata=_thumbnailUltraHQMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasStoryType; 
@property (assign,nonatomic) int storyType;                                                                   //@synthesize storyType=_storyType - In the implementation block
@property (assign,nonatomic) BOOL hasBehaviorFlags; 
@property (assign,nonatomic) long long behaviorFlags;                                                         //@synthesize behaviorFlags=_behaviorFlags - In the implementation block
@property (assign,nonatomic) BOOL hasMinimumNewsVersion; 
@property (assign,nonatomic) long long minimumNewsVersion;                                                    //@synthesize minimumNewsVersion=_minimumNewsVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasCoverArt; 
@property (nonatomic,retain) NSString * coverArt;                                                             //@synthesize coverArt=_coverArt - In the implementation block
@property (assign,nonatomic) BOOL hasIsPaid; 
@property (assign,nonatomic) BOOL isPaid;                                                                     //@synthesize isPaid=_isPaid - In the implementation block
@property (nonatomic,readonly) BOOL hasThumbnailWidgetLQURL; 
@property (nonatomic,retain) NSString * thumbnailWidgetLQURL;                                                 //@synthesize thumbnailWidgetLQURL=_thumbnailWidgetLQURL - In the implementation block
@property (nonatomic,readonly) BOOL hasThumbnailWidgetLQTaggedURL; 
@property (nonatomic,retain) NSString * thumbnailWidgetLQTaggedURL;                                           //@synthesize thumbnailWidgetLQTaggedURL=_thumbnailWidgetLQTaggedURL - In the implementation block
@property (assign,nonatomic) BOOL hasThumbnailWidgetLQMetadata; 
@property (assign,nonatomic) long long thumbnailWidgetLQMetadata;                                             //@synthesize thumbnailWidgetLQMetadata=_thumbnailWidgetLQMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasThumbnailWidgetURL; 
@property (nonatomic,retain) NSString * thumbnailWidgetURL;                                                   //@synthesize thumbnailWidgetURL=_thumbnailWidgetURL - In the implementation block
@property (nonatomic,readonly) BOOL hasThumbnailWidgetTaggedURL; 
@property (nonatomic,retain) NSString * thumbnailWidgetTaggedURL;                                             //@synthesize thumbnailWidgetTaggedURL=_thumbnailWidgetTaggedURL - In the implementation block
@property (assign,nonatomic) BOOL hasThumbnailWidgetMetadata; 
@property (assign,nonatomic) long long thumbnailWidgetMetadata;                                               //@synthesize thumbnailWidgetMetadata=_thumbnailWidgetMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasThumbnailWidgetHQURL; 
@property (nonatomic,retain) NSString * thumbnailWidgetHQURL;                                                 //@synthesize thumbnailWidgetHQURL=_thumbnailWidgetHQURL - In the implementation block
@property (nonatomic,readonly) BOOL hasThumbnailWidgetHQTaggedURL; 
@property (nonatomic,retain) NSString * thumbnailWidgetHQTaggedURL;                                           //@synthesize thumbnailWidgetHQTaggedURL=_thumbnailWidgetHQTaggedURL - In the implementation block
@property (assign,nonatomic) BOOL hasThumbnailWidgetHQMetadata; 
@property (assign,nonatomic) long long thumbnailWidgetHQMetadata;                                             //@synthesize thumbnailWidgetHQMetadata=_thumbnailWidgetHQMetadata - In the implementation block
@property (nonatomic,retain) NSMutableArray * topics;                                                         //@synthesize topics=_topics - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelCohorts; 
@property (nonatomic,retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * sourceChannelCohorts;              //@synthesize sourceChannelCohorts=_sourceChannelCohorts - In the implementation block
@property (nonatomic,readonly) BOOL hasGlobalCohorts; 
@property (nonatomic,retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * globalCohorts;                     //@synthesize globalCohorts=_globalCohorts - In the implementation block
@property (nonatomic,readonly) BOOL hasTitleCompact; 
@property (nonatomic,retain) NSString * titleCompact;                                                         //@synthesize titleCompact=_titleCompact - In the implementation block
@property (nonatomic,readonly) BOOL hasVideoCallToActionTitle; 
@property (nonatomic,retain) NSString * videoCallToActionTitle;                                               //@synthesize videoCallToActionTitle=_videoCallToActionTitle - In the implementation block
@property (nonatomic,readonly) BOOL hasVideoCallToActionURL; 
@property (nonatomic,retain) NSString * videoCallToActionURL;                                                 //@synthesize videoCallToActionURL=_videoCallToActionURL - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleRecirculationConfiguration; 
@property (nonatomic,retain) NSData * articleRecirculationConfiguration;                                      //@synthesize articleRecirculationConfiguration=_articleRecirculationConfiguration - In the implementation block
@property (nonatomic,retain) NSMutableArray * publisherSpecifiedArticleIds;                                   //@synthesize publisherSpecifiedArticleIds=_publisherSpecifiedArticleIds - In the implementation block
@property (nonatomic,readonly) BOOL hasStocksClusterID; 
@property (nonatomic,retain) NSString * stocksClusterID;                                                      //@synthesize stocksClusterID=_stocksClusterID - In the implementation block
@property (nonatomic,readonly) BOOL hasStocksMetadata; 
@property (nonatomic,retain) NSString * stocksMetadata;                                                       //@synthesize stocksMetadata=_stocksMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasStocksScores; 
@property (nonatomic,retain) NSString * stocksScores;                                                         //@synthesize stocksScores=_stocksScores - In the implementation block
@property (nonatomic,retain) NSMutableArray * experimentalTitles;                                             //@synthesize experimentalTitles=_experimentalTitles - In the implementation block
@property (nonatomic,readonly) BOOL hasParentIssueID; 
@property (nonatomic,retain) NSString * parentIssueID;                                                        //@synthesize parentIssueID=_parentIssueID - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language;                                                             //@synthesize language=_language - In the implementation block
@property (assign,nonatomic) BOOL hasRole; 
@property (assign,nonatomic) int role;                                                                        //@synthesize role=_role - In the implementation block
@property (assign,nonatomic) BOOL hasHalfLifeMilliseconds; 
@property (assign,nonatomic) unsigned long long halfLifeMilliseconds;                                         //@synthesize halfLifeMilliseconds=_halfLifeMilliseconds - In the implementation block
@property (nonatomic,retain) NSMutableArray * linkedArticleIDs;                                               //@synthesize linkedArticleIDs=_linkedArticleIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * linkedIssueIDs;                                                 //@synthesize linkedIssueIDs=_linkedIssueIDs - In the implementation block
@property (assign,nonatomic) BOOL hasIsIssueOnly; 
@property (assign,nonatomic) BOOL isIssueOnly;                                                                //@synthesize isIssueOnly=_isIssueOnly - In the implementation block
@property (assign,nonatomic) BOOL hasBodyTextLength; 
@property (assign,nonatomic) long long bodyTextLength;                                                        //@synthesize bodyTextLength=_bodyTextLength - In the implementation block
+(Class)topicsType;
+(Class)flintFontResourceIDsType;
+(Class)iAdCategoriesType;
+(Class)iAdKeywordsType;
+(Class)iAdSectionIDsType;
+(Class)blockedStorefrontIDsType;
+(Class)allowedStorefrontIDsType;
+(Class)relatedArticleIDsType;
+(Class)moreFromPublisherArticleIDsType;
+(Class)publisherSpecifiedArticleIdsType;
+(Class)experimentalTitlesType;
+(Class)linkedArticleIDsType;
+(Class)linkedIssueIDsType;
-(NSArray *)topicIDs;
-(id)generateThumbnailAssetHandleForURL:(id)arg1 withAssetManager:(id)arg2 ;
-(id)generateFlintDocumentAssetHandleWithAssetManager:(id)arg1 ;
-(id)generateWebExcerptAssetHandleWithAssetManager:(id)arg1 ;
-(BOOL)isAllowedInStorefront:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)role;
-(id)dictionaryRepresentation;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(int)contentType;
-(void)setContentType:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)subtitle;
-(NSString *)contentURL;
-(void)setContentURL:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(BOOL)hasTitle;
-(void)setBase:(NTPBRecordBase *)arg1 ;
-(NTPBRecordBase *)base;
-(void)setRole:(int)arg1 ;
-(BOOL)hasLanguage;
-(void)setHasRole:(BOOL)arg1 ;
-(BOOL)hasRole;
-(NSMutableArray *)topics;
-(void)setTopics:(NSMutableArray *)arg1 ;
-(void)setThumbnailURL:(NSString *)arg1 ;
-(NTPBDate *)publishDate;
-(void)setPublishDate:(NTPBDate *)arg1 ;
-(NSString *)videoURL;
-(void)setVideoURL:(NSString *)arg1 ;
-(BOOL)hasSubtitle;
-(NSString *)thumbnailURL;
-(void)clearTopics;
-(void)addTopics:(id)arg1 ;
-(id)topicsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)topicsCount;
-(BOOL)isDraft;
-(BOOL)isPaid;
-(NSString *)accessoryText;
-(void)setClusterID:(NSString *)arg1 ;
-(NSString *)clusterID;
-(BOOL)isBundlePaid;
-(NSString *)sourceChannelTagID;
-(void)setSourceChannelTagID:(NSString *)arg1 ;
-(void)setAllowedStorefrontIDs:(NSMutableArray *)arg1 ;
-(void)setBlockedStorefrontIDs:(NSMutableArray *)arg1 ;
-(void)setHalfLifeMilliseconds:(unsigned long long)arg1 ;
-(void)setIsDraft:(BOOL)arg1 ;
-(void)setIsPaid:(BOOL)arg1 ;
-(void)setMinimumNewsVersion:(long long)arg1 ;
-(NSString *)primaryAudience;
-(NSString *)shortExcerpt;
-(BOOL)isFeatureCandidate;
-(BOOL)isSponsored;
-(NSMutableArray *)iAdCategories;
-(NSMutableArray *)iAdKeywords;
-(NSMutableArray *)iAdSectionIDs;
-(NSMutableArray *)blockedStorefrontIDs;
-(NSMutableArray *)allowedStorefrontIDs;
-(NSString *)flintDocumentURL;
-(NSString *)excerptURL;
-(int)storyType;
-(unsigned long long)halfLifeMilliseconds;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)globalCohorts;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)sourceChannelCohorts;
-(long long)bodyTextLength;
-(NSMutableArray *)flintFontResourceIDs;
-(NSString *)referencedArticleID;
-(long long)publisherArticleVersion;
-(long long)backendArticleVersion;
-(long long)thumbnailFocalFrame;
-(void)setThumbnailFocalFrame:(long long)arg1 ;
-(void)setShortExcerpt:(NSString *)arg1 ;
-(void)setAccessoryText:(NSString *)arg1 ;
-(NSMutableArray *)relatedArticleIDs;
-(NSMutableArray *)moreFromPublisherArticleIDs;
-(void)setStoryType:(int)arg1 ;
-(long long)minimumNewsVersion;
-(NSString *)coverArt;
-(BOOL)isIssueOnly;
-(void)setFlintFontResourceIDs:(NSMutableArray *)arg1 ;
-(void)setTitleCompact:(NSString *)arg1 ;
-(void)setExperimentalTitles:(NSMutableArray *)arg1 ;
-(void)setPublisherArticleVersion:(long long)arg1 ;
-(void)setBackendArticleVersion:(long long)arg1 ;
-(void)setThumbnailLQMetadata:(long long)arg1 ;
-(void)setThumbnailMetadata:(long long)arg1 ;
-(void)setThumbnailMediumMetadata:(long long)arg1 ;
-(void)setThumbnailHQMetadata:(long long)arg1 ;
-(void)setThumbnailUltraHQMetadata:(long long)arg1 ;
-(void)setThumbnailWidgetLQMetadata:(long long)arg1 ;
-(void)setThumbnailWidgetMetadata:(long long)arg1 ;
-(void)setThumbnailWidgetHQMetadata:(long long)arg1 ;
-(void)setThumbnailLQURL:(NSString *)arg1 ;
-(void)setThumbnailMediumURL:(NSString *)arg1 ;
-(void)setThumbnailHQURL:(NSString *)arg1 ;
-(void)setThumbnailUltraHQURL:(NSString *)arg1 ;
-(void)setThumbnailWidgetLQURL:(NSString *)arg1 ;
-(void)setThumbnailWidgetURL:(NSString *)arg1 ;
-(void)setThumbnailWidgetHQURL:(NSString *)arg1 ;
-(void)setExcerptURL:(NSString *)arg1 ;
-(void)setFlintDocumentURL:(NSString *)arg1 ;
-(void)setIsFeatureCandidate:(BOOL)arg1 ;
-(void)setIsSponsored:(BOOL)arg1 ;
-(void)setIAdCategories:(NSMutableArray *)arg1 ;
-(void)setIAdKeywords:(NSMutableArray *)arg1 ;
-(void)setIAdSectionIDs:(NSMutableArray *)arg1 ;
-(void)setPrimaryAudience:(NSString *)arg1 ;
-(void)setReferencedArticleID:(NSString *)arg1 ;
-(void)setRelatedArticleIDs:(NSMutableArray *)arg1 ;
-(void)setMoreFromPublisherArticleIDs:(NSMutableArray *)arg1 ;
-(void)setParentIssueID:(NSString *)arg1 ;
-(void)setLinkedArticleIDs:(NSMutableArray *)arg1 ;
-(void)setLinkedIssueIDs:(NSMutableArray *)arg1 ;
-(void)setBodyTextLength:(long long)arg1 ;
-(void)setBehaviorFlags:(long long)arg1 ;
-(void)setCoverArt:(NSString *)arg1 ;
-(void)setVideoCallToActionTitle:(NSString *)arg1 ;
-(void)setVideoCallToActionURL:(NSString *)arg1 ;
-(void)setIsBundlePaid:(BOOL)arg1 ;
-(void)setIsIssueOnly:(BOOL)arg1 ;
-(void)setStocksClusterID:(NSString *)arg1 ;
-(void)setStocksMetadata:(NSString *)arg1 ;
-(void)setStocksScores:(NSString *)arg1 ;
-(void)setGlobalCohorts:(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)arg1 ;
-(void)setSourceChannelCohorts:(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)arg1 ;
-(void)setArticleRecirculationConfiguration:(NSData *)arg1 ;
-(void)setPublisherSpecifiedArticleIds:(NSMutableArray *)arg1 ;
-(NSString *)parentIssueID;
-(NSString *)titleCompact;
-(NSString *)videoCallToActionTitle;
-(NSString *)videoCallToActionURL;
-(NSMutableArray *)linkedArticleIDs;
-(NSMutableArray *)linkedIssueIDs;
-(NSMutableArray *)experimentalTitles;
-(long long)thumbnailLQMetadata;
-(long long)thumbnailMetadata;
-(long long)thumbnailMediumMetadata;
-(long long)thumbnailHQMetadata;
-(long long)thumbnailUltraHQMetadata;
-(long long)thumbnailWidgetLQMetadata;
-(long long)thumbnailWidgetMetadata;
-(long long)thumbnailWidgetHQMetadata;
-(NSString *)thumbnailLQURL;
-(NSString *)thumbnailMediumURL;
-(NSString *)thumbnailHQURL;
-(NSString *)thumbnailUltraHQURL;
-(NSString *)thumbnailWidgetLQURL;
-(NSString *)thumbnailWidgetURL;
-(NSString *)thumbnailWidgetHQURL;
-(long long)behaviorFlags;
-(NSData *)articleRecirculationConfiguration;
-(NSMutableArray *)publisherSpecifiedArticleIds;
-(NSString *)stocksClusterID;
-(NSString *)stocksMetadata;
-(NSString *)stocksScores;
-(void)setHasPublisherArticleVersion:(BOOL)arg1 ;
-(BOOL)hasPublisherArticleVersion;
-(BOOL)hasBase;
-(BOOL)hasStoryType;
-(void)setHasBackendArticleVersion:(BOOL)arg1 ;
-(BOOL)hasBackendArticleVersion;
-(BOOL)hasClusterID;
-(void)setHasMinimumNewsVersion:(BOOL)arg1 ;
-(BOOL)hasMinimumNewsVersion;
-(void)setHasContentType:(BOOL)arg1 ;
-(BOOL)hasContentType;
-(void)setHasIsPaid:(BOOL)arg1 ;
-(BOOL)hasIsPaid;
-(BOOL)hasParentIssueID;
-(void)setHasIsBundlePaid:(BOOL)arg1 ;
-(BOOL)hasIsBundlePaid;
-(void)setHasBodyTextLength:(BOOL)arg1 ;
-(BOOL)hasBodyTextLength;
-(BOOL)hasGlobalCohorts;
-(BOOL)hasSourceChannelCohorts;
-(void)setThumbnailWidgetLQTaggedURL:(NSString *)arg1 ;
-(void)setThumbnailWidgetTaggedURL:(NSString *)arg1 ;
-(void)setThumbnailWidgetHQTaggedURL:(NSString *)arg1 ;
-(void)addFlintFontResourceIDs:(id)arg1 ;
-(void)addIAdCategories:(id)arg1 ;
-(void)addIAdKeywords:(id)arg1 ;
-(void)addIAdSectionIDs:(id)arg1 ;
-(void)addBlockedStorefrontIDs:(id)arg1 ;
-(void)addAllowedStorefrontIDs:(id)arg1 ;
-(void)addRelatedArticleIDs:(id)arg1 ;
-(void)addMoreFromPublisherArticleIDs:(id)arg1 ;
-(void)addPublisherSpecifiedArticleIds:(id)arg1 ;
-(void)addExperimentalTitles:(id)arg1 ;
-(void)addLinkedArticleIDs:(id)arg1 ;
-(void)addLinkedIssueIDs:(id)arg1 ;
-(BOOL)hasReferencedArticleID;
-(BOOL)hasSourceChannelTagID;
-(BOOL)hasPublishDate;
-(BOOL)hasThumbnailLQURL;
-(void)setHasThumbnailLQMetadata:(BOOL)arg1 ;
-(BOOL)hasThumbnailLQMetadata;
-(BOOL)hasPrimaryAudience;
-(BOOL)hasExcerptURL;
-(BOOL)hasShortExcerpt;
-(BOOL)hasAccessoryText;
-(BOOL)hasContentURL;
-(BOOL)hasFlintDocumentURL;
-(void)clearFlintFontResourceIDs;
-(unsigned long long)flintFontResourceIDsCount;
-(id)flintFontResourceIDsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasVideoURL;
-(void)setHasIsFeatureCandidate:(BOOL)arg1 ;
-(BOOL)hasIsFeatureCandidate;
-(void)setHasIsSponsored:(BOOL)arg1 ;
-(BOOL)hasIsSponsored;
-(void)clearIAdCategories;
-(unsigned long long)iAdCategoriesCount;
-(id)iAdCategoriesAtIndex:(unsigned long long)arg1 ;
-(void)clearIAdKeywords;
-(unsigned long long)iAdKeywordsCount;
-(id)iAdKeywordsAtIndex:(unsigned long long)arg1 ;
-(void)clearIAdSectionIDs;
-(unsigned long long)iAdSectionIDsCount;
-(id)iAdSectionIDsAtIndex:(unsigned long long)arg1 ;
-(void)clearBlockedStorefrontIDs;
-(unsigned long long)blockedStorefrontIDsCount;
-(id)blockedStorefrontIDsAtIndex:(unsigned long long)arg1 ;
-(void)clearAllowedStorefrontIDs;
-(unsigned long long)allowedStorefrontIDsCount;
-(id)allowedStorefrontIDsAtIndex:(unsigned long long)arg1 ;
-(void)setHasIsDraft:(BOOL)arg1 ;
-(BOOL)hasIsDraft;
-(void)clearRelatedArticleIDs;
-(unsigned long long)relatedArticleIDsCount;
-(id)relatedArticleIDsAtIndex:(unsigned long long)arg1 ;
-(void)clearMoreFromPublisherArticleIDs;
-(unsigned long long)moreFromPublisherArticleIDsCount;
-(id)moreFromPublisherArticleIDsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasThumbnailURL;
-(void)setHasThumbnailMetadata:(BOOL)arg1 ;
-(BOOL)hasThumbnailMetadata;
-(void)setHasThumbnailFocalFrame:(BOOL)arg1 ;
-(BOOL)hasThumbnailFocalFrame;
-(BOOL)hasThumbnailMediumURL;
-(void)setHasThumbnailMediumMetadata:(BOOL)arg1 ;
-(BOOL)hasThumbnailMediumMetadata;
-(BOOL)hasThumbnailHQURL;
-(void)setHasThumbnailHQMetadata:(BOOL)arg1 ;
-(BOOL)hasThumbnailHQMetadata;
-(BOOL)hasThumbnailUltraHQURL;
-(void)setHasThumbnailUltraHQMetadata:(BOOL)arg1 ;
-(BOOL)hasThumbnailUltraHQMetadata;
-(void)setHasStoryType:(BOOL)arg1 ;
-(void)setHasBehaviorFlags:(BOOL)arg1 ;
-(BOOL)hasBehaviorFlags;
-(BOOL)hasCoverArt;
-(BOOL)hasThumbnailWidgetLQURL;
-(BOOL)hasThumbnailWidgetLQTaggedURL;
-(void)setHasThumbnailWidgetLQMetadata:(BOOL)arg1 ;
-(BOOL)hasThumbnailWidgetLQMetadata;
-(BOOL)hasThumbnailWidgetURL;
-(BOOL)hasThumbnailWidgetTaggedURL;
-(void)setHasThumbnailWidgetMetadata:(BOOL)arg1 ;
-(BOOL)hasThumbnailWidgetMetadata;
-(BOOL)hasThumbnailWidgetHQURL;
-(BOOL)hasThumbnailWidgetHQTaggedURL;
-(void)setHasThumbnailWidgetHQMetadata:(BOOL)arg1 ;
-(BOOL)hasThumbnailWidgetHQMetadata;
-(BOOL)hasTitleCompact;
-(BOOL)hasVideoCallToActionTitle;
-(BOOL)hasVideoCallToActionURL;
-(BOOL)hasArticleRecirculationConfiguration;
-(void)clearPublisherSpecifiedArticleIds;
-(unsigned long long)publisherSpecifiedArticleIdsCount;
-(id)publisherSpecifiedArticleIdsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasStocksClusterID;
-(BOOL)hasStocksMetadata;
-(BOOL)hasStocksScores;
-(void)clearExperimentalTitles;
-(unsigned long long)experimentalTitlesCount;
-(id)experimentalTitlesAtIndex:(unsigned long long)arg1 ;
-(void)setHasHalfLifeMilliseconds:(BOOL)arg1 ;
-(BOOL)hasHalfLifeMilliseconds;
-(void)clearLinkedArticleIDs;
-(unsigned long long)linkedArticleIDsCount;
-(id)linkedArticleIDsAtIndex:(unsigned long long)arg1 ;
-(void)clearLinkedIssueIDs;
-(unsigned long long)linkedIssueIDsCount;
-(id)linkedIssueIDsAtIndex:(unsigned long long)arg1 ;
-(void)setHasIsIssueOnly:(BOOL)arg1 ;
-(BOOL)hasIsIssueOnly;
-(NSString *)thumbnailWidgetLQTaggedURL;
-(NSString *)thumbnailWidgetTaggedURL;
-(NSString *)thumbnailWidgetHQTaggedURL;
@end
