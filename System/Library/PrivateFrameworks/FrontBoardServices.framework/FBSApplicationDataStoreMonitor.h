/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSApplicationDataStoreRepositoryClientObserver.h>

@protocol FBSApplicationDataStoreRepositoryClient;
@class NSHashTable, NSString;

@interface FBSApplicationDataStoreMonitor : NSObject <FBSApplicationDataStoreRepositoryClientObserver> {

	id<FBSApplicationDataStoreRepositoryClient> _client;
	BOOL _clientNeedsCheckin;
	NSHashTable* _observers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)initWithClient:(id)arg1 ;
-(void)applicationDataStoreRepositoryClient:(id)arg1 application:(id)arg2 changedObject:(id)arg3 forKey:(id)arg4 ;
-(void)applicationDataStoreRepositoryClient:(id)arg1 storeInvalidatedForApplication:(id)arg2 ;
-(BOOL)_hasObserver:(id)arg1 ;
@end

