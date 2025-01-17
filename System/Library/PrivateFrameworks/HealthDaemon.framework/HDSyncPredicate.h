/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSDateInterval, NSNumber, NSDictionary;

@interface HDSyncPredicate : NSObject <NSSecureCoding, NSCopying> {

	NSSet* _excludedSyncProvenances;
	NSDateInterval* _dateInterval;
	NSSet* _includedObjectTypes;
	NSNumber* _defaultMaximumObjectAge;
	NSNumber* _defaultMaximumTombstoneAge;
	NSDictionary* _maximumObjectAgeByType;

}

@property (nonatomic,copy,readonly) NSSet * excludedSyncProvenances;                    //@synthesize excludedSyncProvenances=_excludedSyncProvenances - In the implementation block
@property (nonatomic,copy,readonly) NSDateInterval * dateInterval;                      //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,copy,readonly) NSSet * includedObjectTypes;                        //@synthesize includedObjectTypes=_includedObjectTypes - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * defaultMaximumObjectAge;                 //@synthesize defaultMaximumObjectAge=_defaultMaximumObjectAge - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * defaultMaximumTombstoneAge;              //@synthesize defaultMaximumTombstoneAge=_defaultMaximumTombstoneAge - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * maximumObjectAgeByType;              //@synthesize maximumObjectAgeByType=_maximumObjectAgeByType - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDateInterval *)dateInterval;
-(NSNumber *)defaultMaximumObjectAge;
-(id)initWithExcludedSyncProvenances:(id)arg1 dateInterval:(id)arg2 includedObjectTypes:(id)arg3 defaultMaximumObjectAge:(id)arg4 defaultMaximumTombstoneAge:(id)arg5 maximumObjectAgeByType:(id)arg6 ;
-(id)maximumObjectAgeForType:(id)arg1 ;
-(NSSet *)excludedSyncProvenances;
-(NSSet *)includedObjectTypes;
-(NSNumber *)defaultMaximumTombstoneAge;
-(NSDictionary *)maximumObjectAgeByType;
@end

