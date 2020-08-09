/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDHealthServiceCharacteristic.h>

@interface HDEurotasData : HDHealthServiceCharacteristic {

	BOOL _hasHeartRate;
	BOOL _hasActiveEnergy;
	BOOL _hasTotalEnergy;
	BOOL _hasAverageHeartRate;
	unsigned short _heartRate;
	unsigned short _activeEnergy;
	unsigned short _totalEnergy;
	unsigned short _averageHeartRate;

}

@property (nonatomic,readonly) BOOL hasHeartRate;                            //@synthesize hasHeartRate=_hasHeartRate - In the implementation block
@property (nonatomic,readonly) unsigned short heartRate;                     //@synthesize heartRate=_heartRate - In the implementation block
@property (nonatomic,readonly) BOOL hasActiveEnergy;                         //@synthesize hasActiveEnergy=_hasActiveEnergy - In the implementation block
@property (nonatomic,readonly) unsigned short activeEnergy;                  //@synthesize activeEnergy=_activeEnergy - In the implementation block
@property (nonatomic,readonly) BOOL hasTotalEnergy;                          //@synthesize hasTotalEnergy=_hasTotalEnergy - In the implementation block
@property (nonatomic,readonly) unsigned short totalEnergy;                   //@synthesize totalEnergy=_totalEnergy - In the implementation block
@property (nonatomic,readonly) BOOL hasAverageHeartRate;                     //@synthesize hasAverageHeartRate=_hasAverageHeartRate - In the implementation block
@property (nonatomic,readonly) unsigned short averageHeartRate;              //@synthesize averageHeartRate=_averageHeartRate - In the implementation block
+(id)uuid;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(unsigned short)heartRate;
-(unsigned short)totalEnergy;
-(unsigned short)averageHeartRate;
-(unsigned short)activeEnergy;
-(id)getBinaryValueWithError:(id*)arg1 ;
-(id)initForWriting;
-(void)addActiveEnergy:(unsigned short)arg1 ;
-(void)addTotalEnergy:(unsigned short)arg1 ;
-(void)addHeartRate:(unsigned short)arg1 ;
-(void)addAverageHeartRate:(unsigned short)arg1 ;
-(BOOL)hasHeartRate;
-(BOOL)hasActiveEnergy;
-(BOOL)hasTotalEnergy;
-(BOOL)hasAverageHeartRate;
-(BOOL)_appendUInt16Value:(unsigned short)arg1 type:(unsigned char)arg2 toData:(char**)arg3 before:(const char*)arg4 ;
@end
