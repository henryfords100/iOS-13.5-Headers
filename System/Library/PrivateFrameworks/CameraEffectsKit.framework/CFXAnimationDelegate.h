/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString;

@interface CFXAnimationDelegate : NSObject <CAAnimationDelegate> {

	/*^block*/id _completion;
	/*^block*/id _start;

}

@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) id start;                                //@synthesize start=_start - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)start;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)animationDidStart:(id)arg1 ;
-(void)setStart:(id)arg1 ;
@end

