/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SDLockHandler : NSObject
+(BOOL)unlockedSinceBoot;
+(BOOL)deviceUnlocked;
+(BOOL)deviceFirstUnlockedInMKB;
+(BOOL)deviceFirstUnlockedInSB;
+(void)_deviceLockSetup;
+(void)_deviceLockSetupMKB;
+(void)_deviceLockSetupSB;
+(void)_deviceLockSetUpMigrationCheck;
+(void)setupHandlerWithIndexQueue:(id)arg1 pipelineOnly:(BOOL)arg2 indexEnabled:(BOOL)arg3 delegate:(id)arg4 ;
@end
