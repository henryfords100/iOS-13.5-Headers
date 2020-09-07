/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIKBGradient;


@protocol UIKBRenderEffect <NSObject,NSCopying>
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) BOOL renderUnder; 
@property (nonatomic,readonly) SEL renderSelector; 
@property (assign,nonatomic) double weight; 
@property (nonatomic,readonly) BOOL usesRGBColors; 
@property (nonatomic,readonly) UIKBGradient * gradient; 
@required
-(BOOL)isValid;
-(CGColorRef)CGColor;
-(void)setWeight:(double)arg1;
-(double)weight;
-(BOOL)renderUnder;
-(SEL)renderSelector;
-(BOOL)usesRGBColors;
-(UIKBGradient *)gradient;

@end
