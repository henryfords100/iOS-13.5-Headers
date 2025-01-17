/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_transaction;
@class _CDEventIndexerBookmark, NSDate, NSObject;

@interface _CDEventIndexerContext : NSObject {

	_CDEventIndexerBookmark* _bookmark;
	long long _currentVersion;
	unsigned long long _batchSize;
	/*^block*/id _completion;
	NSDate* _indexDate;
	NSObject*<OS_os_transaction> _transaction;

}

@property (nonatomic,retain) _CDEventIndexerBookmark * bookmark;                    //@synthesize bookmark=_bookmark - In the implementation block
@property (assign,nonatomic) long long currentVersion;                              //@synthesize currentVersion=_currentVersion - In the implementation block
@property (assign,nonatomic) unsigned long long batchSize;                          //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,copy) id completion;                                           //@synthesize completion=_completion - In the implementation block
@property (nonatomic,readonly) NSDate * indexDate;                                  //@synthesize indexDate=_indexDate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> transaction;              //@synthesize transaction=_transaction - In the implementation block
-(id)init;
-(id)description;
-(long long)currentVersion;
-(void)setCompletion:(id)arg1 ;
-(unsigned long long)batchSize;
-(id)completion;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(_CDEventIndexerBookmark *)bookmark;
-(NSDate *)indexDate;
-(BOOL)isBookmarkValid;
-(BOOL)isBookmarkValidInRecoverableThreshold;
-(void)setBookmark:(_CDEventIndexerBookmark *)arg1 ;
-(void)setCurrentVersion:(long long)arg1 ;
-(NSObject*<OS_os_transaction>)transaction;
-(void)setTransaction:(NSObject*<OS_os_transaction>)arg1 ;
@end

