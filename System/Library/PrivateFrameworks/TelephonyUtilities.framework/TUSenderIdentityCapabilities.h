/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSString, TUSenderIdentityCapabilitiesState, TUCallCapabilitiesXPCClient, TUCTCapabilityInfo, NSURL, NSData;

@interface TUSenderIdentityCapabilities : NSObject {

	NSUUID* _senderIdentityUUID;
	NSString* _thumperCallingLocalDeviceID;
	TUSenderIdentityCapabilitiesState* _state;
	TUCallCapabilitiesXPCClient* _client;

}

@property (nonatomic,copy,readonly) TUSenderIdentityCapabilitiesState * state;                                                                                     //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) TUCallCapabilitiesXPCClient * client;                                                                                               //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) TUCTCapabilityInfo * voLTECallingCapabilityInfo; 
@property (nonatomic,readonly) TUCTCapabilityInfo * wiFiCallingCapabilityInfo; 
@property (nonatomic,readonly) TUCTCapabilityInfo * thumperCallingCapabilityInfo; 
@property (nonatomic,copy,readonly) NSUUID * senderIdentityUUID;                                                                                                   //@synthesize senderIdentityUUID=_senderIdentityUUID - In the implementation block
@property (nonatomic,readonly) BOOL supportsSimultaneousVoiceAndData; 
@property (nonatomic,readonly) BOOL canAttemptTelephonyCallsWithoutCellularConnection; 
@property (nonatomic,readonly) BOOL canAttemptEmergencyCallsWithoutCellularConnection; 
@property (getter=isCSCallingCurrentlyAvailable,nonatomic,readonly) BOOL csCallingCurrentlyAvailable; 
@property (nonatomic,readonly) BOOL supportsVoLTECalling; 
@property (getter=isVoLTECallingEnabled,nonatomic,readonly) BOOL voLTECallingEnabled; 
@property (getter=isVoLTECallingCurrentlyAvailable,nonatomic,readonly) BOOL voLTECallingCurrentlyAvailable; 
@property (nonatomic,readonly) BOOL supportsWiFiCalling; 
@property (getter=isWiFiCallingEnabled,nonatomic,readonly) BOOL wiFiCallingEnabled; 
@property (nonatomic,readonly) BOOL supportsWiFiCallingRoaming; 
@property (getter=isWiFiCallingRoamingEnabled,nonatomic,readonly) BOOL wiFiCallingRoamingEnabled; 
@property (getter=isWiFiCallingCurrentlyAvailable,nonatomic,readonly) BOOL wiFiCallingCurrentlyAvailable; 
@property (nonatomic,readonly) BOOL supportsEmergencyWiFiCalling; 
@property (getter=isEmergencyWiFiCallingCurrentlyAvailable,nonatomic,readonly) BOOL emergencyWiFiCallingCurrentlyAvailable; 
@property (nonatomic,readonly) int wiFiCallingProvisioningStatus; 
@property (nonatomic,copy,readonly) NSURL * wiFiCallingProvisioningURL; 
@property (getter=isWiFiCallingProvisioningURLInvalid,nonatomic,readonly) BOOL wiFiCallingProvisioningURLInvalid; 
@property (nonatomic,copy,readonly) NSData * wiFiCallingProvisioningPostData; 
@property (nonatomic,readonly) BOOL supportsThumperCalling; 
@property (getter=isThumperCallingAllowedForCurrentDevice,nonatomic,readonly) BOOL thumperCallingAllowedForCurrentDevice; 
@property (getter=isThumperCallingEnabled,nonatomic,readonly) BOOL thumperCallingEnabled; 
@property (getter=isThumperCallingCurrentlyAvailable,nonatomic,readonly) BOOL thumperCallingCurrentlyAvailable; 
@property (nonatomic,readonly) BOOL supportsThumperCallingOverCellularData; 
@property (nonatomic,copy) NSString * thumperCallingLocalDeviceID;                                                                                                 //@synthesize thumperCallingLocalDeviceID=_thumperCallingLocalDeviceID - In the implementation block
@property (nonatomic,readonly) int thumperCallingProvisioningStatus; 
@property (nonatomic,copy,readonly) NSURL * thumperCallingProvisioningURL; 
@property (getter=isThumperCallingProvisioningURLInvalid,nonatomic,readonly) BOOL thumperCallingProvisioningURLInvalid; 
@property (nonatomic,copy,readonly) NSData * thumperCallingProvisioningPostData; 
@property (getter=isThumperCallingAllowedOnDefaultPairedSecondaryDevice,nonatomic,readonly) BOOL thumperCallingAllowedOnDefaultPairedSecondaryDevice; 
-(id)debugDescription;
-(TUSenderIdentityCapabilitiesState *)state;
-(TUCallCapabilitiesXPCClient *)client;
-(BOOL)supportsSimultaneousVoiceAndData;
-(BOOL)isWiFiCallingCurrentlyAvailable;
-(BOOL)isThumperCallingCurrentlyAvailable;
-(BOOL)canAttemptTelephonyCallsWithoutCellularConnection;
-(BOOL)isEmergencyWiFiCallingCurrentlyAvailable;
-(BOOL)supportsVoLTECalling;
-(BOOL)isVoLTECallingEnabled;
-(BOOL)supportsWiFiCalling;
-(BOOL)supportsWiFiCallingRoaming;
-(BOOL)isWiFiCallingEnabled;
-(BOOL)isThumperCallingEnabled;
-(BOOL)isThumperCallingAllowedOnSecondaryDeviceWithID:(id)arg1 ;
-(NSUUID *)senderIdentityUUID;
-(BOOL)supportsThumperCalling;
-(BOOL)supportsThumperCallingOverCellularData;
-(TUCTCapabilityInfo *)thumperCallingCapabilityInfo;
-(TUCTCapabilityInfo *)wiFiCallingCapabilityInfo;
-(BOOL)supportsEmergencyWiFiCalling;
-(BOOL)isVoLTECallingCurrentlyAvailable;
-(BOOL)isThumperCallingAllowedForCurrentDevice;
-(id)initWithSenderIdentityUUID:(id)arg1 state:(id)arg2 client:(id)arg3 ;
-(BOOL)canAttemptEmergencyCallsWithoutCellularConnection;
-(BOOL)isCSCallingCurrentlyAvailable;
-(TUCTCapabilityInfo *)voLTECallingCapabilityInfo;
-(BOOL)isWiFiCallingRoamingEnabled;
-(int)wiFiCallingProvisioningStatus;
-(NSURL *)wiFiCallingProvisioningURL;
-(BOOL)isWiFiCallingProvisioningURLInvalid;
-(NSData *)wiFiCallingProvisioningPostData;
-(int)thumperCallingProvisioningStatus;
-(NSURL *)thumperCallingProvisioningURL;
-(BOOL)isThumperCallingProvisioningURLInvalid;
-(NSData *)thumperCallingProvisioningPostData;
-(BOOL)isThumperCallingAllowedOnDefaultPairedSecondaryDevice;
-(void)setVoLTECallingEnabled:(BOOL)arg1 ;
-(void)setWiFiCallingEnabled:(BOOL)arg1 ;
-(void)setWiFiCallingRoamingEnabled:(BOOL)arg1 ;
-(void)invalidateAndRefreshWiFiCallingProvisioningURL;
-(void)setThumperCallingEnabled:(BOOL)arg1 ;
-(void)invalidateAndRefreshThumperCallingProvisioningURL;
-(void)setThumperCallingAllowed:(BOOL)arg1 onSecondaryDeviceWithID:(id)arg2 ;
-(void)setThumperCallingAllowedOnDefaultPairedSecondaryDevice:(BOOL)arg1 ;
-(void)requestPinFromPrimaryDeviceForThumperCalling;
-(void)cancelPinRequestFromPrimaryDeviceForThumperCalling;
-(void)_sendNotificationsAndCallbacksComparingToOldSenderIdentityCapabilities:(id)arg1 ;
-(NSString *)thumperCallingLocalDeviceID;
-(void)setThumperCallingLocalDeviceID:(NSString *)arg1 ;
@end

