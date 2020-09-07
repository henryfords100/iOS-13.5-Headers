/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class SearchUIConfirmationHUDView, NSString;

@interface SearchUIConfirmationHUDViewController : UIViewController <UIViewControllerTransitioningDelegate>

@property (nonatomic,retain) SearchUIConfirmationHUDView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setTitle:(id)arg1 ;
-(SearchUIConfirmationHUDView *)view;
-(BOOL)_canShowWhileLocked;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)preferredUserInterfaceStyle;
@end
