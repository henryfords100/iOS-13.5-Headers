/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/STSiriModelObject.h>

@class STContactAddress;

@interface STCall : STSiriModelObject {

	long long _service;
	STContactAddress* _initiatorAddress;
	STContactAddress* _recipientAddress;

}
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)service;
-(void)setService:(long long)arg1 ;
-(id)_aceContextObjectValue;
-(id)initiatorAddress;
-(void)setInitiatorAddress:(id)arg1 ;
-(id)recipientAddress;
-(void)setRecipientAddress:(id)arg1 ;
@end
