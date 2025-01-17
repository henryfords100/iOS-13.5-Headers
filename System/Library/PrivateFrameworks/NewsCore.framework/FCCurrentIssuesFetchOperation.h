/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext;
@class FCCachePolicy, NSArray;

@interface FCCurrentIssuesFetchOperation : FCOperation {

	FCCachePolicy* _cachePolicy;
	/*^block*/id _fetchCompletionHandler;
	id<FCContentContext> _context;
	NSArray* _resultIssues;

}

@property (nonatomic,retain) id<FCContentContext> context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSArray * resultIssues;                    //@synthesize resultIssues=_resultIssues - In the implementation block
@property (nonatomic,copy) FCCachePolicy * cachePolicy;                 //@synthesize cachePolicy=_cachePolicy - In the implementation block
@property (nonatomic,copy) id fetchCompletionHandler;                   //@synthesize fetchCompletionHandler=_fetchCompletionHandler - In the implementation block
-(id)init;
-(id<FCContentContext>)context;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)setCachePolicy:(FCCachePolicy *)arg1 ;
-(FCCachePolicy *)cachePolicy;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(id)fetchCompletionHandler;
-(void)setFetchCompletionHandler:(id)arg1 ;
-(void)setResultIssues:(NSArray *)arg1 ;
-(NSArray *)resultIssues;
@end

