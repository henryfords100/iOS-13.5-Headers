/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICAsyncOperation.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface ICAsyncBlockOperation : ICAsyncOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	/*^block*/id _cancellationHandler;
	/*^block*/id _startHandler;

}

@property (nonatomic,copy,readonly) id startHandler;              //@synthesize startHandler=_startHandler - In the implementation block
@property (nonatomic,copy) id cancellationHandler; 
-(void)cancel;
-(void)setCancellationHandler:(id)arg1 ;
-(id)cancellationHandler;
-(void)execute;
-(void)finishWithError:(id)arg1 ;
-(id)initWithStartHandler:(/*^block*/id)arg1 ;
-(id)startHandler;
@end

