/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CADReminderInterface
@required
-(void)CADDatabaseGetDefaultCalendarForNewRemindersWithReply:(/*^block*/id)arg1;
-(void)CADDatabaseSetDefaultCalendarForNewReminders:(id)arg1;
-(void)CADDatabaseGetCountOfRemindersWithPredicate:(id)arg1 reply:(/*^block*/id)arg2;
-(void)CADDatabaseGetProperties:(id)arg1 forReminders:(id)arg2 reply:(/*^block*/id)arg3;
-(void)CADScheduledTaskCacheGetDaysAndTaskCounts:(/*^block*/id)arg1;

@end

