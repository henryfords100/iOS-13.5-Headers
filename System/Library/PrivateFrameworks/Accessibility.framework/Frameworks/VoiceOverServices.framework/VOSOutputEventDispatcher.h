/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VOSOutputEventDispatching.h>

@protocol OS_dispatch_queue, VOSSoundPack, VOSHapticPack;
@class NSObject, NSHashTable, NSString;

@interface VOSOutputEventDispatcher : NSObject <VOSOutputEventDispatching> {

	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _eventHandlers;
	id<VOSSoundPack> _cachedActiveSoundPack;
	id<VOSHapticPack> _cachedActiveHapticPack;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)_init;
-(void)sendEvent:(id)arg1 ;
-(void)addEventHandler:(id)arg1 ;
-(void)removeEventHandler:(id)arg1 ;
-(id)_activeSoundPack;
-(id)_activeHapticPack;
-(BOOL)shouldPlaySoundForEvent:(id)arg1 ;
-(BOOL)shouldPlayHapticForEvent:(id)arg1 ;
@end

