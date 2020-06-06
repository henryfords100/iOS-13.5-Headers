/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>

@interface HMISparseOpticalFlowFrame : HMFObject {

	CVBufferRef _pixelBuffer;
	SCD_Struct_HM4 _time;

}

@property (readonly) CVBufferRef pixelBuffer;              //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (readonly) SCD_Struct_HM4 time;                  //@synthesize time=_time - In the implementation block
-(void)dealloc;
-(id)description;
-(SCD_Struct_HM4)time;
-(CVBufferRef)pixelBuffer;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 atTime:(SCD_Struct_HM4)arg2 ;
@end
