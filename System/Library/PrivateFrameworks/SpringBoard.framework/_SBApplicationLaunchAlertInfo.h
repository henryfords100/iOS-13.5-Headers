/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableSet;

@interface _SBApplicationLaunchAlertInfo : NSObject {

	NSString* _bundleID;
	NSMutableSet* _foregroundScenes;
	NSMutableSet* _alertItems;

}

@property (nonatomic,copy,readonly) NSString * bundleID;                     //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSMutableSet * foregroundScenes;              //@synthesize foregroundScenes=_foregroundScenes - In the implementation block
@property (nonatomic,readonly) NSMutableSet * alertItems;                    //@synthesize alertItems=_alertItems - In the implementation block
-(id)description;
-(NSString *)bundleID;
-(id)initWithBundleID:(id)arg1 ;
-(NSMutableSet *)foregroundScenes;
-(NSMutableSet *)alertItems;
@end
