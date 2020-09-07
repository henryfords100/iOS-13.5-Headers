/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBUIBannerSource.h>
#import <libobjc.A.dylib/SBUIBannerTargetManagerObserver.h>

@protocol SBStarkNotificationsConfiguring, SBUIBannerTarget;
@class NSMutableArray, NSString;

@interface SBStarkBannerSource : NSObject <SBUIBannerSource, SBUIBannerTargetManagerObserver> {

	id<SBStarkNotificationsConfiguring> _configuration;
	void* _allowedTargetIdentifier;
	id<SBUIBannerTarget> _target;
	NSMutableArray* _enqueuedItems;

}

@property (nonatomic,readonly) id<SBStarkNotificationsConfiguring> configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<SBStarkNotificationsConfiguring>)configuration;
-(void)bannerTargetManager:(id)arg1 didAddTarget:(id)arg2 ;
-(void)bannerTargetManager:(id)arg1 didRemoveTarget:(id)arg2 ;
-(id)peekNextBannerItemForTarget:(id)arg1 ;
-(id)dequeueNextBannerItemForTarget:(id)arg1 ;
-(id)newBannerViewForContext:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 allowedTargetIdentifier:(void*)arg2 ;
-(unsigned long long)enumerateAllItemsMatchingContext:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)enqueueItem:(id)arg1 ;
-(id)indexesOfEnqueuedItemsMatchingContext:(id)arg1 ;
-(void)removeEnqueuedItemsAtIndexes:(id)arg1 ;
-(id)currentItemFromTarget;
-(void)dismissCurrentItemFromTarget;
@end
