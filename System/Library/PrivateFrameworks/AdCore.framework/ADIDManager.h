/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/ADSingleton.h>
#import <libobjc.A.dylib/BackgroundTaskDelegate.h>
#import <libobjc.A.dylib/ADIDManager_XPC.h>

@class DSIDRecord, NSDictionary, NSArray, NSString;

@interface ADIDManager : ADSingleton <BackgroundTaskDelegate, ADIDManager_XPC> {

	DSIDRecord* _activeDSIDRecord;
	NSDictionary* _usageVectors;
	NSArray* _monthlyResetArray;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSArray * monthlyResetArray;                            //@synthesize monthlyResetArray=_monthlyResetArray - In the implementation block
@property (nonatomic,retain) NSDictionary * usageVectors;                  //@synthesize usageVectors=_usageVectors - In the implementation block
@property (retain) DSIDRecord * activeDSIDRecord;                          //@synthesize activeDSIDRecord=_activeDSIDRecord - In the implementation block
@property (nonatomic,readonly) long long IDFAMonthResetCount; 
@property (nonatomic,readonly) NSString * IDFA; 
+(void)initialize;
+(id)sharedInstance;
-(id)init;
-(id)save;
-(void)prepareForPushNotification;
-(void)reconcile:(/*^block*/id)arg1 ;
-(void)setReconcileOperations:(id)arg1 ;
-(BOOL)scheduleReconciliation:(double)arg1 ;
-(void)handleIDFAReset:(/*^block*/id)arg1 ;
-(void)setDSID:(id)arg1 withoutRestrictions:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteRecords:(/*^block*/id)arg1 ;
-(id)storableUsageVectors;
-(id)saveAndNotifyIfNecessary;
-(void)notifyActiveRecordChanged;
-(void)finishedReconciling:(/*^block*/id)arg1 withError:(id)arg2 ;
-(void)updateAccountData:(/*^block*/id)arg1 ;
-(void)setDSID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)checkForLateReconcile;
-(void)incrementMonthlyResetCount;
-(void)updateUsageVectors:(id)arg1 ;
-(void)performOperationWhenNotReconciling:(/*^block*/id)arg1 ;
-(void)performOperationAfterReconcile:(/*^block*/id)arg1 ;
-(void)handleAccountChange:(/*^block*/id)arg1 ;
-(void)cancelPendingReconcile;
-(BOOL)runTask:(id)arg1 ;
-(void)checkOnTask:(id)arg1 activity:(id)arg2 ;
-(BOOL)reconcileInProgress;
-(id)reconcileOperations;
-(id)init;
-(id)deviceIdentifiers;
-(void)forceReconcile:(/*^block*/id)arg1 ;
-(DSIDRecord *)activeDSIDRecord;
-(id)idForClientType:(long long)arg1 ;
-(NSString *)IDFA;
-(void)setMonthlyResetArray:(NSArray *)arg1 ;
-(id)reloadRecords:(id)arg1 ;
-(void)setActiveDSIDRecord:(DSIDRecord *)arg1 ;
-(NSArray *)monthlyResetArray;
-(NSDictionary *)usageVectors;
-(void)setUsageVectors:(NSDictionary *)arg1 ;
-(void)logIDs:(id)arg1 ;
-(id)encryptedIDForClientType:(long long)arg1 ;
-(BOOL)loadIDs;
-(id)loadFakeRecord:(id)arg1 ;
-(id)dsidRecord:(id)arg1 fromDict:(id)arg2 ;
-(id)readUsageVectors:(id)arg1 ;
-(long long)IDFAMonthResetCount;
-(void)reloadRecords:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)retrieveDeviceIDs;
@end
