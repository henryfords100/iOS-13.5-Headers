/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIColor;

@interface MiroCircularProgressBar : UIView

@property (assign,nonatomic) float progress; 
@property (nonatomic,retain) UIColor * progressColor; 
@property (assign,nonatomic) double circleLineWidth; 
@property (assign,nonatomic) double arcLineWidth; 
@property (assign,nonatomic) double animationDuration; 
+(Class)layerClass;
-(id)initWithCoder:(id)arg1 ;
-(float)progress;
-(void)setProgress:(float)arg1 ;
-(double)animationDuration;
-(void)setAnimationDuration:(double)arg1 ;
-(void)setProgressColor:(UIColor *)arg1 ;
-(UIColor *)progressColor;
-(double)circleLineWidth;
-(void)setCircleLineWidth:(double)arg1 ;
-(double)arcLineWidth;
-(void)setArcLineWidth:(double)arg1 ;
@end

