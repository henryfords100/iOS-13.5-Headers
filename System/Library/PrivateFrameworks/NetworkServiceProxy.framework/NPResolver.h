/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/NWResolver.h>

@protocol OS_dispatch_source;
@class NSObject;

@interface NPResolver : NWResolver {

	/*^block*/id _resolveCompletionHandler;
	NSObject*<OS_dispatch_source> _resolveTimer;

}

@property (copy) id resolveCompletionHandler;                               //@synthesize resolveCompletionHandler=_resolveCompletionHandler - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> resolveTimer;              //@synthesize resolveTimer=_resolveTimer - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)resolveWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setResolveCompletionHandler:(id)arg1 ;
-(void)setResolveTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)resolveTimer;
-(id)resolveCompletionHandler;
@end

