/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FIUIChartDataSetDataSource.h>

@protocol FIUIChartDataGroupDataSource;
@class NSArray, NSString;

@interface FIUIChartDataGroup : NSObject <FIUIChartDataSetDataSource> {

	id<FIUIChartDataGroupDataSource> _dataSource;
	NSArray* _dataSets;

}

@property (nonatomic,retain) NSArray * dataSets;                                              //@synthesize dataSets=_dataSets - In the implementation block
@property (assign,nonatomic,__weak) id<FIUIChartDataGroupDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id<FIUIChartDataGroupDataSource>)dataSource;
-(void)setDataSource:(id<FIUIChartDataGroupDataSource>)arg1 ;
-(void)reloadData;
-(id)dataSetAtIndex:(unsigned long long)arg1 ;
-(NSArray *)dataSets;
-(void)setDataSets:(NSArray *)arg1 ;
-(id)minYValue;
-(id)maxYValue;
-(unsigned long long)numberOfDataPointsForDataSet:(id)arg1 ;
-(id)dataSet:(id)arg1 chartPointForIndex:(unsigned long long)arg2 ;
-(id)labelsForSet:(id)arg1 ;
-(id)maxXValue;
-(id)minXValue;
-(unsigned long long)_numberOfDataSets;
-(id)_dataSetAtIndexCreateIfNecessary:(unsigned long long)arg1 ;
-(unsigned long long)_numberOfDataPointsInSetAtIndex:(unsigned long long)arg1 ;
-(id)_pointForSetAtIndex:(unsigned long long)arg1 pointIndex:(unsigned long long)arg2 ;
-(id)_labelsForSetAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfDataSets;
@end

