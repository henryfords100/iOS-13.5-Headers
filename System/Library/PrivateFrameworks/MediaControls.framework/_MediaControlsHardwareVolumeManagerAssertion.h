/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaControls/MediaControlsInvalidatable.h>

@class MediaControlsHardwareVolumeManager, NSString;

@interface _MediaControlsHardwareVolumeManagerAssertion : NSObject <MediaControlsInvalidatable> {

	MediaControlsHardwareVolumeManager* _volumeManager;

}

@property (assign,nonatomic,__weak) MediaControlsHardwareVolumeManager * volumeManager;              //@synthesize volumeManager=_volumeManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(MediaControlsHardwareVolumeManager *)volumeManager;
-(void)setVolumeManager:(MediaControlsHardwareVolumeManager *)arg1 ;
@end
