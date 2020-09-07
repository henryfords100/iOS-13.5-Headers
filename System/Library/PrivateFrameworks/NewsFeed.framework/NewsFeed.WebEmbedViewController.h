/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/NEURLHandlerDelegate.h>

@interface NewsFeed.WebEmbedViewController : UIViewController <NEURLHandlerDelegate> {

	 reuseIdentifier;
	 debugButton;
	??? embedURL;
	 contentFrame;
	 webContentViewController;
	 configurationManager;
	 errorProvider;
	 presentationManager;
	 interactionProvider;
	 configurationProvider;
	 onReuse;
	 webLinkPresentingViewController;
	 stateMachine;
	 errorState;
	 activityIndicator;
	 errorView;
	 tapGestureRecognizer;

}
-(void)URLHandler:(id)arg1 wantsToPresentViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)handleTapWithRecognizer:(id)arg1 ;
@end
