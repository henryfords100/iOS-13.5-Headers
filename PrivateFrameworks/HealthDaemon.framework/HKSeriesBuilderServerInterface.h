/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKSeriesBuilderServerInterface <NSObject>
@required
-(void)remote_addMetadata:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_recoverWithCompletion:(/*^block*/id)arg1;
-(void)remote_discardWithCompletion:(/*^block*/id)arg1;
-(void)remote_freezeWithCompletion:(/*^block*/id)arg1;

@end
