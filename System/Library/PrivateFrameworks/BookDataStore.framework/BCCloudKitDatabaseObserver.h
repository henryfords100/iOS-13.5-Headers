/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BCCloudKitDatabaseObserver <NSObject>
@required
-(void)databaseController:(id)arg1 recordWithIDWasDeleted:(id)arg2 recordType:(id)arg3;
-(void)databaseController:(id)arg1 reachabilityChanged:(BOOL)arg2;
-(void)databaseController:(id)arg1 attachmentChanged:(BOOL)arg2;
-(void)databaseController:(id)arg1 recordsChanged:(id)arg2;
-(void)databaseController:(id)arg1 fetchedAllRecordsInZone:(id)arg2;

@end

