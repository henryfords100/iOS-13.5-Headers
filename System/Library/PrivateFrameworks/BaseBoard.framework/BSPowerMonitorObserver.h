/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BSPowerMonitorObserver <NSObject>
@optional
-(BOOL)powerMonitorSystemSleepRequested:(id)arg1;
-(void)powerMonitorSystemSleepRequestAborted:(id)arg1;
-(void)powerMonitorSystemWillSleep:(id)arg1;
-(void)powerMonitorSystemWillWakeFromSleep:(id)arg1;
-(void)powerMonitorSystemDidWakeFromSleep:(id)arg1;

@end

