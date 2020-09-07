/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemProvider.h>

@class NSMutableSet, HMUser, HMHome;

@interface HUCameraAccessLevelOptionItemProvider : HFItemProvider {

	NSMutableSet* _items;
	HMUser* _user;
	HMHome* _home;

}

@property (nonatomic,readonly) NSMutableSet * items;              //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) HMUser * user;                     //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) HMHome * home;                     //@synthesize home=_home - In the implementation block
-(id)init;
-(HMUser *)user;
-(HMHome *)home;
-(NSMutableSet *)items;
-(id)reloadItems;
-(id)invalidationReasons;
-(id)initWithUser:(id)arg1 home:(id)arg2 ;
@end
