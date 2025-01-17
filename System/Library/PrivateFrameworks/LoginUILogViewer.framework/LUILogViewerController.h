/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/LoginUILogViewer.framework/LoginUILogViewer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LoginUILogViewer/LoginUILogViewer-Structs.h>
#import <libobjc.A.dylib/LUILogViewerViewDelegate.h>
#import <UIKit/UIPageViewControllerDataSource.h>
#import <UIKit/UIPageViewControllerDelegate.h>
#import <libobjc.A.dylib/LUILogFilterViewControllerDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <libobjc.A.dylib/LUILogContentViewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol LUILogViewerControllerDelegate;
@class LUILogViewerView, LUILogViewerAssistiveTouch, UIView, LUILogContentViewController, LUILogFilterViewController, UIPageViewController, NSArray, NSDate, NSMutableSet, NSMutableArray, UIPanGestureRecognizer, NSString;

@interface LUILogViewerController : NSObject <LUILogViewerViewDelegate, UIPageViewControllerDataSource, UIPageViewControllerDelegate, LUILogFilterViewControllerDelegate, UISearchBarDelegate, LUILogContentViewControllerDelegate, UIGestureRecognizerDelegate> {

	BOOL _isStreaming;
	BOOL _isFetchingLogs;
	BOOL _outsideKeyboardIsShowing;
	id<LUILogViewerControllerDelegate> _delegate;
	LUILogViewerView* _logViewerView;
	LUILogViewerAssistiveTouch* _assistiveTouch;
	UIView* _baseView;
	LUILogContentViewController* _logContentViewController;
	LUILogFilterViewController* _logFilterViewController;
	UIPageViewController* _pageViewController;
	NSArray* _predicates;
	double _logInterval;
	NSDate* _lastLogDate;
	NSDate* _firstLogDate;
	NSMutableSet* _logMinutesSet;
	NSMutableArray* _logMinutesArray;
	NSArray* _highlightRanges;
	long long _currentHighlightIndex;
	UIPanGestureRecognizer* _panGesture;

}

@property (nonatomic,retain) LUILogViewerView * logViewerView;                                    //@synthesize logViewerView=_logViewerView - In the implementation block
@property (nonatomic,retain) LUILogViewerAssistiveTouch * assistiveTouch;                         //@synthesize assistiveTouch=_assistiveTouch - In the implementation block
@property (assign,nonatomic,__weak) UIView * baseView;                                            //@synthesize baseView=_baseView - In the implementation block
@property (nonatomic,retain) LUILogContentViewController * logContentViewController;              //@synthesize logContentViewController=_logContentViewController - In the implementation block
@property (nonatomic,retain) LUILogFilterViewController * logFilterViewController;                //@synthesize logFilterViewController=_logFilterViewController - In the implementation block
@property (nonatomic,retain) UIPageViewController * pageViewController;                           //@synthesize pageViewController=_pageViewController - In the implementation block
@property (nonatomic,retain) NSArray * predicates;                                                //@synthesize predicates=_predicates - In the implementation block
@property (assign,nonatomic) double logInterval;                                                  //@synthesize logInterval=_logInterval - In the implementation block
@property (nonatomic,retain) NSDate * lastLogDate;                                                //@synthesize lastLogDate=_lastLogDate - In the implementation block
@property (nonatomic,retain) NSDate * firstLogDate;                                               //@synthesize firstLogDate=_firstLogDate - In the implementation block
@property (nonatomic,retain) NSMutableSet * logMinutesSet;                                        //@synthesize logMinutesSet=_logMinutesSet - In the implementation block
@property (nonatomic,retain) NSMutableArray * logMinutesArray;                                    //@synthesize logMinutesArray=_logMinutesArray - In the implementation block
@property (assign,nonatomic) BOOL isStreaming;                                                    //@synthesize isStreaming=_isStreaming - In the implementation block
@property (nonatomic,retain) NSArray * highlightRanges;                                           //@synthesize highlightRanges=_highlightRanges - In the implementation block
@property (assign,nonatomic) long long currentHighlightIndex;                                     //@synthesize currentHighlightIndex=_currentHighlightIndex - In the implementation block
@property (assign,nonatomic) BOOL isFetchingLogs;                                                 //@synthesize isFetchingLogs=_isFetchingLogs - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGesture;                                 //@synthesize panGesture=_panGesture - In the implementation block
@property (assign,nonatomic) BOOL outsideKeyboardIsShowing;                                       //@synthesize outsideKeyboardIsShowing=_outsideKeyboardIsShowing - In the implementation block
@property (assign,nonatomic,__weak) id<LUILogViewerControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<LUILogViewerControllerDelegate>)delegate;
-(void)setDelegate:(id<LUILogViewerControllerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setPredicates:(NSArray *)arg1 ;
-(NSArray *)predicates;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)handlePan:(id)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(BOOL)searchBarShouldBeginEditing:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(void)pageViewController:(id)arg1 didFinishAnimating:(BOOL)arg2 previousViewControllers:(id)arg3 transitionCompleted:(BOOL)arg4 ;
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2 ;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2 ;
-(void)_updateHighlight;
-(void)setPanGesture:(UIPanGestureRecognizer *)arg1 ;
-(UIPanGestureRecognizer *)panGesture;
-(void)setup;
-(BOOL)isStreaming;
-(void)setIsStreaming:(BOOL)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(UIPageViewController *)pageViewController;
-(void)setPageViewController:(UIPageViewController *)arg1 ;
-(UIView *)baseView;
-(void)setBaseView:(UIView *)arg1 ;
-(void)_stopStreaming;
-(void)_moveElementsToView:(id)arg1 ;
-(LUILogViewerAssistiveTouch *)assistiveTouch;
-(double)logInterval;
-(LUILogContentViewController *)logContentViewController;
-(id)_getLogsFromDate:(id)arg1 predicate:(id)arg2 duplicateHandler:(/*^block*/id)arg3 ;
-(void)setIsFetchingLogs:(BOOL)arg1 ;
-(NSDate *)firstLogDate;
-(void)setFirstLogDate:(NSDate *)arg1 ;
-(id)_attributedLogStringFrom:(id)arg1 fontSize:(double)arg2 ;
-(void)setLastLogDate:(NSDate *)arg1 ;
-(NSMutableSet *)logMinutesSet;
-(NSMutableArray *)logMinutesArray;
-(LUILogViewerView *)logViewerView;
-(void)_updateLogFromLastTime;
-(NSDate *)lastLogDate;
-(void)setLogInterval:(double)arg1 ;
-(void)setHighlightRanges:(NSArray *)arg1 ;
-(void)setCurrentHighlightIndex:(long long)arg1 ;
-(void)setOutsideKeyboardIsShowing:(BOOL)arg1 ;
-(BOOL)outsideKeyboardIsShowing;
-(void)_presentLogViewerView;
-(LUILogFilterViewController *)logFilterViewController;
-(long long)currentHighlightIndex;
-(NSArray *)highlightRanges;
-(void)_cleanupHighlight;
-(void)_increaseCurrentHighlightIndex;
-(void)_setupInitialHighlight;
-(void)assistiveTouchButtonTapped:(id)arg1 ;
-(id)orderedViewControllers;
-(void)_dismissLogViewerView;
-(void)showLogContentPage;
-(BOOL)isFetchingLogs;
-(void)_cleanupLogs;
-(void)showLogFilterPage;
-(void)_decreaseCurrentHighlightIndex;
-(void)_grabLogAndUpdateTextView;
-(void)_startStreamLog;
-(NSRange)_searchRangeForDate:(id)arg1 inText:(id)arg2 ;
-(BOOL)_performSearch:(id)arg1 ;
-(void)logViewerViewCloseButtonTapped:(id)arg1 ;
-(void)logViewerViewLogButtonTapped:(id)arg1 ;
-(void)logViewerViewClearButtontapped:(id)arg1 ;
-(void)logViewerFilterButtonTapped:(id)arg1 ;
-(void)logViewerLeftCaretButtonTapped:(id)arg1 ;
-(void)logViewerRightCaretButtonTapped:(id)arg1 ;
-(void)logFilterViewController:(id)arg1 didAddPredicates:(id)arg2 ;
-(void)logFilterViewController:(id)arg1 didDeletePredicate:(id)arg2 ;
-(id)currentPredicates:(id)arg1 ;
-(void)logFilterViewControllerApplyButtonTapped:(id)arg1 ;
-(BOOL)logFilterViewControllerShouldAllowTextEditing:(id)arg1 ;
-(void)logContentViewController:(id)arg1 didSelectLogOptionWithTimeInterval:(double)arg2 ;
-(void)logContentViewController:(id)arg1 didSelectDateForLog:(id)arg2 ;
-(id)logContentViewControllerLogStartDate:(id)arg1 ;
-(id)logContentViewControllerLogEndDate:(id)arg1 ;
-(void)setLogViewerView:(LUILogViewerView *)arg1 ;
-(void)setAssistiveTouch:(LUILogViewerAssistiveTouch *)arg1 ;
-(void)setLogContentViewController:(LUILogContentViewController *)arg1 ;
-(void)setLogFilterViewController:(LUILogFilterViewController *)arg1 ;
-(void)setLogMinutesSet:(NSMutableSet *)arg1 ;
-(void)setLogMinutesArray:(NSMutableArray *)arg1 ;
@end

