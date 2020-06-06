/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface IMFullScreenEffectBundleManager : NSObject {

	NSDictionary* _fullScreenMomentBundles;
	NSString* _bundleDirectory;

}

@property (nonatomic,retain) NSString * bundleDirectory;                            //@synthesize bundleDirectory=_bundleDirectory - In the implementation block
@property (nonatomic,readonly) NSDictionary * fullScreenMomentBundles; 
+(id)sharedInstance;
+(void)__setSingleton__im:(id)arg1 ;
+(id)__singleton__im;
+(id)effectIdentifiersInPickerOrder;
-(id)init;
-(void)dealloc;
-(void)didReceiveMemoryWarning:(id)arg1 ;
-(id)localizedDisplayNameForEffectWithIdentifier:(id)arg1 ;
-(id)loadEffectBundle:(id)arg1 error:(id*)arg2 ;
-(NSString *)bundleDirectory;
-(BOOL)loadAllBundlesFromPath:(id)arg1 bundles:(id*)arg2 error:(id*)arg3 ;
-(id)effectBundleForIdentifier:(id)arg1 ;
-(NSDictionary *)fullScreenMomentBundles;
-(id)fullScreenMomentForIdentifier:(id)arg1 ;
-(id)localizedStringForKey:(id)arg1 fromBundleWithIdentifier:(id)arg2 ;
-(id)triggeredFullScreenEffectForType:(id)arg1 ;
-(BOOL)hasFullScreenMomentForIdentifier:(id)arg1 ;
-(void)setBundleDirectory:(NSString *)arg1 ;
@end
