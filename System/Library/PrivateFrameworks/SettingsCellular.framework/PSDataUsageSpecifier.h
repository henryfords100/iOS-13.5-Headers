/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellular.framework/SettingsCellular
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSSpecifier.h>

@protocol PSBillingPeriodSource;
@class PSDataUsageStatisticsCache, NSString;

@interface PSDataUsageSpecifier : PSSpecifier {

	id<PSBillingPeriodSource> _billingPeriodSource;
	PSDataUsageStatisticsCache* _statisticsCache;
	NSString* _bundleID;
	unsigned long long _type;

}

@property (nonatomic,retain) PSDataUsageStatisticsCache * statisticsCache;                      //@synthesize statisticsCache=_statisticsCache - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                                               //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                           //@synthesize type=_type - In the implementation block
@property (assign,nonatomic,__weak) id<PSBillingPeriodSource> billingPeriodSource;              //@synthesize billingPeriodSource=_billingPeriodSource - In the implementation block
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(unsigned long long)dataUsage;
-(id)initWithType:(unsigned long long)arg1 bundleID:(id)arg2 statisticsCache:(id)arg3 ;
-(PSDataUsageStatisticsCache *)statisticsCache;
-(void)setStatisticsCache:(PSDataUsageStatisticsCache *)arg1 ;
-(void)setBillingPeriodSource:(id<PSBillingPeriodSource>)arg1 ;
-(id)dataUsageString;
-(id<PSBillingPeriodSource>)billingPeriodSource;
@end
