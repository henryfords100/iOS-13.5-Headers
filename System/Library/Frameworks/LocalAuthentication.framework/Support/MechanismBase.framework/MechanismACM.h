/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/MechanismBase.framework/MechanismBase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MechanismBase/MechanismBase-Structs.h>
#import <MechanismBase/MechanismBase.h>

@interface MechanismACM : MechanismBase {

	ACMHandleRef _acmContext;
	unsigned long long _acmFlags;

}

@property (nonatomic,readonly) ACMHandleRef acmContext;                  //@synthesize acmContext=_acmContext - In the implementation block
@property (nonatomic,readonly) unsigned long long acmFlags;              //@synthesize acmFlags=_acmFlags - In the implementation block
-(ACMHandleRef)acmContext;
-(id)initWithEventIdentifier:(long long)arg1 remoteViewController:(long long)arg2 acmContextRecord:(id)arg3 request:(id)arg4 ;
-(unsigned long long)acmFlags;
@end

