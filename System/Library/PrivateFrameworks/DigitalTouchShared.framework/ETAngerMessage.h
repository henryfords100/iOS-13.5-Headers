/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DigitalTouchShared/DigitalTouchShared-Structs.h>
#import <DigitalTouchShared/ETMessage.h>

@class SKSpriteNode, NSMutableArray;

@interface ETAngerMessage : ETMessage {

	SKSpriteNode* _anger;
	NSMutableArray* _points;
	NSMutableArray* _delays;
	double _duration;
	CGPoint _normalizedCenter;

}

@property (assign,nonatomic) CGPoint normalizedCenter;              //@synthesize normalizedCenter=_normalizedCenter - In the implementation block
@property (assign,nonatomic) double duration;                       //@synthesize duration=_duration - In the implementation block
+(unsigned short)messageType;
-(id)init;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)archiveData;
-(void)stopPlaying;
-(CGPoint)normalizedCenter;
-(void)setNormalizedCenter:(CGPoint)arg1 ;
-(id)initWithArchiveData:(id)arg1 ;
-(id)messageTypeAsString;
-(double)messageDuration;
-(void)setNormalizedPoint:(CGPoint)arg1 atRelativeTime:(double)arg2 inScene:(id)arg3 ;
-(void)displayInScene:(id)arg1 ;
-(void)_updateCenterFromNormalizedPoint:(CGPoint)arg1 inScene:(id)arg2 ;
@end
