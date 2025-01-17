/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CFXEffectBrowserContentPresenterDelegate.h>

@protocol CFXEffectBrowserContentPresenterViewControllerDelegate;
@class NSString;

@interface CFXEffectBrowserContentPresenterViewController : UIViewController <CFXEffectBrowserContentPresenterDelegate> {

	id<CFXEffectBrowserContentPresenterViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CFXEffectBrowserContentPresenterViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CFXEffectBrowserContentPresenterViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CFXEffectBrowserContentPresenterViewControllerDelegate>)arg1 ;
-(void)loadView;
-(BOOL)_canShowWhileLocked;
-(void)effectBrowserViewController:(id)arg1 presentExpandedAppViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)effectBrowserViewController:(id)arg1 dismissExpandedAppViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(CGSize)expandedAppViewControllerSizeForEffectBrowserViewController:(id)arg1 ;
-(double)CFX_alwaysExpandedAppHeight;
-(id)CFX_constraintsForAlwaysExpandedAppView:(id)arg1 containerView:(id)arg2 ;
-(void)configureEffectBrowserContentPresentationForOrientation;
@end

