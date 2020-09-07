/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RELocationManager.h>

@class NTKLocationManager, NSString;

@interface _NTKRelevanceEngineLocationManager : RELocationManager {

	NTKLocationManager* _locationManager;
	NSString* _token;

}
-(id)currentLocation;
-(id)initWithLocationManager:(id)arg1 ;
-(void)stopLocationUpdates;
-(void)startLocationUpdatesWithHandler:(/*^block*/id)arg1 ;
@end
