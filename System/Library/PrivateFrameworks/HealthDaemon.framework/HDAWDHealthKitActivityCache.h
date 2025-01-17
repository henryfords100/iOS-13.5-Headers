/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDAWDHealthKitActivityCache : PBCodable <NSCopying> {

	long long _activeHours;
	long long _briskMinutes;
	long long _cacheIndex;
	long long _endDate;
	long long _energyBurned;
	long long _energyBurnedGoal;
	long long _energyBurnedGoalDate;
	long long _startDate;
	long long _stepCount;
	long long _walkingAndRunningDistance;
	SCD_Struct_HD39 _has;

}

@property (assign,nonatomic) BOOL hasCacheIndex; 
@property (assign,nonatomic) long long cacheIndex;                             //@synthesize cacheIndex=_cacheIndex - In the implementation block
@property (assign,nonatomic) BOOL hasEnergyBurned; 
@property (assign,nonatomic) long long energyBurned;                           //@synthesize energyBurned=_energyBurned - In the implementation block
@property (assign,nonatomic) BOOL hasBriskMinutes; 
@property (assign,nonatomic) long long briskMinutes;                           //@synthesize briskMinutes=_briskMinutes - In the implementation block
@property (assign,nonatomic) BOOL hasActiveHours; 
@property (assign,nonatomic) long long activeHours;                            //@synthesize activeHours=_activeHours - In the implementation block
@property (assign,nonatomic) BOOL hasStepCount; 
@property (assign,nonatomic) long long stepCount;                              //@synthesize stepCount=_stepCount - In the implementation block
@property (assign,nonatomic) BOOL hasEnergyBurnedGoal; 
@property (assign,nonatomic) long long energyBurnedGoal;                       //@synthesize energyBurnedGoal=_energyBurnedGoal - In the implementation block
@property (assign,nonatomic) BOOL hasWalkingAndRunningDistance; 
@property (assign,nonatomic) long long walkingAndRunningDistance;              //@synthesize walkingAndRunningDistance=_walkingAndRunningDistance - In the implementation block
@property (assign,nonatomic) BOOL hasEnergyBurnedGoalDate; 
@property (assign,nonatomic) long long energyBurnedGoalDate;                   //@synthesize energyBurnedGoalDate=_energyBurnedGoalDate - In the implementation block
@property (assign,nonatomic) BOOL hasStartDate; 
@property (assign,nonatomic) long long startDate;                              //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL hasEndDate; 
@property (assign,nonatomic) long long endDate;                                //@synthesize endDate=_endDate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)startDate;
-(long long)endDate;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setStartDate:(long long)arg1 ;
-(void)setEndDate:(long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasStartDate:(BOOL)arg1 ;
-(BOOL)hasStartDate;
-(void)setHasEndDate:(BOOL)arg1 ;
-(BOOL)hasEndDate;
-(long long)stepCount;
-(void)setEnergyBurned:(long long)arg1 ;
-(void)setEnergyBurnedGoal:(long long)arg1 ;
-(void)setBriskMinutes:(long long)arg1 ;
-(void)setActiveHours:(long long)arg1 ;
-(void)setStepCount:(long long)arg1 ;
-(void)setWalkingAndRunningDistance:(long long)arg1 ;
-(long long)energyBurned;
-(long long)energyBurnedGoal;
-(long long)briskMinutes;
-(long long)activeHours;
-(long long)walkingAndRunningDistance;
-(BOOL)hasEnergyBurned;
-(BOOL)hasEnergyBurnedGoal;
-(BOOL)hasBriskMinutes;
-(BOOL)hasActiveHours;
-(BOOL)hasStepCount;
-(BOOL)hasWalkingAndRunningDistance;
-(long long)energyBurnedGoalDate;
-(long long)cacheIndex;
-(void)setCacheIndex:(long long)arg1 ;
-(void)setHasEnergyBurned:(BOOL)arg1 ;
-(void)setHasEnergyBurnedGoal:(BOOL)arg1 ;
-(void)setHasBriskMinutes:(BOOL)arg1 ;
-(void)setHasActiveHours:(BOOL)arg1 ;
-(void)setHasWalkingAndRunningDistance:(BOOL)arg1 ;
-(void)setHasStepCount:(BOOL)arg1 ;
-(void)setEnergyBurnedGoalDate:(long long)arg1 ;
-(BOOL)hasEnergyBurnedGoalDate;
-(void)setHasCacheIndex:(BOOL)arg1 ;
-(BOOL)hasCacheIndex;
-(void)setHasEnergyBurnedGoalDate:(BOOL)arg1 ;
@end

