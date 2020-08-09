/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTScheduler, NAScheduler;
@class NSXPCConnection, MTXPCConnectionInfo, NSDate;

@interface MTXPCConnectionProvider : NSObject {

	NSXPCConnection* _connection;
	MTXPCConnectionInfo* _info;
	/*^block*/id _errorHandler;
	/*^block*/id _reconnectHandler;
	id<MTScheduler> _serializer;
	id<NAScheduler> _callbackScheduler;
	NSDate* _lastLifecycleNotification;

}

@property (nonatomic,retain) id<MTScheduler> serializer;                      //@synthesize serializer=_serializer - In the implementation block
@property (nonatomic,retain) id<NAScheduler> callbackScheduler;               //@synthesize callbackScheduler=_callbackScheduler - In the implementation block
@property (nonatomic,retain) MTXPCConnectionInfo * info;                      //@synthesize info=_info - In the implementation block
@property (nonatomic,copy) id errorHandler;                                   //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,copy) id reconnectHandler;                               //@synthesize reconnectHandler=_reconnectHandler - In the implementation block
@property (nonatomic,retain) NSDate * lastLifecycleNotification;              //@synthesize lastLifecycleNotification=_lastLifecycleNotification - In the implementation block
+(id)providerWithConnectionInfo:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
+(id)providerWithConnectionInfo:(id)arg1 reconnectHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(id)connection;
-(MTXPCConnectionInfo *)info;
-(void)setInfo:(MTXPCConnectionInfo *)arg1 ;
-(id<MTScheduler>)serializer;
-(void)setSerializer:(id<MTScheduler>)arg1 ;
-(id)initWithConnectionInfo:(id)arg1 errorHandler:(/*^block*/id)arg2 reconnectHandler:(/*^block*/id)arg3 ;
-(void)didReceiveLifecycleNotification;
-(void)_didInterruptConnection;
-(void)_didInvalidateConnection;
-(id)_connectionRebuildingIfNecessary;
-(void)_retryConnectionWithRecover:(BOOL)arg1 ;
-(id)reconnectHandler;
-(void)performRemoteBlock:(/*^block*/id)arg1 withErrorHandler:(/*^block*/id)arg2 ;
-(id)_retryConnection;
-(void)performRemoteBlock:(/*^block*/id)arg1 withErrorHandler:(/*^block*/id)arg2 isSynchronous:(BOOL)arg3 ;
-(id)_syncRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_asyncRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)connectionFuture;
-(id)_remoteObjectProxyWithXPCConnectionProvider:(/*^block*/id)arg1 remoteObjectProxyProvider:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)performRemoteBlock:(/*^block*/id)arg1 ;
-(void)setReconnectHandler:(id)arg1 ;
-(id<NAScheduler>)callbackScheduler;
-(void)setCallbackScheduler:(id<NAScheduler>)arg1 ;
-(NSDate *)lastLifecycleNotification;
-(void)setLastLifecycleNotification:(NSDate *)arg1 ;
@end
