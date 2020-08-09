/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@class NSString, CPLEngineScope, NSData, CPLEngineStore;

@interface CPLEngineScopedTask : CPLEngineSyncTask {

	NSString* _clientCacheIdentifier;
	CPLEngineScope* _scope;
	NSData* _transportScope;
	CPLEngineStore* _store;

}

@property (nonatomic,readonly) NSString * clientCacheIdentifier;              //@synthesize clientCacheIdentifier=_clientCacheIdentifier - In the implementation block
@property (nonatomic,readonly) CPLEngineScope * scope;                        //@synthesize scope=_scope - In the implementation block
@property (nonatomic,readonly) NSData * transportScope;                       //@synthesize transportScope=_transportScope - In the implementation block
@property (nonatomic,readonly) CPLEngineStore * store;                        //@synthesize store=_store - In the implementation block
-(CPLEngineStore *)store;
-(CPLEngineScope *)scope;
-(BOOL)checkScopeIsValidInTransaction:(id)arg1 ;
-(NSString *)clientCacheIdentifier;
-(NSData *)transportScope;
-(id)initWithEngineLibrary:(id)arg1 session:(id)arg2 clientCacheIdentifier:(id)arg3 scope:(id)arg4 transportScope:(id)arg5 ;
@end
