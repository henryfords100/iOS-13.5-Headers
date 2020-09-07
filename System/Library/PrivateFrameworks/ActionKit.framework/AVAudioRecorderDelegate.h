/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVAudioRecorderDelegate <NSObject>
@optional
-(void)audioRecorderEndInterruption:(id)arg1;
-(void)audioRecorderEndInterruption:(id)arg1 withOptions:(unsigned long long)arg2;
-(void)audioRecorderEndInterruption:(id)arg1 withFlags:(unsigned long long)arg2;
-(void)audioRecorderBeginInterruption:(id)arg1;
-(void)audioRecorderDidFinishRecording:(id)arg1 successfully:(BOOL)arg2;
-(void)audioRecorderEncodeErrorDidOccur:(id)arg1 error:(id)arg2;

@end
