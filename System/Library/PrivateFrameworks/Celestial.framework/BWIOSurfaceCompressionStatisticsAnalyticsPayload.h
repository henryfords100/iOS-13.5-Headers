/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BWCoreAnalyticsPayload.h>

@class NSString;

@interface BWIOSurfaceCompressionStatisticsAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {

	float _averageRatio;
	float _minRatio;
	float _maxRatio;
	float _standardDeviation;
	int _compressionType;
	unsigned _bufferHeight;
	unsigned _numberOfSamples;
	unsigned long long _totalCompressedSize;
	unsigned long long _totalUncompressedSize;

}

@property (assign,nonatomic) float averageRatio;                                    //@synthesize averageRatio=_averageRatio - In the implementation block
@property (assign,nonatomic) float minRatio;                                        //@synthesize minRatio=_minRatio - In the implementation block
@property (assign,nonatomic) float maxRatio;                                        //@synthesize maxRatio=_maxRatio - In the implementation block
@property (assign,nonatomic) float standardDeviation;                               //@synthesize standardDeviation=_standardDeviation - In the implementation block
@property (assign,nonatomic) int compressionType;                                   //@synthesize compressionType=_compressionType - In the implementation block
@property (assign,nonatomic) unsigned bufferHeight;                                 //@synthesize bufferHeight=_bufferHeight - In the implementation block
@property (assign,nonatomic) unsigned numberOfSamples;                              //@synthesize numberOfSamples=_numberOfSamples - In the implementation block
@property (assign,nonatomic) unsigned long long totalCompressedSize;                //@synthesize totalCompressedSize=_totalCompressedSize - In the implementation block
@property (assign,nonatomic) unsigned long long totalUncompressedSize;              //@synthesize totalUncompressedSize=_totalUncompressedSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reset;
-(id)eventName;
-(int)compressionType;
-(void)setCompressionType:(int)arg1 ;
-(unsigned)numberOfSamples;
-(float)standardDeviation;
-(id)eventDictionary;
-(float)averageRatio;
-(void)setAverageRatio:(float)arg1 ;
-(float)minRatio;
-(void)setMinRatio:(float)arg1 ;
-(float)maxRatio;
-(void)setMaxRatio:(float)arg1 ;
-(void)setStandardDeviation:(float)arg1 ;
-(unsigned)bufferHeight;
-(void)setBufferHeight:(unsigned)arg1 ;
-(void)setNumberOfSamples:(unsigned)arg1 ;
-(unsigned long long)totalCompressedSize;
-(void)setTotalCompressedSize:(unsigned long long)arg1 ;
-(unsigned long long)totalUncompressedSize;
-(void)setTotalUncompressedSize:(unsigned long long)arg1 ;
@end

