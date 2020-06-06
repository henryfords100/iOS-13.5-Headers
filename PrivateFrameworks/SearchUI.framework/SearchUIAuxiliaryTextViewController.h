/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUIAccessoryViewController.h>

@class TLKAuxilliaryTextView;

@interface SearchUIAuxiliaryTextViewController : SearchUIAccessoryViewController {

	BOOL _shouldCenter;
	TLKAuxilliaryTextView* _auxilliaryTextView;

}

@property (nonatomic,retain) TLKAuxilliaryTextView * auxilliaryTextView;              //@synthesize auxilliaryTextView=_auxilliaryTextView - In the implementation block
@property (assign,nonatomic) BOOL shouldCenter;                                       //@synthesize shouldCenter=_shouldCenter - In the implementation block
+(BOOL)supportsRowModel:(id)arg1 ;
-(unsigned long long)type;
-(id)setupView;
-(void)updateWithRowModel:(id)arg1 ;
-(BOOL)shouldVerticallyCenter;
-(BOOL)shouldCenter;
-(void)setAuxilliaryTextView:(TLKAuxilliaryTextView *)arg1 ;
-(TLKAuxilliaryTextView *)auxilliaryTextView;
-(void)setShouldCenter:(BOOL)arg1 ;
@end
