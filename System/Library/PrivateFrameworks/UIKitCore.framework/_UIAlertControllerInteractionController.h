/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIPercentDrivenInteractiveTransition.h>
#import <UIKit/UIForceInteractionController.h>
#import <UIKit/UIInteractionProgressObserver.h>

@protocol UIViewControllerContextTransitioning;
@class UIAlertController, NSString;

@interface _UIAlertControllerInteractionController : UIPercentDrivenInteractiveTransition <UIForceInteractionController, UIInteractionProgressObserver> {

	UIAlertController* _alertController;
	id<UIViewControllerContextTransitioning> _context;

}

@property (nonatomic,retain) UIAlertController * alertController;                           //@synthesize alertController=_alertController - In the implementation block
@property (nonatomic,retain) id<UIViewControllerContextTransitioning> context;              //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double completionSpeed; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) BOOL wantsInteractiveStart; 
-(id<UIViewControllerContextTransitioning>)context;
-(void)setContext:(id<UIViewControllerContextTransitioning>)arg1 ;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)alertController;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)interactionProgressDidUpdate:(id)arg1 ;
-(void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2 ;
@end
