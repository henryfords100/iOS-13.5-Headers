/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <libobjc.A.dylib/SYSyncEngineResponder.h>
#import <libobjc.A.dylib/SYStateLoggable.h>

@protocol SYServiceDelegate, OS_dispatch_queue, OS_dispatch_source, OS_os_activity;
@class NSDictionary, PBCodable, NSString, SYSession, NSObject, _SYMultiSuspendableQueue, SYPersistentStore, SYSyncEngine, SYVectorClock, NSMutableSet, _SYQueuedStartSession, SYDevice, NSMutableArray, NSArray;

@interface SYService : NSObject <SYSyncEngineResponder, SYStateLoggable> {

	NSString* _serviceName;
	long long _defaultPriority;
	NSDictionary* _defaultOptions;
	NSDictionary* _customIDSOptions;
	SYSession* _currentSession;
	id<SYServiceDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _incomingIOQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	_SYMultiSuspendableQueue* _sessionQueue;
	NSObject*<OS_dispatch_source> _processSignalSource;
	SYPersistentStore* _persistentStore;
	SYSyncEngine* _syncEngine;
	SYVectorClock* _vectorClock;
	NSMutableSet* _rejectingV1SyncSessions;
	NSString* _inFlightSyncRequestIdentifier;
	_SYQueuedStartSession* _queuedStartSession;
	SYDevice* _targetedDevice;
	NSMutableArray* _onSessionEnd;
	NSObject*<OS_os_activity> _serviceActivity;
	unsigned long long _stateHandle;
	os_unfair_lock_s _flagLock;
	struct {
		unsigned isMaster : 1;
		unsigned hasChanges : 1;
		unsigned needsReset : 1;
		unsigned hasPairingStore : 1;
		unsigned isRunning : 1;
		unsigned registeredForPairingNotifications : 1;
		unsigned remoteProtocolVersion : 3;
		unsigned remoteDeviceIsWatch : 1;
		unsigned isObservingRemoteDeviceProperties : 1;
		unsigned requestedEngineType : 3;
		unsigned assignedEngineType : 3;
		unsigned suspendedForQWS : 1;
	}  _flags;
	NSString* _peerID;
	double _defaultMessageTimeout;
	double _sessionStalenessInterval;
	long long _sendingBufferCap;
	NSArray* _aggdKeys;
	long long _engineType;
	NSString* _generationID;

}

@property (nonatomic,copy) NSDictionary * customIDSOptions; 
@property (nonatomic,readonly) BOOL hasPairingStore; 
@property (nonatomic,copy,readonly) NSArray * aggdKeys;                                //@synthesize aggdKeys=_aggdKeys - In the implementation block
@property (nonatomic,readonly) SYSyncEngine * syncEngine;                              //@synthesize syncEngine=_syncEngine - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) SYPersistentStore * persistentStore;                    //@synthesize persistentStore=_persistentStore - In the implementation block
@property (nonatomic,readonly) _SYMultiSuspendableQueue * sessionQueue;                //@synthesize sessionQueue=_sessionQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_activity> serviceActivity;              //@synthesize serviceActivity=_serviceActivity - In the implementation block
@property (nonatomic,readonly) NSString * peerID;                                      //@synthesize peerID=_peerID - In the implementation block
@property (assign,nonatomic) long long engineType;                                     //@synthesize engineType=_engineType - In the implementation block
@property (nonatomic,readonly) NSString * generationID;                                //@synthesize generationID=_generationID - In the implementation block
@property (nonatomic,readonly) NSString * name;                                        //@synthesize serviceName=_serviceName - In the implementation block
@property (assign,nonatomic) long long priority;                                       //@synthesize defaultPriority=_defaultPriority - In the implementation block
@property (nonatomic,readonly) BOOL isMasterStore; 
@property (assign,nonatomic) double defaultMessageTimeout;                             //@synthesize defaultMessageTimeout=_defaultMessageTimeout - In the implementation block
@property (assign,nonatomic) double sessionStalenessInterval;                          //@synthesize sessionStalenessInterval=_sessionStalenessInterval - In the implementation block
@property (nonatomic,readonly) BOOL targetIsInProximity; 
@property (nonatomic,readonly) BOOL targetIsConnected; 
@property (readonly) SYSession * currentSession; 
@property (nonatomic,retain) NSDictionary * options;                                   //@synthesize defaultOptions=_defaultOptions - In the implementation block
@property (assign,nonatomic) long long sendingBufferCap;                               //@synthesize sendingBufferCap=_sendingBufferCap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * extraTransportOptions; 
@property (nonatomic,readonly) PBCodable * stateForLogging; 
-(id)init;
-(void)dealloc;
-(void)_suspend;
-(NSString *)name;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSDictionary *)options;
-(void)suspend;
-(void)setOptions:(NSDictionary *)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(_SYMultiSuspendableQueue *)sessionQueue;
-(SYSession *)currentSession;
-(NSString *)generationID;
-(SYPersistentStore *)persistentStore;
-(NSString *)peerID;
-(void)_handleError:(id)arg1 ;
-(BOOL)resume:(id*)arg1 ;
-(void)_processPendingChanges;
-(long long)engineType;
-(void)setEngineType:(long long)arg1 ;
-(id)initWithService:(id)arg1 priority:(long long)arg2 asMasterStore:(BOOL)arg3 options:(id)arg4 ;
-(void)setNeedsResetSync;
-(void)setHasChangesAvailable;
-(double)defaultMessageTimeout;
-(void)setDefaultMessageTimeout:(double)arg1 ;
-(NSDictionary *)customIDSOptions;
-(void)setCustomIDSOptions:(NSDictionary *)arg1 ;
-(BOOL)hasPairingStore;
-(NSObject*<OS_os_activity>)serviceActivity;
-(id)_newMessageHeader;
-(SYSyncEngine *)syncEngine;
-(void)sessionDidEnd:(id)arg1 withError:(id)arg2 ;
-(void)_vectorClockUpdated;
-(void)_copyPeerClockFromMessageHeaderIfNecessary:(id)arg1 ;
-(id)initWithService:(id)arg1 priority:(long long)arg2 qos:(unsigned)arg3 asMasterStore:(BOOL)arg4 options:(id)arg5 ;
-(void)_setupPairingNotifications;
-(void)_updateMetaProtocolInfoForDevice:(id)arg1 ;
-(PBCodable *)stateForLogging;
-(void)_deviceTargetabilityChanged:(id)arg1 ;
-(void)_deviceRemoved:(id)arg1 ;
-(BOOL)_protocolVersion:(int)arg1 supportsEngineType:(long long)arg2 ;
-(void)_upgradeEngineTo:(long long)arg1 ;
-(void)_downgradeEngineForVersion:(int)arg1 ;
-(void)_setProtocolVersionForRemoteOSVersion:(id)arg1 build:(id)arg2 remoteIsWatch:(BOOL)arg3 switchingEngines:(BOOL)arg4 ;
-(void)_deviceOSInfoChanged:(id)arg1 ;
-(void)_removePairingStoreDevice;
-(void)_setupPairingStoreWithDevice:(id)arg1 ;
-(void)_dealWithPotentiallyStallingCurrentSession;
-(void)_signalPairingStoreAvailable;
-(void)_ifDelegateImplements:(SEL)arg1 do:(/*^block*/id)arg2 then:(/*^block*/id)arg3 ;
-(void)_switchToNewTargetedDevice:(id)arg1 ;
-(void)_signalPairingStoreUnavailable;
-(BOOL)_initializeServiceDB:(id*)arg1 ;
-(BOOL)_initializeMessaging:(id*)arg1 ;
-(BOOL)isMasterStore;
-(NSArray *)aggdKeys;
-(void)_sendResetRequest;
-(id)_makeSessionForDeltaSync:(BOOL)arg1 ;
-(id)_pathForDataStore;
-(id)_makeSyncEngineOfType:(long long)arg1 ;
-(void)_whenSessionEnds:(/*^block*/id)arg1 ;
-(void)_swapEngineTo:(long long)arg1 ;
-(void)_wrapUpCurrentSession:(id)arg1 ;
-(void)_handleStartSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_chooseBetweenCollidingSessions:(id)arg1 :(id)arg2 ;
-(void)_postVersionRejectionMessageForMessageWithID:(id)arg1 ;
-(void)_v1_handleFullSyncRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_v1_handleSyncAllObjects:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_v1_handleBatchSyncStart:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_v1_handleBatchSyncChunk:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_v1_handleBatchSyncEnd:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_v1_handleChangeMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleResetRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleSyncBatch:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleRestartSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleEndSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_peerRejectedVersion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_v1_handleFullSyncRequestAck:(id)arg1 error:(id*)arg2 ;
-(BOOL)_v1_handleBatchChunkAck:(id)arg1 error:(id*)arg2 ;
-(BOOL)_v1_handleBatchEndResponse:(id)arg1 error:(id*)arg2 ;
-(BOOL)_handleResetResponse:(id)arg1 error:(id*)arg2 ;
-(BOOL)_handleStartSessionResponse:(id)arg1 error:(id*)arg2 ;
-(BOOL)_handleSyncBatchResponse:(id)arg1 error:(id*)arg2 ;
-(BOOL)_handleRestartSessionResponse:(id)arg1 error:(id*)arg2 ;
-(BOOL)_handleEndSessionResponse:(id)arg1 error:(id*)arg2 ;
-(id)_claimOwnershipOfFileAtURL:(id)arg1 error:(id*)arg2 ;
-(id)_sessionFromIncomingStartRequest:(id)arg1 ;
-(void)_enqueueIncomingStartSessionRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)_shouldSession:(id)arg1 fromPeer:(id)arg2 supercedeSession:(id)arg3 ofAge:(double)arg4 collisionDetected:(BOOL*)arg5 ;
-(BOOL)_request:(id)arg1 hasValidSessionIDForSession:(id)arg2 response:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_swapSessionForVersionChange;
-(BOOL)willAcceptMessageWithHeader:(id)arg1 messageID:(id)arg2 ;
-(void)handleSyncRequest:(id)arg1 ofType:(unsigned short)arg2 response:(/*^block*/id)arg3 ;
-(void)handleSyncResponse:(id)arg1 ofType:(unsigned short)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleOutOfBandData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleFileTransfer:(id)arg1 metadata:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleSyncError:(id)arg1 forMessageWithIdentifier:(id)arg2 ;
-(void)enqueuedMessageWithID:(id)arg1 context:(id)arg2 ;
-(void)sentMessageWithID:(id)arg1 context:(id)arg2 ;
-(void)deliveredMessageWithID:(id)arg1 context:(id)arg2 ;
-(void)serializeForIncomingSession:(/*^block*/id)arg1 ;
-(void)currentDeviceProximityChanged:(BOOL)arg1 ;
-(void)currentDeviceConnectionChanged:(BOOL)arg1 ;
-(NSDictionary *)extraTransportOptions;
-(BOOL)targetIsInProximity;
-(BOOL)targetIsConnected;
-(void)sessionFailedToCancelMessageUUIDs:(id)arg1 ;
-(double)sessionStalenessInterval;
-(void)setSessionStalenessInterval:(double)arg1 ;
-(long long)sendingBufferCap;
-(void)setSendingBufferCap:(long long)arg1 ;
-(void)sendData:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)sendData:(id)arg1 options:(id)arg2 identifier:(id*)arg3 error:(id*)arg4 ;
-(void)dataStreamWithMetadata:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)dataStreamWithMetadata:(id)arg1 options:(id)arg2 identifier:(id*)arg3 error:(id*)arg4 ;
@end

