/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/VSLoadingViewController.h>

@protocol VSLoadingViewControllerDelegate;
@class UIActivityIndicatorView, NSString;

@interface VSLoadingViewController_iOS : UIViewController <VSLoadingViewController> {

	BOOL _cancellationAllowed;
	id<VSLoadingViewControllerDelegate> _delegate;
	UIActivityIndicatorView* _loadingIndicator;

}

@property (nonatomic,retain) UIActivityIndicatorView * loadingIndicator;                         //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<VSLoadingViewControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isCancellationAllowed,nonatomic) BOOL cancellationAllowed;              //@synthesize cancellationAllowed=_cancellationAllowed - In the implementation block
-(id<VSLoadingViewControllerDelegate>)delegate;
-(void)setDelegate:(id<VSLoadingViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_cancelButtonPressed:(id)arg1 ;
-(UIActivityIndicatorView *)loadingIndicator;
-(void)setLoadingIndicator:(UIActivityIndicatorView *)arg1 ;
-(BOOL)isCancellationAllowed;
-(void)setCancellationAllowed:(BOOL)arg1 ;
@end
