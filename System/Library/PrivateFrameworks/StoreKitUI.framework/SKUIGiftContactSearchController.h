/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFContactsSearchConsumer.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol SKUIGiftContactSearchDelegate;
@class NSMutableArray, NSArray, MFContactsSearchManager, UIView, NSNumber, UITableView, NSString;

@interface SKUIGiftContactSearchController : NSObject <MFContactsSearchConsumer, UITableViewDataSource, UITableViewDelegate> {

	NSMutableArray* _autocompleteSearchResults;
	id<SKUIGiftContactSearchDelegate> _delegate;
	NSArray* _results;
	MFContactsSearchManager* _searchManager;
	UIView* _searchResultsView;
	NSNumber* _searchTaskIdentifier;
	UITableView* _tableView;

}

@property (assign,nonatomic,__weak) id<SKUIGiftContactSearchDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long numberOfResults; 
@property (nonatomic,readonly) UIView * searchResultsView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<SKUIGiftContactSearchDelegate>)delegate;
-(void)setDelegate:(id<SKUIGiftContactSearchDelegate>)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)_tableView;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)numberOfResults;
-(BOOL)cancelSearch;
-(void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2 ;
-(void)finishedSearchingForAutocompleteResults;
-(UIView *)searchResultsView;
-(void)searchForText:(id)arg1 ;
-(void)resetSearch;
-(void)_setResults:(id)arg1 ;
-(void)_finishSearchWithResults:(id)arg1 ;
-(void)makeChildLabelsSupportDarkMode:(id)arg1 ;
@end

