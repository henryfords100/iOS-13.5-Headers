/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTrigger/VTEventMonitor.h>
#import <libobjc.A.dylib/BKDeviceDelegate.h>

@protocol VTBiometricMatchMonitorDelegate;
@class BKDevice, NSString;

@interface VTBiometricMatchMonitor : VTEventMonitor <BKDeviceDelegate> {

	id<VTBiometricMatchMonitorDelegate> _delegate;
	BKDevice* _biometricDevice;

}

@property (nonatomic,retain) BKDevice * biometricDevice;                                       //@synthesize biometricDevice=_biometricDevice - In the implementation block
@property (assign,nonatomic,__weak) id<VTBiometricMatchMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(id<VTBiometricMatchMonitorDelegate>)delegate;
-(void)setDelegate:(id<VTBiometricMatchMonitorDelegate>)arg1 ;
-(void)startObserving;
-(void)device:(id)arg1 matchEventOccurred:(id)arg2 ;
-(BOOL)getLastBiometricMatchEvent:(BOOL*)arg1 atTime:(unsigned long long*)arg2 ;
-(BKDevice *)biometricDevice;
-(void)setBiometricDevice:(BKDevice *)arg1 ;
@end
