/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSObject, NSString;

@interface FMFSynchronizer : NSObject {

	BOOL _timeoutOccurred;
	double _timeout;
	NSObject*<OS_dispatch_semaphore> _sem;
	NSString* _info;

}

@property (assign,nonatomic) BOOL timeoutOccurred;                              //@synthesize timeoutOccurred=_timeoutOccurred - In the implementation block
@property (assign,nonatomic) double timeout;                                    //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) NSString * info;                                   //@synthesize info=_info - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> sem;              //@synthesize sem=_sem - In the implementation block
-(void)wait;
-(void)signal;
-(double)timeout;
-(void)setTimeout:(double)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)sem;
-(NSString *)info;
-(void)setInfo:(NSString *)arg1 ;
-(void)setSem:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(id)loggingID;
-(void)setTimeoutOccurred:(BOOL)arg1 ;
-(BOOL)timeoutOccurred;
-(id)initWithDescription:(id)arg1 andTimeout:(double)arg2 ;
@end
