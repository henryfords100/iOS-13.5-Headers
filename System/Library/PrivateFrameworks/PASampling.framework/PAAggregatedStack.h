/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PAAggregatedStack <NSObject>
@required
-(int)count;
-(long long)compare:(id)arg1;
-(void)printToOutputStream:(id)arg1;
-(void)addSampleThread:(id)arg1 atTimestampIndex:(unsigned long long)arg2 fillGapInTimestampIndexWithPreviousThreads:(BOOL)arg3;

@end

