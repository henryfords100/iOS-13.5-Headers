/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUICardSectionView.h>
#import <SearchUI/SearchUIWatchListCardRowModelDelegate.h>

@class SearchUIButton, TLKSimpleRowView, NUIContainerStackView, SearchUIWatchListCardRowModel;

@interface SearchUIWatchListCardSectionView : SearchUICardSectionView <SearchUIWatchListCardRowModelDelegate> {

	SearchUIButton* _button;
	TLKSimpleRowView* _rowView;

}

@property (nonatomic,retain) NUIContainerStackView * contentView; 
@property (nonatomic,retain) SearchUIButton * button;                               //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) TLKSimpleRowView * rowView;                            //@synthesize rowView=_rowView - In the implementation block
@property (nonatomic,retain) SearchUIWatchListCardRowModel * rowModel; 
+(BOOL)supportsRecyclingForCardSection:(id)arg1 ;
-(SearchUIButton *)button;
-(void)setButton:(SearchUIButton *)arg1 ;
-(TLKSimpleRowView *)rowView;
-(id)setupContentView;
-(void)updateWithRowModel:(id)arg1 ;
-(void)setRowView:(TLKSimpleRowView *)arg1 ;
-(void)didUpdateRowModel:(id)arg1 animate:(BOOL)arg2 ;
-(void)updateText:(id)arg1 image:(id)arg2 buttonState:(long long)arg3 ;
@end
