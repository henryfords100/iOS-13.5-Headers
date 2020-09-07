/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/WFDecimalSettingIntent.h>

@class NSNumber;

@interface WFSetBrightnessIntent : INIntent <WFDecimalSettingIntent>

@property (nonatomic,readonly) Class settingsClientClass; 
@property (nonatomic,retain) NSNumber * value; 
@property (nonatomic,copy) NSNumber * value; 
-(void)applyWithSettingsClient:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(Class)settingsClientClass;
@end
