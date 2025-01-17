/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <libobjc.A.dylib/CCUIAnimationParameters.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol CCUIAnimationTimingFunctionDescription;
@class NSString;

@interface CCUICABasicAnimationParameters : NSObject <CCUIAnimationParameters, NSMutableCopying> {

	double _duration;
	id<CCUIAnimationTimingFunctionDescription> _timingFunction;

}

@property (nonatomic,readonly) double duration;                                                             //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy,readonly) id<CCUIAnimationTimingFunctionDescription> timingFunction;              //@synthesize timingFunction=_timingFunction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(double)duration;
-(id<CCUIAnimationTimingFunctionDescription>)timingFunction;
-(id)_initWithAnimationParameters:(id)arg1 ;
@end

