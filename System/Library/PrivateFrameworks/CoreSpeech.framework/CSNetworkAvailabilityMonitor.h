/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSNetworkAvailabilityMonitor : CSEventMonitor {

	int _notifyToken;

}
+(id)sharedInstance;
-(id)init;
-(BOOL)isAvailable;
-(void)_stopMonitoring;
-(void)_availabilityChanged;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_didReceivedNetworkAvailabilityChangedNotification:(BOOL)arg1 ;
-(void)_notifyObserver:(id)arg1 withNetworkAvailability:(BOOL)arg2 ;
@end
