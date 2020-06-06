/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:17 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMSystemTVRemoteDeclaration_AllowedRemotesItem : CEMPayloadBase {

	NSString* _payloadRemoteDeviceID;

}

@property (nonatomic,copy) NSString * payloadRemoteDeviceID;              //@synthesize payloadRemoteDeviceID=_payloadRemoteDeviceID - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithRemoteDeviceID:(id)arg1 ;
+(id)buildRequiredOnlyWithRemoteDeviceID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadRemoteDeviceID:(NSString *)arg1 ;
-(NSString *)payloadRemoteDeviceID;
@end
