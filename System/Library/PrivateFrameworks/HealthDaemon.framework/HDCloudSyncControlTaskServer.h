/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKCloudSyncControlServerInterface.h>

@class NSString;

@interface HDCloudSyncControlTaskServer : HDStandardTaskServer <HKCloudSyncControlServerInterface>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
+(id)requiredEntitlements;
-(id)exportedInterface;
-(void)connectionInvalidated;
-(id)remoteInterface;
@end
