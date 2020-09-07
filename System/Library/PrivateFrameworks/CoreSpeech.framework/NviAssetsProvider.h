/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol NviAssetsProvider <NSObject>
@property (nonatomic,readonly) NSString * nviConfigRoot; 
@property (nonatomic,readonly) NSString * hepConfigFilepath; 
@optional
-(float)dirAzimuthEMAParam;
-(float)vadSoSThresholdInMs;
-(float)vadSoSConvergenceInMs;
-(id)kwdConfigPath;
-(id)kwdThresholdsMap;
-(BOOL)isDirectionalityAvailable;
-(float)dirAzimuthMatchThreshold;
-(BOOL)isAsdAvailable;
-(id)anchorAsdConfigFile;
-(id)anchorAsdConfigRoot;
-(id)payloadAsdFrontendConfigFile;
-(id)payloadAsdFrontendConfigRoot;
-(id)payloadAsdModelPath;
-(NSString *)nviConfigRoot;
-(NSString *)hepConfigFilepath;

@required
-(id)init;
-(id)initWithTaskIdentifier:(id)arg1;
-(BOOL)isDirectionalityLoggingEnabled;
-(id)signalProvidersMapForContext:(id)arg1;
-(id)signalProviderToDatasourceMap;
-(BOOL)isSignalProviderDisabledInCFPrefs:(unsigned long long)arg1;

@end
