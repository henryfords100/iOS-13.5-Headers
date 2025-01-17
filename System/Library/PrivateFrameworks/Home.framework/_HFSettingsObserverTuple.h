/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFHomeKitSettingsObserver.h>
#import <libobjc.A.dylib/NAIdentifiable.h>

@protocol HFHomeKitSettingsObserver, _HFSettingsObserverTupleOwning;
@class HMSettings, HMSetting, NADeallocationSentinel, NSString;

@interface _HFSettingsObserverTuple : NSObject <HFHomeKitSettingsObserver, NAIdentifiable> {

	HMSettings* _settings;
	HMSetting* _setting;
	id<HFHomeKitSettingsObserver> _observer;
	id<_HFSettingsObserverTupleOwning> _owner;
	NADeallocationSentinel* _observerDeallocationSentinel;

}

@property (nonatomic,retain) HMSettings * settings;                                              //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) HMSetting * setting;                                                //@synthesize setting=_setting - In the implementation block
@property (assign,nonatomic,__weak) id<HFHomeKitSettingsObserver> observer;                      //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic,__weak) id<_HFSettingsObserverTupleOwning> owner;                    //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain) NADeallocationSentinel * observerDeallocationSentinel;              //@synthesize observerDeallocationSentinel=_observerDeallocationSentinel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
+(id)tupleForSettings:(id)arg1 setting:(id)arg2 observer:(id)arg3 owner:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id<HFHomeKitSettingsObserver>)observer;
-(void)setOwner:(id<_HFSettingsObserverTupleOwning>)arg1 ;
-(void)setObserver:(id<HFHomeKitSettingsObserver>)arg1 ;
-(id<_HFSettingsObserverTupleOwning>)owner;
-(HMSettings *)settings;
-(void)setSettings:(HMSettings *)arg1 ;
-(HMSetting *)setting;
-(void)setSetting:(HMSetting *)arg1 ;
-(void)settingsDidUpdate:(id)arg1 ;
-(void)settingsWillUpdate:(id)arg1 ;
-(id)initWithSettings:(id)arg1 setting:(id)arg2 observer:(id)arg3 owner:(id)arg4 ;
-(void)setObserverDeallocationSentinel:(NADeallocationSentinel *)arg1 ;
-(void)_accessorySettingDidUpdate:(id)arg1 ;
-(void)_accessorySettingReflectionStateDidUpdate:(id)arg1 ;
-(NADeallocationSentinel *)observerDeallocationSentinel;
@end

