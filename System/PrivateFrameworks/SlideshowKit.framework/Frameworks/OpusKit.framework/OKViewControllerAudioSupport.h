/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OKViewControllerAudioSupport <NSObject>
@optional
-(void)setPlaybackAudioVolume:(double)arg1;
-(void)beginFadingWithDuration:(double)arg1;
-(double)requiredDuckLevel;
-(void)beginDuckingToLevel:(double)arg1 fadeDuration:(double)arg2;
-(void)endDucking;
-(void)endFading;

@end
