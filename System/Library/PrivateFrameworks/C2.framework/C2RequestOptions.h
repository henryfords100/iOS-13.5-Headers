/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <C2/C2-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, C2MetricOptions, NSURL;

@interface C2RequestOptions : NSObject <NSCopying, NSSecureCoding> {

	BOOL __allowsExpensiveAccess;
	BOOL __allowsPowerNapScheduling;
	BOOL _useAdaptiveTimeouts;
	BOOL _tlsPinning;
	BOOL _allowRouting;
	BOOL _allowExpiredDNSBehavior;
	BOOL __allowsRetryForBackgroundDataTasks;
	BOOL _redactRemoteEndpointFromNetworkMetrics;
	BOOL _outOfProcessDiscretionary;
	BOOL _metricRequest;
	long long _qualityOfService;
	NSString* _outOfProcessPoolName;
	double __timeoutIntervalForRequest;
	double __timeoutIntervalForResource;
	NSString* __sourceApplicationBundleIdentifier;
	NSString* __sourceApplicationSecondaryIdentifier;
	NSString* __appleIDContextSessionIdentifier;
	unsigned long long _discretionaryNetworkBehavior;
	unsigned long long _duetPreClearedMode;
	NSString* _identifier;
	NSDictionary* _resolvedEndpointsWithHostname;
	C2MetricOptions* _metricOptions;
	NSURL* _c2MetricsEndpoint;
	unsigned long long _c2MetricsReportFrequency;
	unsigned long long _c2MetricsReportFrequencyBase;
	NSString* _originalHost;
	NSURL* _invokedURL;
	/*^block*/id _testBehavior_sessionGroupCreated;

}

@property (nonatomic,copy) NSString * originalHost;                                        //@synthesize originalHost=_originalHost - In the implementation block
@property (assign,nonatomic) BOOL metricRequest;                                           //@synthesize metricRequest=_metricRequest - In the implementation block
@property (nonatomic,copy) NSURL * invokedURL;                                             //@synthesize invokedURL=_invokedURL - In the implementation block
@property (nonatomic,readonly) double emptySessionExpiryInSeconds; 
@property (nonatomic,readonly) BOOL outOfProcess; 
@property (nonatomic,copy) id testBehavior_sessionGroupCreated;                            //@synthesize testBehavior_sessionGroupCreated=_testBehavior_sessionGroupCreated - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                                   //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,copy) NSString * outOfProcessPoolName;                                //@synthesize outOfProcessPoolName=_outOfProcessPoolName - In the implementation block
@property (assign,nonatomic) BOOL _allowsExpensiveAccess;                                  //@synthesize _allowsExpensiveAccess=__allowsExpensiveAccess - In the implementation block
@property (assign,nonatomic) BOOL _allowsPowerNapScheduling;                               //@synthesize _allowsPowerNapScheduling=__allowsPowerNapScheduling - In the implementation block
@property (assign,nonatomic) double _timeoutIntervalForRequest;                            //@synthesize _timeoutIntervalForRequest=__timeoutIntervalForRequest - In the implementation block
@property (assign,nonatomic) double _timeoutIntervalForResource;                           //@synthesize _timeoutIntervalForResource=__timeoutIntervalForResource - In the implementation block
@property (assign,nonatomic) BOOL useAdaptiveTimeouts;                                     //@synthesize useAdaptiveTimeouts=_useAdaptiveTimeouts - In the implementation block
@property (nonatomic,copy) NSString * _sourceApplicationBundleIdentifier;                  //@synthesize _sourceApplicationBundleIdentifier=__sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * _sourceApplicationSecondaryIdentifier;               //@synthesize _sourceApplicationSecondaryIdentifier=__sourceApplicationSecondaryIdentifier - In the implementation block
@property (nonatomic,copy) NSString * _appleIDContextSessionIdentifier;                    //@synthesize _appleIDContextSessionIdentifier=__appleIDContextSessionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL tlsPinning;                                              //@synthesize tlsPinning=_tlsPinning - In the implementation block
@property (assign,nonatomic) BOOL allowRouting;                                            //@synthesize allowRouting=_allowRouting - In the implementation block
@property (assign,nonatomic) BOOL allowExpiredDNSBehavior;                                 //@synthesize allowExpiredDNSBehavior=_allowExpiredDNSBehavior - In the implementation block
@property (assign,nonatomic) unsigned long long discretionaryNetworkBehavior;              //@synthesize discretionaryNetworkBehavior=_discretionaryNetworkBehavior - In the implementation block
@property (assign,nonatomic) unsigned long long duetPreClearedMode;                        //@synthesize duetPreClearedMode=_duetPreClearedMode - In the implementation block
@property (assign,nonatomic) BOOL _allowsRetryForBackgroundDataTasks;                      //@synthesize _allowsRetryForBackgroundDataTasks=__allowsRetryForBackgroundDataTasks - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDictionary * resolvedEndpointsWithHostname;                   //@synthesize resolvedEndpointsWithHostname=_resolvedEndpointsWithHostname - In the implementation block
@property (nonatomic,copy) C2MetricOptions * metricOptions;                                //@synthesize metricOptions=_metricOptions - In the implementation block
@property (assign,nonatomic) BOOL redactRemoteEndpointFromNetworkMetrics;                  //@synthesize redactRemoteEndpointFromNetworkMetrics=_redactRemoteEndpointFromNetworkMetrics - In the implementation block
@property (assign,nonatomic) BOOL outOfProcessDiscretionary;                               //@synthesize outOfProcessDiscretionary=_outOfProcessDiscretionary - In the implementation block
@property (nonatomic,copy) NSURL * c2MetricsEndpoint;                                      //@synthesize c2MetricsEndpoint=_c2MetricsEndpoint - In the implementation block
@property (assign,nonatomic) unsigned long long c2MetricsReportFrequency;                  //@synthesize c2MetricsReportFrequency=_c2MetricsReportFrequency - In the implementation block
@property (assign,nonatomic) unsigned long long c2MetricsReportFrequencyBase;              //@synthesize c2MetricsReportFrequencyBase=_c2MetricsReportFrequencyBase - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)stringForQualityOfService:(long long)arg1 ;
+(id)stringForDiscretionaryNetworkBehavior:(unsigned long long)arg1 ;
+(id)stringForDuetPreClearedMode:(unsigned long long)arg1 ;
+(BOOL)triesteMetricsEnabled;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(void)setDiscretionaryNetworkBehavior:(unsigned long long)arg1 ;
-(void)set_timeoutIntervalForResource:(double)arg1 ;
-(double)_timeoutIntervalForResource;
-(BOOL)_allowsRetryForBackgroundDataTasks;
-(void)set_sourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(NSString *)_sourceApplicationSecondaryIdentifier;
-(void)set_sourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSString *)_sourceApplicationBundleIdentifier;
-(BOOL)_allowsPowerNapScheduling;
-(BOOL)_allowsExpensiveAccess;
-(double)_timeoutIntervalForRequest;
-(void)set_allowsExpensiveAccess:(BOOL)arg1 ;
-(void)set_allowsPowerNapScheduling:(BOOL)arg1 ;
-(void)set_allowsRetryForBackgroundDataTasks:(BOOL)arg1 ;
-(unsigned long long)discretionaryNetworkBehavior;
-(BOOL)allowExpiredDNSBehavior;
-(void)setDuetPreClearedMode:(unsigned long long)arg1 ;
-(unsigned long long)duetPreClearedMode;
-(void)setTlsPinning:(BOOL)arg1 ;
-(void)setOutOfProcessPoolName:(NSString *)arg1 ;
-(void)set_timeoutIntervalForRequest:(double)arg1 ;
-(void)set_appleIDContextSessionIdentifier:(NSString *)arg1 ;
-(void)setAllowRouting:(BOOL)arg1 ;
-(void)setAllowExpiredDNSBehavior:(BOOL)arg1 ;
-(void)setMetricOptions:(C2MetricOptions *)arg1 ;
-(NSURL *)c2MetricsEndpoint;
-(void)setC2MetricsEndpoint:(NSURL *)arg1 ;
-(C2MetricOptions *)metricOptions;
-(id)copyAndDecorateRequest:(id)arg1 ;
-(void)setMetricRequest:(BOOL)arg1 ;
-(void)setResolvedEndpointsWithHostname:(NSDictionary *)arg1 ;
-(BOOL)metricRequest;
-(BOOL)tlsPinning;
-(id)sessionConfigurationNameWithRouteHost:(id)arg1 ;
-(BOOL)outOfProcess;
-(NSString *)outOfProcessPoolName;
-(NSString *)_appleIDContextSessionIdentifier;
-(BOOL)redactRemoteEndpointFromNetworkMetrics;
-(void)setUseAdaptiveTimeouts:(BOOL)arg1 ;
-(void)setRedactRemoteEndpointFromNetworkMetrics:(BOOL)arg1 ;
-(void)setOriginalHost:(NSString *)arg1 ;
-(void)setInvokedURL:(NSURL *)arg1 ;
-(void)setTestBehavior_sessionGroupCreated:(id)arg1 ;
-(BOOL)useAdaptiveTimeouts;
-(id)defaultSessionConfigurationWithName:(id)arg1 ;
-(BOOL)allowRouting;
-(NSDictionary *)resolvedEndpointsWithHostname;
-(NSString *)originalHost;
-(NSURL *)invokedURL;
-(void)setOutOfProcess:(BOOL)arg1 ;
-(id)sessionConfigurationWithName:(id)arg1 ;
-(id)decorateTask:(id)arg1 ;
-(double)emptySessionExpiryInSeconds;
-(BOOL)outOfProcessDiscretionary;
-(void)setOutOfProcessDiscretionary:(BOOL)arg1 ;
-(unsigned long long)c2MetricsReportFrequency;
-(void)setC2MetricsReportFrequency:(unsigned long long)arg1 ;
-(unsigned long long)c2MetricsReportFrequencyBase;
-(void)setC2MetricsReportFrequencyBase:(unsigned long long)arg1 ;
-(id)testBehavior_sessionGroupCreated;
@end

