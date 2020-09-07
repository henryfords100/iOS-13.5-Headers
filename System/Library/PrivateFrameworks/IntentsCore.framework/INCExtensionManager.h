/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface INCExtensionManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _extensions;
	NSMutableDictionary* _killTimers;

}
+(void)initialize;
+(id)sharedManager;
-(id)init;
-(void)fetchExtensionForIntent:(id)arg1 extensionInputItems:(id)arg2 requiresTCC:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)killExtension:(id)arg1 requestIdentifier:(id)arg2 afterTimeout:(double)arg3 ;
-(BOOL)isExtensionLoadedForExtensionBundleIdentifier:(id)arg1 ;
-(void)_resetKillTimerForExtensionWithBundleIdentifier:(id)arg1 ;
-(void)_killExtensionWithBundleIdentifier:(id)arg1 ;
-(void)_manageExtension:(id)arg1 requestIdentifier:(id)arg2 ;
@end
