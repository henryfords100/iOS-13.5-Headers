/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MROutputContextDataSource.h>

@class NSString, NSMutableArray;

@interface MRExternalOutputContextDataSource : MROutputContextDataSource {

	NSString* _uniqueIdentifier;
	NSMutableArray* _outputDevices;
	float _masterVolume;
	unsigned _masterVolumeControlCapabilities;

}
-(id)uniqueIdentifier;
-(float)volume;
-(id)initWithUniqueIdentifier:(id)arg1 ;
-(id)outputDevices;
-(unsigned)volumeControlCapabilities;
-(void)_reevaluateMasterVolumeControlCapabilities;
-(void)_reevaluateMasterVolume;
-(void)removeOutputDevices:(id)arg1 ;
-(float)_calculateMasterVolume;
-(unsigned)_calculateMasterVolumeCapabilities;
-(void)updateOutputDevices:(id)arg1 ;
-(void)removeAllOutputDevices;
-(void)updateVolume:(float)arg1 outputDeviceUID:(id)arg2 ;
-(void)updateVolumeControlCapabilities:(unsigned)arg1 outputDeviceUID:(id)arg2 ;
@end

