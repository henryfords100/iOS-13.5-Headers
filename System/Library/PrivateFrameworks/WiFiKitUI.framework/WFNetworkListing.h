/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol WFNetworkListing <NSObject>
@property (assign,nonatomic) BOOL showOtherNetwork; 
@property (assign) float currentNetworkScaledRSSI; 
@property (retain) id<WFNetworkListRecord> currentNetwork; 
@property (assign) long long currentNetworkState; 
@property (assign) unsigned long long currentNetworkSignalBars; 
@property (assign,nonatomic) long long deviceCapability; 
@property (nonatomic,copy) NSString * currentNetworkSubtitle; 
@property (assign,nonatomic) BOOL disabled; 
@property (assign,nonatomic) BOOL userAutoJoinEnabled; 
@optional
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1;
-(void)setScanning:(BOOL)arg1;
-(long long)deviceCapability;
-(void)setDeviceCapability:(long long)arg1;
-(NSString *)currentNetworkSubtitle;
-(void)powerModificationStateDidChange:(BOOL)arg1;
-(void)managedAppleIDStateChange:(BOOL)arg1;
-(void)setCurrentNetwork:(id)arg1 previousNetwork:(id)arg2 reason:(unsigned long long)arg3;
-(void)setCurrentNetworkSubtitle:(id)arg1;
-(void)setCurrentNetworkSignalBars:(unsigned long long)arg1;
-(BOOL)supportsWiFiPasswordSharing;
-(BOOL)shouldPromptWhenPersonalHotspotIsEnabled;
-(BOOL)shouldPromptWhenCarPlaySessionIsActive;
-(BOOL)supportsHealthRecommendations;
-(void)setAutoInstantHotspotJoinOption:(long long)arg1;
-(void)setAskToJoinMode:(long long)arg1;
-(void)updateViewsForNetworks:(id)arg1;
-(void)setUserAutoJoinEnabled:(BOOL)arg1;
-(void)networkListDelegateWillPresentAccessoryViewController:(id)arg1;
-(void)networkListDelegateDidPresentAccessoryViewController:(id)arg1;
-(unsigned long long)currentNetworkSignalBars;
-(BOOL)userAutoJoinEnabled;

@required
-(void)refresh;
-(void)setCurrentNetwork:(id)arg1;
-(id<WFNetworkListRecord>)currentNetwork;
-(void)setNetworks:(id)arg1;
-(void)setListDelegate:(id)arg1;
-(void)setShowOtherNetwork:(BOOL)arg1;
-(void)powerStateDidChange:(BOOL)arg1;
-(void)setCurrentNetworkScaledRSSI:(float)arg1;
-(void)setCurrentNetworkState:(long long)arg1;
-(long long)currentNetworkState;
-(BOOL)showOtherNetwork;
-(float)currentNetworkScaledRSSI;

@end

