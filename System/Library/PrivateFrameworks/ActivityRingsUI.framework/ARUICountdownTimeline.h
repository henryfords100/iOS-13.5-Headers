/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ARUICountdownAnimation;
@class NSArray;

@interface ARUICountdownTimeline : NSObject {

	id<ARUICountdownAnimation> _prepareToAnimate;
	NSArray* _animations;
	id<ARUICountdownAnimation> _prepareToCancel;
	NSArray* _cancelAnimations;

}

@property (nonatomic,retain) id<ARUICountdownAnimation> prepareToAnimate;              //@synthesize prepareToAnimate=_prepareToAnimate - In the implementation block
@property (nonatomic,retain) NSArray * animations;                                     //@synthesize animations=_animations - In the implementation block
@property (nonatomic,retain) id<ARUICountdownAnimation> prepareToCancel;               //@synthesize prepareToCancel=_prepareToCancel - In the implementation block
@property (nonatomic,retain) NSArray * cancelAnimations;                               //@synthesize cancelAnimations=_cancelAnimations - In the implementation block
-(NSArray *)animations;
-(void)setAnimations:(NSArray *)arg1 ;
-(id<ARUICountdownAnimation>)prepareToAnimate;
-(id<ARUICountdownAnimation>)prepareToCancel;
-(NSArray *)cancelAnimations;
-(void)setPrepareToAnimate:(id<ARUICountdownAnimation>)arg1 ;
-(void)setPrepareToCancel:(id<ARUICountdownAnimation>)arg1 ;
-(void)setCancelAnimations:(NSArray *)arg1 ;
@end
