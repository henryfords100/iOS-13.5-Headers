/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GPURawCounter.framework/GPURawCounter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GPURawCounter/GPURawCounterSource.h>

@protocol GPURawCounterSourceGroup;
@class NSString;

@interface _GPURawCounterSource : NSObject <GPURawCounterSource> {

	NSString* _name;
	id<GPURawCounterSourceGroup> _sourceGroup;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(void)setEnabled:(BOOL)arg1 ;
-(id)availableCounters;
-(void)setPeriod:(unsigned long long)arg1 ;
-(BOOL)requestCounters:(id)arg1 firstErrorIndex:(unsigned long long*)arg2 ;
-(unsigned)ringBufferNum;
-(BOOL)ringBufferInfoAtIndex:(unsigned)arg1 base:(char**)arg2 size:(unsigned*)arg3 dataOffset:(unsigned*)arg4 dataSize:(unsigned*)arg5 ;
-(unsigned)drainRingBufferAtIndex:(unsigned)arg1 dataSize:(unsigned)arg2 ;
-(void)resetRawDataPostProcessor;
-(BOOL)postProcessRawDataWithSource:(char*)arg1 sourceSize:(unsigned long long)arg2 sourceRead:(unsigned long long*)arg3 output:(char*)arg4 outputSize:(unsigned long long)arg5 outputWritten:(unsigned long long*)arg6 isLast:(BOOL)arg7 ;
-(BOOL)pollCountersAtBufferIndex:(unsigned)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)initWithSourceGroup:(id)arg1 name:(id)arg2 ;
-(unsigned long long)availableCounterTriggers;
@end

