/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUExpandableItemContainerModule.h>
#import <libobjc.A.dylib/HUCameraSettingsModule.h>

@class UIViewController, NSSet, HMHome, HFItemProvider, NSArray, NSString;

@interface HUCameraPermissionsSettingsModule : HUExpandableItemContainerModule <HUCameraSettingsModule> {

	NSSet* _itemProviders;
	unsigned long long _displayStyle;
	HMHome* _home;
	HFItemProvider* _headerItemProvider;
	NSArray* _userSectionModules;

}

@property (nonatomic,retain) NSSet * itemProviders;                                    //@synthesize itemProviders=_itemProviders - In the implementation block
@property (nonatomic,retain) HFItemProvider * headerItemProvider;                      //@synthesize headerItemProvider=_headerItemProvider - In the implementation block
@property (nonatomic,retain) NSArray * userSectionModules;                             //@synthesize userSectionModules=_userSectionModules - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                          //@synthesize home=_home - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long displayStyle;                        //@synthesize displayStyle=_displayStyle - In the implementation block
@property (nonatomic,retain) UIViewController * presentingViewController; 
-(HMHome *)home;
-(NSSet *)itemProviders;
-(void)setItemProviders:(NSSet *)arg1 ;
-(unsigned long long)displayStyle;
-(id)initWithItemUpdater:(id)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)didSelectItem:(id)arg1 ;
-(void)_buildItemProviders;
-(id)initWithItemUpdater:(id)arg1 home:(id)arg2 displayStyle:(unsigned long long)arg3 ;
-(HFItemProvider *)headerItemProvider;
-(void)setHeaderItemProvider:(HFItemProvider *)arg1 ;
-(void)setUserSectionModules:(NSArray *)arg1 ;
-(id)expandableModules;
-(NSArray *)userSectionModules;
-(BOOL)isItemHeader:(id)arg1 ;
-(unsigned long long)accessModeSettingForUser:(id)arg1 ;
@end

