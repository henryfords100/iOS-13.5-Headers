/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString, NSDate, NSDictionary, NSArray;

@interface DMFDevice : NSObject {

	NSNumber* _availableCapacity;
	NSNumber* _batteryLevel;
	NSString* _bluetoothAddress;
	NSString* _buildVersion;
	NSNumber* _capacity;
	NSString* _deviceName;
	NSNumber* _deviceType;
	NSNumber* _isAppleInternal;
	NSNumber* _isAwaitingConfiguration;
	NSNumber* _isDeviceLocatorServiceEnabled;
	NSNumber* _isDoNotDisturbInEffect;
	NSNumber* _isInSingleAppMode;
	NSNumber* _isLostModeEnabled;
	NSString* _iTunesStoreAccountHash;
	NSNumber* _iTunesStoreAccountIsActive;
	NSString* _marketingName;
	NSString* _model;
	NSString* _modelName;
	NSString* _osVersion;
	NSString* _productName;
	NSString* _serialNumber;
	NSString* _wifiAddress;
	NSNumber* _isAppAnalyticsEnabled;
	NSNumber* _isCloudBackupEnabled;
	NSNumber* _isDiagnosticSubmissionEnabled;
	NSNumber* _isSupervised;
	NSDate* _lastCloudBackupDate;
	NSString* _uniqueIdentifier;
	NSString* _carrierSettingsVersion;
	NSNumber* _cellularTechnology;
	NSString* _currentCarrierNetwork;
	NSString* _currentMCC;
	NSString* _currentMNC;
	NSString* _EASIdentifier;
	NSNumber* _enforcedSoftwareUpdateDelay;
	NSString* _ICCID;
	NSString* _IMEI;
	NSNumber* _isActivationLockEnabled;
	NSNumber* _isDataRoamingEnabled;
	NSNumber* _isEphemeralMultiUser;
	NSNumber* _isNetworkTethered;
	NSNumber* _isPersonalHotspotEnabled;
	NSNumber* _isRoaming;
	NSNumber* _isVoiceRoamingEnabled;
	NSNumber* _maximumResidentUsers;
	NSString* _MEID;
	NSString* _modemFirmwareVersion;
	NSString* _phoneNumber;
	NSDictionary* _serviceSubscriptions;
	NSArray* _skippedSetupPanes;
	NSString* _subscriberCarrierNetwork;
	NSString* _subscriberMCC;
	NSString* _subscriberMNC;
	NSArray* _activeManagedUsers;
	NSArray* _autoSetupAdminAccounts;
	NSString* _hostName;
	NSDictionary* _installedExtensions;
	NSNumber* _isSystemIntegrityProtectionEnabled;
	NSString* _localHostName;
	NSDictionary* _osUpdateSettings;
	NSDictionary* _xsanConfiguration;
	NSString* _destinationIdentifier;
	NSDictionary* _errorsForKeys;

}

@property (nonatomic,copy) NSDictionary * errorsForKeys;                                   //@synthesize errorsForKeys=_errorsForKeys - In the implementation block
@property (nonatomic,readonly) NSNumber * availableCapacity;                               //@synthesize availableCapacity=_availableCapacity - In the implementation block
@property (nonatomic,readonly) NSNumber * batteryLevel;                                    //@synthesize batteryLevel=_batteryLevel - In the implementation block
@property (nonatomic,readonly) NSString * bluetoothAddress;                                //@synthesize bluetoothAddress=_bluetoothAddress - In the implementation block
@property (nonatomic,readonly) NSString * buildVersion;                                    //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,readonly) NSNumber * capacity;                                        //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,readonly) NSString * deviceName;                                      //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) NSNumber * deviceType;                                      //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,readonly) NSNumber * isAppleInternal;                                 //@synthesize isAppleInternal=_isAppleInternal - In the implementation block
@property (nonatomic,readonly) NSNumber * isAwaitingConfiguration;                         //@synthesize isAwaitingConfiguration=_isAwaitingConfiguration - In the implementation block
@property (nonatomic,readonly) NSNumber * isDeviceLocatorServiceEnabled;                   //@synthesize isDeviceLocatorServiceEnabled=_isDeviceLocatorServiceEnabled - In the implementation block
@property (nonatomic,readonly) NSNumber * isDoNotDisturbInEffect;                          //@synthesize isDoNotDisturbInEffect=_isDoNotDisturbInEffect - In the implementation block
@property (nonatomic,readonly) NSNumber * isInSingleAppMode;                               //@synthesize isInSingleAppMode=_isInSingleAppMode - In the implementation block
@property (nonatomic,readonly) NSNumber * isLostModeEnabled;                               //@synthesize isLostModeEnabled=_isLostModeEnabled - In the implementation block
@property (nonatomic,readonly) NSString * iTunesStoreAccountHash;                          //@synthesize iTunesStoreAccountHash=_iTunesStoreAccountHash - In the implementation block
@property (nonatomic,readonly) NSNumber * iTunesStoreAccountIsActive;                      //@synthesize iTunesStoreAccountIsActive=_iTunesStoreAccountIsActive - In the implementation block
@property (nonatomic,readonly) NSString * marketingName;                                   //@synthesize marketingName=_marketingName - In the implementation block
@property (nonatomic,readonly) NSString * model;                                           //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) NSString * modelName;                                       //@synthesize modelName=_modelName - In the implementation block
@property (nonatomic,readonly) NSString * osVersion;                                       //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,readonly) NSString * productName;                                     //@synthesize productName=_productName - In the implementation block
@property (nonatomic,readonly) NSString * serialNumber;                                    //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,readonly) NSString * wifiAddress;                                     //@synthesize wifiAddress=_wifiAddress - In the implementation block
@property (nonatomic,readonly) NSNumber * isAppAnalyticsEnabled;                           //@synthesize isAppAnalyticsEnabled=_isAppAnalyticsEnabled - In the implementation block
@property (nonatomic,readonly) NSNumber * isCloudBackupEnabled;                            //@synthesize isCloudBackupEnabled=_isCloudBackupEnabled - In the implementation block
@property (nonatomic,readonly) NSNumber * isDiagnosticSubmissionEnabled;                   //@synthesize isDiagnosticSubmissionEnabled=_isDiagnosticSubmissionEnabled - In the implementation block
@property (nonatomic,readonly) NSNumber * isSupervised;                                    //@synthesize isSupervised=_isSupervised - In the implementation block
@property (nonatomic,readonly) NSDate * lastCloudBackupDate;                               //@synthesize lastCloudBackupDate=_lastCloudBackupDate - In the implementation block
@property (nonatomic,readonly) NSString * uniqueIdentifier;                                //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * carrierSettingsVersion;                          //@synthesize carrierSettingsVersion=_carrierSettingsVersion - In the implementation block
@property (nonatomic,readonly) NSNumber * cellularTechnology;                              //@synthesize cellularTechnology=_cellularTechnology - In the implementation block
@property (nonatomic,readonly) NSString * currentCarrierNetwork;                           //@synthesize currentCarrierNetwork=_currentCarrierNetwork - In the implementation block
@property (nonatomic,readonly) NSString * currentMCC;                                      //@synthesize currentMCC=_currentMCC - In the implementation block
@property (nonatomic,readonly) NSString * currentMNC;                                      //@synthesize currentMNC=_currentMNC - In the implementation block
@property (nonatomic,readonly) NSString * EASIdentifier;                                   //@synthesize EASIdentifier=_EASIdentifier - In the implementation block
@property (nonatomic,readonly) NSNumber * enforcedSoftwareUpdateDelay;                     //@synthesize enforcedSoftwareUpdateDelay=_enforcedSoftwareUpdateDelay - In the implementation block
@property (nonatomic,readonly) NSString * ICCID;                                           //@synthesize ICCID=_ICCID - In the implementation block
@property (nonatomic,readonly) NSString * IMEI;                                            //@synthesize IMEI=_IMEI - In the implementation block
@property (nonatomic,readonly) NSNumber * isActivationLockEnabled;                         //@synthesize isActivationLockEnabled=_isActivationLockEnabled - In the implementation block
@property (nonatomic,readonly) NSNumber * isDataRoamingEnabled;                            //@synthesize isDataRoamingEnabled=_isDataRoamingEnabled - In the implementation block
@property (nonatomic,readonly) NSNumber * isEphemeralMultiUser;                            //@synthesize isEphemeralMultiUser=_isEphemeralMultiUser - In the implementation block
@property (nonatomic,readonly) NSNumber * isNetworkTethered;                               //@synthesize isNetworkTethered=_isNetworkTethered - In the implementation block
@property (nonatomic,readonly) NSNumber * isPersonalHotspotEnabled;                        //@synthesize isPersonalHotspotEnabled=_isPersonalHotspotEnabled - In the implementation block
@property (nonatomic,readonly) NSNumber * isRoaming;                                       //@synthesize isRoaming=_isRoaming - In the implementation block
@property (nonatomic,readonly) NSNumber * isVoiceRoamingEnabled;                           //@synthesize isVoiceRoamingEnabled=_isVoiceRoamingEnabled - In the implementation block
@property (nonatomic,readonly) NSNumber * maximumResidentUsers;                            //@synthesize maximumResidentUsers=_maximumResidentUsers - In the implementation block
@property (nonatomic,readonly) NSString * MEID;                                            //@synthesize MEID=_MEID - In the implementation block
@property (nonatomic,readonly) NSString * modemFirmwareVersion;                            //@synthesize modemFirmwareVersion=_modemFirmwareVersion - In the implementation block
@property (nonatomic,readonly) NSString * phoneNumber;                                     //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,readonly) NSDictionary * serviceSubscriptions;                        //@synthesize serviceSubscriptions=_serviceSubscriptions - In the implementation block
@property (nonatomic,readonly) NSArray * skippedSetupPanes;                                //@synthesize skippedSetupPanes=_skippedSetupPanes - In the implementation block
@property (nonatomic,readonly) NSString * subscriberCarrierNetwork;                        //@synthesize subscriberCarrierNetwork=_subscriberCarrierNetwork - In the implementation block
@property (nonatomic,readonly) NSString * subscriberMCC;                                   //@synthesize subscriberMCC=_subscriberMCC - In the implementation block
@property (nonatomic,readonly) NSString * subscriberMNC;                                   //@synthesize subscriberMNC=_subscriberMNC - In the implementation block
@property (nonatomic,readonly) NSArray * activeManagedUsers;                               //@synthesize activeManagedUsers=_activeManagedUsers - In the implementation block
@property (nonatomic,readonly) NSArray * autoSetupAdminAccounts;                           //@synthesize autoSetupAdminAccounts=_autoSetupAdminAccounts - In the implementation block
@property (nonatomic,readonly) NSString * hostName;                                        //@synthesize hostName=_hostName - In the implementation block
@property (nonatomic,readonly) NSDictionary * installedExtensions;                         //@synthesize installedExtensions=_installedExtensions - In the implementation block
@property (nonatomic,readonly) NSNumber * isSystemIntegrityProtectionEnabled;              //@synthesize isSystemIntegrityProtectionEnabled=_isSystemIntegrityProtectionEnabled - In the implementation block
@property (nonatomic,readonly) NSString * localHostName;                                   //@synthesize localHostName=_localHostName - In the implementation block
@property (nonatomic,readonly) NSDictionary * osUpdateSettings;                            //@synthesize osUpdateSettings=_osUpdateSettings - In the implementation block
@property (nonatomic,readonly) NSDictionary * xsanConfiguration;                           //@synthesize xsanConfiguration=_xsanConfiguration - In the implementation block
@property (nonatomic,readonly) NSString * destinationIdentifier;                           //@synthesize destinationIdentifier=_destinationIdentifier - In the implementation block
+(id)propertyNameForKey:(id)arg1 ;
+(id)_sanitizedDeviceKey:(id)arg1 ;
-(NSNumber *)capacity;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(NSString *)hostName;
-(NSString *)uniqueIdentifier;
-(NSString *)phoneNumber;
-(NSNumber *)isAppleInternal;
-(NSString *)model;
-(NSNumber *)deviceType;
-(NSString *)deviceName;
-(NSNumber *)isEphemeralMultiUser;
-(NSString *)serialNumber;
-(NSNumber *)isInSingleAppMode;
-(NSNumber *)isSupervised;
-(NSString *)IMEI;
-(NSString *)MEID;
-(NSNumber *)isAwaitingConfiguration;
-(NSString *)destinationIdentifier;
-(NSString *)buildVersion;
-(NSNumber *)batteryLevel;
-(NSString *)ICCID;
-(NSString *)modelName;
-(NSString *)productName;
-(NSNumber *)isRoaming;
-(id)initPrivate;
-(NSString *)osVersion;
-(id)valueForKey:(id)arg1 error:(id*)arg2 ;
-(NSString *)wifiAddress;
-(NSString *)bluetoothAddress;
-(NSString *)marketingName;
-(NSNumber *)availableCapacity;
-(NSNumber *)isDeviceLocatorServiceEnabled;
-(NSNumber *)isDoNotDisturbInEffect;
-(NSNumber *)isLostModeEnabled;
-(NSString *)iTunesStoreAccountHash;
-(NSNumber *)iTunesStoreAccountIsActive;
-(NSNumber *)isAppAnalyticsEnabled;
-(NSNumber *)isCloudBackupEnabled;
-(NSNumber *)isDiagnosticSubmissionEnabled;
-(NSDate *)lastCloudBackupDate;
-(NSString *)carrierSettingsVersion;
-(NSNumber *)cellularTechnology;
-(NSString *)currentCarrierNetwork;
-(NSString *)currentMCC;
-(NSString *)currentMNC;
-(NSString *)EASIdentifier;
-(NSNumber *)enforcedSoftwareUpdateDelay;
-(NSNumber *)isActivationLockEnabled;
-(NSNumber *)isDataRoamingEnabled;
-(NSNumber *)isNetworkTethered;
-(NSNumber *)isPersonalHotspotEnabled;
-(NSNumber *)isVoiceRoamingEnabled;
-(NSNumber *)maximumResidentUsers;
-(NSString *)modemFirmwareVersion;
-(NSDictionary *)serviceSubscriptions;
-(NSArray *)skippedSetupPanes;
-(NSString *)subscriberCarrierNetwork;
-(NSString *)subscriberMCC;
-(NSString *)subscriberMNC;
-(NSArray *)activeManagedUsers;
-(NSArray *)autoSetupAdminAccounts;
-(NSDictionary *)installedExtensions;
-(NSNumber *)isSystemIntegrityProtectionEnabled;
-(NSString *)localHostName;
-(NSDictionary *)osUpdateSettings;
-(NSDictionary *)xsanConfiguration;
-(NSDictionary *)errorsForKeys;
-(void)setErrorsForKeys:(NSDictionary *)arg1 ;
@end

