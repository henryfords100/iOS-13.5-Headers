/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface _SFStoreBannerTracker : NSObject {

	NSMutableDictionary* _blockedProducts;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedTracker;
-(id)init;
-(void)load;
-(void)clear;
-(void)save;
-(id)filePath;
-(void)isProductBannerBlocked:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)blockProductBanner:(id)arg1 ;
@end
