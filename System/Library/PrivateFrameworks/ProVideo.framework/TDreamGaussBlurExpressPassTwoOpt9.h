/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/TDreamProgramWrapper.h>

@interface TDreamGaussBlurExpressPassTwoOpt9 : TDreamProgramWrapper {

	float kernel[3];
	int kernelUniform;
	float offsets[3];
	int offsetsUniform;

}
-(id)init;
-(void)setOffsets:(const double*)arg1 ;
-(void)setUniforms;
-(void)setKernel:(const double*)arg1 ;
@end
