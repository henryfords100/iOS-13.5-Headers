/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CFXApplicationState : NSObject {

	BOOL _isRegisteredForEvents;
	long long _applicationState;

}

@property (assign,nonatomic) BOOL isRegisteredForEvents;              //@synthesize isRegisteredForEvents=_isRegisteredForEvents - In the implementation block
@property (assign,nonatomic) long long applicationState;              //@synthesize applicationState=_applicationState - In the implementation block
+(id)sharedInstance;
+(void)beginMonitoringApplicationState;
-(id)init;
-(void)dealloc;
-(long long)applicationState;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)setApplicationState:(long long)arg1 ;
-(void)unregisterForEvents;
-(void)registerForEvents;
-(BOOL)isRegisteredForEvents;
-(void)setIsRegisteredForEvents:(BOOL)arg1 ;
@end
