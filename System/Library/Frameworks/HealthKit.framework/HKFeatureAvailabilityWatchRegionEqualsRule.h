/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKFeatureAvailabilityBaseRule.h>
#import <libobjc.A.dylib/HKFeatureAvailabilityRule.h>

@class NSString;

@interface HKFeatureAvailabilityWatchRegionEqualsRule : HKFeatureAvailabilityBaseRule <HKFeatureAvailabilityRule> {

	NSString* _regionCode;

}

@property (nonatomic,retain) NSString * regionCode;                 //@synthesize regionCode=_regionCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ruleIdentifier;
-(void)setRegionCode:(NSString *)arg1 ;
-(NSString *)regionCode;
-(BOOL)evaluate;
-(void)processUserInfo:(id)arg1 ;
@end
