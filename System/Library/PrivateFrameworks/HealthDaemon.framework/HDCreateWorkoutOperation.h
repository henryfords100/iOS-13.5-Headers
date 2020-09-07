/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDJournalableOperation.h>

@class HKWorkoutConfiguration, NSUUID, NSDateInterval, NSDictionary, HKDevice, HKSource, NSString, NSArray, HKQuantity, HKWorkout;

@interface HDCreateWorkoutOperation : HDJournalableOperation {

	HKWorkoutConfiguration* _workoutConfiguration;
	NSUUID* _identifier;
	NSDateInterval* _dateInterval;
	NSDictionary* _metadata;
	HKDevice* _device;
	HKSource* _source;
	NSString* _sourceVersion;
	NSArray* _events;
	NSDictionary* _statisticsCalculators;
	NSArray* _associatedSeries;
	unsigned long long _goalType;
	HKQuantity* _goal;
	NSArray* _quantityTypesIncludedWhilePaused;
	HKWorkout* _createdWorkout;

}

@property (nonatomic,copy,readonly) HKWorkoutConfiguration * workoutConfiguration;              //@synthesize workoutConfiguration=_workoutConfiguration - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSDateInterval * dateInterval;                              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * metadata;                                    //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy,readonly) HKDevice * device;                                          //@synthesize device=_device - In the implementation block
@property (nonatomic,copy,readonly) HKSource * source;                                          //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceVersion;                                   //@synthesize sourceVersion=_sourceVersion - In the implementation block
@property (nonatomic,copy,readonly) NSArray * events;                                           //@synthesize events=_events - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * statisticsCalculators;                       //@synthesize statisticsCalculators=_statisticsCalculators - In the implementation block
@property (nonatomic,copy,readonly) NSArray * associatedSeries;                                 //@synthesize associatedSeries=_associatedSeries - In the implementation block
@property (nonatomic,readonly) unsigned long long goalType;                                     //@synthesize goalType=_goalType - In the implementation block
@property (nonatomic,copy,readonly) HKQuantity * goal;                                          //@synthesize goal=_goal - In the implementation block
@property (nonatomic,copy,readonly) NSArray * quantityTypesIncludedWhilePaused;                 //@synthesize quantityTypesIncludedWhilePaused=_quantityTypesIncludedWhilePaused - In the implementation block
@property (nonatomic,readonly) HKWorkout * createdWorkout;                                      //@synthesize createdWorkout=_createdWorkout - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(HKSource *)source;
-(HKDevice *)device;
-(NSDictionary *)metadata;
-(NSArray *)events;
-(NSDateInterval *)dateInterval;
-(NSString *)sourceVersion;
-(HKWorkoutConfiguration *)workoutConfiguration;
-(unsigned long long)goalType;
-(HKQuantity *)goal;
-(BOOL)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(id)initWithWorkoutConfiguration:(id)arg1 identifier:(id)arg2 dateInterval:(id)arg3 metadata:(id)arg4 device:(id)arg5 source:(id)arg6 sourceVersion:(id)arg7 events:(id)arg8 statisticsCalculators:(id)arg9 associatedSeries:(id)arg10 goalType:(unsigned long long)arg11 goal:(id)arg12 quantityTypesIncludedWhilePaused:(id)arg13 ;
-(NSDictionary *)statisticsCalculators;
-(NSArray *)associatedSeries;
-(NSArray *)quantityTypesIncludedWhilePaused;
-(HKWorkout *)createdWorkout;
@end
