/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKInteractiveChartDataFormatter.h>

@class NSString;

@interface HKInteractiveChartNumberFormatter : HKInteractiveChartDataFormatter {

	NSString* _unitFormatString;

}

@property (nonatomic,copy) NSString * unitFormatString;              //@synthesize unitFormatString=_unitFormatString - In the implementation block
-(id)init;
-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 ;
-(id)formattedValueStringForChartData:(id)arg1 options:(long long)arg2 ;
-(id)_formattedStringWithValue:(id)arg1 formatter:(id)arg2 ;
-(NSString *)unitFormatString;
-(void)setUnitFormatString:(NSString *)arg1 ;
@end

