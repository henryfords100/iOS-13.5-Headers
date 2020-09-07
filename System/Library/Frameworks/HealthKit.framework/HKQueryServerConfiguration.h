/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKTaskConfiguration.h>

@class HKObjectType, NSString, _HKFilter;

@interface HKQueryServerConfiguration : HKTaskConfiguration {

	BOOL _shouldDeactivateAfterInitialResults;
	BOOL _shouldSuppressDataCollection;
	HKObjectType* _objectType;
	NSString* _debugIdentifier;
	_HKFilter* _filter;
	long long _qualityOfService;
	double _activationTime;

}

@property (nonatomic,copy) HKObjectType * objectType;                               //@synthesize objectType=_objectType - In the implementation block
@property (nonatomic,copy) NSString * debugIdentifier;                              //@synthesize debugIdentifier=_debugIdentifier - In the implementation block
@property (nonatomic,retain) _HKFilter * filter;                                    //@synthesize filter=_filter - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                            //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (assign,nonatomic) BOOL shouldDeactivateAfterInitialResults;              //@synthesize shouldDeactivateAfterInitialResults=_shouldDeactivateAfterInitialResults - In the implementation block
@property (assign,nonatomic) BOOL shouldSuppressDataCollection;                     //@synthesize shouldSuppressDataCollection=_shouldSuppressDataCollection - In the implementation block
@property (assign,nonatomic) double activationTime;                                 //@synthesize activationTime=_activationTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(HKObjectType *)objectType;
-(void)setFilter:(_HKFilter *)arg1 ;
-(_HKFilter *)filter;
-(void)setObjectType:(HKObjectType *)arg1 ;
-(NSString *)debugIdentifier;
-(void)setDebugIdentifier:(NSString *)arg1 ;
-(void)setShouldDeactivateAfterInitialResults:(BOOL)arg1 ;
-(void)setShouldSuppressDataCollection:(BOOL)arg1 ;
-(void)setActivationTime:(double)arg1 ;
-(BOOL)shouldSuppressDataCollection;
-(BOOL)shouldDeactivateAfterInitialResults;
-(double)activationTime;
@end
