/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CALNNotificationStorage.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString;

@interface CALNInMemoryNotificationStorage : NSObject <CALNNotificationStorage> {

	NSMutableDictionary* _recordMap;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,readonly) NSMutableDictionary * recordMap;                     //@synthesize recordMap=_recordMap - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSMutableDictionary *)recordMap;
-(void)addNotificationRecord:(id)arg1 ;
-(id)notificationRecords;
-(void)removeNotificationRecordsPassingTest:(/*^block*/id)arg1 ;
-(void)addNotificationRecords:(id)arg1 ;
-(void)removeAllNotificationRecords;
-(id)_notificationRecords;
-(void)_addNotificationRecord:(id)arg1 ;
-(void)_removeNotificationRecordsPassingTest:(/*^block*/id)arg1 ;
@end

