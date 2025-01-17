/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>
#import <libobjc.A.dylib/NFRemoteAdminManagerCallbacks.h>

@class NSXPCConnection, NSMutableSet, NSString;

@interface NFRemoteAdminManager : NSObject <NSXPCConnectionDelegate, NFRemoteAdminManagerCallbacks> {

	NSXPCConnection* _connection;
	BOOL _hasEventListener;
	NSMutableSet* _eventListeners;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedRemoteAdminManager;
-(id)init;
-(void)dealloc;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)registerEventListener:(id)arg1 ;
-(id)registrationInfo;
-(void)_connectIfNeeded;
-(void)unregisterEventListener:(id)arg1 ;
-(BOOL)setRegistrationInfo:(id)arg1 primaryRegionTopic:(id)arg2 ;
-(void)getSELDInfoForBroker:(/*^block*/id)arg1 ;
-(BOOL)queueServerConnection:(id)arg1 ;
-(BOOL)queueServerConnectionForApplets:(id)arg1 ;
-(void)connectToServer:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)primaryRegionTopic;
-(void)remoteAdminCleanupProgress:(double)arg1 ;
-(void)readerModeCardSessionToken:(id)arg1 ;
-(void)readerModeCardIngestionStatus:(unsigned long long)arg1 ;
-(BOOL)cancelCardIngestion;
-(void)ingestCard:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)didInvalidateXPCConnection:(id)arg1 ;
-(void)didInterruptXPCConnection:(id)arg1 ;
-(id)nextRequestForServer:(id)arg1 ;
-(id)getAPNPublicToken;
-(id)deleteAllAppletsAndCleanupWithTSM;
@end

