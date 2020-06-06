/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksCore.framework/StocksCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StocksCore/StocksCore-Structs.h>
#import <libobjc.A.dylib/FCHeadlineProviding.h>

@class NSString, NSDate, FCHeadlineThumbnail, NSURL, NSArray, FCCoverArt, NSSet, FCFeedPersonalizedItemScoreProfile, FCTopStoriesStyleConfiguration, NSData, FCHeadlineExperimentalTitleMetadata, FCIssue, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList;

@interface SCWebHeadline : NSObject <FCHeadlineProviding> {

	NSString* _identifier;
	NSString* _articleID;
	NSURL* _contentURL;
	NSString* _title;
	NSString* _shortExcerpt;
	NSDate* _publishDate;
	NSString* _sourceName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long feedElementType; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * sourceFeedID; 
@property (nonatomic,copy,readonly) NSString * itemID; 
@property (nonatomic,copy,readonly) NSDate * publishDate; 
@property (nonatomic,readonly) unsigned long long halfLife; 
@property (nonatomic,copy,readonly) NSString * publisherID; 
@property (nonatomic,copy,readonly) NSArray * topicIDs; 
@property (nonatomic,readonly) double globalUserFeedback; 
@property (nonatomic,readonly) BOOL hasGlobalUserFeedback; 
@property (getter=isANF,nonatomic,readonly) BOOL anf; 
@property (getter=isPaid,nonatomic,readonly) BOOL paid; 
@property (nonatomic,readonly) BOOL hasVideo; 
@property (getter=isHiddenFromAutoFavorites,nonatomic,readonly) BOOL hiddenFromAutoFavorites; 
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * globalCohorts; 
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * publisherCohorts; 
@property (getter=isBundlePaid,nonatomic,readonly) BOOL bundlePaid; 
@property (nonatomic,readonly) long long bodyTextLength; 
@property (nonatomic,readonly) BOOL isFeatured; 
@property (nonatomic,copy,readonly) NSString * feedID; 
@property (nonatomic,copy,readonly) NSString * articleID; 
@property (nonatomic,copy,readonly) NSString * clusterID; 
@property (nonatomic,readonly) unsigned long long contentType; 
@property (nonatomic,readonly) unsigned long long order; 
@property (nonatomic,copy,readonly) NSString * sourceChannelID; 
@property (nonatomic,readonly) unsigned long long publishDateMilliseconds; 
@property (nonatomic,readonly) unsigned long long feedHalfLifeMilliseconds; 
@property (getter=isFromBlockedStorefront,nonatomic,readonly) BOOL fromBlockedStorefront; 
@property (getter=isExplicitContent,nonatomic,readonly) BOOL explicitContent; 
@property (nonatomic,readonly) long long minimumNewsVersion; 
@property (nonatomic,readonly) long long publisherArticleVersion; 
@property (nonatomic,readonly) BOOL canBePurchased; 
@property (nonatomic,copy,readonly) id<FCChannelProviding> sourceChannel; 
@property (nonatomic,copy,readonly) NSString * versionIdentifier; 
@property (nonatomic,copy,readonly) NSString * referencedArticleID; 
@property (nonatomic,copy,readonly) NSString * primaryAudience; 
@property (nonatomic,copy,readonly) NSString * title;                                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * titleCompact; 
@property (nonatomic,readonly) long long backendArticleVersion; 
@property (nonatomic,copy,readonly) NSString * sourceName;                                                        //@synthesize sourceName=_sourceName - In the implementation block
@property (nonatomic,readonly) CGRect thumbnailFocalFrame; 
@property (nonatomic,readonly) BOOL hasThumbnail; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailLQ; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnail; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailMedium; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailHQ; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailUltraHQ; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailWidgetLQ; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailWidget; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailWidgetHQ; 
@property (nonatomic,copy,readonly) NSString * shortExcerpt;                                                      //@synthesize shortExcerpt=_shortExcerpt - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessoryText; 
@property (nonatomic,copy,readonly) NSURL * contentURL;                                                           //@synthesize contentURL=_contentURL - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate; 
@property (nonatomic,copy,readonly) NSDate * lastFetchedDate; 
@property (nonatomic,copy,readonly) NSArray * topics; 
@property (nonatomic,readonly) NSURL * videoURL; 
@property (nonatomic,readonly) double videoDuration; 
@property (getter=isFeatureCandidate,nonatomic,readonly) BOOL featureCandidate; 
@property (getter=isSponsored,nonatomic,readonly) BOOL sponsored; 
@property (getter=isDisplayingAsNativeAd,nonatomic,readonly) BOOL displayAsNativeAd; 
@property (nonatomic,copy,readonly) NSString * sponsoredBy; 
@property (nonatomic,copy,readonly) NSArray * iAdCategories; 
@property (nonatomic,copy,readonly) NSArray * iAdKeywords; 
@property (nonatomic,copy,readonly) NSArray * iAdSectionIDs; 
@property (nonatomic,copy,readonly) NSArray * blockedStorefrontIDs; 
@property (nonatomic,copy,readonly) NSArray * allowedStorefrontIDs; 
@property (getter=isDeleted,nonatomic,readonly) BOOL deleted; 
@property (nonatomic,readonly) BOOL isDraft; 
@property (nonatomic,copy,readonly) NSString * localDraftPath; 
@property (nonatomic,copy,readonly) NSArray * relatedArticleIDs; 
@property (nonatomic,copy,readonly) NSArray * moreFromPublisherArticleIDs; 
@property (nonatomic,readonly) FCCoverArt * coverArt; 
@property (nonatomic,copy,readonly) NSString * videoCallToActionTitle; 
@property (nonatomic,copy,readonly) NSURL * videoCallToActionURL; 
@property (nonatomic,copy,readonly) NSString * language; 
@property (nonatomic,readonly) BOOL needsRapidUpdates; 
@property (nonatomic,readonly) BOOL showMinimalChrome; 
@property (getter=isPressRelease,nonatomic,readonly) BOOL pressRelease; 
@property (getter=isBoundToContext,nonatomic,readonly) BOOL boundToContext; 
@property (getter=isHiddenFromFeeds,nonatomic,readonly) BOOL hiddenFromFeeds; 
@property (nonatomic,copy,readonly) NSString * surfacedBySectionID; 
@property (nonatomic,copy,readonly) NSString * surfacedByChannelID; 
@property (nonatomic,copy,readonly) NSString * surfacedByTopicID; 
@property (nonatomic,copy,readonly) NSString * surfacedByBinID; 
@property (nonatomic,copy,readonly) NSSet * surfacedByTagIDs; 
@property (nonatomic,readonly) double tileProminenceScore; 
@property (nonatomic,readonly) FCFeedPersonalizedItemScoreProfile * scoreProfile; 
@property (nonatomic,readonly) BOOL isTopStory; 
@property (nonatomic,readonly) unsigned long long topStoryType; 
@property (nonatomic,readonly) BOOL usesImageOnTopLayout; 
@property (nonatomic,readonly) unsigned long long feedOrder; 
@property (nonatomic,readonly) unsigned long long storyType; 
@property (nonatomic,readonly) FCTopStoriesStyleConfiguration * storyStyle; 
@property (nonatomic,copy,readonly) NSDate * displayDate; 
@property (nonatomic,readonly) BOOL showSubscriptionRequiredText; 
@property (nonatomic,readonly) BOOL isBlockedExplicitContent; 
@property (nonatomic,readonly) BOOL showPublisherLogo; 
@property (nonatomic,readonly) id<FCNativeAdProviding> associatedAd; 
@property (nonatomic,readonly) NSString * articleRecirculationConfigJSON; 
@property (nonatomic,readonly) NSArray * publisherSpecifiedArticleIDs; 
@property (nonatomic,readonly) unsigned long long role; 
@property (nonatomic,readonly) id<FCHeadlineStocksFields> stocksFields; 
@property (nonatomic,readonly) NSData * backingArticleRecordData; 
@property (nonatomic,copy,readonly) FCHeadlineExperimentalTitleMetadata * experimentalTitleMetadata; 
@property (nonatomic,readonly) BOOL webEmbedsEnabled; 
@property (nonatomic,copy,readonly) FCIssue * masterIssue; 
@property (getter=isIssueOnly,nonatomic,readonly) BOOL issueOnly; 
@property (nonatomic,readonly) BOOL showBundleSoftPaywall; 
@property (nonatomic,copy,readonly) NSArray * linkedArticleIDs; 
@property (nonatomic,copy,readonly) NSArray * linkedIssueIDs; 
@property (nonatomic,copy,readonly) NSString * callToActionText; 
@property (nonatomic,readonly) BOOL isLocalDraft; 
@property (nonatomic,readonly) BOOL useTransparentNavigationBar; 
-(NSString *)identifier;
-(NSString *)publisherID;
-(unsigned long long)order;
-(NSString *)title;
-(unsigned long long)contentType;
-(BOOL)hasThumbnail;
-(NSString *)itemID;
-(NSURL *)contentURL;
-(NSString *)language;
-(NSString *)versionIdentifier;
-(BOOL)isDeleted;
-(FCHeadlineThumbnail *)thumbnail;
-(NSDate *)lastModifiedDate;
-(NSString *)sourceName;
-(NSArray *)topics;
-(BOOL)hasVideo;
-(NSDate *)publishDate;
-(NSURL *)videoURL;
-(double)videoDuration;
-(BOOL)isExplicitContent;
-(NSDate *)displayDate;
-(BOOL)isDraft;
-(BOOL)isPaid;
-(NSString *)accessoryText;
-(NSString *)clusterID;
-(NSDate *)lastFetchedDate;
-(id<FCChannelProviding>)sourceChannel;
-(NSString *)articleID;
-(NSString *)feedID;
-(NSString *)localDraftPath;
-(NSString *)primaryAudience;
-(NSString *)shortExcerpt;
-(NSArray *)topicIDs;
-(BOOL)isFeatureCandidate;
-(BOOL)isSponsored;
-(NSArray *)iAdCategories;
-(NSArray *)iAdKeywords;
-(NSArray *)iAdSectionIDs;
-(NSArray *)blockedStorefrontIDs;
-(NSArray *)allowedStorefrontIDs;
-(NSString *)surfacedByBinID;
-(NSString *)surfacedBySectionID;
-(NSString *)surfacedByChannelID;
-(NSString *)surfacedByTopicID;
-(NSSet *)surfacedByTagIDs;
-(unsigned long long)topStoryType;
-(double)tileProminenceScore;
-(BOOL)usesImageOnTopLayout;
-(unsigned long long)storyType;
-(BOOL)isHiddenFromFeeds;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)globalCohorts;
-(NSString *)sourceFeedID;
-(unsigned long long)halfLife;
-(double)globalUserFeedback;
-(BOOL)hasGlobalUserFeedback;
-(BOOL)isANF;
-(BOOL)isHiddenFromAutoFavorites;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)publisherCohorts;
-(void)enumerateTopicCohortsWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)publishDateMilliseconds;
-(NSString *)articleRecirculationConfigJSON;
-(NSString *)referencedArticleID;
-(long long)publisherArticleVersion;
-(long long)backendArticleVersion;
-(CGRect)thumbnailFocalFrame;
-(FCHeadlineThumbnail *)thumbnailLQ;
-(FCHeadlineThumbnail *)thumbnailMedium;
-(FCHeadlineThumbnail *)thumbnailHQ;
-(FCHeadlineThumbnail *)thumbnailUltraHQ;
-(NSArray *)relatedArticleIDs;
-(NSArray *)moreFromPublisherArticleIDs;
-(NSArray *)publisherSpecifiedArticleIDs;
-(FCTopStoriesStyleConfiguration *)storyStyle;
-(BOOL)needsRapidUpdates;
-(BOOL)showMinimalChrome;
-(BOOL)isBoundToContext;
-(BOOL)isPressRelease;
-(long long)minimumNewsVersion;
-(FCCoverArt *)coverArt;
-(NSString *)sourceChannelID;
-(long long)feedElementType;
-(FCFeedPersonalizedItemScoreProfile *)scoreProfile;
-(unsigned long long)feedHalfLifeMilliseconds;
-(BOOL)isFromBlockedStorefront;
-(BOOL)canBePurchased;
-(NSString *)titleCompact;
-(FCHeadlineThumbnail *)thumbnailWidgetLQ;
-(FCHeadlineThumbnail *)thumbnailWidget;
-(FCHeadlineThumbnail *)thumbnailWidgetHQ;
-(BOOL)isDisplayingAsNativeAd;
-(NSString *)sponsoredBy;
-(NSString *)videoCallToActionTitle;
-(NSURL *)videoCallToActionURL;
-(BOOL)isTopStory;
-(unsigned long long)feedOrder;
-(BOOL)showSubscriptionRequiredText;
-(BOOL)isBlockedExplicitContent;
-(BOOL)showPublisherLogo;
-(id<FCNativeAdProviding>)associatedAd;
-(id)thumbnailWidgetLQTagged;
-(id)thumbnailWidgetTagged;
-(id)thumbnailWidgetHQTagged;
-(unsigned long long)articleContentType;
-(double)globalScore;
-(id)initWithURL:(id)arg1 title:(id)arg2 shortExcerpt:(id)arg3 publishDate:(id)arg4 sourceName:(id)arg5 ;
-(id)endOfArticleTopicIDs;
@end
