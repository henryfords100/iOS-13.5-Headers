/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilPairingUI/PencilPairingUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PNPPlatterViewController.h>
#import <libobjc.A.dylib/PNPDeviceStateConfigurable.h>
#import <libobjc.A.dylib/PNPViewController.h>

@protocol PNPPlatterViewControllerPlatterDelegate, PNPViewControllerAppearanceDelegate;
@class PNPDeviceState, PNPPlatterTransitioningDelegate, PNPChargingStatusView, NSString;

@interface PNPChargingStatusViewController : UIViewController <PNPPlatterViewController, PNPDeviceStateConfigurable, PNPViewController> {

	PNPPlatterTransitioningDelegate* _platterTransitioningDelegate;
	PNPChargingStatusView* _chargingStatusView;
	id<PNPPlatterViewControllerPlatterDelegate> platterDelegate;
	id<PNPViewControllerAppearanceDelegate> appearanceDelegate;

}

@property (nonatomic,readonly) unsigned long long preferredEdge; 
@property (assign,nonatomic,__weak) id<PNPPlatterViewControllerPlatterDelegate> platterDelegate; 
@property (nonatomic,readonly) double preferredCornerRadius; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) PNPDeviceState * deviceState; 
@property (assign,nonatomic,__weak) id<PNPViewControllerAppearanceDelegate> appearanceDelegate; 
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setAppearanceDelegate:(id<PNPViewControllerAppearanceDelegate>)arg1 ;
-(id<PNPViewControllerAppearanceDelegate>)appearanceDelegate;
-(id)_platterContainerView;
-(PNPDeviceState *)deviceState;
-(void)setDeviceState:(PNPDeviceState *)arg1 ;
-(void)_configureAutoDismiss;
-(unsigned long long)preferredEdge;
-(id<PNPPlatterViewControllerPlatterDelegate>)platterDelegate;
-(void)setPlatterDelegate:(id<PNPPlatterViewControllerPlatterDelegate>)arg1 ;
@end

