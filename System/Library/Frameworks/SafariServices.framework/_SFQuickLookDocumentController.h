/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_SFQuickLookDocumentViewDelegate.h>

@class NSArray, UIDocumentInteractionController, _SFQuickLookDocumentView, _SFQuickLookDocument, UIView, NSString;

@interface _SFQuickLookDocumentController : NSObject <_SFQuickLookDocumentViewDelegate> {

	NSArray* _buttonActions;
	UIDocumentInteractionController* _documentInteractionController;
	_SFQuickLookDocumentView* _documentView;
	_SFQuickLookDocument* _quickLookDocument;

}

@property (nonatomic,readonly) UIView * documentView;               //@synthesize documentView=_documentView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(UIView *)documentView;
-(void)_updateActionButtons;
-(id)_supportedApplications;
-(id)_actionTitleForType:(long long)arg1 withActionCount:(unsigned long long)arg2 ;
-(long long)dataOwnerForQuickLookDocumentView:(id)arg1 ;
-(void)quickLookDocumentView:(id)arg1 didSelectActionAtIndex:(long long)arg2 ;
-(id)itemProviderForQuickLookDocumentView:(id)arg1 ;
-(void)updateWithQuickLookDocument:(id)arg1 ;
-(void)presentDocumentInteractionControllerFromSource:(id)arg1 ;
@end

