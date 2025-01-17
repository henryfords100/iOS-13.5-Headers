/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <NotesShared/ICCloudSyncingObject.h>
#import <libobjc.A.dylib/ICSearchIndexableNote.h>
#import <libobjc.A.dylib/ICCloudObject.h>
#import <libobjc.A.dylib/TTMergeableStringDelegate.h>
#import <libobjc.A.dylib/ICNoteUI.h>
#import <libobjc.A.dylib/NSTextStorageDelegate.h>

@protocol ICNoteMergeabilityDelegate;
@class NSArray, NSUUID, NSMutableArray, TTVectorMultiTimestamp, NSData, TTMergeableStringVersionedDocument, ICMergableDictionary, NSString, ICFolder, ICAccount, NSDate, NSNumber, ICAttachment, NSSet, ICNoteData;

@interface ICNote : ICCloudSyncingObject <ICSearchIndexableNote, ICCloudObject, TTMergeableStringDelegate, ICNoteUI, NSTextStorageDelegate> {

	NSUUID* _uuid;
	id _noteDidSaveObserver;
	NSMutableArray* _noteDidSaveBlocks;
	BOOL needsRefresh;
	BOOL needsToSaveLastViewedTimestamp;
	BOOL preventReleasingTextStorage;
	BOOL shouldAddMediaAsynchronously;
	BOOL isRecoveringCryptoWrappedKey;
	TTVectorMultiTimestamp* archivedTimestamp;
	NSData* decryptedData;
	TTMergeableStringVersionedDocument* _document;
	TTVectorMultiTimestamp* _lastNotifiedTimestamp;
	TTVectorMultiTimestamp* _lastViewedTimestamp;
	id<ICNoteMergeabilityDelegate> mergeabilityDelegate;
	NSUUID* _replicaIDOverride;
	ICMergableDictionary* _replicaIDToUserIDDict;
	id _reservedForCollaborationColorManager;
	id _reservedForTextStorage;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isModernNote; 
@property (nonatomic,readonly) NSArray * noteCellKeyPaths; 
@property (nonatomic,retain) TTMergeableStringVersionedDocument * document;                               //@synthesize document=_document - In the implementation block
@property (nonatomic,retain) ICFolder * primitiveFolder; 
@property (retain) NSData * decryptedData; 
@property (assign) BOOL isRecoveringCryptoWrappedKey; 
@property (nonatomic,readonly) TTMergeableStringVersionedDocument * documentWithoutCreating; 
@property (nonatomic,retain) NSString * legacyManagedObjectIDURIRepresentation; 
@property (nonatomic,copy) TTVectorMultiTimestamp * archivedTimestamp; 
@property (nonatomic,retain) NSData * lastViewedTimestampData; 
@property (nonatomic,retain) NSData * lastNotifiedTimestampData; 
@property (nonatomic,retain) NSString * selectedInkIdentifier; 
@property (nonatomic,retain) NSString * selectedInkColorString; 
@property (assign,nonatomic) BOOL needsToSaveLastViewedTimestamp; 
@property (nonatomic,retain) NSUUID * replicaIDOverride;                                                  //@synthesize replicaIDOverride=_replicaIDOverride - In the implementation block
@property (nonatomic,retain,readonly) ICMergableDictionary * replicaIDToUserIDDict;                       //@synthesize replicaIDToUserIDDict=_replicaIDToUserIDDict - In the implementation block
@property (nonatomic,retain) NSData * replicaIDToUserIDDictData; 
@property (assign,nonatomic) BOOL shouldAddMediaAsynchronously; 
@property (assign,nonatomic) BOOL preventReleasingTextStorage; 
@property (nonatomic,retain) id reservedForTextStorage;                                                   //@synthesize reservedForTextStorage=_reservedForTextStorage - In the implementation block
@property (nonatomic,retain) id reservedForCollaborationColorManager;                                     //@synthesize reservedForCollaborationColorManager=_reservedForCollaborationColorManager - In the implementation block
@property (nonatomic,retain) ICAccount * account; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) NSDate * modificationDate; 
@property (nonatomic,retain) NSNumber * noteHasChanges; 
@property (nonatomic,retain) NSString * snippet; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) ICAttachment * titleSourceAttachment; 
@property (nonatomic,retain) NSSet * attachments; 
@property (nonatomic,retain) ICFolder * folder; 
@property (nonatomic,retain) NSDate * folderModificationDate; 
@property (nonatomic,retain) ICNoteData * noteData; 
@property (nonatomic,retain) NSDate * legacyModificationDateAtImport; 
@property (nonatomic,retain) NSString * legacyContentHashAtImport; 
@property (nonatomic,retain) NSString * legacyImportDeviceIdentifier; 
@property (nonatomic,retain) NSNumber * legacyNoteWasPlainText; 
@property (nonatomic,retain) NSString * thumbnailAttachmentIdentifier; 
@property (assign,nonatomic) short attachmentViewType; 
@property (assign,nonatomic) short paperStyleType; 
@property (nonatomic,retain) NSDate * lastViewedModificationDate; 
@property (nonatomic,readonly) BOOL hasUnreadChanges; 
@property (assign,nonatomic) BOOL shouldShowHighlights; 
@property (nonatomic,readonly) TTVectorMultiTimestamp * timestamp; 
@property (nonatomic,copy) TTVectorMultiTimestamp * lastViewedTimestamp;                                  //@synthesize lastViewedTimestamp=_lastViewedTimestamp - In the implementation block
@property (nonatomic,copy) TTVectorMultiTimestamp * lastNotifiedTimestamp;                                //@synthesize lastNotifiedTimestamp=_lastNotifiedTimestamp - In the implementation block
@property (nonatomic,retain) NSDate * lastNotifiedDate; 
@property (assign,nonatomic,__weak) id<ICNoteMergeabilityDelegate> mergeabilityDelegate; 
@property (assign,nonatomic) BOOL needsRefresh; 
@property (assign,nonatomic) BOOL isPinned; 
@property (assign,nonatomic) short preferredBackgroundType; 
+(id)newFetchRequestForNotes;
+(void)deleteNote:(id)arg1 ;
+(id)predicateForSearchableNotes;
+(id)defaultTitleForEmptyNote;
+(id)newObjectWithIdentifier:(id)arg1 context:(id)arg2 ;
+(id)notesMatchingPredicate:(id)arg1 context:(id)arg2 ;
+(id)predicateForVisibleNotes;
+(id)visibleNotesInContext:(id)arg1 ;
+(unsigned long long)countOfVisibleNotesInContext:(id)arg1 ;
+(id)predicateForPinnedNotes;
+(unsigned long long)maxNoteAttachments;
+(id)snippetForPasswordProtectedNote:(id)arg1 ;
+(unsigned long long)maxNoteTextLength;
+(id)keyPathsForValuesAffectingIsEditable;
+(BOOL)containsUndeletableNotes:(id)arg1 ;
+(BOOL)containsUnmovableNotes:(id)arg1 ;
+(id)keyPathsForValuesAffectingHasUnreadChanges;
+(id)newObjectWithIdentifier:(id)arg1 folder:(id)arg2 ;
+(id)newEmptyNoteWithUUID:(id)arg1 folder:(id)arg2 ;
+(id)newEmptyNoteWithIdentifier:(id)arg1 folder:(id)arg2 ;
+(id)allNotesInContext:(id)arg1 ;
+(void)purgeNote:(id)arg1 ;
+(id)noteWithIdentifier:(id)arg1 context:(id)arg2 ;
+(id)noteWithIdentifier:(id)arg1 includeDeleted:(BOOL)arg2 context:(id)arg3 ;
+(id)noteWithIdentifier:(id)arg1 includeDeleted:(BOOL)arg2 accountID:(id)arg3 context:(id)arg4 ;
+(unsigned long long)countOfNotesMatchingPredicate:(id)arg1 context:(id)arg2 ;
+(id)predicateForVisibleNotesIncludingTrash:(BOOL)arg1 ;
+(id)createNoteFromNote:(id)arg1 inFolder:(id)arg2 isPasswordProtected:(BOOL)arg3 removingOriginalNote:(BOOL)arg4 ;
+(id)newEmptyNoteInFolder:(id)arg1 ;
+(void)redactNote:(id)arg1 ;
+(id)noteIdentifiersMatchingPredicate:(id)arg1 context:(id)arg2 ;
+(id)keyPathsForValuesAffectingCanBeSharedViaICloud;
+(id)newEmptyNoteInContext:(id)arg1 ;
+(id)newNoteWithoutIdentifierInAccount:(id)arg1 ;
+(id)newNoteWithoutIdentifierInFolder:(id)arg1 ;
+(void)deleteEmptyNote:(id)arg1 ;
+(void)purgeAllNotesInContext:(id)arg1 ;
+(id)refreshAllOfNoteWithIdentifier:(id)arg1 context:(id)arg2 ;
+(id)noteWithUUID:(id)arg1 context:(id)arg2 ;
+(id)noteWithIdentifier:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(id)visibleNoteWithIdentifier:(id)arg1 context:(id)arg2 ;
+(id)noteWithLegacyManagedObjectID:(id)arg1 context:(id)arg2 ;
+(unsigned long long)countOfAllNotesInContext:(id)arg1 ;
+(BOOL)notes:(id)arg1 containSharedNotesNotSharedViaFolder:(id)arg2 ;
+(id)modernNotesInObjects:(id)arg1 ;
+(id)predicateForNote:(id)arg1 ;
+(id)createNoteFromNote:(id)arg1 isPasswordProtected:(BOOL)arg2 removingOriginalNote:(BOOL)arg3 ;
+(id)allPasswordProtectedNoteIdentifiersInContext:(id)arg1 ;
+(id)passwordProtectedNoteIdentifiersForAccount:(id)arg1 ;
+(BOOL)supportsUserSpecificRecords;
+(id)keyPathsForValuesAffectingCloudAccount;
+(id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(id)newCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(id)newPlaceholderObjectForRecordName:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(id)keyPathsForValuesAffectingPrefersLightBackground;
+(id)newPlaceholderObjectForRecordName:(id)arg1 account:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEmpty;
-(void)beginEditing;
-(void)endEditing;
-(id)uuid;
-(TTVectorMultiTimestamp *)timestamp;
-(void)edited:(unsigned long long)arg1 range:(NSRange)arg2 changeInLength:(long long)arg3 ;
-(BOOL)isDeletable;
-(void)setAccount:(ICAccount *)arg1 ;
-(id)recordType;
-(id)accountName;
-(BOOL)isVisible;
-(id)attributedString;
-(BOOL)isEditable;
-(void)setDocument:(TTMergeableStringVersionedDocument *)arg1 ;
-(TTMergeableStringVersionedDocument *)document;
-(void)awakeFromFetch;
-(void)willTurnIntoFault;
-(void)prepareForDeletion;
-(void)didSave;
-(void)willRefresh:(BOOL)arg1 ;
-(void)didRefresh:(BOOL)arg1 ;
-(unsigned long long)searchResultType;
-(void)setFolder:(ICFolder *)arg1 ;
-(id)contentIdentifier;
-(id)folderName;
-(BOOL)hasThumbnailImage;
-(id)addURLAttachmentWithURL:(id)arg1 ;
-(BOOL)wantsUndoCommands;
-(id)mergeableString;
-(id)replicaID;
-(void)addUndoCommand:(id)arg1 ;
-(id)visibleAttachments;
-(BOOL)isSharable;
-(void)setMarkedForDeletion:(BOOL)arg1 ;
-(id)shareType;
-(id)recordZoneName;
-(void)markForDeletion;
-(BOOL)needsRefresh;
-(void)setNeedsRefresh:(BOOL)arg1 ;
-(id)noteAsPlainTextWithoutTitle;
-(id)userActivityContentAttributeSet;
-(BOOL)isModernNote;
-(BOOL)isSharedViaICloudFolder;
-(BOOL)isMovable;
-(id)trimmedTitle;
-(id)folderNameForNoteList;
-(long long)visibilityTestingType;
-(unsigned long long)searchResultsSection;
-(BOOL)searchResultCanBeDeletedFromNoteContext;
-(BOOL)isHiddenFromSearch;
-(id)authorsExcludingCurrentUser;
-(NSArray *)noteCellKeyPaths;
-(id)contentInfoText;
-(id)dateForCurrentSortType;
-(id)searchIndexingIdentifier;
-(id)searchDomainIdentifier;
-(id)searchableItemAttributeSet;
-(void)updateChangeCount;
-(void)unmarkForDeletion;
-(id)ic_loggingValues;
-(id)cloudAccount;
-(void)deleteFromLocalDatabase;
-(BOOL)canBeSharedViaICloud;
-(void)saveNoteData;
-(unsigned long long)mergeWithNoteData:(id)arg1 ;
-(id<ICNoteMergeabilityDelegate>)mergeabilityDelegate;
-(void)mergeNotePrimitiveData;
-(BOOL)shouldReleaseDocumentWhenTurningIntoFault;
-(BOOL)preventReleasingTextStorage;
-(long long)intrinsicNotesVersion;
-(id)textDataDecryptedIfNecessary;
-(void)setArchivedTimestamp:(TTVectorMultiTimestamp *)arg1 ;
-(NSUUID *)replicaIDOverride;
-(void)addReplicaID:(id)arg1 forUserID:(id)arg2 ;
-(id)searchableString;
-(BOOL)needsToSaveLastViewedTimestamp;
-(void)setNeedsToSaveLastViewedTimestamp:(BOOL)arg1 ;
-(TTVectorMultiTimestamp *)lastViewedTimestamp;
-(void)setLastViewedTimestamp:(TTVectorMultiTimestamp *)arg1 ;
-(BOOL)hasUnreadChanges;
-(void)regenerateTitleAndSnippetIfNecessaryForEdit:(unsigned long long)arg1 range:(NSRange)arg2 changeInLength:(long long)arg3 ;
-(void)didChangeNoteText;
-(BOOL)isDeletedOrInTrash;
-(BOOL)canAddAttachments:(unsigned long long)arg1 ;
-(id)visibleTopLevelAttachments;
-(void)enumerateAttachmentsInOrderUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)mergeWithNoteDocument:(id)arg1 ;
-(void)regenerateTitle:(BOOL)arg1 snippet:(BOOL)arg2 ;
-(TTVectorMultiTimestamp *)archivedTimestamp;
-(void)setCryptoTag:(id)arg1 ;
-(void)setCryptoInitializationVector:(id)arg1 ;
-(BOOL)isPinnable;
-(NSData *)decryptedData;
-(void)decrypt;
-(void)setDecryptedData:(NSData *)arg1 ;
-(void)saveAndClearDecryptedData;
-(void)mergeUnappliedEncryptedRecordsIncludingAttachments;
-(BOOL)isRecoveringCryptoWrappedKey;
-(void)setIsRecoveringCryptoWrappedKey:(BOOL)arg1 ;
-(NSRange)rangeForTitle:(BOOL*)arg1 ;
-(NSRange)rangeForSnippet;
-(id)noteAsPlainText;
-(BOOL)populateReplicaIDToUserIDDictIfNecessary;
-(BOOL)prefersLightBackground;
-(ICMergableDictionary *)replicaIDToUserIDDict;
-(BOOL)shouldSyncMinimumSupportedNotesVersion;
-(TTMergeableStringVersionedDocument *)documentWithoutCreating;
-(void)setReplicaIDOverride:(NSUUID *)arg1 ;
-(id)quotedTitle;
-(void)updateTimestampWithUnserializedChanges;
-(BOOL)updateLastViewedTimestampWithCurrentTimestamp;
-(BOOL)isLockable;
-(BOOL)allowsNewTextLength:(unsigned long long)arg1 ;
-(BOOL)requiresLegacyTombstoneAfterDeletion;
-(BOOL)canAddAttachment;
-(BOOL)attachmentExceedsMaxSizeAllowed:(unsigned long long)arg1 ;
-(BOOL)containsAttachmentsUnsupportedInPasswordProtection;
-(id)allAttachmentsIncludingSubAttachments;
-(id)allNoteTextAttachmentsIncludingSubAttachments:(BOOL)arg1 ;
-(id)attachmentsInOrder;
-(NSRange)rangeForAttachment:(id)arg1 ;
-(void)refreshNoteTextFromDataStore;
-(void)replaceWithDocument:(id)arg1 ;
-(BOOL)hasLoadedDocument;
-(void)setShouldShowHighlights:(BOOL)arg1 ;
-(BOOL)shouldShowHighlights;
-(void)changePinStatusIfPossible;
-(BOOL)supportsEncryptedValuesDictionary;
-(id)parentEncryptableObject;
-(void)mergeUnappliedEncryptedRecordsIncludingAttachmentsInBackground;
-(void)recoverMissingCryptoWrappedKeyIfNecessaryWithMasterKey:(id)arg1 ;
-(void)setNeedsInitialFetchFromCloud:(BOOL)arg1 ;
-(void)setLegacyManagedObjectID:(id)arg1 ;
-(TTVectorMultiTimestamp *)lastNotifiedTimestamp;
-(void)setLastNotifiedTimestamp:(TTVectorMultiTimestamp *)arg1 ;
-(void)mergeReplicaAndUserIDsFromDictionary:(id)arg1 ;
-(void)setMergeabilityDelegate:(id<ICNoteMergeabilityDelegate>)arg1 ;
-(void)setPreventReleasingTextStorage:(BOOL)arg1 ;
-(id)reservedForCollaborationColorManager;
-(void)setReservedForCollaborationColorManager:(id)arg1 ;
-(id)reservedForTextStorage;
-(void)setReservedForTextStorage:(id)arg1 ;
-(BOOL)shouldAddMediaAsynchronously;
-(void)setShouldAddMediaAsynchronously:(BOOL)arg1 ;
-(id)trashFolderIfDeleted;
-(BOOL)needsToDeleteShare;
-(void)didAcceptShare:(id)arg1 ;
-(void)willAddOrRemovePassword;
-(id)parentCloudObject;
-(id)childCloudObjects;
-(id)childCloudObjectsForMinimumSupportedVersionPropagation;
-(BOOL)canBeRootShareObject;
-(id)shareTitle;
-(NSRange)textRangeForSearchRange:(NSRange)arg1 inSearchableString:(id)arg2 ;
-(id)addAttachmentWithUTI:(id)arg1 data:(id)arg2 filename:(id)arg3 ;
-(id)addAttachmentWithFileURL:(id)arg1 updateFileBasedAttributes:(BOOL)arg2 analytics:(BOOL)arg3 ;
-(id)addAttachmentWithUTI:(id)arg1 withURL:(id)arg2 updateFileBasedAttributes:(BOOL)arg3 analytics:(BOOL)arg4 ;
-(id)addAttachmentWithUTI:(id)arg1 ;
-(void)addMediaToAttachment:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)addAttachmentWithUTI:(id)arg1 identifier:(id)arg2 analytics:(BOOL)arg3 ;
-(id)addAttachmentWithIdentifier:(id)arg1 ;
-(id)addAttachment;
-(id)addTableAttachmentWithTableData:(id)arg1 ;
-(id)addAttachmentWithUTI:(id)arg1 data:(id)arg2 filename:(id)arg3 updateFileBasedAttributes:(BOOL)arg4 analytics:(BOOL)arg5 ;
-(id)addAttachmentWithData:(id)arg1 filename:(id)arg2 ;
-(id)addAttachmentWithFileURL:(id)arg1 ;
-(id)addAttachmentWithFileWrapper:(id)arg1 ;
-(id)addAttachmentWithRemoteFileURL:(id)arg1 ;
-(id)addAttachmentWithUTI:(id)arg1 withURL:(id)arg2 ;
-(id)addAttachmentWithUTI:(id)arg1 data:(id)arg2 filenameExtension:(id)arg3 ;
-(id)addGalleryAttachmentWithIdentifier:(id)arg1 ;
-(id)addTableAttachment;
-(id)addTableAttachmentWithText:(id)arg1 ;
-(id)addInlineDrawingAttachmentWithAnalytics:(BOOL)arg1 ;
-(id)attachmentWithIdentifier:(id)arg1 ;
-(BOOL)supportsDeletionByTTL;
-(id)newlyCreatedRecord;
-(void)mergeEncryptedDataFromRecord:(id)arg1 ;
-(BOOL)needsToFetchAfterServerRecordChanged:(id)arg1 ;
-(void)objectWasFetchedFromCloudWithRecord:(id)arg1 accountID:(id)arg2 ;
-(void)fixBrokenReferences;
-(void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2 ;
-(void)mergeDataFromUserSpecificRecord:(id)arg1 accountID:(id)arg2 ;
-(BOOL)isInICloudAccount;
-(id)objectsToBeDeletedBeforeThisObject;
-(BOOL)hasAllMandatoryFields;
-(id)newlyCreatedRecordWithObfuscator:(id)arg1 ;
-(id)newlyCreatedUserSpecificRecord;
-(void)resetUniqueIdentifier;
-(void)addShareParticipantsToAttributeSet:(id)arg1 ;
-(long long)mergePolicyForRecord:(id)arg1 ;
-(void)mergeDataFromRecord:(id)arg1 mergePolicy:(long long)arg2 account:(id)arg3 ;
-(void)deduplicateSelfAndCreateNewObjectFromRecord:(id)arg1 ;
-(id)folderReferenceFromRecord:(id)arg1 ;
-(void)mergeFoldersFromRecord:(id)arg1 account:(id)arg2 ;
-(void)mergeTextDataFromRecord:(id)arg1 mergePolicy:(long long)arg2 ;
-(void)mergeTextData:(id)arg1 record:(id)arg2 mergePolicy:(long long)arg3 ;
-(id)attachmentForWebThumbnail;
-(void)mergeDataFromRecord:(id)arg1 account:(id)arg2 ;
@end

