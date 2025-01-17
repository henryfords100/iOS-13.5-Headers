/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <OpusFoundation/OFUIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol OFPageViewControllerDataSource, OFPageViewControllerDelegate;
@class _OFViewControllerTransitionContext, UIPanGestureRecognizer, UITapGestureRecognizer, NSDictionary, OFUIViewController, NSString;

@interface OFPageViewController : OFUIViewController <UIGestureRecognizerDelegate> {

	_OFViewControllerTransitionContext* _currentTransitionContext;
	double _progressOffset;
	BOOL _isInteractive;
	BOOL _isForward;
	BOOL _chainsNextTransition;
	double _progressVelocityForChainedTransition;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIEdgeInsets _tapRegionInsets;
	CGSize _tapRegionBreadths;
	UIEdgeInsets _effectiveTapRegionInsets;
	CGSize _effectiveTapRegionBreadths;
	CGRect* _tapRegions;
	double _pageSpacing;
	NSDictionary* _incomingAndOutgoingViewControllersForManualTransition;
	long long _lastKnownNavigationDirection;
	struct {
		unsigned delegateImplementsInteractionControllerForAnimationController : 1;
		unsigned delegateImplementsWillStartTransitioning : 1;
		unsigned delegateImplementsDidStartTransitioning : 1;
		unsigned delegateImplementsWillFinishTransitioning : 1;
		unsigned delegateImplementsDidFinishTransitioning : 1;
		unsigned delegateImplementsWillStartBouncing : 1;
		unsigned delegateImplementsDidFinishBouncing : 1;
		unsigned dataSourceSuppliesBeforeViewController : 1;
		unsigned dataSourceSuppliesAfterViewController : 1;
		unsigned dataSourceSuppliesPageCount : 1;
		unsigned dataSourceSuppliesPageNumber : 1;
	}  _flags;
	BOOL _panIsEnabled;
	BOOL _wantsPageControl;
	BOOL _bouncesOnEdges;
	id<OFPageViewControllerDataSource> _dataSource;
	id<OFPageViewControllerDelegate> _delegate;
	long long _navigationOrientation;
	OFUIViewController* _viewController;
	double _interactiveTransitionTrackingBoxRadius;
	double _interactiveTransitionProgressThreshold;
	double _interactiveTransitionVelocityThreshold;

}

@property (assign,nonatomic) id<OFPageViewControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) id<OFPageViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long navigationOrientation;                            //@synthesize navigationOrientation=_navigationOrientation - In the implementation block
@property (readonly) OFUIViewController * viewController;                                //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) BOOL panIsEnabled;                                          //@synthesize panIsEnabled=_panIsEnabled - In the implementation block
@property (assign,nonatomic) BOOL bouncesOnEdges;                                        //@synthesize bouncesOnEdges=_bouncesOnEdges - In the implementation block
@property (assign,nonatomic) BOOL wantsPageControl;                                      //@synthesize wantsPageControl=_wantsPageControl - In the implementation block
@property (assign,nonatomic) double interactiveTransitionTrackingBoxRadius;              //@synthesize interactiveTransitionTrackingBoxRadius=_interactiveTransitionTrackingBoxRadius - In the implementation block
@property (assign,nonatomic) double interactiveTransitionProgressThreshold;              //@synthesize interactiveTransitionProgressThreshold=_interactiveTransitionProgressThreshold - In the implementation block
@property (assign,nonatomic) double interactiveTransitionVelocityThreshold;              //@synthesize interactiveTransitionVelocityThreshold=_interactiveTransitionVelocityThreshold - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)viewClass;
-(void)dealloc;
-(id<OFPageViewControllerDelegate>)delegate;
-(void)setDelegate:(id<OFPageViewControllerDelegate>)arg1 ;
-(void)commonInit;
-(id<OFPageViewControllerDataSource>)dataSource;
-(void)setDataSource:(id<OFPageViewControllerDataSource>)arg1 ;
-(void)loadView;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)_contentView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(OFUIViewController *)viewController;
-(void)_handlePanGesture:(id)arg1 ;
-(id)_pageControl;
-(long long)navigationOrientation;
-(void)_contentViewFrameOrBoundsDidChange;
-(void)_pageControlValueChanged:(id)arg1 ;
-(void)_updatePageControlViaDataSourceIfNecessary;
-(void)_handleTapGesture:(id)arg1 ;
-(void)_startTransition;
-(void)setInteractiveTransitionVelocityThreshold:(double)arg1 ;
-(void)setInteractiveTransitionProgressThreshold:(double)arg1 ;
-(void)setInteractiveTransitionTrackingBoxRadius:(double)arg1 ;
-(id)_transitionContextForDirection:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 ;
-(void)_beginTransitionWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setViewController:(id)arg1 direction:(long long)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)bounceInDirection:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(double)_progressFromRubberBandingProgress:(double)arg1 ;
-(id)_customInteractionControllerForAnimationController:(id)arg1 ;
-(double)_normalizerForFingerTracking;
-(double)_normalizerForBoxTracking;
-(void)_updateInteractiveTransitionForProgress:(double)arg1 ;
-(void)_cancelInteractiveTransitionWithProgressVelocity:(double)arg1 ;
-(void)_resumeInteractiveTransitionWithTranslation:(double)arg1 ;
-(void)_startInteractiveTransitionWithVelocity:(double)arg1 ;
-(void)_finishInteractiveTransitionWithProgress:(double)arg1 andProgressVelocity:(double)arg2 ;
-(BOOL)_shouldFinishTransitionWithVelocity:(double)arg1 ;
-(void)_fakeHandlePanGesture;
-(BOOL)usesPageControl;
-(double)_rubberBandingProgressFromProgress:(double)arg1 ;
-(id)_customAnimationControllerForDirection:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 ;
-(void)setWantsPageControl:(BOOL)arg1 ;
-(void)reportTransitionProgress:(double)arg1 ;
-(void)setNavigationOrientation:(long long)arg1 ;
-(BOOL)panIsEnabled;
-(void)setPanIsEnabled:(BOOL)arg1 ;
-(BOOL)wantsPageControl;
-(BOOL)bouncesOnEdges;
-(void)setBouncesOnEdges:(BOOL)arg1 ;
-(double)interactiveTransitionTrackingBoxRadius;
-(double)interactiveTransitionProgressThreshold;
-(double)interactiveTransitionVelocityThreshold;
@end

