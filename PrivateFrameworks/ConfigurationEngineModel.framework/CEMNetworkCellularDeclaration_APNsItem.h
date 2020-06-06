/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:15 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSNumber;

@interface CEMNetworkCellularDeclaration_APNsItem : CEMPayloadBase {

	NSString* _payloadName;
	NSString* _payloadAuthenticationType;
	NSString* _payloadUsername;
	NSString* _payloadPassword;
	NSString* _payloadProxyServer;
	NSNumber* _payloadProxyPort;
	NSNumber* _payloadDefaultProtocolMask;
	NSNumber* _payloadAllowedProtocolMask;
	NSNumber* _payloadAllowedProtocolMaskInRoaming;

}

@property (nonatomic,copy) NSString * payloadName;                                      //@synthesize payloadName=_payloadName - In the implementation block
@property (nonatomic,copy) NSString * payloadAuthenticationType;                        //@synthesize payloadAuthenticationType=_payloadAuthenticationType - In the implementation block
@property (nonatomic,copy) NSString * payloadUsername;                                  //@synthesize payloadUsername=_payloadUsername - In the implementation block
@property (nonatomic,copy) NSString * payloadPassword;                                  //@synthesize payloadPassword=_payloadPassword - In the implementation block
@property (nonatomic,copy) NSString * payloadProxyServer;                               //@synthesize payloadProxyServer=_payloadProxyServer - In the implementation block
@property (nonatomic,copy) NSNumber * payloadProxyPort;                                 //@synthesize payloadProxyPort=_payloadProxyPort - In the implementation block
@property (nonatomic,copy) NSNumber * payloadDefaultProtocolMask;                       //@synthesize payloadDefaultProtocolMask=_payloadDefaultProtocolMask - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowedProtocolMask;                       //@synthesize payloadAllowedProtocolMask=_payloadAllowedProtocolMask - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowedProtocolMaskInRoaming;              //@synthesize payloadAllowedProtocolMaskInRoaming=_payloadAllowedProtocolMaskInRoaming - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithName:(id)arg1 ;
+(id)buildWithName:(id)arg1 withAuthenticationType:(id)arg2 withUsername:(id)arg3 withPassword:(id)arg4 withProxyServer:(id)arg5 withProxyPort:(id)arg6 withDefaultProtocolMask:(id)arg7 withAllowedProtocolMask:(id)arg8 withAllowedProtocolMaskInRoaming:(id)arg9 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadPassword:(NSString *)arg1 ;
-(NSString *)payloadPassword;
-(void)setPayloadName:(NSString *)arg1 ;
-(NSString *)payloadName;
-(void)setPayloadAuthenticationType:(NSString *)arg1 ;
-(void)setPayloadUsername:(NSString *)arg1 ;
-(void)setPayloadAllowedProtocolMask:(NSNumber *)arg1 ;
-(NSString *)payloadAuthenticationType;
-(NSString *)payloadUsername;
-(NSNumber *)payloadAllowedProtocolMask;
-(void)setPayloadProxyServer:(NSString *)arg1 ;
-(void)setPayloadProxyPort:(NSNumber *)arg1 ;
-(void)setPayloadDefaultProtocolMask:(NSNumber *)arg1 ;
-(void)setPayloadAllowedProtocolMaskInRoaming:(NSNumber *)arg1 ;
-(NSString *)payloadProxyServer;
-(NSNumber *)payloadProxyPort;
-(NSNumber *)payloadDefaultProtocolMask;
-(NSNumber *)payloadAllowedProtocolMaskInRoaming;
@end
