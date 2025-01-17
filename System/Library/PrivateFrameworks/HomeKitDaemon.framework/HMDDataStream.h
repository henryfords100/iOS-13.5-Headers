/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol HMDDataStreamDelegate, HMDDataStreamTransport, OS_dispatch_queue;
@class NSString, HAPSecuritySessionEncryption, NSMapTable, HMDDataStreamControlProtocol, HMFTimer, NSObject, NSMutableSet;

@interface HMDDataStream : NSObject <HMFLogging, HMFTimerDelegate> {

	BOOL _firstMessageReceived;
	id<HMDDataStreamDelegate> _delegate;
	NSString* _logIdentifier;
	id<HMDDataStreamTransport> _transport;
	HAPSecuritySessionEncryption* _sessionEncryption;
	NSMapTable* _protocols;
	HMDDataStreamControlProtocol* _controlProtocol;
	HMFTimer* _helloMessageResponseTimer;
	NSObject*<OS_dispatch_queue> _workQueue;
	unsigned long long _nextRequestIdentifier;
	NSMutableSet* _pendingRequests;

}

@property (copy,readonly) NSString * logIdentifier;                                         //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (nonatomic,retain) id<HMDDataStreamTransport> transport;                          //@synthesize transport=_transport - In the implementation block
@property (nonatomic,retain) HAPSecuritySessionEncryption * sessionEncryption;              //@synthesize sessionEncryption=_sessionEncryption - In the implementation block
@property (nonatomic,retain) NSMapTable * protocols;                                        //@synthesize protocols=_protocols - In the implementation block
@property (nonatomic,retain) HMDDataStreamControlProtocol * controlProtocol;                //@synthesize controlProtocol=_controlProtocol - In the implementation block
@property (assign,nonatomic) BOOL firstMessageReceived;                                     //@synthesize firstMessageReceived=_firstMessageReceived - In the implementation block
@property (nonatomic,retain) HMFTimer * helloMessageResponseTimer;                          //@synthesize helloMessageResponseTimer=_helloMessageResponseTimer - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                      //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic) unsigned long long nextRequestIdentifier;                      //@synthesize nextRequestIdentifier=_nextRequestIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableSet * pendingRequests;                              //@synthesize pendingRequests=_pendingRequests - In the implementation block
@property (assign,nonatomic,__weak) id<HMDDataStreamDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)close;
-(id<HMDDataStreamDelegate>)delegate;
-(void)setDelegate:(id<HMDDataStreamDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id<HMDDataStreamTransport>)transport;
-(void)setTransport:(id<HMDDataStreamTransport>)arg1 ;
-(NSMapTable *)protocols;
-(void)connect;
-(NSMutableSet *)pendingRequests;
-(NSString *)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(void)setProtocols:(NSMapTable *)arg1 ;
-(unsigned long long)nextRequestIdentifier;
-(void)setNextRequestIdentifier:(unsigned long long)arg1 ;
-(HAPSecuritySessionEncryption *)sessionEncryption;
-(void)_sendMessageWithHeader:(id)arg1 payload:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)createRequestIdentifier;
-(BOOL)firstMessageReceived;
-(HMDDataStreamControlProtocol *)controlProtocol;
-(void)sendRequestForProtocol:(id)arg1 topic:(id)arg2 payload:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)handleFirstMessageReceivedOnDataStream:(id)arg1 payload:(id)arg2 ;
-(void)setFirstMessageReceived:(BOOL)arg1 ;
-(HMFTimer *)helloMessageResponseTimer;
-(void)handlePendingRequests;
-(void)fulfillPendingRequestWithResponseHeader:(id)arg1 payload:(id)arg2 ;
-(void)startHelloMessageResponseTimer;
-(void)setHelloMessageResponseTimer:(HMFTimer *)arg1 ;
-(id)initWithTransport:(id)arg1 sessionEncryption:(id)arg2 workQueue:(id)arg3 logIdentifier:(id)arg4 ;
-(void)addProtocol:(id)arg1 name:(id)arg2 ;
-(id)protocolDelegateHandle;
-(void)sendEventForProtocol:(id)arg1 topic:(id)arg2 payload:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)sendResponseForRequestHeader:(id)arg1 payload:(id)arg2 status:(unsigned short)arg3 completion:(/*^block*/id)arg4 ;
-(void)sendRequestForProtocol:(id)arg1 topic:(id)arg2 identifier:(unsigned long long)arg3 payload:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)transport:(id)arg1 didFailWithError:(id)arg2 ;
-(void)transport:(id)arg1 didReceiveRawFrame:(id)arg2 ;
-(void)transportDidClose:(id)arg1 ;
-(void)transportDidOpen:(id)arg1 ;
-(void)setSessionEncryption:(HAPSecuritySessionEncryption *)arg1 ;
-(void)setControlProtocol:(HMDDataStreamControlProtocol *)arg1 ;
@end

