/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKTaskConfiguration.h>

@class HKWorkoutConfiguration, NSUUID;

@interface HKWorkoutSessionTaskConfiguration : HKTaskConfiguration {

	BOOL _requiresCoreLocationAssertion;
	BOOL _requiresRecovery;
	BOOL _supportsAppRelaunchForRecovery;
	HKWorkoutConfiguration* _workoutConfiguration;
	NSUUID* _sessionUUID;

}

@property (nonatomic,copy) HKWorkoutConfiguration * workoutConfiguration;              //@synthesize workoutConfiguration=_workoutConfiguration - In the implementation block
@property (nonatomic,copy) NSUUID * sessionUUID;                                       //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) BOOL requiresCoreLocationAssertion;                       //@synthesize requiresCoreLocationAssertion=_requiresCoreLocationAssertion - In the implementation block
@property (assign,nonatomic) BOOL requiresRecovery;                                    //@synthesize requiresRecovery=_requiresRecovery - In the implementation block
@property (assign,nonatomic) BOOL supportsAppRelaunchForRecovery;                      //@synthesize supportsAppRelaunchForRecovery=_supportsAppRelaunchForRecovery - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setWorkoutConfiguration:(HKWorkoutConfiguration *)arg1 ;
-(HKWorkoutConfiguration *)workoutConfiguration;
-(BOOL)requiresRecovery;
-(void)setRequiresRecovery:(BOOL)arg1 ;
-(NSUUID *)sessionUUID;
-(void)setSessionUUID:(NSUUID *)arg1 ;
-(void)setRequiresCoreLocationAssertion:(BOOL)arg1 ;
-(void)setSupportsAppRelaunchForRecovery:(BOOL)arg1 ;
-(BOOL)requiresCoreLocationAssertion;
-(BOOL)supportsAppRelaunchForRecovery;
@end

