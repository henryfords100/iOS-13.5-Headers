/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_SBFluidSwitcherModifierTimelineEntryViewDelegate.h>

@class NSMutableArray, UIScrollView, UIButton, UINavigationController, _SBModifierTimelineDetailViewController, NSString;

@interface SBFluidSwitcherModifierTimelineViewController : UIViewController <_SBFluidSwitcherModifierTimelineEntryViewDelegate> {

	NSMutableArray* _entryViews;
	UIScrollView* _scrollView;
	UIButton* _clearButton;
	UINavigationController* _navigationController;
	_SBModifierTimelineDetailViewController* _detailViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addEntry:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)_reset:(id)arg1 ;
-(void)didSelectEntryView:(id)arg1 ;
@end
