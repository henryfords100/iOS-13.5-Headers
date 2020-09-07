/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface AECameraAssetPackageGenerator : NSObject {

	NSObject*<OS_dispatch_queue> __generationQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _generationQueue;              //@synthesize _generationQueue=__generationQueue - In the implementation block
-(id)init;
-(NSObject*<OS_dispatch_queue>)_generationQueue;
-(void)_populatePackage:(id)arg1 fromReviewAsset:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)generatePackageFromReviewAsset:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end
