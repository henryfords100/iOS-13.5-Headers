/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIMotionEffectEvent.h>

@interface _UIMotionEffectFocusChangeEvent : _UIMotionEffectEvent {

	CGPoint _focusPosition;

}

@property (nonatomic,readonly) CGPoint focusPosition;              //@synthesize focusPosition=_focusPosition - In the implementation block
-(CGPoint)focusPosition;
-(id)copyWithTimestamp:(double)arg1 ;
-(double)velocityRelativeToPreviousEvent:(id)arg1 ;
-(id)initWithTimestamp:(double)arg1 focusPosition:(CGPoint)arg2 ;
@end
