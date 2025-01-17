/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AADataEventType.h>

@class NSNumber;

@interface WALocationData : NSObject <AADataEventType> {

	NSNumber* _latitude;
	NSNumber* _longitude;

}

@property (nonatomic,readonly) NSNumber * latitude;               //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) NSNumber * longitude;              //@synthesize longitude=_longitude - In the implementation block
+(id)dataName;
-(NSNumber *)latitude;
-(NSNumber *)longitude;
-(id)initWithLatitude:(id)arg1 longitude:(id)arg2 ;
-(id)toDict;
@end

