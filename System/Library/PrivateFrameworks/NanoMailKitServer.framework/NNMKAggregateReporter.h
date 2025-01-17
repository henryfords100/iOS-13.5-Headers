/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NNMKAggregateReporter : NSObject
+(id)_buildVersion;
+(BOOL)_reportingEnabled;
+(long long)_delayInMSFromDateSynced:(id)arg1 ;
+(void)_postRawValue:(long long)arg1 key:(id)arg2 ;
+(void)_postGroupedDelayInMS:(long long)arg1 key:(id)arg2 ;
+(void)_postGroupedSizeInBytes:(long long)arg1 key:(id)arg2 ;
+(void)_addScalarValue1ToKey:(id)arg1 ;
+(void)_postGroupedValue:(float)arg1 key:(id)arg2 ;
+(void)reportAttachmentDownloadDuration:(double)arg1 ;
+(void)reportContentDownloadDuration:(double)arg1 ;
+(void)reportMessageDeliveryDuration:(double)arg1 ;
+(void)reportSyncAccountsStandaloneActiveCount:(unsigned long long)arg1 ;
+(void)reportSyncAccountsStandalonePendingCount:(unsigned long long)arg1 ;
+(void)reportSyncAccountsStandaloneNotSupportCount:(unsigned long long)arg1 ;
+(void)reportCredentialsExpired;
+(void)reportStandaloneFetchFailed;
+(void)reportStandaloneMessageDeliveryFailed;
+(void)reportStandaloneContentDownloadFailed;
+(void)reportStandaloneAttachmentDownloadFailed;
+(void)reportFetchManualStandalone;
+(void)reportFetchManualInRange;
+(void)reportFetchManualCloud;
+(void)reportFetchResumeStandalone;
+(void)reportFetchResumeInRange;
+(void)reportFetchResumeCloud;
+(void)reportHtmlContentRenderingTime:(double)arg1 ;
+(void)reportTextContentRenderingTime:(double)arg1 ;
+(void)reportWebKitRenderingProcessCrash;
+(void)reportWebKitZoomInteraction;
+(void)reportWebKitLinkTapped;
+(void)reportDisplayingHtmlMessage;
+(void)reportDisplayingTextMessage;
+(void)reportMessageReceivedWithId:(id)arg1 willGenerateNotification:(BOOL)arg2 fullSyncVersion:(unsigned long long)arg3 dateSynced:(id)arg4 ;
+(void)reportMessageUpdateReceivedForMessageWithId:(id)arg1 fullSyncVersion:(unsigned long long)arg2 dateSynced:(id)arg3 ;
+(void)reportMessageDeletionReceivedForMessageWithId:(id)arg1 fullSyncVersion:(unsigned long long)arg2 dateSynced:(id)arg3 ;
+(void)reportOriginalMessageContentSizeInBytes:(unsigned long long)arg1 ;
+(void)reportContentReceivedForMessageWithId:(id)arg1 sizeInBytes:(unsigned long long)arg2 fullSyncVersion:(unsigned long long)arg3 dateSynced:(id)arg4 ;
+(void)reportImageAttachmentReceivedForMessageWithId:(id)arg1 contentId:(id)arg2 sizeInBytes:(unsigned long long)arg3 fullSyncVersion:(unsigned long long)arg4 dateSynced:(id)arg5 ;
+(void)reportAppLaunched;
+(void)reportAppResumed;
+(void)reportAppBackgroundRefreshed;
+(void)reportNotificationReceivedOverCloudMessaging;
+(void)reportNewMessageCountFetchedOverCloudMessaging:(unsigned long long)arg1 ;
+(void)reportMessageDeletionCountFetchedOverCloudMessaging:(unsigned long long)arg1 ;
+(void)reportMessageUpdateCountFetchedOverCloudMessaging:(unsigned long long)arg1 ;
+(void)reportContentDisplayedForMessageWithId:(id)arg1 hasMainAlternative:(BOOL)arg2 hasTextAlternative:(BOOL)arg3 ;
+(void)reportMailboxSelectionChanged:(id)arg1 fromWatch:(BOOL)arg2 ;
+(void)reportMoreMessagesReceivedConversationSpecific:(BOOL)arg1 fullSyncVersion:(unsigned long long)arg2 dateSynced:(id)arg3 ;
+(void)reportRenderedNotificationUsingLocalContent:(BOOL)arg1 mailboxSynced:(BOOL)arg2 messageSynced:(BOOL)arg3 contentDownloaded:(BOOL)arg4 ;
+(void)reportFullSyncRequestedFromWatch:(BOOL)arg1 corruptionDetected:(BOOL)arg2 migrationRelated:(BOOL)arg3 idsFailureRelated:(BOOL)arg4 fullSyncVersionMatchRelated:(BOOL)arg5 ;
+(void)reportHaltSyncRequestedFromWatch:(BOOL)arg1 ;
+(void)reportMailLinkHandoffAdvertisedByNotification:(BOOL)arg1 ;
+(void)reportMailLinkHandoffContinuedByNotification:(BOOL)arg1 ;
+(void)reportMailAttachmentHandoffAdvertisedByNotification:(BOOL)arg1 ;
+(void)reportMailAttachmentHandoffContinuedByNotification:(BOOL)arg1 ;
+(void)reportFetchOlderMessages;
+(void)reportFetchForBatchResponseLatency:(double)arg1 ;
+(void)reportFetchForBatchedResponse:(BOOL)arg1 ;
+(void)reportComposedMessageSizeInBytes:(unsigned long long)arg1 ;
+(void)reportNewMessageComposedFromApp:(BOOL)arg1 mailto:(BOOL)arg2 ;
+(void)reportMessageRepliedFromApp:(BOOL)arg1 ;
+(void)reportComposedMessageSendFailure;
+(void)reportNotificationAction:(unsigned long long)arg1 ;
+(void)reportCellRighSwipeActionChanged:(id)arg1 ;
+(void)reportCellSwipeActionTypeExecuted:(id)arg1 ;
+(void)reportCellRighSwipeActionIgnored;
@end

