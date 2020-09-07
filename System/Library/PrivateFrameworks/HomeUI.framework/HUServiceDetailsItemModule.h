/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemModule.h>

@class HMHome, HFItem;

@interface HUServiceDetailsItemModule : HFItemModule {

	HMHome* _home;
	HFItem* _sourceItem;

}

@property (nonatomic,retain) HMHome * home;                    //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) HFItem * sourceItem;              //@synthesize sourceItem=_sourceItem - In the implementation block
+(/*^block*/id)serviceDetailsItemSectionComparatorForSortStrategy:(id)arg1 ;
-(HMHome *)home;
-(id)itemProviders;
-(void)setHome:(HMHome *)arg1 ;
-(HFItem *)sourceItem;
-(void)setSourceItem:(HFItem *)arg1 ;
-(id)initWithItemUpdater:(id)arg1 home:(id)arg2 sourceItem:(id)arg3 ;
@end
