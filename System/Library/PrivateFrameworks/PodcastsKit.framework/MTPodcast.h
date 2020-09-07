/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet, MTSyncInfo;

@interface MTPodcast : NSManagedObject

@property (nonatomic,readonly) BOOL sortAscending; 
@property (nonatomic,readonly) BOOL isExplicit; 
@property (nonatomic,readonly) BOOL playbackNewestToOldest; 
@property (assign,nonatomic) BOOL needsArtworkUpdate; 
@property (assign,nonatomic) BOOL importing; 
@property (assign,nonatomic) BOOL hasBeenSynced; 
@property (assign,nonatomic) BOOL isExplicit; 
@property (assign,nonatomic) BOOL sortAscending; 
@property (assign,nonatomic) BOOL playbackNewestToOldest; 
@property (getter=isDark,nonatomic,readonly) BOOL dark; 
@property (getter=isPastFeedDark,nonatomic,readonly) BOOL feedDark; 
@property (getter=isPastAutodownloadDark,nonatomic,readonly) BOOL autodownloadDark; 
@property (assign,getter=isAuthenticatedDark,nonatomic) BOOL authenticatedDark; 
@property (assign,nonatomic) double addedDate; 
@property (nonatomic,retain) NSString * author; 
@property (assign,nonatomic) int autoDownloadType; 
@property (nonatomic,retain) NSString * category; 
@property (assign,nonatomic) long long darkCount; 
@property (assign,nonatomic) long long darkCountLocal; 
@property (assign,nonatomic) long long deletePlayedEpisodes; 
@property (assign,nonatomic) double downloadedDate; 
@property (assign,nonatomic) long long episodeLimit; 
@property (nonatomic,retain) NSString * feedURL; 
@property (assign,nonatomic) long long flags; 
@property (assign,nonatomic) BOOL hidden; 
@property (nonatomic,retain) NSString * imageURL; 
@property (nonatomic,retain) NSString * itemDescription; 
@property (assign,nonatomic) double lastDatePlayed; 
@property (assign,nonatomic) double lastTouchDate; 
@property (assign,nonatomic) BOOL notifications; 
@property (assign,nonatomic) BOOL orphanedFromCloud; 
@property (assign,nonatomic) long long podcastPID; 
@property (nonatomic,retain) NSString * provider; 
@property (assign,nonatomic) BOOL showPlacardForOrphanedFromCloud; 
@property (assign,nonatomic) BOOL showPlacardForRemovePlayedEpisodes; 
@property (assign,nonatomic) BOOL showPlacardForSavedEpisodes; 
@property (assign,nonatomic) long long sortOrder; 
@property (assign,nonatomic) long long storeCollectionId; 
@property (nonatomic,retain) NSString * storeCleanURL; 
@property (nonatomic,retain) NSString * storeShortURL; 
@property (assign,nonatomic) double lastStoreEpisodesInfoCheckDate; 
@property (assign,nonatomic) double lastStorePodcastInfoCheckDate; 
@property (assign,nonatomic) BOOL subscribed; 
@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) double updateAvg; 
@property (assign,nonatomic) double updatedDate; 
@property (nonatomic,retain) NSString * updatedFeedURL; 
@property (assign,nonatomic) long long updateInterval; 
@property (assign,nonatomic) double updateStdDev; 
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) NSSet * episodes; 
@property (nonatomic,retain) NSSet * playlists; 
@property (nonatomic,retain) NSSet * playlistSettings; 
@property (nonatomic,retain) MTSyncInfo * syncInfo; 
@property (nonatomic,retain) NSString * showTypeInFeed; 
@property (assign,nonatomic) long long showTypeSetting; 
@property (nonatomic,retain) NSString * nextEpisodeUuid; 
@property (assign,nonatomic) double modifiedDate; 
@property (nonatomic,retain) NSString * webpageURL; 
@property (assign,nonatomic) double feedChangedDate; 
@property (nonatomic,readonly) BOOL autoDownload; 
@property (assign,nonatomic) long long keepEpisodes; 
+(id)predicateForAllPodcasts;
+(id)predicateForOrphanedFromCloud:(BOOL)arg1 ;
+(id)predicateForAutoDownloadType:(int)arg1 ;
+(int)autoDownloadDefaultValue;
+(id)predicateForUpdateInterval:(long long)arg1 ;
+(long long)updateIntervalDefaultValue;
+(double)timeIntervalForUpdate:(long long)arg1 ;
+(BOOL)isRedirectURL:(id)arg1 ;
+(long long)storeCollectionIdForRedirectURL:(id)arg1 ;
+(id)predicateForPodcastStoreId:(long long)arg1 ;
+(id)userDefaultPropertiesAffectingPredicates;
+(id)predicateForSubscribed:(BOOL)arg1 ;
+(id)predicateForSubscribedAndNotHidden:(BOOL)arg1 ;
+(id)predicateForSyncablePodcasts;
+(id)predicateForHasBeenSynced:(BOOL)arg1 ;
+(id)predicateForAutoDownloadEnabled;
+(id)predicateForUpdatablePodcasts;
+(id)predicateForPodcastWithFeedUrl:(id)arg1 ;
+(id)predicateForPodcastWithTitle:(id)arg1 ;
+(id)predicateForPodcastUuids:(id)arg1 ;
+(id)predicateForPodcastUUID:(id)arg1 ;
+(id)predicateForPodcastWithPodcastPID:(long long)arg1 ;
+(long long)episodeLimitDefaultValue;
+(long long)deletePlayedEpisodesDefaultValue;
+(id)_defaultsForLoadingDefaultValues;
+(long long)updateIntervalSettingForTimeInterval:(double)arg1 ;
+(void)prepareForPlatform:(id)arg1 ;
+(id)sortDescriptorsForNewestToOldest:(BOOL)arg1 ;
+(id)podcastUuidForFeedUrlString:(id)arg1 ctx:(id)arg2 ;
+(id)latestEpisodeUuidForPodcastUuid:(id)arg1 ctx:(id)arg2 ;
+(id)allPossibleEpisodeListSortOrderProperties;
+(id)sortDescriptorsForOldestOnTop;
+(id)sortDescriptorsForNewestOnTop;
+(id)podcastUuidForFeedUrl:(id)arg1 ctx:(id)arg2 ;
+(id)podcastUuidForEpisodeUuid:(id)arg1 ctx:(id)arg2 ;
+(id)sortDescriptorsForDateAdded;
+(id)sortDescriptorsForRecentlyUpdated;
+(id)sortDescriptorsForManualOrder;
+(id)sortDescriptorsForTitle;
+(id)sortDescriptorsForAllPodcasts;
+(id)sortDescriptorsForLastDatePlayed;
+(id)insertNewPodcastInManagedObjectContext:(id)arg1 subscribed:(BOOL)arg2 feedUrl:(id)arg3 title:(id)arg4 author:(id)arg5 provider:(id)arg6 category:(id)arg7 imageUrl:(id)arg8 description:(id)arg9 ;
+(id)redirectURLForStoreCollectionId:(long long)arg1 ;
+(id)insertNewPodcastInManagedObjectContext:(id)arg1 subscribed:(BOOL)arg2 feedUrl:(id)arg3 title:(id)arg4 author:(id)arg5 provider:(id)arg6 category:(id)arg7 imageUrl:(id)arg8 description:(id)arg9 adamId:(long long)arg10 ;
+(unsigned long long)totalUnplayedCount;
+(void)setRemovePlayedEpisodesSetting:(long long)arg1 forPodcastUuid:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setWebpageURL:(NSString *)arg1 ;
-(void)setAuthor:(NSString *)arg1 ;
-(void)setFlags:(long long)arg1 ;
-(id)shareURL;
-(void)setImageURL:(NSString *)arg1 ;
-(void)setSubscribed:(BOOL)arg1 ;
-(id)redirectURL;
-(void)setItemDescription:(NSString *)arg1 ;
-(void)setModifiedDate:(double)arg1 ;
-(BOOL)isShareable;
-(void)setIsExplicit:(BOOL)arg1 ;
-(BOOL)isExplicit;
-(BOOL)isDark;
-(id)seasonNumbers;
-(BOOL)sortAscending;
-(BOOL)sortAscending;
-(void)setSortAscending:(BOOL)arg1 ;
-(long long)mt_syncID;
-(BOOL)isAuthenticatedDark;
-(BOOL)isPastAutodownloadDark;
-(BOOL)isPastFeedDark;
-(id)episodesAfterEpisode:(id)arg1 restrictToUserEpisodes:(BOOL)arg2 ;
-(id)newestUserEpisodeExcludingExplicit:(long long)arg1 ;
-(id)oldestUserEpisodeExcludingExplicit:(long long)arg1 ;
-(id)newestEpisodeExcludingUuid:(id)arg1 excludeExplicit:(long long)arg2 ;
-(id)oldestEpisodeExcludingExplicit:(long long)arg1 ;
-(void)setPodcastPID:(long long)arg1 ;
-(BOOL)playbackNewestToOldest;
-(id)displayURL;
-(int)autoDownloadResolvedValue;
-(long long)episodeLimitResolvedValue;
-(BOOL)deletePlayedEpisodesResolvedValue;
-(id)sortDescriptorsForSortOrder;
-(void)setLastDatePlayed:(double)arg1 ;
-(void)markPlaylistsForUpdate;
-(id)episodeOlderThanEpisode:(id)arg1 ;
-(void)setPlaybackNewestToOldest:(BOOL)arg1 ;
-(void)setDeletePlayedEpisodes:(long long)arg1 ;
-(BOOL)needsArtworkUpdate;
-(BOOL)updateCursorPosition:(BOOL)arg1 ;
-(id)mostRecentlyPlayedEpisode;
-(id)userEpisodeAfterEpisode:(id)arg1 ;
-(id)mostRecentlyPlayedEpisodeExcludingExplicit:(long long)arg1 ;
-(id)mostRecentlyPlayedEpisodeExcludingEpisodeUuid:(id)arg1 restrictedToLibrary:(BOOL)arg2 excludeExplicit:(long long)arg3 ;
-(id)mostRecentlyPlayedEpisodeExcludingEpisodeUuid:(id)arg1 restrictedToLibrary:(BOOL)arg2 excludeExplicit:(long long)arg3 excludeStreaming:(long long)arg4 ;
-(id)mostRecentlyPlayedEpisodeExcludingEpisodeUuid:(id)arg1 restrictedToLibrary:(BOOL)arg2 ;
-(id)_episodeAfterEpisode:(id)arg1 usePlayOrder:(BOOL)arg2 restrictToUserEpisodes:(BOOL)arg3 excludePlayed:(BOOL)arg4 ;
-(id)_episodesNextToEpisode:(id)arg1 after:(BOOL)arg2 usePlayOrder:(BOOL)arg3 restrictToUserEpisodes:(BOOL)arg4 excludePlayed:(BOOL)arg5 excludeExplicit:(long long)arg6 limit:(long long)arg7 ;
-(id)userEpisodeNewerThanEpisode:(id)arg1 excludePlayed:(BOOL)arg2 excludeExplicit:(long long)arg3 excludeStreaming:(long long)arg4 ;
-(id)_episodeAfterEpisode:(id)arg1 usePlayOrder:(BOOL)arg2 restrictToUserEpisodes:(BOOL)arg3 excludePlayed:(BOOL)arg4 excludeExplicit:(long long)arg5 excludeStreaming:(long long)arg6 ;
-(id)_episodeBeforeEpisode:(id)arg1 usePlayOrder:(BOOL)arg2 restrictToUserEpisodes:(BOOL)arg3 excludePlayed:(BOOL)arg4 ;
-(id)_episodeAfterEpisode:(id)arg1 usePlayOrder:(BOOL)arg2 restrictToUserEpisodes:(BOOL)arg3 excludePlayed:(BOOL)arg4 excludeExplicit:(long long)arg5 ;
-(id)_episodeNextToEpisode:(id)arg1 after:(BOOL)arg2 usePlayOrder:(BOOL)arg3 restrictToUserEpisodes:(BOOL)arg4 excludePlayed:(BOOL)arg5 excludeExplicit:(long long)arg6 excludeStreaming:(long long)arg7 ;
-(id)_episodeNextToEpisode:(id)arg1 after:(BOOL)arg2 usePlayOrder:(BOOL)arg3 restrictToUserEpisodes:(BOOL)arg4 excludePlayed:(BOOL)arg5 excludeExplicit:(long long)arg6 ;
-(id)_episodesNextToEpisode:(id)arg1 after:(BOOL)arg2 usePlayOrder:(BOOL)arg3 restrictToUserEpisodes:(BOOL)arg4 excludePlayed:(BOOL)arg5 excludeExplicit:(long long)arg6 excludeStreaming:(long long)arg7 limit:(long long)arg8 ;
-(id)sortDescriptorsForPlayOrder;
-(id)newestEpisodeExcludingUuid:(id)arg1 excludeExplicit:(long long)arg2 excludeStreaming:(long long)arg3 ;
-(id)_latestOrOldestEpisode:(BOOL)arg1 restrictToUserEpisodes:(BOOL)arg2 excludePlayed:(BOOL)arg3 excludeExplicit:(long long)arg4 excludeStreaming:(long long)arg5 excludingEpisodeUuid:(id)arg6 ;
-(id)_latestOrOldestEpisode:(BOOL)arg1 restrictToUserEpisodes:(BOOL)arg2 excludePlayed:(BOOL)arg3 excludeExplicit:(long long)arg4 episodeTypeFilter:(long long)arg5 ;
-(id)newestEpisodeNotPlayedExcludingExplicit:(long long)arg1 excludeStreaming:(long long)arg2 ;
-(id)_latestOrOldestEpisode:(BOOL)arg1 restrictToUserEpisodes:(BOOL)arg2 excludePlayed:(BOOL)arg3 excludeExplicit:(long long)arg4 excludeStreaming:(long long)arg5 ;
-(id)_latestOrOldestEpisode:(BOOL)arg1 restrictToUserEpisodes:(BOOL)arg2 excludePlayed:(BOOL)arg3 excludeExplicit:(long long)arg4 ;
-(id)newestUserEpisodeNotPlayedExcludingExplicit:(long long)arg1 excludeStreaming:(long long)arg2 ;
-(id)oldestEpisodeExcludingExplicit:(long long)arg1 excludeStreaming:(long long)arg2 ;
-(id)oldestEpisodeNotPlayedExcludingExplicit:(long long)arg1 ;
-(id)oldestEpisodeNotPlayedExcludingExplicit:(long long)arg1 excludingStreaming:(long long)arg2 ;
-(id)oldestUserEpisodeExcludingExplicit:(long long)arg1 excludeStreaming:(long long)arg2 ;
-(id)oldestUserEpisodeNotPlayedExcludingExplicit:(long long)arg1 excludeStreaming:(long long)arg2 ;
-(id)_latestOrOldestEpisode:(BOOL)arg1 restrictToUserEpisodes:(BOOL)arg2 excludePlayed:(BOOL)arg3 excludeExplicit:(long long)arg4 excludeStreaming:(long long)arg5 excludingEpisodeUuid:(id)arg6 episodeTypeFilter:(long long)arg7 ;
-(id)_latestOrOldestEpisode:(BOOL)arg1 restrictToUserEpisodes:(BOOL)arg2 excludePlayed:(BOOL)arg3 excludeExplicit:(long long)arg4 excludingEpisodeUuid:(id)arg5 episodeTypeFilter:(long long)arg6 ;
-(id)oldestEpisodeInLatestSeasonOrShowExcludingPlayed:(BOOL)arg1 excludeExplicit:(long long)arg2 ;
-(id)oldestEpisodeInLatestSeasonOrShowExcludingPlayed:(BOOL)arg1 excludeExplicit:(long long)arg2 excludeStreaming:(long long)arg3 ;
-(long long)latestSeasonNumber;
-(id)episodesInSeasonNumber:(long long)arg1 oldestEpisodesFirst:(BOOL)arg2 excludePlayed:(BOOL)arg3 excludeExplicit:(long long)arg4 excludeStreaming:(long long)arg5 limit:(unsigned long long)arg6 ;
-(id)_fetchRequestForDistinctSeasons;
-(id)episodesInSeasonNumber:(long long)arg1 ;
-(id)episodesInSeasonNumber:(long long)arg1 oldestEpisodesFirst:(BOOL)arg2 ;
-(id)episodesInSeasonNumber:(long long)arg1 oldestEpisodesFirst:(BOOL)arg2 excludePlayed:(BOOL)arg3 excludeExplicit:(long long)arg4 limit:(unsigned long long)arg5 ;
-(id)currentFeedURL;
-(void)setHasBeenSynced:(BOOL)arg1 ;
-(BOOL)hasBeenSynced;
-(void)setImporting:(BOOL)arg1 ;
-(BOOL)importing;
-(void)setNeedsArtworkUpdate:(BOOL)arg1 ;
-(void)setFeedChangedDate:(double)arg1 ;
-(void)setUpdateStdDev:(double)arg1 ;
-(void)setUpdateAvg:(double)arg1 ;
-(void)setShowTypeInFeed:(NSString *)arg1 ;
-(long long)showTypeResolvedValue;
-(long long)showTypeInFeedResolvedValue;
-(BOOL)isSerialShowTypeInFeed;
-(void)setShowTypeSetting:(long long)arg1 ;
-(id)episodeToResume;
-(id)mostRecentlyPlayedEpisodeExcludingExplicit:(long long)arg1 excludingStreaming:(long long)arg2 ;
-(id)mostRecentlyPlayedEpisodeRestrictedToLibrary:(BOOL)arg1 ;
-(id)mostRecentlyPlayedEpisodeExcludingEpisodeUuid:(id)arg1 ;
-(id)mostRecentlyManuallyAddedEpisode;
-(id)userEpisodesAfterEpisode:(id)arg1 ;
-(id)userEpisodeNewerThanEpisode:(id)arg1 excludePlayed:(BOOL)arg2 excludeExplicit:(long long)arg3 ;
-(id)episodeNewerThanEpisode:(id)arg1 excludePlayed:(BOOL)arg2 ;
-(id)episodeNewerThanEpisode:(id)arg1 ;
-(id)episodeAfterEpisode:(id)arg1 ;
-(id)firstUserEpisodeNotPlayed;
-(id)newestEpisode;
-(id)newestFullEpisode;
-(id)newestEpisodeNotPlayedExcludingExplicit:(long long)arg1 ;
-(id)newestUserEpisodeNotPlayedExcludingExplicit:(long long)arg1 ;
-(id)oldestEpisode;
-(id)oldestFullEpisode;
-(id)oldestEpisodeNotPlayed;
-(id)oldestUserEpisode;
-(id)oldestUserEpisodeNotPlayedExcludingExplicit:(long long)arg1 ;
-(id)newestEpisodeUuid;
-(id)_latestOrOldestEpisode:(BOOL)arg1 restrictToUserEpisodes:(BOOL)arg2 excludePlayed:(BOOL)arg3 ;
-(id)_latestOrOldestEpisode:(BOOL)arg1 restrictToUserEpisodes:(BOOL)arg2 excludePlayed:(BOOL)arg3 excludeExplicit:(long long)arg4 excludingEpisodeUuid:(id)arg5 ;
-(id)oldestEpisodeInLatestSeasonOrShow;
-(BOOL)hasAtLeastOneSeason;
-(BOOL)hasMultipleSeasons;
-(id)episodesInLatestSeason;
-(id)bestDescription;
-(void)updateLastTouchDate;
-(void)updateEpisodesMetadataIdentifiers;
-(id)bestAvailableStoreCleanURL;
-(void)setUpdatedFeedURL:(NSString *)arg1 ;
-(id)twitterShareURL;
-(void)setOrphanedFromCloud:(BOOL)arg1 ;
-(void)setAuthenticatedDark:(BOOL)arg1 ;
-(void)resetGoDark;
-(id)countOfNewEpisodes;
-(id)countOfUnplayedEpisodes;
-(id)bestFeedURLExcludingRedirectURL:(BOOL)arg1 ;
-(unsigned long long)countOfMyEpisodes;
@end
