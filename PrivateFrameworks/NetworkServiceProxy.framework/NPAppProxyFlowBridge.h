/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_nw_connection, OS_dispatch_queue;
@class NEAppProxyFlow, NWEndpoint, NSObject, NSError;

@interface NPAppProxyFlowBridge : NSObject {

	int _currentState;
	NEAppProxyFlow* _flow;
	NWEndpoint* _remoteEndpoint;
	NSObject*<OS_nw_connection> _connection;
	NSError* _connectionError;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) NEAppProxyFlow * flow;                               //@synthesize flow=_flow - In the implementation block
@property (retain) NWEndpoint * remoteEndpoint;                         //@synthesize remoteEndpoint=_remoteEndpoint - In the implementation block
@property (retain) NSObject*<OS_nw_connection> connection;              //@synthesize connection=_connection - In the implementation block
@property (retain) NSError * connectionError;                           //@synthesize connectionError=_connectionError - In the implementation block
@property (assign) int currentState;                                    //@synthesize currentState=_currentState - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSObject*<OS_nw_connection>)connection;
-(void)setConnection:(NSObject*<OS_nw_connection>)arg1 ;
-(int)currentState;
-(NWEndpoint *)remoteEndpoint;
-(void)setRemoteEndpoint:(NWEndpoint *)arg1 ;
-(void)setCurrentState:(int)arg1 ;
-(void)startConnection;
-(NEAppProxyFlow *)flow;
-(void)setConnectionError:(NSError *)arg1 ;
-(NSError *)connectionError;
-(void)setFlow:(NEAppProxyFlow *)arg1 ;
-(void)readDataFromClient;
-(void)readMultipleFromClient;
-(void)readMultipleFromConnection;
-(void)readDataFromConnection;
-(void)writeMultipleToConnection:(id*)arg1 count:(unsigned)arg2 ;
-(void)writeDataToConnection:(id)arg1 ;
-(id)initWithAppProxyFlow:(id)arg1 ;
@end
