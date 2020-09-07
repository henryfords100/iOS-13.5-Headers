/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVTStoreBackend.h>

@class NSURL, NSString, AVTCoreEnvironment, AVTArchiverBasedStoreRoot, NSDictionary, NSArray;

@interface AVTArchiverBasedStoreBackend : NSObject <AVTStoreBackend> {

	NSURL* _storeLocation;
	NSString* _domainIdentifier;
	AVTCoreEnvironment* _environment;
	AVTArchiverBasedStoreRoot* _model;
	NSDictionary* _avatarsByIdentifiers;
	NSArray* _sortedAvatars;

}

@property (nonatomic,copy,readonly) NSURL * storeLocation;                                        //@synthesize storeLocation=_storeLocation - In the implementation block
@property (nonatomic,copy,readonly) NSString * domainIdentifier;                                  //@synthesize domainIdentifier=_domainIdentifier - In the implementation block
@property (nonatomic,readonly) AVTCoreEnvironment * environment;                                  //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) AVTArchiverBasedStoreRoot * model;                                   //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSDictionary * avatarsByIdentifiers;                                   //@synthesize avatarsByIdentifiers=_avatarsByIdentifiers - In the implementation block
@property (nonatomic,copy) NSArray * sortedAvatars;                                               //@synthesize sortedAvatars=_sortedAvatars - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<AVTStoreBackendDelegate> backendDelegate; 
@property (nonatomic,readonly) id<AVTAvatarRecordChangeTracker> recordChangeTracker; 
+(id)classifyRecordsByIdentifiers:(id)arg1 ;
+(id)rootBySavingAvatarRecord:(id)arg1 afterAvatarRecord:(id)arg2 forDomainIdentifier:(id)arg3 toRoot:(id)arg4 ;
+(id)rootByRemovingAvatarWithIdentifier:(id)arg1 fromRoot:(id)arg2 ;
+(id)storeLocationForDomainIdentifier:(id)arg1 environment:(id)arg2 ;
-(NSString *)domainIdentifier;
-(AVTCoreEnvironment *)environment;
-(AVTArchiverBasedStoreRoot *)model;
-(void)setModel:(AVTArchiverBasedStoreRoot *)arg1 ;
-(void)loadModel:(id)arg1 ;
-(NSURL *)storeLocation;
-(id)avatarsForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveAvatar:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveAvatars:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteAvatarWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)duplicateAvatarRecord:(id)arg1 error:(id*)arg2 ;
-(BOOL)canCreateAvatarWithError:(id*)arg1 ;
-(id<AVTStoreBackendDelegate>)backendDelegate;
-(void)setBackendDelegate:(id<AVTStoreBackendDelegate>)arg1 ;
-(id<AVTAvatarRecordChangeTracker>)recordChangeTracker;
-(BOOL)loadContentFromDisk:(id*)arg1 ;
-(void)setSortedAvatars:(NSArray *)arg1 ;
-(void)setAvatarsByIdentifiers:(NSDictionary *)arg1 ;
-(BOOL)loadContentFromDiskIfNeeded:(id*)arg1 ;
-(id)allAvatars;
-(id)avatarsWithIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)avatarsExcludingIdentifiers:(id)arg1 error:(id*)arg2 ;
-(NSArray *)sortedAvatars;
-(BOOL)saveModel:(id)arg1 logger:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)avatarCountWithError:(id*)arg1 ;
-(id)initWithStoreLocation:(id)arg1 domainIdentifier:(id)arg2 environment:(id)arg3 ;
-(NSDictionary *)avatarsByIdentifiers;
@end
