/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <CoreFoundation/NSArray.h>

@class MPMusicPlayerApplicationController;

@interface _MPMusicPlayerQueueItemsProxy : NSArray {

	MPMusicPlayerApplicationController* _controller;

}

@property (nonatomic,__weak,readonly) MPMusicPlayerApplicationController * controller;              //@synthesize controller=_controller - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(MPMusicPlayerApplicationController *)controller;
-(id)initWithController:(id)arg1 ;
@end
