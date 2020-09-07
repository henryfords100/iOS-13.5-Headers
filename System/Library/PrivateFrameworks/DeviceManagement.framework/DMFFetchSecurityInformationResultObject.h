/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class DMFSecurityInformation, NSDictionary;

@interface DMFFetchSecurityInformationResultObject : CATTaskResultObject {

	DMFSecurityInformation* _securityInformation;
	NSDictionary* _valuesByPropertyKey;
	NSDictionary* _errorsByPropertyKey;

}

@property (nonatomic,copy,readonly) DMFSecurityInformation * securityInformation;              //@synthesize securityInformation=_securityInformation - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * valuesByPropertyKey;                        //@synthesize valuesByPropertyKey=_valuesByPropertyKey - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * errorsByPropertyKey;                        //@synthesize errorsByPropertyKey=_errorsByPropertyKey - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)errorsByPropertyKey;
-(NSDictionary *)valuesByPropertyKey;
-(id)initWithValuesByPropertyKey:(id)arg1 errorsByPropertyKey:(id)arg2 ;
-(DMFSecurityInformation *)securityInformation;
-(id)initWithSecurityInformation:(id)arg1 ;
@end
