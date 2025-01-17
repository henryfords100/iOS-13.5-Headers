/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SFSafariViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@protocol SFAuthenticationViewControllerPresentationDelegate;
@class _UIFallbackPresentationViewController, NSString, UIWindow;

@interface SFAuthenticationViewController : SFSafariViewController <UIViewControllerTransitioningDelegate> {

	_UIFallbackPresentationViewController* _fallbackPresentationViewController;
	NSString* _callbackURLScheme;
	UIWindow* _presentationContextWindow;
	id<SFAuthenticationViewControllerPresentationDelegate> _presentationDelegate;
	/*^block*/id _dismissCompletionHandler;

}

@property (nonatomic,copy) id dismissCompletionHandler;                                                                       //@synthesize dismissCompletionHandler=_dismissCompletionHandler - In the implementation block
@property (assign,nonatomic,__weak) id<SFAuthenticationViewControllerPresentationDelegate> presentationDelegate;              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)dismissCompletionHandler;
-(void)setDismissCompletionHandler:(id)arg1 ;
-(void)setPresentationDelegate:(id<SFAuthenticationViewControllerPresentationDelegate>)arg1 ;
-(id<SFAuthenticationViewControllerPresentationDelegate>)presentationDelegate;
-(void)setDefersAddingRemoteViewController:(BOOL)arg1 ;
-(id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2 usingEphemeralSession:(BOOL)arg3 presentationContextWindow:(id)arg4 ;
-(void)_presentViewController;
-(void)_restartServiceViewController;
-(void)remoteViewController:(id)arg1 hostApplicationOpenURL:(id)arg2 ;
-(void)remoteViewController:(id)arg1 didDecideCookieSharingForURL:(id)arg2 shouldCancel:(BOOL)arg3 ;
@end

