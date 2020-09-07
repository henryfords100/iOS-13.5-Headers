/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PPContactClientProtocol.h>

@class PPXPCClientHelper, PPXPCClientPipelinedBatchQueryManager;

@interface PPContactClient : NSObject <PPContactClientProtocol> {

	PPXPCClientHelper* _clientHelper;
	PPXPCClientPipelinedBatchQueryManager* _queryManager;

}
+(id)sharedInstance;
-(id)init;
-(id)_remoteObjectProxy;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_unblockPendingQueries;
-(void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)arg1 chosenContactIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)rankedContactsBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)contactNameRecordBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)contactNameRecordChangesBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)rankedContactsWithQuery:(id)arg1 error:(id*)arg2 handleBatch:(/*^block*/id)arg3 ;
-(BOOL)contactNameRecordsForClient:(id)arg1 error:(id*)arg2 handleBatch:(/*^block*/id)arg3 ;
-(void)contactNameRecordChangesForClient:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)contactNameRecordChangesForClient:(id)arg1 error:(id*)arg2 handleBatch:(/*^block*/id)arg3 ;
@end
