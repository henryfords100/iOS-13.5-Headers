/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DOCHostDocumentBrowserViewControllerInterface
@required
-(void)_didTriggerCustomActionWithIdentifier:(id)arg1 onItems:(id)arg2;
-(void)_didTriggerBarButtonWithUUID:(id)arg1;
-(void)_didPickItems:(id)arg1;
-(void)_commitDocumentURLPreview:(id)arg1;
-(void)_didRequestDocumentCreationWithHandler:(/*^block*/id)arg1;
-(void)_didImportDocumentAtURL:(id)arg1 toDestinationItem:(id)arg2;
-(void)_failedToImportDocumentAtURL:(id)arg1 error:(id)arg2;
-(void)_updateRemoteBarButtonFrames:(id)arg1 forUUID:(id)arg2;
-(void)_presentActivityViewControllerForItems:(id)arg1 withPopoverTracker:(id)arg2 isContentManaged:(BOOL)arg3 additionalActivities:(id)arg4 activityProxy:(id)arg5;

@end

