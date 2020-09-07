/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeMonitor/_DKMonitor.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, RTRoutineManager, NSString;

@interface _DKLocationMonitor : _DKMonitor <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	RTRoutineManager* _routineManager;
	BOOL _locationEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entitlements;
+(id)eventStream;
-(id)init;
-(void)stop;
-(void)start;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didVisit:(id)arg2 ;
-(id)_locationFromVisit:(id)arg1 ;
-(void)_handleVisit:(id)arg1 ;
@end
