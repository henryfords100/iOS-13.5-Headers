/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CalChronometry : NSObject
+(void)initialize;
+(id)currentLanguageCode;
+(id)activeTimeZone;
+(id)activeCalendar;
+(void)_configureChronometry;
+(void)_updateActiveCalendar;
+(void)_currentLocaleDidChange:(id)arg1 ;
+(void)_currentTimeZoneDidChange:(id)arg1 ;
+(void)_updateForLocaleChange;
+(void)_updateEveything;
+(void)_updateActiveTimeZone;
+(void)setActiveTimeZone:(id)arg1 ;
+(id)currentLocationCode;
@end

