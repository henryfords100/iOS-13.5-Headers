/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, ATXHeuristicResultCache;

@interface ATXHeuristicCacheExpirationEntry : NSObject {

	NSString* _heuristicName;
	ATXHeuristicResultCache* _cache;

}

@property (nonatomic,retain) NSString * heuristicName;                            //@synthesize heuristicName=_heuristicName - In the implementation block
@property (assign,nonatomic,__weak) ATXHeuristicResultCache * cache;              //@synthesize cache=_cache - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setCache:(ATXHeuristicResultCache *)arg1 ;
-(ATXHeuristicResultCache *)cache;
-(id)initWithHeuristic:(id)arg1 cache:(id)arg2 ;
-(NSString *)heuristicName;
-(void)setHeuristicName:(NSString *)arg1 ;
@end
