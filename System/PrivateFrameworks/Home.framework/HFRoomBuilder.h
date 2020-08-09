/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemBuilder.h>

@class NSString, HFWallpaperEditCollectionBuilder, HFMutableSetDiff, HMRoom, NSSet;

@interface HFRoomBuilder : HFItemBuilder {

	NSString* _name;
	HFWallpaperEditCollectionBuilder* _wallpaperBuilder;
	HFMutableSetDiff* _accessoryUUIDs;

}

@property (nonatomic,retain) HFWallpaperEditCollectionBuilder * wallpaperBuilder;              //@synthesize wallpaperBuilder=_wallpaperBuilder - In the implementation block
@property (nonatomic,retain) HFMutableSetDiff * accessoryUUIDs;                                //@synthesize accessoryUUIDs=_accessoryUUIDs - In the implementation block
@property (nonatomic,readonly) HMRoom * room; 
@property (nonatomic,copy) NSString * name;                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSSet * accessories; 
+(Class)homeKitRepresentationClass;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)_updateAccessories;
-(NSSet *)accessories;
-(HMRoom *)room;
-(void)addAccessory:(id)arg1 ;
-(void)setRoom:(HMRoom *)arg1 ;
-(id)_updateName;
-(void)removeAccessory:(id)arg1 ;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 ;
-(id)_performValidation;
-(id)commitItem;
-(HFWallpaperEditCollectionBuilder *)wallpaperBuilder;
-(void)setWallpaperBuilder:(HFWallpaperEditCollectionBuilder *)arg1 ;
-(HFMutableSetDiff *)accessoryUUIDs;
-(void)setAccessoryUUIDs:(HFMutableSetDiff *)arg1 ;
-(id)_createRoom;
@end
