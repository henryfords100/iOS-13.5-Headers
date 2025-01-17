/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext;
@class FCCachePolicy, NSArray, NSDictionary;

@interface FCIssueHeadlinesFetchOperation : FCOperation {

	FCCachePolicy* _cachePolicy;
	/*^block*/id _fetchCompletionHandler;
	id<FCContentContext> _context;
	NSArray* _issueIDs;
	NSDictionary* _resultHeadlinesByIssue;

}

@property (nonatomic,retain) id<FCContentContext> context;                       //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSArray * issueIDs;                                 //@synthesize issueIDs=_issueIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * resultHeadlinesByIssue;              //@synthesize resultHeadlinesByIssue=_resultHeadlinesByIssue - In the implementation block
@property (nonatomic,copy) FCCachePolicy * cachePolicy;                          //@synthesize cachePolicy=_cachePolicy - In the implementation block
@property (nonatomic,copy) id fetchCompletionHandler;                            //@synthesize fetchCompletionHandler=_fetchCompletionHandler - In the implementation block
-(id)init;
-(id<FCContentContext>)context;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(void)setCachePolicy:(FCCachePolicy *)arg1 ;
-(FCCachePolicy *)cachePolicy;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(NSArray *)issueIDs;
-(void)setIssueIDs:(NSArray *)arg1 ;
-(id)fetchCompletionHandler;
-(void)setFetchCompletionHandler:(id)arg1 ;
-(id)_promiseConfiguration;
-(id)initWithContext:(id)arg1 issueIDs:(id)arg2 ;
-(id)_promiseHeldRecordsByType;
-(void)setResultHeadlinesByIssue:(NSDictionary *)arg1 ;
-(NSDictionary *)resultHeadlinesByIssue;
-(id)initWithContext:(id)arg1 issues:(id)arg2 ;
@end

