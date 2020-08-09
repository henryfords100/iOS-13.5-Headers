/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SCNAnimatable.h>

@class SCNOrderedDictionary, NSMutableDictionary, NSString, NSArray;

@interface SCNConstraint : NSObject <NSCopying, NSSecureCoding, SCNAnimatable> {

	_C3DConstraint* _constraintRef;
	SCNOrderedDictionary* _animations;
	NSMutableDictionary* _bindings;
	BOOL _enabled;
	BOOL _incremental;
	double _influenceFactor;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) double influenceFactor; 
@property (assign,getter=isIncremental,nonatomic) BOOL incremental; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSArray * animationKeys; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(id)arg1 ;
-(BOOL)isEnabled;
-(void)copyTo:(id)arg1 ;
-(void)commonInit;
-(id)scene;
-(void)addAnimation:(id)arg1 ;
-(id)animationForKey:(id)arg1 ;
-(void)removeAnimationForKey:(id)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)removeAllAnimations;
-(NSArray *)animationKeys;
-(void)setIncremental:(BOOL)arg1 ;
-(BOOL)isIncremental;
-(const void*)__CFObject;
-(C3DSceneRef)sceneRef;
-(void)addAnimationPlayer:(id)arg1 forKey:(id)arg2 ;
-(id)_scnAnimationForKey:(id)arg1 ;
-(id)animationPlayerForKey:(id)arg1 ;
-(C3DAnimationManagerRef)animationManager;
-(void)_pauseAnimation:(BOOL)arg1 forKey:(id)arg2 pausedByNode:(BOOL)arg3 ;
-(void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2 ;
-(void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2 ;
-(void)pauseAnimationForKey:(id)arg1 ;
-(void)resumeAnimationForKey:(id)arg1 ;
-(void)setSpeed:(double)arg1 forAnimationKey:(id)arg2 ;
-(BOOL)isAnimationForKeyPaused:(id)arg1 ;
-(BOOL)__removeAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)_syncObjCAnimations;
-(void)_copyAnimationsFrom:(id)arg1 ;
-(id)_scnBindings;
-(void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4 ;
-(void)unbindAnimatablePath:(id)arg1 ;
-(void)removeAllBindings;
-(id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(BOOL)isPausedOrPausedByInheritance;
-(_C3DConstraint*)constraintRef;
-(double)influenceFactor;
-(void)setInfluenceFactor:(double)arg1 ;
-(void)setConstraintRef:(_C3DConstraint*)arg1 ;
-(void)finalizeDecodeConstraint:(id)arg1 ;
@end
