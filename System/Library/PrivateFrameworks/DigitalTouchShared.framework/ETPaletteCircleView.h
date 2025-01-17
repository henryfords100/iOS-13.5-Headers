/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DigitalTouchShared/DigitalTouchShared-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface ETPaletteCircleView : UIView {

	UIView* _selectionMarker;
	BOOL _selected;

}

@property (assign,getter=isSelected,nonatomic) BOOL selected;              //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) UIView * selectionMarker; 
+(double)paletteCircleDiameter;
+(double)selectionMarkerDiameter;
+(id)selectionMarkerColor;
-(BOOL)isSelected;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(UIView *)selectionMarker;
-(void)_updateSelectionMarkerFrame;
@end

