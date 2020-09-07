/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UIScrollView, NSArray, UIPageControl, NSTimer, NSString;

@interface UIKBTutorialMultipageView : UIView <UIScrollViewDelegate> {

	UIScrollView* _pageScrollView;
	NSArray* _pageViews;
	UIPageControl* _pageControl;
	NSTimer* _nextPageScrollTimer;
	double _pagingInterval;

}

@property (nonatomic,retain) UIScrollView * pageScrollView;              //@synthesize pageScrollView=_pageScrollView - In the implementation block
@property (nonatomic,retain) NSArray * pageViews;                        //@synthesize pageViews=_pageViews - In the implementation block
@property (nonatomic,retain) UIPageControl * pageControl;                //@synthesize pageControl=_pageControl - In the implementation block
@property (nonatomic,retain) NSTimer * nextPageScrollTimer;              //@synthesize nextPageScrollTimer=_nextPageScrollTimer - In the implementation block
@property (assign,nonatomic) double pagingInterval;                      //@synthesize pagingInterval=_pagingInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(double)pagingInterval;
-(UIPageControl *)pageControl;
-(void)scrollToNextPage;
-(void)configMediaView;
-(UIScrollView *)pageScrollView;
-(NSTimer *)nextPageScrollTimer;
-(void)setNextPageScrollTimer:(NSTimer *)arg1 ;
-(id)initWithPageViews:(id)arg1 pagingInterval:(double)arg2 ;
-(void)resetPageScrolling;
-(void)setPageScrollView:(UIScrollView *)arg1 ;
-(NSArray *)pageViews;
-(void)setPageViews:(NSArray *)arg1 ;
-(void)setPageControl:(UIPageControl *)arg1 ;
-(void)setPagingInterval:(double)arg1 ;
@end
