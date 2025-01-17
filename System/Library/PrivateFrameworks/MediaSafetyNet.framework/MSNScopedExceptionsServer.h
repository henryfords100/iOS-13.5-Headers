/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaSafetyNet.framework/MediaSafetyNet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/MSNScopedExceptionsProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, NSMutableArray, NSObject, NSString;

@interface MSNScopedExceptionsServer : NSObject <NSXPCListenerDelegate, MSNScopedExceptionsProtocol> {

	NSXPCListener* _listener;
	NSMutableArray* _activeExceptions;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedProxy;
+(id)validExceptions;
+(id)validEntitlements;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithQueue:(id)arg1 ;
-(void)beginException:(id)arg1 ;
-(void)endException:(id)arg1 ;
-(BOOL)isExceptionInEffect:(id)arg1 ;
-(BOOL)isConnectionAllowedToAssertException:(id)arg1 ;
@end

