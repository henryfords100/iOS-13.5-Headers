/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSOutputStream.h>
#import <libobjc.A.dylib/_SYStreamRunLoopSourceHandler.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>
#import <libobjc.A.dylib/SYCompressionBufferOptimization.h>
#import <libobjc.A.dylib/SYOutputCompressor.h>
#import <libobjc.A.dylib/SYStreamEventHandlerBlocks.h>
#import <libobjc.A.dylib/SYStreamThroughputCounter.h>
#import <libobjc.A.dylib/SYStreamProgress.h>

@class NSOutputStream, _SYZlibStreamInternal, NSProgress, NSString, _SYStreamGuts;

@interface SYCompressingOutputStream : NSOutputStream <_SYStreamRunLoopSourceHandler, NSStreamDelegate, SYCompressionBufferOptimization, SYOutputCompressor, SYStreamEventHandlerBlocks, SYStreamThroughputCounter, SYStreamProgress> {

	NSOutputStream* _stream;
	_SYZlibStreamInternal* _internal;
	/*^block*/id _onOpenComplete;
	/*^block*/id _onBytesAvailable;
	/*^block*/id _onSpaceAvailable;
	/*^block*/id _onEndOfFile;
	/*^block*/id _onError;
	/*^block*/id _onClose;
	NSProgress* _progress;
	unsigned long long _byteCount;
	long long _level;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=_internal,nonatomic,readonly) _SYStreamGuts * internal; 
@property (assign,nonatomic) unsigned long long inputBufferSize; 
@property (assign,nonatomic) unsigned long long outputBufferSize; 
@property (assign,nonatomic) long long compressionLevel;                               //@synthesize level=_level - In the implementation block
@property (nonatomic,copy) id onOpenComplete;                                          //@synthesize onOpenComplete=_onOpenComplete - In the implementation block
@property (nonatomic,copy) id onBytesAvailable;                                        //@synthesize onBytesAvailable=_onBytesAvailable - In the implementation block
@property (nonatomic,copy) id onSpaceAvailable;                                        //@synthesize onSpaceAvailable=_onSpaceAvailable - In the implementation block
@property (nonatomic,copy) id onEndOfFile;                                             //@synthesize onEndOfFile=_onEndOfFile - In the implementation block
@property (nonatomic,copy) id onError;                                                 //@synthesize onError=_onError - In the implementation block
@property (nonatomic,copy) id onClose;                                                 //@synthesize onClose=_onClose - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesThroughput;                     //@synthesize byteCount=_byteCount - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                                    //@synthesize progress=_progress - In the implementation block
-(void)dealloc;
-(void)open;
-(void)close;
-(id)propertyForKey:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(unsigned long long)streamStatus;
-(id)streamError;
-(id)initWithURL:(id)arg1 append:(BOOL)arg2 ;
-(id)initToMemory;
-(id)initToBuffer:(char*)arg1 capacity:(unsigned long long)arg2 ;
-(id)initToFileAtPath:(id)arg1 append:(BOOL)arg2 ;
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(BOOL)hasSpaceAvailable;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(id)_internal;
-(NSProgress *)progress;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)setCompressionLevel:(long long)arg1 ;
-(long long)compressionLevel;
-(void)_SY_notifyOnQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_dispatchMyEvent:(unsigned long long)arg1 ;
-(int)_handlePendingInput;
-(void)_postEventToDelegate:(unsigned long long)arg1 ;
-(unsigned long long)inputBufferSize;
-(void)setInputBufferSize:(unsigned long long)arg1 ;
-(unsigned long long)outputBufferSize;
-(void)setOutputBufferSize:(unsigned long long)arg1 ;
-(id)onOpenComplete;
-(void)setOnOpenComplete:(id)arg1 ;
-(id)onBytesAvailable;
-(void)setOnBytesAvailable:(id)arg1 ;
-(id)onSpaceAvailable;
-(void)setOnSpaceAvailable:(id)arg1 ;
-(id)onEndOfFile;
-(void)setOnEndOfFile:(id)arg1 ;
-(id)onError;
-(void)setOnError:(id)arg1 ;
-(id)onClose;
-(void)setOnClose:(id)arg1 ;
-(unsigned long long)bytesThroughput;
-(id)initWithDestinationStream:(id)arg1 ;
@end

