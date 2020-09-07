/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKIDSMessage.h>

@class NSUUID, DMFControlGroupIdentifier, NSString, NSData, NSDictionary;

@interface CRKRequestCertificatesIDSMessage : NSObject <CRKIDSMessage> {

	NSUUID* _requestIdentifier;
	DMFControlGroupIdentifier* _controlGroupIdentifier;
	long long _sourceRole;
	long long _destinationRole;
	NSString* _destinationDeviceIdentifier;
	NSData* _requesterCertificate;

}

@property (nonatomic,readonly) NSUUID * requestIdentifier;                                      //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,readonly) DMFControlGroupIdentifier * controlGroupIdentifier;              //@synthesize controlGroupIdentifier=_controlGroupIdentifier - In the implementation block
@property (nonatomic,readonly) long long sourceRole;                                            //@synthesize sourceRole=_sourceRole - In the implementation block
@property (nonatomic,readonly) long long destinationRole;                                       //@synthesize destinationRole=_destinationRole - In the implementation block
@property (nonatomic,copy,readonly) NSString * destinationDeviceIdentifier;                     //@synthesize destinationDeviceIdentifier=_destinationDeviceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * requesterCertificate;                              //@synthesize requesterCertificate=_requesterCertificate - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (nonatomic,readonly) long long messageType; 
+(id)instanceWithDictionary:(id)arg1 ;
+(id)messageWithControlGroupIdentifier:(id)arg1 destinationDeviceIdentifier:(id)arg2 sourceRole:(long long)arg3 destinationRole:(long long)arg4 requesterCertificate:(id)arg5 ;
-(NSDictionary *)dictionaryValue;
-(long long)messageType;
-(NSUUID *)requestIdentifier;
-(long long)sourceRole;
-(long long)destinationRole;
-(DMFControlGroupIdentifier *)controlGroupIdentifier;
-(NSString *)destinationDeviceIdentifier;
-(NSData *)requesterCertificate;
-(id)initWithRequestIdentifier:(id)arg1 controlGroupIdentifier:(id)arg2 destinationDeviceIdentifier:(id)arg3 sourceRole:(long long)arg4 destinationRole:(long long)arg5 requesterCertificate:(id)arg6 ;
@end
