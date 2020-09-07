/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVAudioPlayerNode, AVAudioUnitTimePitch;

@interface AXMActiveSound : NSObject {

	AVAudioPlayerNode* _player;
	AVAudioUnitTimePitch* _timePitch;

}

@property (nonatomic,retain) AVAudioPlayerNode * player;                    //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) AVAudioUnitTimePitch * timePitch;              //@synthesize timePitch=_timePitch - In the implementation block
-(id)init;
-(AVAudioPlayerNode *)player;
-(void)setPlayer:(AVAudioPlayerNode *)arg1 ;
-(void)setTimePitch:(AVAudioUnitTimePitch *)arg1 ;
-(AVAudioUnitTimePitch *)timePitch;
-(void)connectToEngine:(id)arg1 ;
-(void)disconnectFromEngine:(id)arg1 ;
-(BOOL)beginPlayback:(id)arg1 withError:(id*)arg2 ;
@end
