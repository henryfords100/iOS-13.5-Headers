/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CityPersistenceConversions : NSObject
+(id)cityFromDictionary:(id)arg1 ;
+(id)dictionaryRepresentationOfCity:(id)arg1 ;
+(id)cloudDictionaryRepresentationOfCity:(id)arg1 ;
+(id)cityFromCloudDictionary:(id)arg1 ;
+(id)temperatureFromDictionaryRepresentation:(id)arg1 ;
+(void)populateCity:(id)arg1 withDayForecastDictionaries:(id)arg2 ;
+(void)populateCity:(id)arg1 withHourlyForecastDictionaries:(id)arg2 ;
+(id)scaleCategoryFromDictionaryRepresentation:(id)arg1 ;
+(BOOL)isCityValid:(id)arg1 ;
+(id)weatherDetailsDictionaryFromCity:(id)arg1 ;
+(id)dayForecastDictionariesFromCity:(id)arg1 ;
+(id)hourlyForecastDictionariesFromCity:(id)arg1 ;
+(id)dictionaryRepresentationOfTemperature:(id)arg1 ;
+(id)dictionaryRepresentationOfScaleCategory:(id)arg1 ;
+(BOOL)cityDictionaryHasValidCoordinates:(id)arg1 ;
+(id)cityFromALCity:(id)arg1 ;
+(id)cloudDictionaryRepresentationOfALCity:(id)arg1 ;
@end

