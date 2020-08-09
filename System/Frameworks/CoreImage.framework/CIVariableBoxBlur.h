/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIVariableBoxBlur : CIFilter {

	CIImage* inputImage;
	CIImage* inputRadiusImage;
	NSNumber* inputScale;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputRadiusImage; 
@property (nonatomic,retain) NSNumber * inputScale; 
+(id)customAttributes;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(CIImage *)inputRadiusImage;
-(void)setInputRadiusImage:(CIImage *)arg1 ;
@end
