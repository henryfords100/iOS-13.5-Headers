/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEOSolarEclipticCelestialBodyData : NSObject {

	double _latitude;
	double _longitude;

}

@property (nonatomic,readonly) double latitude;               //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) double longitude;              //@synthesize longitude=_longitude - In the implementation block
-(double)latitude;
-(double)longitude;
-(id)initWithDate:(id)arg1 body:(long long)arg2 useHighPrecision:(BOOL)arg3 ;
-(id)initWithJulianDay:(double)arg1 body:(long long)arg2 useHighPrecision:(BOOL)arg3 ;
-(id)initWithDate:(id)arg1 body:(long long)arg2 ;
@end
