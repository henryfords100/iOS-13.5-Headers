/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SKUIClientContext, NSOperationQueue, SKUITrendingSearchPage, NSMutableArray, NSOperation;

@interface SKUITrendingSearchProvider : NSObject {

	SKUIClientContext* _clientContext;
	NSOperationQueue* _operationQueue;
	SKUITrendingSearchPage* _cachedSearchPage;
	NSMutableArray* _pendingCompletionBlocks;
	NSOperation* _runningRequestOperation;

}

@property (nonatomic,readonly) NSOperationQueue * callbackQueue; 
@property (nonatomic,readonly) NSOperationQueue * operationQueue;                     //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) SKUITrendingSearchPage * cachedSearchPage;               //@synthesize cachedSearchPage=_cachedSearchPage - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingCompletionBlocks;              //@synthesize pendingCompletionBlocks=_pendingCompletionBlocks - In the implementation block
@property (nonatomic,retain) NSOperation * runningRequestOperation;                   //@synthesize runningRequestOperation=_runningRequestOperation - In the implementation block
@property (nonatomic,__weak,readonly) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
-(void)dealloc;
-(void)clearCache;
-(NSOperationQueue *)operationQueue;
-(NSOperationQueue *)callbackQueue;
-(SKUIClientContext *)clientContext;
-(id)initWithClientContext:(id)arg1 ;
-(void)trendingSearchPageWithURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setCachedSearchPage:(SKUITrendingSearchPage *)arg1 ;
-(NSMutableArray *)pendingCompletionBlocks;
-(void)setRunningRequestOperation:(NSOperation *)arg1 ;
-(id)requestOperationWithPageURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(SKUITrendingSearchPage *)cachedSearchPage;
-(NSOperation *)runningRequestOperation;
-(void)requestTrendingSearchPageWithURL:(id)arg1 ;
@end
