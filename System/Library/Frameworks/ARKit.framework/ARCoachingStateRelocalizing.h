/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARCoachingState.h>

@class ARCoachingState, ARCoachingHeuristicCollection;

@interface ARCoachingStateRelocalizing : ARCoachingState {

	ARCoachingState* _nextState;
	ARCoachingHeuristicCollection* _heuristics;

}
-(long long)requirements;
-(id)initWithView:(id)arg1 ;
-(void)enter;
-(id)doAction:(long long)arg1 ;
@end
