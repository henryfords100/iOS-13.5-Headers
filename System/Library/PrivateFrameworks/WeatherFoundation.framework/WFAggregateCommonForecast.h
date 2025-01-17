/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WFAirQualityConditions, WFWeatherConditions, NSArray;

@interface WFAggregateCommonForecast : NSObject {

	WFAirQualityConditions* _airQualityObservations;
	WFWeatherConditions* _currentObservations;
	NSArray* _lastTwentyFourHoursOfObservations;
	NSArray* _hourlyForecastedConditions;
	NSArray* _dailyForecastedConditions;
	NSArray* _dailyPollenForecastedConditions;

}

@property (nonatomic,retain) WFAirQualityConditions * airQualityObservations;              //@synthesize airQualityObservations=_airQualityObservations - In the implementation block
@property (nonatomic,retain) WFWeatherConditions * currentObservations;                    //@synthesize currentObservations=_currentObservations - In the implementation block
@property (nonatomic,retain) NSArray * lastTwentyFourHoursOfObservations;                  //@synthesize lastTwentyFourHoursOfObservations=_lastTwentyFourHoursOfObservations - In the implementation block
@property (nonatomic,retain) NSArray * hourlyForecastedConditions;                         //@synthesize hourlyForecastedConditions=_hourlyForecastedConditions - In the implementation block
@property (nonatomic,retain) NSArray * dailyForecastedConditions;                          //@synthesize dailyForecastedConditions=_dailyForecastedConditions - In the implementation block
@property (nonatomic,retain) NSArray * dailyPollenForecastedConditions;                    //@synthesize dailyPollenForecastedConditions=_dailyPollenForecastedConditions - In the implementation block
-(void)setAirQualityObservations:(WFAirQualityConditions *)arg1 ;
-(WFAirQualityConditions *)airQualityObservations;
-(NSArray *)lastTwentyFourHoursOfObservations;
-(void)setLastTwentyFourHoursOfObservations:(NSArray *)arg1 ;
-(void)setCurrentObservations:(WFWeatherConditions *)arg1 ;
-(void)setHourlyForecastedConditions:(NSArray *)arg1 ;
-(void)setDailyForecastedConditions:(NSArray *)arg1 ;
-(void)setDailyPollenForecastedConditions:(NSArray *)arg1 ;
-(WFWeatherConditions *)currentObservations;
-(NSArray *)hourlyForecastedConditions;
-(NSArray *)dailyForecastedConditions;
-(NSArray *)dailyPollenForecastedConditions;
@end

