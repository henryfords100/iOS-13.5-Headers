/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class MFWeakReferenceHolder, NSObject;

@interface _MFContentProtectionObserverWrapper : NSObject {

	MFWeakReferenceHolder* _observerReference;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) id<MFContentProtectionObserver> observer; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
-(void)dealloc;
-(id<MFContentProtectionObserver>)observer;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithObserver:(id)arg1 queue:(id)arg2 ;
@end
