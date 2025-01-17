/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>

@class HFUserItem, HULocationDeviceManager, HUPresenceCurrentUserLocationDevice;

@interface HUPresenceUserOptionItem : HFItem {

	HFUserItem* _userItem;
	HULocationDeviceManager* _locationDeviceManager;
	HUPresenceCurrentUserLocationDevice* _selectedLocationDevice;

}

@property (nonatomic,readonly) HFUserItem * userItem;                                                   //@synthesize userItem=_userItem - In the implementation block
@property (nonatomic,readonly) HULocationDeviceManager * locationDeviceManager;                         //@synthesize locationDeviceManager=_locationDeviceManager - In the implementation block
@property (nonatomic,retain) HUPresenceCurrentUserLocationDevice * selectedLocationDevice;              //@synthesize selectedLocationDevice=_selectedLocationDevice - In the implementation block
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(HULocationDeviceManager *)locationDeviceManager;
-(HFUserItem *)userItem;
-(void)setSelectedLocationDevice:(HUPresenceCurrentUserLocationDevice *)arg1 ;
-(id)initWithUserItem:(id)arg1 selectedLocationDevice:(id)arg2 locationDeviceManager:(id)arg3 ;
-(HUPresenceCurrentUserLocationDevice *)selectedLocationDevice;
@end

