/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <AVFoundation/AVPlayer.h>

@class ISRateCurveRequest;

@interface ISAVPlayer : AVPlayer {

	ISRateCurveRequest* _currentRequest;

}
-(void)dealloc;
-(id)initWithDispatchQueue:(id)arg1 ;
-(void)setRate:(float)arg1 ;
-(void)playToTime:(SCD_Struct_IS0)arg1 withInitialRate:(float)arg2 overDuration:(double)arg3 progressHandler:(/*^block*/id)arg4 ;
-(void)_setRate:(float)arg1 ;
-(void)_cancelRateCurveRequest;
@end
