/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface _DPDataProtectionMaster : NSObject {

	BOOL _deviceFormatedForContentProtection;
	BOOL _notifyEnabled;
	int _notifyToken;
	NSObject*<OS_dispatch_queue> _stateQueue;
	NSMutableDictionary* _handlers;
	NSMutableDictionary* _availableState;
	NSObject*<OS_dispatch_queue> _notifyQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> stateQueue;               //@synthesize stateQueue=_stateQueue - In the implementation block
@property (nonatomic,readonly) BOOL deviceFormatedForContentProtection;               //@synthesize deviceFormatedForContentProtection=_deviceFormatedForContentProtection - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * handlers;                        //@synthesize handlers=_handlers - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * availableState;                  //@synthesize availableState=_availableState - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> notifyQueue;              //@synthesize notifyQueue=_notifyQueue - In the implementation block
@property (nonatomic,readonly) int notifyToken;                                       //@synthesize notifyToken=_notifyToken - In the implementation block
@property (nonatomic,readonly) BOOL notifyEnabled;                                    //@synthesize notifyEnabled=_notifyEnabled - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(int)notifyToken;
-(BOOL)isDataAvailableFor:(id)arg1 ;
-(BOOL)isDataAvailableForClassA;
-(BOOL)isDataAvailableForClassC;
-(void)handleKeyBagLockNotification;
-(BOOL)deviceHasBeenUnlockedSinceBoot;
-(BOOL)deviceIsPasswordConfigured;
-(BOOL)deviceIsLocked;
-(id)registerStateChangeHandler:(/*^block*/id)arg1 ;
-(void)deregisterStateChangeHandler:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)stateQueue;
-(NSMutableDictionary *)handlers;
-(NSObject*<OS_dispatch_queue>)notifyQueue;
-(NSMutableDictionary *)availableState;
-(BOOL)deviceFormatedForContentProtection;
-(BOOL)notifyEnabled;
@end

