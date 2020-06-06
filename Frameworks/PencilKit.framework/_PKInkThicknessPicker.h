/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIControl.h>

@class NSString, NSArray;

@interface _PKInkThicknessPicker : UIControl {

	NSString* _inkIdentifier;
	double _weight;
	NSArray* _thicknessButtons;

}

@property (nonatomic,retain) NSArray * thicknessButtons;              //@synthesize thicknessButtons=_thicknessButtons - In the implementation block
@property (nonatomic,retain) NSString * inkIdentifier;                //@synthesize inkIdentifier=_inkIdentifier - In the implementation block
@property (assign,nonatomic) double weight;                           //@synthesize weight=_weight - In the implementation block
+(long long)_nearestButtonIndexForWeight:(double)arg1 ;
+(CGRect)_buttonFrameForButtonIndex:(long long)arg1 ;
+(double)_weightForButtonIndex:(long long)arg1 ;
+(CGRect)_buttonFrameForWeight:(double)arg1 ;
+(double)_weightForButtonFrame:(CGRect)arg1 ;
+(double)_nearestButtonWeightForWeight:(double)arg1 ;
-(void)setWeight:(double)arg1 ;
-(double)weight;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)buttonTapped:(id)arg1 ;
-(void)setInkIdentifier:(NSString *)arg1 ;
-(NSArray *)thicknessButtons;
-(void)setThicknessButtons:(NSArray *)arg1 ;
-(id)initWithInkIdentifier:(id)arg1 ;
-(NSString *)inkIdentifier;
@end
