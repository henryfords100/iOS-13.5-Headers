/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBSOrientationObserver, NSMutableArray;

@interface CRKInterfaceOrientationMonitor : NSObject {

	FBSOrientationObserver* mObserver;
	NSMutableArray* mCompletionBlocks;
	BOOL mIsWaitingForFirstUpdate;
	unsigned long long _interfaceOrientation;

}

@property (assign,nonatomic) unsigned long long interfaceOrientation;              //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned long long)interfaceOrientation;
-(void)setInterfaceOrientation:(unsigned long long)arg1 ;
-(/*^block*/id)makeUpdateHandler;
-(void)updateInterfaceOrientationWithNotification:(id)arg1 ;
-(void)updateInterfaceOrientationWithBSOrientation:(long long)arg1 ;
-(unsigned long long)DMFInterfaceOrientationFromBSInterfaceOrientation:(long long)arg1 ;
-(void)updateInterfaceOrientationWithDMFOrientation:(unsigned long long)arg1 ;
-(void)interfaceOrientationWithCompletion:(/*^block*/id)arg1 ;
@end
