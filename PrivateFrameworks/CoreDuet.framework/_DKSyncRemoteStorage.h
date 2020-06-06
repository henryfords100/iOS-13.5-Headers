/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DKSyncRemoteStorage
@required
-(id)name;
-(void)start;
-(BOOL)isAvailable;
-(long long)transportType;
-(void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)cancelOutstandingOperations;

@end
