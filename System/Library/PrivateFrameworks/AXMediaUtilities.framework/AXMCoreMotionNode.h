/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMSourceNode.h>

@interface AXMCoreMotionNode : AXMSourceNode {

	unsigned long long _samplesPerSecond;
	double _lastSampleTime;

}

@property (assign,nonatomic) double lastSampleTime;                            //@synthesize lastSampleTime=_lastSampleTime - In the implementation block
@property (assign,nonatomic) unsigned long long samplesPerSecond;              //@synthesize samplesPerSecond=_samplesPerSecond - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)title;
+(BOOL)isSupported;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)nodeInitialize;
-(unsigned long long)samplesPerSecond;
-(double)lastSampleTime;
-(void)setLastSampleTime:(double)arg1 ;
-(void)triggerWithCoreMotionManager:(id)arg1 deviceOrientation:(long long)arg2 cacheKey:(id)arg3 resultHandler:(/*^block*/id)arg4 ;
-(void)setSamplesPerSecond:(unsigned long long)arg1 ;
@end

