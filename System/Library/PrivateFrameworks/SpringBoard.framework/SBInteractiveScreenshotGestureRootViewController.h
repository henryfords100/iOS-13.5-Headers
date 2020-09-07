/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol UIScenePresentation, UIScenePresenter, OS_dispatch_queue, SBInteractiveScreenshotGestureRootViewControllerDelegate;
@class _SBInteractiveScreenshotGestureBackdropView, SSChromePlaceholderViewController, SBOrientationTransformWrapperView, UIStatusBar, SBInteractiveScreenshotGestureCropsView, SSFlashView, UIView, UIViewFloatAnimatableProperty, NSMutableArray, _SBInteractiveScreenshotGestureReplicatorView, UIImageView, SBInteractiveScreenshotSettings, FBScene, SBFFluidBehaviorSettings, NSObject, NSString;

@interface SBInteractiveScreenshotGestureRootViewController : UIViewController <BSInvalidatable> {

	_SBInteractiveScreenshotGestureBackdropView* _contentCapturingView;
	SSChromePlaceholderViewController* _chromePlaceholderViewController;
	SBOrientationTransformWrapperView* _chromePlaceholderOrientationWrapperView;
	UIStatusBar* _chromePlaceholderStatusBar;
	_SBInteractiveScreenshotGestureBackdropView* _contentBackdropView;
	SBInteractiveScreenshotGestureCropsView* _cropsView;
	SSFlashView* _flashView;
	CGPoint _gesturePortraitAnchorPoint;
	BOOL _hasCrossedCommitThreshold;
	BOOL _hasPreparedInitialLayout;
	UIView* _materialView;
	UIViewFloatAnimatableProperty* _cancellationCommitProgressAnimatableProperty;
	NSMutableArray* _cropLinesAlphaMultiPartAnimations;
	UIViewFloatAnimatableProperty* _cropsTrackingDiscreteAnimationProgressAnimatableProperty;
	UIViewFloatAnimatableProperty* _cropsProgressPresentationValueAnimatableProperty;
	UIViewFloatAnimatableProperty* _cropsProgressSeparatedValuesAnimatableProperty;
	UIViewFloatAnimatableProperty* _transformProgressAnimatableProperty;
	UIViewFloatAnimatableProperty* _translationXAnimatableProperty;
	UIViewFloatAnimatableProperty* _translationYAnimatableProperty;
	_SBInteractiveScreenshotGestureReplicatorView* _replicatorView;
	UIImageView* _screenshotImageView;
	UIView* _screenshotContainerView;
	SBInteractiveScreenshotSettings* _settings;
	FBScene* _sourceScene;
	UIView*<UIScenePresentation> _sourceScenePresentationView;
	id<UIScenePresenter> _sourceScenePresenter;
	UIView* _topContentContainerView;
	SBFFluidBehaviorSettings* _trackingCropsAnimationSettings;
	NSMutableArray* _gestureCommitProgressUpdates;
	NSMutableArray* _gestureCommitProgressUpdateTimestamps;
	NSObject*<OS_dispatch_queue> _accessQueue;
	double _queue_cropsCornerContentPadding;
	double _queue_cropsCornerLineWidth;
	double _queue_displayCornerRadius;
	double _queue_displayScale;
	long long _queue_gestureStyle;
	long long _queue_gestureTouchInterfaceOrientation;
	BOOL _queue_hasCommittedScreenshot;
	CGRect _queue_portraitBounds;
	CGRect _queue_screenshotContentFrame;
	id<SBInteractiveScreenshotGestureRootViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBInteractiveScreenshotGestureRootViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned flashViewLayerContextID; 
@property (nonatomic,readonly) unsigned long long flashViewLayerRenderID; 
@property (assign,nonatomic) long long gestureStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(id<SBInteractiveScreenshotGestureRootViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SBInteractiveScreenshotGestureRootViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2 ;
-(void)handlePanGestureRecognizerAction:(id)arg1 ;
-(id)_createMaterialViewWithFrame:(CGRect)arg1 groupName:(id)arg2 isCaptureOnly:(BOOL)arg3 ;
-(id)_createFlashViewWithFrame:(CGRect)arg1 ;
-(void)_updateContentTransformUsingPresentationValues:(BOOL)arg1 ;
-(void)_updateCropLinesMultiPartAnimationForCropsProgress;
-(double)_currentCommitProgressVelocity;
-(void)_injectCommitProgressVelocity:(double)arg1 ;
-(BOOL)_isGestureStyleReducedMotion:(long long)arg1 ;
-(void)_updateWithUpdateMode:(long long)arg1 contentAnimationSettings:(id)arg2 commitProgress:(double)arg3 additionalContentTranslation:(CGPoint)arg4 completion:(/*^block*/id)arg5 ;
-(void)_prepareViewHierarchyForCommittedScreenshot:(BOOL)arg1 gestureStyle:(long long)arg2 ;
-(double)_gestureCommitProgressUpdateVelocityOverTimeInterval:(double)arg1 ;
-(void)_updateWithUpdateMode:(long long)arg1 commitProgress:(double)arg2 additionalContentTranslation:(CGPoint)arg3 completion:(/*^block*/id)arg4 ;
-(void)_getDistanceTraveled:(double*)arg1 fullDistance:(double*)arg2 commitProgress:(double*)arg3 forTranslationFromCorner:(CGPoint)arg4 bounds:(CGRect)arg5 ;
-(void)_addGestureUpdateWithCommitProgress:(double)arg1 timestamp:(double)arg2 ;
-(BOOL)_isGestureStyleDisabled:(long long)arg1 ;
-(void)_getContentTranslation:(CGPoint*)arg1 scale:(CGPoint*)arg2 forCommitProgress:(double)arg3 contentInsets:(UIEdgeInsets)arg4 additionalContentTranslation:(CGPoint)arg5 ;
-(void)_cancellationCommitProgressAnimatablePropertyPresentationValueDidChange;
-(id)_createScreenshotImageViewWithFrame:(CGRect)arg1 ;
-(CATransform3D)_contentTransformForCommitProgress:(double)arg1 contentInsets:(UIEdgeInsets)arg2 additionalContentTranslation:(CGPoint)arg3 ;
-(CATransform3D)_inverseContentTransformForCommitProgress:(double)arg1 contentInsets:(UIEdgeInsets)arg2 additionalContentTranslation:(CGPoint)arg3 ;
-(CATransform3D)_anchoredTransformForAnchorPoint:(CGPoint)arg1 bounds:(CGRect)arg2 center:(CGPoint)arg3 transform:(CATransform3D)arg4 ;
-(id)initWithSourceScene:(id)arg1 ;
-(unsigned)flashViewLayerContextID;
-(unsigned long long)flashViewLayerRenderID;
-(long long)gestureStyle;
-(void)setGestureStyle:(long long)arg1 ;
-(void)cancelInteractionWithStyle:(long long)arg1 settlingCompletionHandler:(/*^block*/id)arg2 ;
-(void)captureScreenshotWithInterfaceOrientation:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)commitInteractionWithScreenshotImage:(id)arg1 screenshotInterfaceOrientation:(long long)arg2 settlingCompletionHandler:(/*^block*/id)arg3 flashCompletionHandler:(/*^block*/id)arg4 ;
-(void)removePlaceholderChrome;
@end
