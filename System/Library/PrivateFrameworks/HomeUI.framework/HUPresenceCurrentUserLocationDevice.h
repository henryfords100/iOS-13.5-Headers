/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMDevice;

@interface HUPresenceCurrentUserLocationDevice : NSObject {

	unsigned long long _type;
	HMDevice* _customDevice;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) HMDevice * customDevice;              //@synthesize customDevice=_customDevice - In the implementation block
+(id)currentDevice;
+(id)FMFDevice;
+(id)customDeviceWithHMDevice:(id)arg1 ;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 customDevice:(id)arg2 ;
-(HMDevice *)customDevice;
@end

