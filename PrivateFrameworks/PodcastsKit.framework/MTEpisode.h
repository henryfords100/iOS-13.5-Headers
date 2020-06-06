/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSAttributedString, NSSet, MTPodcast, MTSyncInfo, NSData;

@interface MTEpisode : NSManagedObject

@property (nonatomic,retain) NSString * assetURL; 
@property (assign,nonatomic) BOOL audio; 
@property (assign,nonatomic) BOOL saved; 
@property (nonatomic,retain) NSString * author; 
@property (assign,nonatomic) long long byteSize; 
@property (nonatomic,retain) NSString * category; 
@property (nonatomic,retain) NSString * cleanedTitle; 
@property (assign,nonatomic) double downloadDate; 
@property (nonatomic,retain) NSString * downloadPath; 
@property (assign,nonatomic) double duration; 
@property (nonatomic,retain) NSString * enclosureURL; 
@property (assign,nonatomic) long long episodeLevel; 
@property (assign,nonatomic) BOOL explicit; 
@property (assign,nonatomic) BOOL externalType; 
@property (assign,nonatomic) BOOL feedDeleted; 
@property (assign,nonatomic) long long flags; 
@property (assign,nonatomic) BOOL isFromITunesSync; 
@property (nonatomic,retain) NSString * guid; 
@property (assign,nonatomic) int importSource; 
@property (assign,nonatomic) double importDate; 
@property (assign,nonatomic) BOOL isNew; 
@property (nonatomic,retain) NSString * itemDescription; 
@property (assign,nonatomic) BOOL itemDescriptionHasHTML; 
@property (nonatomic,retain) NSAttributedString * itemDescriptionWithHTML; 
@property (nonatomic,retain) NSString * itemDescriptionWithoutHTML; 
@property (assign,nonatomic) double lastDatePlayed; 
@property (assign,nonatomic) double lastUserMarkedAsPlayedDate; 
@property (nonatomic,retain) NSString * metadataIdentifier; 
@property (assign,nonatomic) double metadataTimestamp; 
@property (assign,nonatomic) BOOL metadataFirstSyncEligible; 
@property (assign,nonatomic) long long persistentID; 
@property (assign,nonatomic) long long playCount; 
@property (assign,nonatomic) float playhead; 
@property (assign,nonatomic) BOOL backCatalog; 
@property (nonatomic,readonly) long long playState; 
@property (nonatomic,readonly) long long playStateSource; 
@property (nonatomic,readonly) BOOL playStateManuallySet; 
@property (assign,nonatomic) double playStateLastModifiedDate; 
@property (nonatomic,retain) NSString * podcastUuid; 
@property (assign,nonatomic) double pubDate; 
@property (assign,nonatomic) BOOL sentNotification; 
@property (assign,nonatomic) long long storeTrackId; 
@property (assign,nonatomic) BOOL suppressAutoDownload; 
@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) long long trackNum; 
@property (assign,nonatomic) BOOL unplayedTab; 
@property (nonatomic,retain) NSString * uti; 
@property (nonatomic,retain) NSString * uuid; 
@property (assign,nonatomic) BOOL video; 
@property (nonatomic,retain) NSSet * playlists; 
@property (nonatomic,retain) MTPodcast * podcast; 
@property (nonatomic,retain) NSSet * settings; 
@property (nonatomic,retain) MTSyncInfo * syncInfo; 
@property (assign,nonatomic) BOOL userEpisode; 
@property (assign,nonatomic) BOOL listenNowEpisode; 
@property (nonatomic,retain) NSString * itunesTitle; 
@property (nonatomic,retain) NSString * itunesSubtitle; 
@property (assign,nonatomic) long long seasonNumber; 
@property (assign,nonatomic) long long episodeNumber; 
@property (nonatomic,retain) NSString * episodeType; 
@property (nonatomic,retain) NSString * webpageURL; 
@property (nonatomic,retain) NSData * securityScopedAssetData; 
@property (assign,nonatomic) BOOL visible; 
@property (assign,nonatomic) BOOL userDeleted; 
@property (assign,nonatomic) BOOL manuallyAdded; 
@property (assign,nonatomic) BOOL hasBeenPlayed; 
+(BOOL)exists:(id)arg1 ;
+(id)userDefaultPropertiesAffectingPredicates;
+(id)predicateForIsFromiTunesSync:(BOOL)arg1 ;
+(id)predicateForAllEpisodesOnPodcastUuid:(id)arg1 ;
+(id)predicateForUserEpisodesOnPodcastUuid:(id)arg1 ctx:(id)arg2 ;
+(id)predicateForEpisodesOnUnplayedTabOnPodcastUuid:(id)arg1 ctx:(id)arg2 ;
+(id)predicateForPlayed:(BOOL)arg1 ;
+(id)predicateForUnplayedTabFlag:(BOOL)arg1 ;
+(id)predicateForUserEpisode:(BOOL)arg1 ;
+(id)predicateForIsNew:(BOOL)arg1 ;
+(id)predicateForExternalType:(BOOL)arg1 ;
+(id)predicateForOtherEpisodesOnPodcastUuid:(id)arg1 limittedEpisodesPredicate:(id)arg2 deletePlayedEpisodes:(BOOL)arg3 ;
+(id)predicateForLimittedEpisodesOnPodcastUuid:(id)arg1 determinedByLimit:(long long)arg2 deletePlayedEpisodes:(BOOL)arg3 ;
+(id)predicateForRecentlyPlayedEpisodesToBeDeletedOnPodcastUuid:(id)arg1 deletePlayedEpisodes:(BOOL)arg2 ;
+(id)predicateForSavedEpisodesOnPodcastUuid:(id)arg1 ;
+(id)predicateForEpisodesInFeedForPodcastUuid:(id)arg1 ;
+(id)predicateForEpisodesIsFromiTunesSyncOnPodcastUuid:(id)arg1 ;
+(id)predicateForUserEpisodesOnPodcastUuid:(id)arg1 episodeLimit:(long long)arg2 deletePlayedEpisodes:(BOOL)arg3 ;
+(id)predicateForEpisodesDeterminedByLimitSettings:(long long)arg1 ;
+(id)predicateForPlayStateManuallySet:(BOOL)arg1 ;
+(id)predicateForSaved:(BOOL)arg1 ;
+(id)predicateForBacklog:(BOOL)arg1 ;
+(id)predicateForEpisodeStoreTrackIds:(id)arg1 ;
+(id)predicateForHasBeenPlayed;
+(id)predicateForPodcastIsHidden:(BOOL)arg1 ;
+(id)predicateForPreviouslyPlayed;
+(id)predicateForEpisodeType:(long long)arg1 ;
+(id)predicateForRecentlyPlayed;
+(id)predicateForEpisodesOnUnplayedTabOnPodcastUuid:(id)arg1 episodeLimit:(long long)arg2 deletePlayedEpisodes:(BOOL)arg3 ;
+(id)predicateForFeedDeleted:(BOOL)arg1 ;
+(id)predicateForEpisodesOnSavedTabForPodcastUuid:(id)arg1 ;
+(id)predicateForHasSeasonNumber;
+(id)predicateForSuppressAutoDownload:(BOOL)arg1 ;
+(id)predicateForSentNotification:(BOOL)arg1 ;
+(id)predicateForExplicit:(BOOL)arg1 ;
+(id)predicateForSavedTab:(BOOL)arg1 ;
+(id)predicateForIsBackCatalogItem;
+(id)predicateForVisuallyPlayed:(BOOL)arg1 ;
+(id)predicateForPreviouslyPlayedHidingFutureTimestamps;
+(id)predicateForEpisodesOnUnplayedTab;
+(id)predicateForUserEpisodes;
+(id)predicateForListenNow;
+(id)predicateForDownloaded:(BOOL)arg1 ;
+(id)predicateForVideo:(BOOL)arg1 ;
+(id)predicateForAudio:(BOOL)arg1 ;
+(id)predicateForMetadataFirstSyncEligible:(BOOL)arg1 ;
+(id)predicateForEpisodeUuid:(id)arg1 ;
+(id)predicateForEpisodeUuids:(id)arg1 ;
+(id)predicateForEpisodeGuid:(id)arg1 ;
+(id)predicateForEpisodeGuids:(id)arg1 ;
+(id)predicateForFeedURL:(id)arg1 ;
+(id)predicateForFeedURLs:(id)arg1 ;
+(id)predicateForPersistentId:(id)arg1 ;
+(id)predicateForPersistentIds:(id)arg1 ;
+(id)predicateForHasValidPersistentId:(BOOL)arg1 ;
+(id)predicateForEpisodeTitle:(id)arg1 ;
+(id)predicateForEpisodesImportedAfterDate:(id)arg1 ;
+(id)predicateForEpisodeTypeFilter:(long long)arg1 ;
+(id)predicateForMyEpisodesOnPodcastUuid:(id)arg1 episodeLimit:(long long)arg2 deletePlayedEpisodes:(BOOL)arg3 ;
+(id)predicateForPlaylistEpisodes;
+(id)predicateForEpisodesPublishedToday;
+(id)predicateForEpisodesPublishedThisWeek;
+(id)predicateForEpisodesPublishedThisMonth;
+(id)predicateForNewEpisodesOnPodcastUuid:(id)arg1 ;
+(id)predicateForEpisodesInStationShow:(id)arg1 ;
+(id)predicateForMyEpisodesOnPodcastUuid:(id)arg1 ctx:(id)arg2 ;
+(id)predicateForEpisodeStoreTrackId:(long long)arg1 ;
+(id)predicateForEpisodeGuid:(id)arg1 onPodcastUuid:(id)arg2 ;
+(id)predicateForEpisodeTitle:(id)arg1 onPodcastUuid:(id)arg2 ;
+(id)predicateForSeasonNumber:(long long)arg1 ;
+(id)predicateForEpisodesWithSeasonNumbersOnPodcastUuid:(id)arg1 ;
+(id)insertNewEpisodeInManagedObjectContext:(id)arg1 ;
+(void)prepareForPlatform:(id)arg1 ;
+(long long)downloadSizeLimitForEpisode:(id)arg1 ;
+(id)friendlyPubDateStringForEpisode:(id)arg1 abbreviated:(BOOL)arg2 ;
+(id)timeRemainingStringForEpisode:(id)arg1 abbreviated:(BOOL)arg2 ;
+(long long)downloadSizeLimitForVideo:(BOOL)arg1 ;
+(id)insertNewEpisodeInManagedObjectContext:(id)arg1 title:(id)arg2 podcast:(id)arg3 pubDate:(id)arg4 byteSize:(long long)arg5 guid:(id)arg6 uti:(id)arg7 contentId:(long long)arg8 enclosureUrl:(id)arg9 playStateSource:(int)arg10 importSource:(int)arg11 ;
+(id)episodeWithMetadataIdentifier:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)episodeWithEnclosureURL:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)dateLabelDescriptionForEpisode:(id)arg1 download:(id)arg2 ;
+(id)friendlyPubDateStringForEpisode:(id)arg1 ;
+(id)timeRemainingStringForEpisode:(id)arg1 ;
+(BOOL)isSaveSupported;
+(BOOL)isExternalMedia:(id)arg1 ;
+(void)parseAndPersistHTMLDescriptionIfNeededForEpisodeUuid:(id)arg1 ;
+(id)sortDescriptorsForSeasonsWithOldestEpisodesFirst:(BOOL)arg1 ;
+(id)sortDescriptorsForTitle;
+(id)sortDescriptorsForLastDatePlayedAscending:(BOOL)arg1 ;
+(id)sortDescriptorsForPubDateAscending:(BOOL)arg1 ;
+(id)sortDescriptorsForRecentlyPlayed;
+(id)sortDescriptorsForListenNow;
+(double)endOfTrackForDuration:(double)arg1 ;
+(BOOL)isPlayhead:(double)arg1 resumableForDuration:(double)arg2 ;
+(id)propertyPathForPodcastProperty:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setWebpageURL:(NSString *)arg1 ;
-(BOOL)isRestricted;
-(void)setUti:(NSString *)arg1 ;
-(void)setAuthor:(NSString *)arg1 ;
-(void)setPersistentID:(long long)arg1 ;
-(void)setDuration:(double)arg1 ;
-(BOOL)isVideo;
-(BOOL)isDownloaded;
-(NSString *)assetURL;
-(void)setAssetURL:(NSString *)arg1 ;
-(void)setAssetURL:(NSString *)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(BOOL)isPlayed;
-(BOOL)isAudio;
-(BOOL)isPlayable;
-(void)setPlayCount:(long long)arg1 ;
-(void)setPodcast:(MTPodcast *)arg1 ;
-(void)setEpisodeNumber:(long long)arg1 ;
-(void)setSeasonNumber:(long long)arg1 ;
-(void)setEpisodeType:(NSString *)arg1 ;
-(double)playbackProgress;
-(double)timeRemaining;
-(BOOL)isSaved;
-(void)setItemDescription:(NSString *)arg1 ;
-(BOOL)isShareable;
-(void)setSaved:(BOOL)arg1 ;
-(BOOL)isExplicit;
-(void)setIsNew:(BOOL)arg1 ;
-(BOOL)isMedia;
-(void)setExplicit:(BOOL)arg1 ;
-(id)playURL;
-(id)numberedTitle;
-(void)setPlayhead:(float)arg1 ;
-(BOOL)isTrailer;
-(void)setPubDate:(double)arg1 ;
-(long long)mt_syncID;
-(void)setListenNowEpisode:(BOOL)arg1 ;
-(BOOL)isInUserEpisodes;
-(id)displayURL;
-(void)setStoreTrackId:(long long)arg1 ;
-(void)setByteSize:(long long)arg1 ;
-(void)setEnclosureURL:(NSString *)arg1 ;
-(void)setPlayState:(long long)arg1 manually:(BOOL)arg2 source:(int)arg3 ;
-(void)setLastDatePlayed:(double)arg1 ;
-(void)setMetadataFirstSyncEligible:(BOOL)arg1 ;
-(BOOL)isExternalType;
-(void)updateUPPIdentifierIfNeeded;
-(unsigned long long)reasonForNotPlayable;
-(void)_setValue:(id)arg1 forKey:(id)arg2 asynchronously:(BOOL)arg3 ;
-(id)lazyDescriptionWithHTML:(BOOL)arg1 ;
-(BOOL)isVisuallyPlayed;
-(void)updateUPPTimestamp;
-(BOOL)isLatestEpisodeInPodcast;
-(BOOL)isInMyEpisodes;
-(BOOL)isInPodcastDetailsUnplayedTab;
-(void)setItunesSubtitle:(NSString *)arg1 ;
-(id)playedText;
-(id)playedTextForCarplay;
-(void)didChangePersistentID;
-(void)incremementPlayCount;
-(void)setPlayed:(BOOL)arg1 manually:(BOOL)arg2 source:(int)arg3 ;
-(id)metricsContentIdentifier;
-(void)setPodcastUuid:(NSString *)arg1 ;
-(BOOL)isPlayheadResumable;
-(void)setTrackNum:(long long)arg1 ;
-(id)bestTitle;
-(BOOL)isBackCatalogItem;
-(BOOL)isPlayheadPartiallyPlayed;
-(void)_setAssetUrl:(id)arg1 ;
-(long long)episodeTypeResolvedValue;
-(void)setFeedDeleted:(BOOL)arg1 ;
-(void)setCleanedTitle:(NSString *)arg1 ;
-(void)setEpisodeLevel:(long long)arg1 ;
-(void)setItunesTitle:(NSString *)arg1 ;
-(id)bestSummary;
-(BOOL)isPartiallyPlayed;
-(BOOL)isUnplayed;
-(BOOL)isPartiallyPlayedBackCatalogItem;
-(double)endOfTrack;
-(id)bestUrl;
-(BOOL)isBonus;
-(BOOL)isTopLevelEpisode;
-(void)setIsTopLevelEpisode:(BOOL)arg1 ;
@end
