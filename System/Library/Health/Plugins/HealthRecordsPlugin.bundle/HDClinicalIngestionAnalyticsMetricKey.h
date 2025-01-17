/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface HDClinicalIngestionAnalyticsMetricKey : NSObject <NSCopying> {

	NSString* _host;
	long long _resourceType;
	long long _interactionType;

}

@property (nonatomic,copy,readonly) NSString * host;                         //@synthesize host=_host - In the implementation block
@property (nonatomic,readonly) long long resourceType;                       //@synthesize resourceType=_resourceType - In the implementation block
@property (nonatomic,readonly) long long interactionType;                    //@synthesize interactionType=_interactionType - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * analyticsString; 
+(id)analyticsMetricKeyWithResourceURL:(id)arg1 baseURL:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)host;
-(long long)interactionType;
-(long long)resourceType;
-(NSNumber *)analyticsString;
-(id)initWithHost:(id)arg1 resourceType:(long long)arg2 interactionType:(long long)arg3 ;
@end

