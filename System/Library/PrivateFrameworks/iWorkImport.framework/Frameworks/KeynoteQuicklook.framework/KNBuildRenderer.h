/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/KeynoteQuicklook.framework/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeynoteQuicklook/KNAnimationRenderer.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSMapTable, CALayer, NSMutableArray, TSDTextureSet, KNAnimationInfo, KNAnimatedBuild, KNBuildChunk, TSDDrawableInfo, TSDFPSCounter, TSDTextureDescription, NSMutableSet, NSArray, TSDRep, NSString;

@interface KNBuildRenderer : KNAnimationRenderer <CAAnimationDelegate> {

	long long _numberOfAnimationsStarted;
	NSMapTable* _animatedLayers;
	CALayer* _parentLayer;
	id _buildEndCallbackTarget;
	SEL _buildEndCallbackSelector;
	NSMutableArray* _animatedBuildsToStartAtEnd;
	TSDTextureSet* _endOfBuildTextureSet;
	TSDTextureSet* _textureSet;
	TSDTextureSet* _finalAttributesTextureSet;
	KNAnimationInfo* _animationInfo;
	KNAnimatedBuild* _animatedBuild;
	KNBuildChunk* _buildStage;
	TSDDrawableInfo* _info;
	BOOL _isPreview;
	BOOL _interrupted;
	BOOL _isAnimationForPlayback;
	BOOL _areAnimationsReadyToStart;
	BOOL _usingFinalTexture;
	BOOL _isTextureCachedAtEndOfBuild;
	BOOL _shouldUseMagicMoveTextures;
	BOOL _isNonCachedTextureValid;
	BOOL _animationWillBeginPerformed;
	TSDFPSCounter* _FPSCounter;
	TSDTextureDescription* _textureDescription;
	NSMutableSet* _texturesToTeardown;

}

@property (nonatomic,readonly) KNAnimatedBuild * animatedBuild;                       //@synthesize animatedBuild=_animatedBuild - In the implementation block
@property (nonatomic,readonly) NSArray * animatedBuildsToStartAtEnd;                  //@synthesize animatedBuildsToStartAtEnd=_animatedBuildsToStartAtEnd - In the implementation block
@property (nonatomic,readonly) KNBuildChunk * buildStage;                             //@synthesize buildStage=_buildStage - In the implementation block
@property (nonatomic,readonly) TSDDrawableInfo * info;                                //@synthesize info=_info - In the implementation block
@property (nonatomic,retain) CALayer * parentLayer;                                   //@synthesize parentLayer=_parentLayer - In the implementation block
@property (nonatomic,readonly) TSDRep * rep; 
@property (nonatomic,retain) TSDTextureDescription * textureDescription;              //@synthesize textureDescription=_textureDescription - In the implementation block
@property (nonatomic,readonly) unsigned long long textureDeliveryStyle; 
@property (nonatomic,readonly) TSDTextureSet * textureSet; 
@property (nonatomic,readonly) long long textureStageIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(TSDDrawableInfo *)info;
-(void)teardown;
-(void)animate;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)stopAnimations;
-(TSDRep *)rep;
-(unsigned long long)textureDeliveryStyle;
-(CALayer *)parentLayer;
-(void)animationDidEnd;
-(void)setParentLayer:(CALayer *)arg1 ;
-(KNAnimatedBuild *)animatedBuild;
-(NSArray *)animatedBuildsToStartAtEnd;
-(KNBuildChunk *)buildStage;
-(id)initWithAnimatedBuild:(id)arg1 info:(id)arg2 buildStage:(id)arg3 animatedSlideView:(id)arg4 ;
-(void)addBuildToStartAtEnd:(id)arg1 ;
-(void)setupPluginContext;
-(void)waitUntilAsyncRenderingIsCompleteShouldCancel:(BOOL)arg1 ;
-(void)generateTextures;
-(void)renderTextures;
-(void)removeAnimationsAndFinish:(BOOL)arg1 ;
-(void)updateAnimationTestingLog;
-(void)updateAnimationsForLayerTime:(double)arg1 ;
-(void)forceRemoveAnimations;
-(void)pauseAnimationsAtTime:(double)arg1 ;
-(void)resumeAnimationsIfPausedAtTime:(double)arg1 ;
-(long long)textureStageIndex;
-(id)loadPluginIfNeeded;
-(BOOL)shouldPreGenerateTextures;
-(TSDTextureDescription *)textureDescription;
-(id)initializeTextureSetForEndOfBuild:(BOOL)arg1 endOfSlide:(BOOL)arg2 description:(id)arg3 isRenderingToContext:(BOOL)arg4 ;
-(id)textureSetForStage:(long long)arg1 description:(id)arg2 isAtEndOfBuild:(BOOL)arg3 shouldForceRebuild:(BOOL)arg4 shouldRender:(BOOL)arg5 ;
-(id)p_textureSetForStage:(long long)arg1 description:(id)arg2 isAtEndOfBuild:(BOOL)arg3 shouldForceRebuild:(BOOL)arg4 shouldRender:(BOOL)arg5 ;
-(void)p_updateTextureDescription:(id)arg1 forStage:(long long)arg2 isAtEndOfBuild:(BOOL)arg3 ;
-(BOOL)p_isMovieInfo;
-(void)setEndOfBuildTextureSet:(id)arg1 ;
-(void)setTextureDescription:(TSDTextureDescription *)arg1 ;
-(BOOL)p_isDriftAnimation;
-(id)p_filterForTextDelivery:(long long)arg1 ;
-(BOOL)p_isTextDrawable;
-(BOOL)addAnimationsAtLayerTime:(double)arg1 ;
-(id)p_initializeTextureSetForEndOfBuild:(BOOL)arg1 endOfSlide:(BOOL)arg2 description:(id)arg3 isRenderingToContext:(BOOL)arg4 ;
-(void)setGeometryAndActionAttributesOnTextureSet:(id)arg1 isAtEndOfBuild:(BOOL)arg2 isAtEndOfSlide:(BOOL)arg3 isRenderingToContext:(BOOL)arg4 ;
-(id)setupFinalTextureGivenCurrentTextureSet:(id)arg1 isRenderingToContext:(BOOL)arg2 ;
-(void)setLayerVisibility:(id)arg1 isAtEndOfBuild:(BOOL)arg2 ;
-(id)animationWillBegin;
-(void)resetHighlightsBeforeAnimationOnTextureSet:(id)arg1 ;
-(id)p_keyForAnimation;
-(void)fadeOutPreviousStageOn:(id)arg1 atLayerTime:(double)arg2 ;
-(void)p_removeAnimations;
-(void)p_resetAnimations;
-(void)resetPreviousStageToUnhighlightOnTextureSet:(id)arg1 ;
-(TSDTextureSet *)textureSet;
-(id)textureSetWithoutRenderedContents;
-(id)textureDescriptionForStage:(long long)arg1 isAtEndOfBuild:(BOOL)arg2 ;
-(void)registerForBuildEndCallback:(SEL)arg1 target:(id)arg2 ;
-(void)removeBuildToStartAtEnd:(id)arg1 ;
@end
