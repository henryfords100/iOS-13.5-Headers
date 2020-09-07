/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NUMediaPlayer <NSObject>
@property (nonatomic,readonly) long long playbackState; 
@property (nonatomic,readonly) SCD_Struct_NU0 mediaDuration; 
@property (nonatomic,readonly) SCD_Struct_NU0 currentTime; 
@property (assign,nonatomic) double playbackRate; 
@property (assign,nonatomic) long long playbackMode; 
@property (assign,getter=isMuted,nonatomic) BOOL muted; 
@required
-(void)pause;
-(void)removeObserver:(id)arg1;
-(void)play;
-(SCD_Struct_NU0)currentTime;
-(void)setMuted:(BOOL)arg1;
-(BOOL)isMuted;
-(void)seekToTime:(SCD_Struct_NU0)arg1;
-(void)stepByCount:(long long)arg1;
-(double)playbackRate;
-(void)setPlaybackRate:(double)arg1;
-(long long)playbackState;
-(long long)playbackMode;
-(void)setPlaybackMode:(long long)arg1;
-(SCD_Struct_NU0)mediaDuration;
-(void)seekToTime:(SCD_Struct_NU0)arg1 exact:(BOOL)arg2;
-(id)addPlaybackTimeObserver:(/*^block*/id)arg1;
-(id)addPlaybackStateObserver:(/*^block*/id)arg1;

@end
