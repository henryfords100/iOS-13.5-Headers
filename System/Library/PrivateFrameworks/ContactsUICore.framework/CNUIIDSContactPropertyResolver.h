/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNUIIDSAvailabilityProvider;

@interface CNUIIDSContactPropertyResolver : NSObject {

	CNUIIDSAvailabilityProvider* _idsAvailabilityProvider;

}

@property (nonatomic,readonly) CNUIIDSAvailabilityProvider * idsAvailabilityProvider;              //@synthesize idsAvailabilityProvider=_idsAvailabilityProvider - In the implementation block
+(id)descriptorForRequiredKeys;
+(id)descriptorForCopyingStrippedContact:(id)arg1 ;
+(id)IDSRelevantPropertiesForContact:(id)arg1 ;
-(id)initWithIDSAvailabilityProvider:(id)arg1 ;
-(CNUIIDSAvailabilityProvider *)idsAvailabilityProvider;
-(id)resolveBestIMessageIDSPropertyForContact:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)resolveBestFaceTimeIDSPropertyForContact:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)resolveBestIDSPropertyForContact:(id)arg1 schedulerProvider:(id)arg2 usingAvailabilityProviderCall:(/*^block*/id)arg3 ;
@end

