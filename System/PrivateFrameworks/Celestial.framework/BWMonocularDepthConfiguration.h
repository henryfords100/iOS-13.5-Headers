/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/BWInferenceConfiguration.h>

@interface BWMonocularDepthConfiguration : BWInferenceConfiguration {

	unsigned _monocularDepthType;
	long long _depthPrioritization;

}

@property (nonatomic,readonly) unsigned monocularDepthType;                //@synthesize monocularDepthType=_monocularDepthType - In the implementation block
@property (nonatomic,readonly) long long depthPrioritization;              //@synthesize depthPrioritization=_depthPrioritization - In the implementation block
-(id)initWithInferenceType:(int)arg1 monocularDepthType:(unsigned)arg2 ;
-(unsigned)monocularDepthType;
-(long long)depthPrioritization;
@end
