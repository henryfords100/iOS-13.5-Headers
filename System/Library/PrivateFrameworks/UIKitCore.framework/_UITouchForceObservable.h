/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSObservationSource.h>
#import <libobjc.A.dylib/NSObserver.h>

@class UIView, _UITouchesObservingGestureRecognizer, NSObservation, CADisplayLink, NSSet, NSString;

@interface _UITouchForceObservable : NSObservationSource <NSObserver> {

	UIView* _view;
	long long _observerCount;
	_UITouchesObservingGestureRecognizer* _gestureRecognizer;
	NSObservation* _touchesObservation;
	CADisplayLink* _continuousEvaluationDisplayLink;
	NSSet* _currentTouches;
	double _lastObservationTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)addObserver:(id)arg1 ;
-(void)receiveObservedValue:(id)arg1 ;
-(void)removeObservation:(id)arg1 ;
-(id)initWithView:(id)arg1 ;
-(void)_updateForContinuousEvaluation:(id)arg1 ;
-(void)_cancelContinuousEvaluation;
-(id)_touchForceMessageForTouches:(id)arg1 ;
-(void)_willBeginHavingAnyObservers;
-(void)_didEndHavingAnyObservers;
-(double)_unclampedTouchForceForTouches:(id)arg1 ;
-(double)_maximumPossibleForceForTouches:(id)arg1 ;
-(BOOL)_shouldFilterDueToSystemGesturesForTouches:(id)arg1 ;
-(double)_timestampForTouches:(id)arg1 ;
@end

