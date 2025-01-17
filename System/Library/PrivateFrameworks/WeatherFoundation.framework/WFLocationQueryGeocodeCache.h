/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface WFLocationQueryGeocodeCache : NSObject {

	NSMutableDictionary* _cache;
	NSMutableDictionary* _cacheAge;
	NSObject*<OS_dispatch_queue> _cacheQueue;
	double _expirationInterval;

}

@property (assign,nonatomic) double expirationInterval;              //@synthesize expirationInterval=_expirationInterval - In the implementation block
-(id)init;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setExpirationInterval:(double)arg1 ;
-(double)expirationInterval;
-(BOOL)_shouldEvictObjectWithDate:(id)arg1 ;
-(void)_setObject:(id)arg1 forKey:(id)arg2 withDate:(id)arg3 ;
@end

