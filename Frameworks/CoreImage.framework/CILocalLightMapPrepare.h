/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class NSData, NSNumber, CIImage;

@interface CILocalLightMapPrepare : CIFilter {

	NSData* inputLightMap;
	NSNumber* inputLightMapWidth;
	NSNumber* inputLightMapHeight;
	CIImage* inputGuideImage;

}
+(id)customAttributes;
-(id)outputImage;
@end
