/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlaybackCore/MPCAssistantPlaybackQueue.h>

@class NSURL;

@interface MPCAssistantGeniusPlaybackQueue : MPCAssistantPlaybackQueue {

	NSURL* _seedTrack;

}

@property (nonatomic,readonly) NSURL * seedTrack;              //@synthesize seedTrack=_seedTrack - In the implementation block
+(id)geniusQueueWithContextID:(id)arg1 seedTrack:(id)arg2 ;
-(id)description;
-(NSURL *)seedTrack;
-(MRSystemAppPlaybackQueueRef)createRemotePlaybackQueue;
-(id)initWithContextID:(id)arg1 seedTrack:(id)arg2 ;
@end
