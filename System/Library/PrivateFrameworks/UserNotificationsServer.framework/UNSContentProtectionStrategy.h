/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UNSContentProtectionStrategy <NSObject>
@optional
-(void)importDataWithImportHandler:(/*^block*/id)arg1;

@required
-(BOOL)removeItemAtPath:(id)arg1 error:(id*)arg2;
-(BOOL)dataIsAvailableAtPath:(id)arg1;
-(id)dataAtPath:(id)arg1;
-(BOOL)writeData:(id)arg1 atPath:(id)arg2 error:(id*)arg3;
-(void)migrateDataAtPath:(id)arg1 toPath:(id)arg2;

@end
