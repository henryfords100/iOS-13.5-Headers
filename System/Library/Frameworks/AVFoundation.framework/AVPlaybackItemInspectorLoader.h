/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetMakeReadyForInspectionLoader.h>

@class NSArray;

@interface AVPlaybackItemInspectorLoader : AVAssetMakeReadyForInspectionLoader {

	OpaqueFigPlaybackItemRef _playbackItem;
	NSArray* _trackIDs;
	BOOL _shouldCacheDuration;
	SCD_Struct_AV7 _cachedDuration;

}

@property (getter=_playbackItem,nonatomic,readonly) OpaqueFigPlaybackItemRef playbackItem; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(SCD_Struct_AV7)duration;
-(void)cancelLoading;
-(id)initWithURL:(id)arg1 playbackItem:(OpaqueFigPlaybackItemRef)arg2 trackIDs:(id)arg3 dynamicBehavior:(BOOL)arg4 ;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(Class)_classForTrackInspectors;
-(id)assetInspector;
-(OpaqueFigFormatReaderRef)_copyFormatReaderFromFigObjectWithFigErrorCode:(int*)arg1 ;
-(id)_dictionaryOfSpecialGettersForKeyValueStatus;
-(BOOL)_inspectionRequiresAFormatReader;
-(id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)arg1 ;
-(void)_addFigObjectNotifications;
-(void)_removeFigObjectNotifications;
-(id)_playbackItemPropertiesForKeys:(id)arg1 ;
@end
