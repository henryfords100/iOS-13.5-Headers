/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol DCDocumentCameraViewControllerDelegate;
@class UIViewController;

@interface DCDocumentCameraViewController : UIViewController {

	UIViewController* _childViewController;
	id<DCDocumentCameraViewControllerDelegate> _docCamDelegate;

}

@property (setter=setChildViewController:,nonatomic,retain) UIViewController * childViewController;              //@synthesize childViewController=_childViewController - In the implementation block
@property (assign,nonatomic,__weak) id<DCDocumentCameraViewControllerDelegate> docCamDelegate;                   //@synthesize docCamDelegate=_docCamDelegate - In the implementation block
+(BOOL)isAvailable;
+(id)defaultViewControllerWithDelegate:(id)arg1 ;
+(id)viewServiceViewControllerWithDelegate:(id)arg1 ;
+(id)inProcessViewControllerWithDelegate:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UIViewController *)childViewController;
-(void)setChildViewController:(UIViewController *)arg1 ;
-(id<DCDocumentCameraViewControllerDelegate>)docCamDelegate;
-(void)setDocCamDelegate:(id<DCDocumentCameraViewControllerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 childViewController:(id)arg2 ;
@end

