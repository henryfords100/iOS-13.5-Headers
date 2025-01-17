/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol TVDocumentViewControllerDelegate;
@class NSDictionary, TVApplicationController;

@interface TVDocumentViewController : UIViewController {

	struct {
		BOOL respondsToWillUpdate;
		BOOL respondsToDidUpdate;
		BOOL respondsToHandleEvent;
		BOOL respondsToDidFailWithError;
		BOOL respondsToDidUpdateWithContext;
	}  _delegateFlags;
	NSDictionary* _documentContext;
	TVApplicationController* _appController;
	id<TVDocumentViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) NSDictionary * documentContext;                                    //@synthesize documentContext=_documentContext - In the implementation block
@property (nonatomic,__weak,readonly) TVApplicationController * appController;                  //@synthesize appController=_appController - In the implementation block
@property (assign,nonatomic,__weak) id<TVDocumentViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)viewControllerWithContext:(id)arg1 forAppController:(id)arg2 ;
-(id<TVDocumentViewControllerDelegate>)delegate;
-(void)setDelegate:(id<TVDocumentViewControllerDelegate>)arg1 ;
-(void)setDocumentContext:(NSDictionary *)arg1 ;
-(NSDictionary *)documentContext;
-(void)didChangeDocumentContext;
-(id)tvdvc_initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)updateUsingContext:(id)arg1 ;
-(void)willUpdateDocument;
-(void)didUpdateDocument;
-(void)didUpdateWithContext:(id)arg1 ;
-(void)didFailUpdateWithError:(id)arg1 ;
-(BOOL)handleEvent:(id)arg1 withElement:(id)arg2 targetResponder:(id)arg3 ;
-(TVApplicationController *)appController;
@end

