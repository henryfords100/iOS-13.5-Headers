/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsSubscription.framework/NewsSubscription
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsSubscription/NewsSubscription-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>

@interface NPSoftPaywallViewController : UIViewController <UITextViewDelegate> {

	 styler;
	 eventHandler;
	??? viewModel;
	 paywallModel;
	 softPaywallView;
	 renderer;
	 layoutAttributesFactory;
	 purchasingSpinnerViewControllerFactory;
	 $__lazy_storage_$_verifyingSpinnerViewController;
	 paywallApplicationStateMonitor;
	 eventHandlerDelegate;
	 applicationStateManager;

}
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

