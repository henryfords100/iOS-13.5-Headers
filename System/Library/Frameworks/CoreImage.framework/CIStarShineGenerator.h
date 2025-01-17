/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIVector, CIColor, NSNumber;

@interface CIStarShineGenerator : CIFilter {

	CIVector* inputCenter;
	CIColor* inputColor;
	NSNumber* inputRadius;
	NSNumber* inputCrossScale;
	NSNumber* inputCrossAngle;
	NSNumber* inputCrossOpacity;
	NSNumber* inputCrossWidth;
	NSNumber* inputEpsilon;

}

@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) CIColor * inputColor; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) NSNumber * inputCrossScale; 
@property (nonatomic,retain) NSNumber * inputCrossAngle; 
@property (nonatomic,retain) NSNumber * inputCrossOpacity; 
@property (nonatomic,retain) NSNumber * inputCrossWidth; 
@property (nonatomic,retain) NSNumber * inputEpsilon; 
+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;
-(NSNumber *)inputRadius;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(CIVector *)inputCenter;
-(void)setInputCenter:(CIVector *)arg1 ;
-(CIColor *)inputColor;
-(void)setInputColor:(CIColor *)arg1 ;
-(NSNumber *)inputEpsilon;
-(void)setInputEpsilon:(NSNumber *)arg1 ;
-(NSNumber *)inputCrossAngle;
-(void)setInputCrossAngle:(NSNumber *)arg1 ;
-(NSNumber *)inputCrossScale;
-(void)setInputCrossScale:(NSNumber *)arg1 ;
-(NSNumber *)inputCrossWidth;
-(void)setInputCrossWidth:(NSNumber *)arg1 ;
-(NSNumber *)inputCrossOpacity;
-(void)setInputCrossOpacity:(NSNumber *)arg1 ;
@end

