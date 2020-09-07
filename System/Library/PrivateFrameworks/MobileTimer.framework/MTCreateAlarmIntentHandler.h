/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MTAlarmIntentHandler.h>
#import <libobjc.A.dylib/MTCreateAlarmIntentHandling.h>

@class NSString;

@interface MTCreateAlarmIntentHandler : MTAlarmIntentHandler <MTCreateAlarmIntentHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_alarmUserActivityWithIntent:(id)arg1 ;
-(void)handleMTCreateAlarm:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveLabelForMTCreateAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveDateComponentsForMTCreateAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveRepeatScheduleForMTCreateAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)provideRepeatScheduleOptionsForMTCreateAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)confirmMTCreateAlarm:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)defaultRepeatScheduleForMTCreateAlarm:(id)arg1 ;
@end
