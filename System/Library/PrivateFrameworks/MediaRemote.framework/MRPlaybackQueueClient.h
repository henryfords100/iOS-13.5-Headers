/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface MRPlaybackQueueClient : NSObject {

	NSMutableDictionary* _controllers;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
-(void)_handlePlayerPathRemovedNotification:(id)arg1 ;
-(void)_handleApplicationRemovedNotification:(id)arg1 ;
-(void)_handleOriginRemovedNotification:(id)arg1 ;
-(id)subscriptionControllerForPlayerPath:(id)arg1 ;
@end

