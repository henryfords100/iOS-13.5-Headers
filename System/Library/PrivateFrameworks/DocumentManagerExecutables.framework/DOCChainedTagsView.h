/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerExecutables.framework/DocumentManagerExecutables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentManagerExecutables/DocumentManagerExecutables-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, UIColor;

@interface DOCChainedTagsView : UIView {

	NSArray* _tagColors;
	UIColor* _borderColor;
	double _knockOutBorderWidth;
	unsigned long long _spacing;
	double _tagDimension;
	CGPoint _alignmentOffset;

}

@property (nonatomic,retain) NSArray * tagColors;                     //@synthesize tagColors=_tagColors - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                   //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) double knockOutBorderWidth;              //@synthesize knockOutBorderWidth=_knockOutBorderWidth - In the implementation block
@property (assign,nonatomic) unsigned long long spacing;              //@synthesize spacing=_spacing - In the implementation block
@property (assign,nonatomic) double tagDimension;                     //@synthesize tagDimension=_tagDimension - In the implementation block
@property (assign,nonatomic) CGPoint alignmentOffset;                 //@synthesize alignmentOffset=_alignmentOffset - In the implementation block
+(double)horizontalSpacingForSpace:(unsigned long long)arg1 tagDiameter:(double)arg2 ;
+(CGSize)sizeForDiameter:(double)arg1 horizontalSpacing:(unsigned long long)arg2 tags:(id)arg3 ;
+(void)drawTagsInContext:(CGContextRef)arg1 diameter:(double)arg2 horizontalSpacing:(unsigned long long)arg3 layoutDirection:(long long)arg4 tagColors:(id)arg5 borderColor:(id)arg6 knockOutBorderWidth:(double)arg7 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)spacing;
-(void)_commonInit;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setSpacing:(unsigned long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)sizeToFit;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(UIColor *)borderColor;
-(double)tagDimension;
-(NSArray *)tagColors;
-(double)knockOutBorderWidth;
-(void)setTagColors:(NSArray *)arg1 ;
-(void)setknockOutBorderWidth:(double)arg1 ;
-(double)horizontalSpacing;
-(void)setTagDimension:(double)arg1 ;
-(void)setKnockOutBorderWidth:(double)arg1 ;
-(CGPoint)alignmentOffset;
-(void)setAlignmentOffset:(CGPoint)arg1 ;
@end

