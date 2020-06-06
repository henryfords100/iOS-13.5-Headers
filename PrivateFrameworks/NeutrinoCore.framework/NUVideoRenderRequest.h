/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderRequest.h>

@protocol NUScalePolicy;
@class NUColorSpace;

@interface NUVideoRenderRequest : NURenderRequest {

	NUColorSpace* _colorSpace;
	id<NUScalePolicy> _scalePolicy;

}

@property (nonatomic,retain) NUColorSpace * colorSpace;              //@synthesize colorSpace=_colorSpace - In the implementation block
@property (retain) id<NUScalePolicy> scalePolicy;                    //@synthesize scalePolicy=_scalePolicy - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NUColorSpace *)colorSpace;
-(void)setColorSpace:(NUColorSpace *)arg1 ;
-(id)initWithComposition:(id)arg1 ;
-(void)submit:(/*^block*/id)arg1 ;
-(void)setScalePolicy:(id<NUScalePolicy>)arg1 ;
-(id)newRenderJob;
-(long long)mediaComponentType;
-(id<NUScalePolicy>)scalePolicy;
@end
