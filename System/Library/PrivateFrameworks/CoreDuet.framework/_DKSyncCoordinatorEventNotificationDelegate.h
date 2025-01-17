/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DKSyncCoordinatorEventNotificationDelegate
@optional
-(void)syncCoordinator:(id)arg1 didAddRemoteEventsWithStreamNameCounts:(id)arg2 events:(id)arg3;
-(void)syncCoordinator:(id)arg1 didApplyRemoteAdditionChangeSet:(id)arg2;
-(void)syncCoordinator:(id)arg1 didDeleteRemoteEventsWithCount:(unsigned long long)arg2;
-(void)syncCoordinator:(id)arg1 didApplyRemoteDeletionChangeSet:(id)arg2;
-(void)syncCoordinator:(id)arg1 didInsertLocalAdditionEventsWithStreamNameCounts:(id)arg2;
-(void)syncCoordinator:(id)arg1 didCreateAdditionChangeSet:(id)arg2;
-(void)syncCoordinator:(id)arg1 didInsertLocalDeletionEventsWithCount:(unsigned long long)arg2;
-(void)syncCoordinator:(id)arg1 didCreateDeletionChangeSet:(id)arg2;

@end

