/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIPreviewInteractionControllerDelegate <NSObject>
@optional
-(void)previewInteractionController:(id)arg1 performCommitToViewController:(id)arg2;
-(void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 forPosition:(CGPoint)arg3 inSourceView:(id)arg4;
-(void)previewInteractionController:(id)arg1 didDismissViewController:(id)arg2 committing:(BOOL)arg3;
-(id)previewInteractionController:(id)arg1 committedViewControllerForPreviewViewController:(id)arg2;
-(BOOL)previewInteractionController:(id)arg1 shouldStartPreviewingSimultaneouslyWithGestureRecognizer:(id)arg2;
-(BOOL)previewInteractionController:(id)arg1 shouldUseStandardRevealTransformForPreviewingAtLocation:(CGPoint)arg2 inView:(id)arg3;
-(void)previewInteractionController:(id)arg1 interactionProgress:(id)arg2 forRevealAtLocation:(CGPoint)arg3 inSourceView:(id)arg4 containerView:(id)arg5;

@required
-(id)previewInteractionController:(id)arg1 viewControllerForPreviewingAtPosition:(CGPoint)arg2 inView:(id)arg3 presentingViewController:(id*)arg4;
-(void)previewInteractionController:(id)arg1 performCommitForPreviewViewController:(id)arg2 committedViewController:(id)arg3;
-(BOOL)performsViewControllerCommitTransitionForPreviewInteractionController:(id)arg1;

@end
