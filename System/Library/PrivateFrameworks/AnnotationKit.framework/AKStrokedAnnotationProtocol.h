/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIColor;


@protocol AKStrokedAnnotationProtocol <NSObject>
@property (assign) double strokeWidth; 
@property (retain) UIColor * strokeColor; 
@property (getter=isDashed) BOOL dashed; 
@property (assign) long long brushStyle; 
@property (assign) BOOL hasShadow; 
@required
-(BOOL)hasShadow;
-(void)setStrokeColor:(id)arg1;
-(void)setHasShadow:(BOOL)arg1;
-(UIColor *)strokeColor;
-(double)strokeWidth;
-(void)setStrokeWidth:(double)arg1;
-(void)setDashed:(BOOL)arg1;
-(BOOL)isDashed;
-(long long)brushStyle;
-(void)setBrushStyle:(long long)arg1;

@end
