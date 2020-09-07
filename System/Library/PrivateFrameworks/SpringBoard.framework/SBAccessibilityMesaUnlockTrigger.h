/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBMesaUnlockTrigger.h>
#import <libobjc.A.dylib/SBMesaUnlockTriggerDelegate.h>

@protocol SBBiometricUnlockBehaviorConfigurationDelegate;
@class SBMesaUnlockTrigger, NSString;

@interface SBAccessibilityMesaUnlockTrigger : SBMesaUnlockTrigger <SBMesaUnlockTriggerDelegate> {

	id<SBBiometricUnlockBehaviorConfigurationDelegate> _behaviorConfigurationDelegate;
	SBMesaUnlockTrigger* _baseTrigger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)screenOff;
-(BOOL)bioUnlock;
-(void)significantUserInteractionOccurred;
-(void)menuButtonDown;
-(void)menuButtonUp;
-(void)fingerOn;
-(void)mesaUnlockTriggerFired:(id)arg1 ;
-(void)fingerOff;
-(id)initWithUnlockBehaviorConfigurationDelegate:(id)arg1 baseTrigger:(id)arg2 ;
@end
