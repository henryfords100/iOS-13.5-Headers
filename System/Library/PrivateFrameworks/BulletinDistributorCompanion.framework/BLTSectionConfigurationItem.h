/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSNumber;

@interface BLTSectionConfigurationItem : NSObject {

	BOOL _optOutOfAttachmentTransmission;
	BOOL _alwaysSyncSettings;
	BOOL _alwaysAlert;
	BOOL _optOutOfWaitForUserIdle;
	BOOL _applyWhitelistToChildSections;
	BOOL _optOutOfNotificationTuning;
	BOOL _hasLegacyMapInUserInfo;
	BOOL _hasLegacyMapInContext;
	BOOL _optOutOfSubtitleRemovalForOlderWatches;
	BOOL _shouldUsePhoneExpirationDate;
	BOOL _optOutOfSettingsCoordination;
	BOOL _overrideAppliesToCoordinationOptOut;
	unsigned long long _coordinationType;
	NSArray* _whitelistedSubtypes;
	NSArray* _blacklistedCategories;
	NSArray* _whitelistedCategories;
	NSNumber* _watchVersionThatUsesUserInfoForContext;
	NSArray* _additionalBridgeSectionIDs;
	NSNumber* _watchVersionThatUsesAttachmentURL;

}

@property (assign) unsigned long long coordinationType;                                      //@synthesize coordinationType=_coordinationType - In the implementation block
@property (assign,nonatomic) BOOL optOutOfAttachmentTransmission;                            //@synthesize optOutOfAttachmentTransmission=_optOutOfAttachmentTransmission - In the implementation block
@property (assign,nonatomic) BOOL alwaysSyncSettings;                                        //@synthesize alwaysSyncSettings=_alwaysSyncSettings - In the implementation block
@property (nonatomic,retain) NSArray * whitelistedSubtypes;                                  //@synthesize whitelistedSubtypes=_whitelistedSubtypes - In the implementation block
@property (nonatomic,retain) NSArray * blacklistedCategories;                                //@synthesize blacklistedCategories=_blacklistedCategories - In the implementation block
@property (nonatomic,retain) NSArray * whitelistedCategories;                                //@synthesize whitelistedCategories=_whitelistedCategories - In the implementation block
@property (assign,nonatomic) BOOL alwaysAlert;                                               //@synthesize alwaysAlert=_alwaysAlert - In the implementation block
@property (assign,nonatomic) BOOL optOutOfWaitForUserIdle;                                   //@synthesize optOutOfWaitForUserIdle=_optOutOfWaitForUserIdle - In the implementation block
@property (assign,nonatomic) BOOL applyWhitelistToChildSections;                             //@synthesize applyWhitelistToChildSections=_applyWhitelistToChildSections - In the implementation block
@property (assign,nonatomic) BOOL optOutOfNotificationTuning;                                //@synthesize optOutOfNotificationTuning=_optOutOfNotificationTuning - In the implementation block
@property (assign,nonatomic) BOOL hasLegacyMapInUserInfo;                                    //@synthesize hasLegacyMapInUserInfo=_hasLegacyMapInUserInfo - In the implementation block
@property (assign,nonatomic) BOOL hasLegacyMapInContext;                                     //@synthesize hasLegacyMapInContext=_hasLegacyMapInContext - In the implementation block
@property (nonatomic,retain) NSNumber * watchVersionThatUsesUserInfoForContext;              //@synthesize watchVersionThatUsesUserInfoForContext=_watchVersionThatUsesUserInfoForContext - In the implementation block
@property (nonatomic,retain) NSArray * additionalBridgeSectionIDs;                           //@synthesize additionalBridgeSectionIDs=_additionalBridgeSectionIDs - In the implementation block
@property (assign,nonatomic) BOOL optOutOfSubtitleRemovalForOlderWatches;                    //@synthesize optOutOfSubtitleRemovalForOlderWatches=_optOutOfSubtitleRemovalForOlderWatches - In the implementation block
@property (assign,nonatomic) BOOL shouldUsePhoneExpirationDate;                              //@synthesize shouldUsePhoneExpirationDate=_shouldUsePhoneExpirationDate - In the implementation block
@property (assign,nonatomic) BOOL optOutOfSettingsCoordination;                              //@synthesize optOutOfSettingsCoordination=_optOutOfSettingsCoordination - In the implementation block
@property (assign,nonatomic) BOOL overrideAppliesToCoordinationOptOut;                       //@synthesize overrideAppliesToCoordinationOptOut=_overrideAppliesToCoordinationOptOut - In the implementation block
@property (nonatomic,retain) NSNumber * watchVersionThatUsesAttachmentURL;                   //@synthesize watchVersionThatUsesAttachmentURL=_watchVersionThatUsesAttachmentURL - In the implementation block
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)coordinationType;
-(void)setCoordinationType:(unsigned long long)arg1 ;
-(unsigned long long)coordinationTypeWithSubtype:(long long)arg1 ;
-(BOOL)hasDisplayedCriticalBulletins;
-(BOOL)updateCoordinationType:(unsigned long long)arg1 ;
-(BOOL)optOutOfAttachmentTransmission;
-(void)setOptOutOfAttachmentTransmission:(BOOL)arg1 ;
-(BOOL)alwaysSyncSettings;
-(void)setAlwaysSyncSettings:(BOOL)arg1 ;
-(NSArray *)whitelistedSubtypes;
-(void)setWhitelistedSubtypes:(NSArray *)arg1 ;
-(NSArray *)blacklistedCategories;
-(void)setBlacklistedCategories:(NSArray *)arg1 ;
-(NSArray *)whitelistedCategories;
-(void)setWhitelistedCategories:(NSArray *)arg1 ;
-(BOOL)alwaysAlert;
-(void)setAlwaysAlert:(BOOL)arg1 ;
-(BOOL)optOutOfWaitForUserIdle;
-(void)setOptOutOfWaitForUserIdle:(BOOL)arg1 ;
-(BOOL)applyWhitelistToChildSections;
-(void)setApplyWhitelistToChildSections:(BOOL)arg1 ;
-(BOOL)optOutOfNotificationTuning;
-(void)setOptOutOfNotificationTuning:(BOOL)arg1 ;
-(BOOL)hasLegacyMapInUserInfo;
-(void)setHasLegacyMapInUserInfo:(BOOL)arg1 ;
-(BOOL)hasLegacyMapInContext;
-(void)setHasLegacyMapInContext:(BOOL)arg1 ;
-(NSNumber *)watchVersionThatUsesUserInfoForContext;
-(void)setWatchVersionThatUsesUserInfoForContext:(NSNumber *)arg1 ;
-(NSArray *)additionalBridgeSectionIDs;
-(void)setAdditionalBridgeSectionIDs:(NSArray *)arg1 ;
-(BOOL)optOutOfSubtitleRemovalForOlderWatches;
-(void)setOptOutOfSubtitleRemovalForOlderWatches:(BOOL)arg1 ;
-(BOOL)shouldUsePhoneExpirationDate;
-(void)setShouldUsePhoneExpirationDate:(BOOL)arg1 ;
-(BOOL)optOutOfSettingsCoordination;
-(void)setOptOutOfSettingsCoordination:(BOOL)arg1 ;
-(BOOL)overrideAppliesToCoordinationOptOut;
-(void)setOverrideAppliesToCoordinationOptOut:(BOOL)arg1 ;
-(NSNumber *)watchVersionThatUsesAttachmentURL;
-(void)setWatchVersionThatUsesAttachmentURL:(NSNumber *)arg1 ;
@end

