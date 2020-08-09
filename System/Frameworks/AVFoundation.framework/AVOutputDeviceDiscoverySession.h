/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVOutputDeviceDiscoverySessionInternal, AVAudioSession, NSArray, AVOutputDeviceDiscoverySessionAvailableOutputDevices;

@interface AVOutputDeviceDiscoverySession : NSObject {

	AVOutputDeviceDiscoverySessionInternal* _outputDeviceDiscoverySession;

}

@property (readonly) OpaqueFigRouteDiscovererRef routeDiscoverer; 
@property (assign,nonatomic) long long discoveryMode; 
@property (nonatomic,retain) AVAudioSession * targetAudioSession; 
@property (nonatomic,readonly) NSArray * availableOutputDevices; 
@property (nonatomic,readonly) AVOutputDeviceDiscoverySessionAvailableOutputDevices * availableOutputDevicesObject; 
@property (nonatomic,readonly) BOOL devicePresenceDetected; 
+(void)initialize;
+(id)outputDeviceDiscoverySessionFactory;
-(id)init;
-(void)dealloc;
-(id)impl;
-(void)setDiscoveryMode:(long long)arg1 ;
-(long long)discoveryMode;
-(id)initWithDeviceFeatures:(unsigned long long)arg1 ;
-(AVAudioSession *)targetAudioSession;
-(void)setTargetAudioSession:(AVAudioSession *)arg1 ;
-(AVOutputDeviceDiscoverySessionAvailableOutputDevices *)availableOutputDevicesObject;
-(BOOL)devicePresenceDetected;
-(void)outputDeviceDiscoverySessionImplDidChangeAvailableOutputDevices:(id)arg1 ;
-(id)initWithOutputDeviceDiscoverySessionImpl:(id)arg1 ;
-(NSArray *)availableOutputDevices;
-(void)outputDeviceDiscoverySessionImpl:(id)arg1 didExpireWithReplacement:(id)arg2 ;
-(OpaqueFigRouteDiscovererRef)routeDiscoverer;
@end
