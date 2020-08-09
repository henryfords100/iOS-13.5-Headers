/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 7:59:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RawCamera/RAWFilter.h>

@class CIImage, NSData, NSNumber;

@interface RAWVignetteTable : RAWFilter {

	CIImage* inputImage;
	NSData* inputVignetteTableData;
	NSNumber* inputVignetteTableDataSize;
	id inputColorSpace;
	CIImage* vigImg;

}
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)outputImage;
-(BOOL)makeMapImages;
@end
