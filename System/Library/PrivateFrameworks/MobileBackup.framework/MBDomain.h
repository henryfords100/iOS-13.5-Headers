/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSFileHandle, NSString, NSSet, NSDictionary;

@interface MBDomain : NSObject {

	NSFileHandle* _fileHandle;
	NSString* _fileHandlePath;
	NSFileHandle* _fileHandleForSnapshot;
	NSString* _fileHandlePathForSnapshot;
	BOOL _shouldDigest;
	BOOL _hasExternalConfig;
	BOOL _isExternalConfig;
	BOOL _shouldRestoreRelativeSymlinks;
	NSString* _rootPath;
	NSString* _name;
	NSSet* _relativePathsToBackupAndRestore;
	NSSet* _relativePathsNotToBackup;
	NSSet* _relativePathsNotToBackupToDrive;
	NSSet* _relativePathsNotToBackupToService;
	NSSet* _relativePathsToOnlyBackupEncrypted;
	NSSet* _relativePathsNotToCheckIfModifiedDuringBackup;
	NSSet* _relativePathsToRestoreOnly;
	NSSet* _relativePathsToRestoreOnlyFromService;
	NSSet* _relativePathsToRemoveOnRestore;
	NSSet* _relativePathsOfSystemFilesToAlwaysRestore;
	NSSet* _relativePathsOfSystemFilesToAlwaysRemoveOnRestore;
	NSSet* _relativePathsNotToRestore;
	NSSet* _relativePathsNotToMigrate;
	NSSet* _relativePathsNotToRestoreToIPods;
	NSSet* _relativePathsNotToBackupAndRestoreToAppleTVs;
	NSSet* _relativePathsToBackgroundRestore;
	NSSet* _relativePathsNotToRemoveIfNotRestored;
	NSSet* _relativePathsToIgnoreExclusionsForDrive;
	NSSet* _relativePathsToBackupToDriveAndStandardAccount;
	NSSet* _relativePathsToBackupIgnoringProtectionClass;
	NSDictionary* _relativePathAggregateDictionaryGroups;
	NSDictionary* _relativePathDomainRedirects;

}

@property (nonatomic,readonly) NSString * name;                                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * rootPath;                                                                //@synthesize rootPath=_rootPath - In the implementation block
@property (nonatomic,readonly) NSString * containerID; 
@property (nonatomic,readonly) int containerType; 
@property (nonatomic,readonly) NSSet * relativePathsToBackup; 
@property (nonatomic,retain) NSSet * relativePathsToBackupAndRestore;                                              //@synthesize relativePathsToBackupAndRestore=_relativePathsToBackupAndRestore - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsNotToBackup;                                                     //@synthesize relativePathsNotToBackup=_relativePathsNotToBackup - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsNotToBackupToDrive;                                              //@synthesize relativePathsNotToBackupToDrive=_relativePathsNotToBackupToDrive - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsNotToBackupToService;                                            //@synthesize relativePathsNotToBackupToService=_relativePathsNotToBackupToService - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsToOnlyBackupEncrypted;                                           //@synthesize relativePathsToOnlyBackupEncrypted=_relativePathsToOnlyBackupEncrypted - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsNotToCheckIfModifiedDuringBackup;                                //@synthesize relativePathsNotToCheckIfModifiedDuringBackup=_relativePathsNotToCheckIfModifiedDuringBackup - In the implementation block
@property (nonatomic,readonly) NSSet * relativePathsToRestore; 
@property (nonatomic,retain) NSSet * relativePathsToRestoreOnly;                                                   //@synthesize relativePathsToRestoreOnly=_relativePathsToRestoreOnly - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsToRestoreOnlyFromService;                                        //@synthesize relativePathsToRestoreOnlyFromService=_relativePathsToRestoreOnlyFromService - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsToRemoveOnRestore;                                               //@synthesize relativePathsToRemoveOnRestore=_relativePathsToRemoveOnRestore - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsOfSystemFilesToAlwaysRestore;                                    //@synthesize relativePathsOfSystemFilesToAlwaysRestore=_relativePathsOfSystemFilesToAlwaysRestore - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsOfSystemFilesToAlwaysRemoveOnRestore;                            //@synthesize relativePathsOfSystemFilesToAlwaysRemoveOnRestore=_relativePathsOfSystemFilesToAlwaysRemoveOnRestore - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsNotToRestore;                                                    //@synthesize relativePathsNotToRestore=_relativePathsNotToRestore - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsNotToMigrate;                                                    //@synthesize relativePathsNotToMigrate=_relativePathsNotToMigrate - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsNotToRestoreToIPods;                                             //@synthesize relativePathsNotToRestoreToIPods=_relativePathsNotToRestoreToIPods - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsNotToBackupAndRestoreToAppleTVs;                                 //@synthesize relativePathsNotToBackupAndRestoreToAppleTVs=_relativePathsNotToBackupAndRestoreToAppleTVs - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsToBackgroundRestore;                                             //@synthesize relativePathsToBackgroundRestore=_relativePathsToBackgroundRestore - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsNotToRemoveIfNotRestored;                                        //@synthesize relativePathsNotToRemoveIfNotRestored=_relativePathsNotToRemoveIfNotRestored - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsToIgnoreExclusionsForDrive;                                      //@synthesize relativePathsToIgnoreExclusionsForDrive=_relativePathsToIgnoreExclusionsForDrive - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsToBackupToDriveAndStandardAccount;                               //@synthesize relativePathsToBackupToDriveAndStandardAccount=_relativePathsToBackupToDriveAndStandardAccount - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsToBackupIgnoringProtectionClass;                                 //@synthesize relativePathsToBackupIgnoringProtectionClass=_relativePathsToBackupIgnoringProtectionClass - In the implementation block
@property (nonatomic,retain) NSDictionary * relativePathAggregateDictionaryGroups;                                 //@synthesize relativePathAggregateDictionaryGroups=_relativePathAggregateDictionaryGroups - In the implementation block
@property (nonatomic,retain) NSDictionary * relativePathDomainRedirects;                                           //@synthesize relativePathDomainRedirects=_relativePathDomainRedirects - In the implementation block
@property (assign,nonatomic) BOOL shouldDigest;                                                                    //@synthesize shouldDigest=_shouldDigest - In the implementation block
@property (assign,nonatomic) BOOL hasExternalConfig;                                                               //@synthesize hasExternalConfig=_hasExternalConfig - In the implementation block
@property (assign,nonatomic) BOOL isExternalConfig;                                                                //@synthesize isExternalConfig=_isExternalConfig - In the implementation block
@property (assign,nonatomic) BOOL shouldRestoreRelativeSymlinks;                                                   //@synthesize shouldRestoreRelativeSymlinks=_shouldRestoreRelativeSymlinks - In the implementation block
@property (getter=isAppDomain,nonatomic,readonly) BOOL appDomain; 
@property (getter=isPlaceholderAppDomain,nonatomic,readonly) BOOL placeholderAppDomain; 
@property (getter=isPluginAppDomain,nonatomic,readonly) BOOL pluginAppDomain; 
@property (getter=isGroupAppDomain,nonatomic,readonly) BOOL groupAppDomain; 
@property (getter=isUninstalledAppDomain,nonatomic,readonly) BOOL installedAppDomain; 
@property (getter=isSystemContainerDomain,nonatomic,readonly) BOOL systemContainerDomain; 
@property (getter=isSystemSharedContainerDomain,nonatomic,readonly) BOOL systemSharedContainerDomain; 
@property (getter=isCameraRollDomain,nonatomic,readonly) BOOL cameraRollDomain; 
@property (nonatomic,readonly) BOOL hasRootPath; 
+(double)systemDomainsVersion;
+(double)systemDomainsMinSupportedVersion;
+(double)systemDomainsMaxSupportedVersion;
+(id)nameWithAppID:(id)arg1 ;
+(id)_stringByRemovingCommentsFromValue:(id)arg1 forKey:(id)arg2 ;
+(double)_doubleFromStringValueForKey:(id)arg1 plist:(id)arg2 ;
+(void)_loadSystemDomains;
+(BOOL)isAppPluginName:(id)arg1 ;
+(BOOL)isAppGroupName:(id)arg1 ;
+(BOOL)isSystemContainerName:(id)arg1 ;
+(BOOL)isSystemSharedContainerName:(id)arg1 ;
+(id)domainWithName:(id)arg1 rootPath:(id)arg2 ;
+(BOOL)shouldRestoreRelativeSymlinksForDomainName:(id)arg1 ;
+(BOOL)_boolFromValue:(id)arg1 forKey:(id)arg2 ;
+(id)_setOfStringsFromValue:(id)arg1 forKey:(id)arg2 ;
+(id)_relativePathsByAddingSQLiteJournals:(id)arg1 ;
+(id)_dictionaryOfStringsToStringFromValue:(id)arg1 forKey:(id)arg2 ;
+(BOOL)isContainerName:(id)arg1 ;
+(BOOL)isAppPlaceholderName:(id)arg1 ;
+(id)containerIDWithName:(id)arg1 ;
+(void)resetSystemDomains;
+(id)systemDomains;
+(id)systemDomainsByName;
+(BOOL)isSystemName:(id)arg1 ;
+(int)containerTypeWithName:(id)arg1 ;
+(id)placeholderNameWithAppID:(id)arg1 ;
+(id)appDomainWithIdentifier:(id)arg1 rootPath:(id)arg2 ;
+(id)appPlaceholderDomainWithIdentifier:(id)arg1 rootPath:(id)arg2 ;
+(id)appPluginDomainWithIdentifier:(id)arg1 rootPath:(id)arg2 ;
+(id)appGroupDomainWithIdentifier:(id)arg1 rootPath:(id)arg2 ;
+(id)systemContainerDomainWithIdentifier:(id)arg1 rootPath:(id)arg2 ;
+(id)systemSharedContainerDomainWithIdentifier:(id)arg1 rootPath:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(long long)compare:(id)arg1 ;
-(NSString *)containerID;
-(int)containerType;
-(NSString *)rootPath;
-(id)initWithName:(id)arg1 plist:(id)arg2 ;
-(id)initWithName:(id)arg1 rootPath:(id)arg2 ;
-(BOOL)loadSystemDomainFromPlist:(id)arg1 ;
-(BOOL)loadDomainFromExternalPlist:(id)arg1 ;
-(void)releaseCachedFileDescriptors;
-(BOOL)isEqualToDomain:(id)arg1 ;
-(BOOL)isPluginAppDomain;
-(BOOL)isGroupAppDomain;
-(BOOL)isSystemContainerDomain;
-(BOOL)isSystemSharedContainerDomain;
-(BOOL)isAppDomain;
-(int)_cachedFileDescriptorWithSnapshotPath:(id)arg1 error:(id*)arg2 ;
-(int)_cachedFileDescriptorWithError:(id*)arg1 ;
-(NSSet *)relativePathsToBackup;
-(NSSet *)relativePathsToRestore;
-(BOOL)isPlaceholderAppDomain;
-(BOOL)isUninstalledAppDomain;
-(BOOL)isCameraRollDomain;
-(BOOL)hasRootPath;
-(int)cachedFileDescriptorWithSnapshotPath:(id)arg1 error:(id*)arg2 ;
-(NSSet *)relativePathsToBackupAndRestore;
-(void)setRelativePathsToBackupAndRestore:(NSSet *)arg1 ;
-(NSSet *)relativePathsNotToBackup;
-(void)setRelativePathsNotToBackup:(NSSet *)arg1 ;
-(NSSet *)relativePathsNotToBackupToDrive;
-(void)setRelativePathsNotToBackupToDrive:(NSSet *)arg1 ;
-(NSSet *)relativePathsNotToBackupToService;
-(void)setRelativePathsNotToBackupToService:(NSSet *)arg1 ;
-(NSSet *)relativePathsToOnlyBackupEncrypted;
-(void)setRelativePathsToOnlyBackupEncrypted:(NSSet *)arg1 ;
-(NSSet *)relativePathsNotToCheckIfModifiedDuringBackup;
-(void)setRelativePathsNotToCheckIfModifiedDuringBackup:(NSSet *)arg1 ;
-(NSSet *)relativePathsToRestoreOnly;
-(void)setRelativePathsToRestoreOnly:(NSSet *)arg1 ;
-(NSSet *)relativePathsToRestoreOnlyFromService;
-(void)setRelativePathsToRestoreOnlyFromService:(NSSet *)arg1 ;
-(NSSet *)relativePathsToRemoveOnRestore;
-(void)setRelativePathsToRemoveOnRestore:(NSSet *)arg1 ;
-(NSSet *)relativePathsOfSystemFilesToAlwaysRestore;
-(void)setRelativePathsOfSystemFilesToAlwaysRestore:(NSSet *)arg1 ;
-(NSSet *)relativePathsOfSystemFilesToAlwaysRemoveOnRestore;
-(void)setRelativePathsOfSystemFilesToAlwaysRemoveOnRestore:(NSSet *)arg1 ;
-(NSSet *)relativePathsNotToRestore;
-(void)setRelativePathsNotToRestore:(NSSet *)arg1 ;
-(NSSet *)relativePathsNotToMigrate;
-(void)setRelativePathsNotToMigrate:(NSSet *)arg1 ;
-(NSSet *)relativePathsNotToRestoreToIPods;
-(void)setRelativePathsNotToRestoreToIPods:(NSSet *)arg1 ;
-(NSSet *)relativePathsNotToBackupAndRestoreToAppleTVs;
-(void)setRelativePathsNotToBackupAndRestoreToAppleTVs:(NSSet *)arg1 ;
-(NSSet *)relativePathsToBackgroundRestore;
-(void)setRelativePathsToBackgroundRestore:(NSSet *)arg1 ;
-(NSSet *)relativePathsNotToRemoveIfNotRestored;
-(void)setRelativePathsNotToRemoveIfNotRestored:(NSSet *)arg1 ;
-(NSSet *)relativePathsToIgnoreExclusionsForDrive;
-(void)setRelativePathsToIgnoreExclusionsForDrive:(NSSet *)arg1 ;
-(NSSet *)relativePathsToBackupToDriveAndStandardAccount;
-(void)setRelativePathsToBackupToDriveAndStandardAccount:(NSSet *)arg1 ;
-(NSSet *)relativePathsToBackupIgnoringProtectionClass;
-(void)setRelativePathsToBackupIgnoringProtectionClass:(NSSet *)arg1 ;
-(NSDictionary *)relativePathAggregateDictionaryGroups;
-(void)setRelativePathAggregateDictionaryGroups:(NSDictionary *)arg1 ;
-(NSDictionary *)relativePathDomainRedirects;
-(void)setRelativePathDomainRedirects:(NSDictionary *)arg1 ;
-(BOOL)shouldDigest;
-(void)setShouldDigest:(BOOL)arg1 ;
-(BOOL)hasExternalConfig;
-(void)setHasExternalConfig:(BOOL)arg1 ;
-(BOOL)isExternalConfig;
-(void)setIsExternalConfig:(BOOL)arg1 ;
-(BOOL)shouldRestoreRelativeSymlinks;
-(void)setShouldRestoreRelativeSymlinks:(BOOL)arg1 ;
@end

