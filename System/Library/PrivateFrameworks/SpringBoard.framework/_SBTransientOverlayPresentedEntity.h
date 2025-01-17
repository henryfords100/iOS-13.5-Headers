/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BSInvalidatable;
@class SBTransientOverlayViewController, SBTransientOverlayBackgroundWindow, SBTransientOverlayWindow, SBFluidDismissalState, UIView, SBPresentationObservationToken;

@interface _SBTransientOverlayPresentedEntity : NSObject {

	BOOL _rotating;
	BOOL _dismissing;
	BOOL _hasFinishedWindowInitialization;
	BOOL _hasPreservedInputViews;
	double _baseWindowLevel;
	SBTransientOverlayViewController* _viewController;
	SBTransientOverlayBackgroundWindow* _backgroundWindow;
	SBTransientOverlayWindow* _window;
	id<BSInvalidatable> _disableAutoUnlockAssertion;
	id<BSInvalidatable> _proximityEnabledAssertion;
	id<BSInvalidatable> _wallpaperAnimationSuspensionAssertion;
	SBFluidDismissalState* _fluidDismissalState;
	UIView* _fluidDismissalDimmingView;
	SBPresentationObservationToken* _bannerLongLookPresentationObservationToken;
	id<BSInvalidatable> _bannerLongLookWindowLevelAssertion;
	SBPresentationObservationToken* _controlCenterPresentationObservationToken;
	id<BSInvalidatable> _controlCenterWindowLevelAssertion;
	SBPresentationObservationToken* _siriPresentationObservationToken;
	id<BSInvalidatable> _siriWindowLevelAssertion;

}

@property (nonatomic,readonly) double baseWindowLevel;                                                                 //@synthesize baseWindowLevel=_baseWindowLevel - In the implementation block
@property (nonatomic,readonly) SBTransientOverlayViewController * viewController;                                      //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) SBTransientOverlayBackgroundWindow * backgroundWindow;                                    //@synthesize backgroundWindow=_backgroundWindow - In the implementation block
@property (assign,getter=isRotating,nonatomic) BOOL rotating;                                                          //@synthesize rotating=_rotating - In the implementation block
@property (nonatomic,readonly) SBTransientOverlayWindow * window;                                                      //@synthesize window=_window - In the implementation block
@property (assign,getter=isDismissing,nonatomic) BOOL dismissing;                                                      //@synthesize dismissing=_dismissing - In the implementation block
@property (assign,nonatomic) BOOL hasFinishedWindowInitialization;                                                     //@synthesize hasFinishedWindowInitialization=_hasFinishedWindowInitialization - In the implementation block
@property (assign,nonatomic) BOOL hasPreservedInputViews;                                                              //@synthesize hasPreservedInputViews=_hasPreservedInputViews - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> disableAutoUnlockAssertion;                                           //@synthesize disableAutoUnlockAssertion=_disableAutoUnlockAssertion - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> proximityEnabledAssertion;                                            //@synthesize proximityEnabledAssertion=_proximityEnabledAssertion - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> wallpaperAnimationSuspensionAssertion;                                //@synthesize wallpaperAnimationSuspensionAssertion=_wallpaperAnimationSuspensionAssertion - In the implementation block
@property (nonatomic,retain) SBFluidDismissalState * fluidDismissalState;                                              //@synthesize fluidDismissalState=_fluidDismissalState - In the implementation block
@property (nonatomic,retain) UIView * fluidDismissalDimmingView;                                                       //@synthesize fluidDismissalDimmingView=_fluidDismissalDimmingView - In the implementation block
@property (nonatomic,retain) SBPresentationObservationToken * bannerLongLookPresentationObservationToken;              //@synthesize bannerLongLookPresentationObservationToken=_bannerLongLookPresentationObservationToken - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> bannerLongLookWindowLevelAssertion;                                   //@synthesize bannerLongLookWindowLevelAssertion=_bannerLongLookWindowLevelAssertion - In the implementation block
@property (nonatomic,retain) SBPresentationObservationToken * controlCenterPresentationObservationToken;               //@synthesize controlCenterPresentationObservationToken=_controlCenterPresentationObservationToken - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> controlCenterWindowLevelAssertion;                                    //@synthesize controlCenterWindowLevelAssertion=_controlCenterWindowLevelAssertion - In the implementation block
@property (nonatomic,retain) SBPresentationObservationToken * siriPresentationObservationToken;                        //@synthesize siriPresentationObservationToken=_siriPresentationObservationToken - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> siriWindowLevelAssertion;                                             //@synthesize siriWindowLevelAssertion=_siriWindowLevelAssertion - In the implementation block
-(SBTransientOverlayWindow *)window;
-(SBTransientOverlayViewController *)viewController;
-(BOOL)isRotating;
-(void)setRotating:(BOOL)arg1 ;
-(BOOL)isDismissing;
-(void)setDismissing:(BOOL)arg1 ;
-(void)setFluidDismissalState:(SBFluidDismissalState *)arg1 ;
-(id)initWithViewController:(id)arg1 window:(id)arg2 baseWindowLevel:(double)arg3 ;
-(double)baseWindowLevel;
-(BOOL)hasPreservedInputViews;
-(void)setHasPreservedInputViews:(BOOL)arg1 ;
-(void)setSiriPresentationObservationToken:(SBPresentationObservationToken *)arg1 ;
-(void)setSiriWindowLevelAssertion:(id<BSInvalidatable>)arg1 ;
-(id<BSInvalidatable>)siriWindowLevelAssertion;
-(SBPresentationObservationToken *)siriPresentationObservationToken;
-(void)setControlCenterPresentationObservationToken:(SBPresentationObservationToken *)arg1 ;
-(void)setControlCenterWindowLevelAssertion:(id<BSInvalidatable>)arg1 ;
-(id<BSInvalidatable>)controlCenterWindowLevelAssertion;
-(SBPresentationObservationToken *)controlCenterPresentationObservationToken;
-(void)setBannerLongLookPresentationObservationToken:(SBPresentationObservationToken *)arg1 ;
-(void)setBannerLongLookWindowLevelAssertion:(id<BSInvalidatable>)arg1 ;
-(id<BSInvalidatable>)bannerLongLookWindowLevelAssertion;
-(SBPresentationObservationToken *)bannerLongLookPresentationObservationToken;
-(void)setDisableAutoUnlockAssertion:(id<BSInvalidatable>)arg1 ;
-(void)setHasFinishedWindowInitialization:(BOOL)arg1 ;
-(SBFluidDismissalState *)fluidDismissalState;
-(UIView *)fluidDismissalDimmingView;
-(void)setFluidDismissalDimmingView:(UIView *)arg1 ;
-(id<BSInvalidatable>)proximityEnabledAssertion;
-(void)setProximityEnabledAssertion:(id<BSInvalidatable>)arg1 ;
-(id<BSInvalidatable>)wallpaperAnimationSuspensionAssertion;
-(void)setWallpaperAnimationSuspensionAssertion:(id<BSInvalidatable>)arg1 ;
-(SBTransientOverlayBackgroundWindow *)backgroundWindow;
-(id<BSInvalidatable>)disableAutoUnlockAssertion;
-(void)setBackgroundWindow:(SBTransientOverlayBackgroundWindow *)arg1 ;
-(BOOL)hasFinishedWindowInitialization;
@end

