/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSArray, UIView, UITableView, NSString;

@interface UIDebuggingInformationInspectorDetailViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	NSArray* _data;
	UIView* _inspectedView;
	UITableView* _tableView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)inspectView:(id)arg1 ;
-(void)_flush;
-(void)_forceViewLayout;
-(void)_updateData;
@end
