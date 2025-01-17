/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>

@class NSArray, UIStackView;

@interface UIInputSwitcherSegmentControl : UIControl {

	BOOL _usesDarkTheme;
	long long _selectedSegmentIndex;
	NSArray* _segmentTitles;
	NSArray* _segmentImages;
	UIStackView* _stackView;

}

@property (nonatomic,retain) UIStackView * stackView;                            //@synthesize stackView=_stackView - In the implementation block
@property (assign,nonatomic) BOOL usesDarkTheme;                                 //@synthesize usesDarkTheme=_usesDarkTheme - In the implementation block
@property (assign,nonatomic) long long selectedSegmentIndex;                     //@synthesize selectedSegmentIndex=_selectedSegmentIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfSegments; 
@property (nonatomic,copy) NSArray * segmentTitles;                              //@synthesize segmentTitles=_segmentTitles - In the implementation block
@property (nonatomic,retain) NSArray * segmentImages;                            //@synthesize segmentImages=_segmentImages - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(UIStackView *)stackView;
-(long long)selectedSegmentIndex;
-(unsigned long long)numberOfSegments;
-(void)setSelectedSegmentIndex:(long long)arg1 ;
-(BOOL)shouldTrack;
-(void)setUsesDarkTheme:(BOOL)arg1 ;
-(void)updateSelectionWithPoint:(CGPoint)arg1 ;
-(BOOL)usesDarkTheme;
-(void)_removeAllSegmentViews;
-(void)_populateSegmentViewsWithCount:(unsigned long long)arg1 ;
-(void)setSegmentTitles:(NSArray *)arg1 ;
-(void)setSegmentImages:(NSArray *)arg1 ;
-(NSArray *)segmentTitles;
-(NSArray *)segmentImages;
-(void)setStackView:(UIStackView *)arg1 ;
@end

