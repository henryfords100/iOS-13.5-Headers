/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKDeviceRegionFeatureSupportedStateProvider.h>

@class NSString;

@interface HKNonMPNDeviceRegionFeatureSupportedStateProvider : NSObject <HKDeviceRegionFeatureSupportedStateProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)electrocardiogramSupportedStateForDeviceRegion:(id)arg1 ;
+(unsigned long long)electrocardiogramSupportedStateForCurrentDeviceRegion;
+(unsigned long long)electrocardiogramSupportedOnPhone:(id)arg1 iOSVersionString:(id)arg2 ;
+(unsigned long long)atrialFibrillationDetectionSupportedStateForCurrentDeviceRegion;
+(unsigned long long)atrialFibrillationDetectionSupportedStateForDeviceRegion:(id)arg1 ;
@end

