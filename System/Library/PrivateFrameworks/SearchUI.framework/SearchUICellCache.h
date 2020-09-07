/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache, NSDate;

@interface SearchUICellCache : NSObject {

	NSCache* _cellCache;
	NSDate* _lastCacheClearTime;

}

@property (nonatomic,retain) NSCache * cellCache;                      //@synthesize cellCache=_cellCache - In the implementation block
@property (nonatomic,retain) NSDate * lastCacheClearTime;              //@synthesize lastCacheClearTime=_lastCacheClearTime - In the implementation block
+(id)sharedCache;
-(id)init;
-(id)cellViewsForResults:(id)arg1 ;
-(void)setCells:(id)arg1 forResults:(id)arg2 ;
-(void)setCellCache:(NSCache *)arg1 ;
-(void)setLastCacheClearTime:(NSDate *)arg1 ;
-(NSDate *)lastCacheClearTime;
-(NSCache *)cellCache;
-(id)identifierForResults:(id)arg1 ;
@end
