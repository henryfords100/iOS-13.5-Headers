/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/ISObservable.h>

@class NSMutableSet;

@interface ISLivePhotoPlaybackFilter : ISObservable {

	BOOL _playIsSticky;
	BOOL _isPerformingInputChanges;
	BOOL _playbackDisabled;
	double _hintProgress;
	long long _state;
	NSMutableSet* __playbackDisabledReasons;

}

@property (assign,setter=_setPerformingInputChanges:,nonatomic) BOOL isPerformingInputChanges;                          //@synthesize isPerformingInputChanges=_isPerformingInputChanges - In the implementation block
@property (assign,setter=_setPlaybackDisabled:,getter=isPlaybackDisabled,nonatomic) BOOL playbackDisabled;              //@synthesize playbackDisabled=_playbackDisabled - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _playbackDisabledReasons;                                                 //@synthesize _playbackDisabledReasons=__playbackDisabledReasons - In the implementation block
@property (nonatomic,readonly) double hintProgress;                                                                     //@synthesize hintProgress=_hintProgress - In the implementation block
@property (nonatomic,readonly) long long state;                                                                         //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL playIsSticky;                                                                         //@synthesize playIsSticky=_playIsSticky - In the implementation block
-(id)init;
-(long long)state;
-(void)reset;
-(void)setState:(long long)arg1 ;
-(void)_setState:(long long)arg1 ;
-(id)mutableChangeObject;
-(void)setPlaybackDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(BOOL)isPlaybackDisabled;
-(void)setHintProgress:(double)arg1 ;
-(double)hintProgress;
-(BOOL)playIsSticky;
-(void)setPlayIsSticky:(BOOL)arg1 ;
-(BOOL)isPerformingInputChanges;
-(void)_setPerformingInputChanges:(BOOL)arg1 ;
-(void)_setPlaybackDisabled:(BOOL)arg1 ;
-(NSMutableSet *)_playbackDisabledReasons;
@end
