/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, ADPointCloudAggregator, ADAggregationParameters;

@interface ARDepthPointCloudCoalescer : NSObject {

	NSDictionary* _jasperCameraCalibrationDataDictionary;
	ADPointCloudAggregator* _aggregator;
	ADAggregationParameters* _aggregationParameters;

}

@property (nonatomic,retain) ADAggregationParameters * aggregationParameters;              //@synthesize aggregationParameters=_aggregationParameters - In the implementation block
-(id)init;
-(void)flush;
-(void)_commonInit:(id)arg1 ;
-(ADAggregationParameters *)aggregationParameters;
-(id)initWithCameraCalibration:(id)arg1 ;
-(void)addDepthPointCloudData:(id)arg1 ;
-(id)depthPointCloudWithPose:(id)arg1 imageData:(id)arg2 ;
-(void)setAggregationParameters:(ADAggregationParameters *)arg1 ;
@end
