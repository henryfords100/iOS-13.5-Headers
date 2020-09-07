/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BBObserverClientInterface
@required
-(void)updateSectionInfo:(id)arg1;
-(void)updateSectionParameters:(id)arg1 forSectionID:(id)arg2;
-(void)removeSection:(id)arg1;
-(void)updateGlobalSettings:(id)arg1;
-(void)noteServerReceivedResponseForBulletin:(id)arg1;
-(void)updateBulletin:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getObserverDebugInfo:(/*^block*/id)arg1;

@end
