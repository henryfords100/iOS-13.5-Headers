/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherModifier.h>
#import <libobjc.A.dylib/SBFluidSwitcherScrollProviding.h>

@protocol SBFluidSwitcherScrollProvidingDelegate;
@class SBGridLayoutSwitcherModifier, _SBInlineGridFloorSwitcherModifier, NSString;

@interface SBInlineGridSwitcherModifier : SBSwitcherModifier <SBFluidSwitcherScrollProviding> {

	SBGridLayoutSwitcherModifier* _gridLayoutModifier;
	_SBInlineGridFloorSwitcherModifier* _floorModifier;
	unsigned long long _initialScrollAxis;
	CGSize _initialCardSize;
	double _initialCardScale;
	BOOL _hasScrolledToInitialAppLayoutForTransitionIntoSwitcher;
	unsigned long long _ongoingAppLayoutRemovals;
	BOOL _floating;
	BOOL _overlay;
	id<SBFluidSwitcherScrollProvidingDelegate> _scrollDelegate;
	NSString* _bundleIdentifier;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                                            //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long scrollAxis; 
@property (nonatomic,readonly) CGSize fixedCardSize; 
@property (nonatomic,readonly) double cardScale; 
@property (getter=isFloating,nonatomic,readonly) BOOL floating;                                             //@synthesize floating=_floating - In the implementation block
@property (getter=isOverlay,nonatomic,readonly) BOOL overlay;                                               //@synthesize overlay=_overlay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBFluidSwitcherScrollProvidingDelegate> scrollDelegate;              //@synthesize scrollDelegate=_scrollDelegate - In the implementation block
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(NSString *)bundleIdentifier;
-(BOOL)isFloating;
-(unsigned long long)numberOfRows;
-(id<SBFluidSwitcherScrollProvidingDelegate>)scrollDelegate;
-(void)setScrollDelegate:(id<SBFluidSwitcherScrollProvidingDelegate>)arg1 ;
-(BOOL)isOverlay;
-(unsigned long long)scrollAxis;
-(BOOL)isIndexVisible:(unsigned long long)arg1 ;
-(id)appExposeAccessoryButtonsBundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 scrollAxis:(unsigned long long)arg2 fixedCardSize:(CGSize)arg3 cardScale:(double)arg4 floating:(BOOL)arg5 overlay:(BOOL)arg6 ;
-(void)didMoveToParentModifier:(id)arg1 ;
-(double)cardScale;
-(CGSize)fixedCardSize;
-(id)handleInlineTransitionEvent:(id)arg1 ;
-(id)handleRemovalEvent:(id)arg1 ;
-(id)handleTapAppLayoutEvent:(id)arg1 ;
-(id)handleTapOutsideToDismissEvent:(id)arg1 ;
-(id)gridLayoutModifier;
-(double)effectiveHorizontalSpacing;
@end

