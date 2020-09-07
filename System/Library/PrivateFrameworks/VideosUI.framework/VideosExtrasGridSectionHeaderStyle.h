/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideosUI/VideosUI-Structs.h>
@class NSString, NSDictionary, UIColor;

@interface VideosExtrasGridSectionHeaderStyle : NSObject {

	NSString* _textStyle;
	NSDictionary* _defaultFontAttributes;
	UIColor* _textColor;
	double _textBaselineHeight;
	double _textBaselineDescender;
	UIEdgeInsets _insets;

}

@property (nonatomic,retain) NSString * textStyle;                              //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,retain) NSDictionary * defaultFontAttributes;              //@synthesize defaultFontAttributes=_defaultFontAttributes - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                               //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insets;                               //@synthesize insets=_insets - In the implementation block
@property (assign,nonatomic) double textBaselineHeight;                         //@synthesize textBaselineHeight=_textBaselineHeight - In the implementation block
@property (assign,nonatomic) double textBaselineDescender;                      //@synthesize textBaselineDescender=_textBaselineDescender - In the implementation block
-(void)setTextStyle:(NSString *)arg1 ;
-(NSString *)textStyle;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(NSDictionary *)defaultFontAttributes;
-(void)setDefaultFontAttributes:(NSDictionary *)arg1 ;
-(double)textBaselineHeight;
-(void)setTextBaselineHeight:(double)arg1 ;
-(double)textBaselineDescender;
-(void)setTextBaselineDescender:(double)arg1 ;
@end
