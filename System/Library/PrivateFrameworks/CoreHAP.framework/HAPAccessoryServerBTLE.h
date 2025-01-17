/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAPAccessoryServer.h>

@class NSNumber, CBPeripheral, HAPAccessoryServerBrowserBTLE;

@interface HAPAccessoryServerBTLE : HAPAccessoryServer {

	unsigned char _connectReason;
	BOOL _stateChanged;
	BOOL _notifyingCharacteristicUpdated;
	unsigned char _connectionIdleTime;
	NSNumber* _stateNumber;
	CBPeripheral* _peripheral;
	unsigned long long _hapBLEProtocolVersion;
	unsigned long long _resumeSessionID;
	HAPAccessoryServerBrowserBTLE* _browser;

}

@property (nonatomic,__weak,readonly) HAPAccessoryServerBrowserBTLE * browser;              //@synthesize browser=_browser - In the implementation block
@property (assign,nonatomic) unsigned char connectionIdleTime;                              //@synthesize connectionIdleTime=_connectionIdleTime - In the implementation block
@property (nonatomic,copy) NSNumber * stateNumber;                                          //@synthesize stateNumber=_stateNumber - In the implementation block
@property (assign,nonatomic) BOOL stateChanged;                                             //@synthesize stateChanged=_stateChanged - In the implementation block
@property (assign,nonatomic) unsigned char connectReason;                                   //@synthesize connectReason=_connectReason - In the implementation block
@property (assign,nonatomic) BOOL notifyingCharacteristicUpdated;                           //@synthesize notifyingCharacteristicUpdated=_notifyingCharacteristicUpdated - In the implementation block
@property (nonatomic,readonly) CBPeripheral * peripheral;                                   //@synthesize peripheral=_peripheral - In the implementation block
@property (nonatomic,readonly) unsigned long long hapBLEProtocolVersion;                    //@synthesize hapBLEProtocolVersion=_hapBLEProtocolVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long resumeSessionID;                          //@synthesize resumeSessionID=_resumeSessionID - In the implementation block
+(id)hapUUIDFromBTLEUUID:(id)arg1 ;
-(HAPAccessoryServerBrowserBTLE *)browser;
-(long long)linkType;
-(void)setStateChanged:(BOOL)arg1 ;
-(BOOL)stateChanged;
-(CBPeripheral *)peripheral;
-(void)setStateNumber:(NSNumber *)arg1 ;
-(NSNumber *)stateNumber;
-(unsigned long long)resumeSessionID;
-(BOOL)notifyingCharacteristicUpdated;
-(void)setNotifyingCharacteristicUpdated:(BOOL)arg1 ;
-(void)handleDisconnectionWithError:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateConnectionIdleTime:(unsigned char)arg1 ;
-(void)handleConnectionWithPeripheral:(id)arg1 withError:(id)arg2 ;
-(id)initWithPeripheral:(id)arg1 name:(id)arg2 pairingUsername:(id)arg3 statusFlags:(id)arg4 stateNumber:(id)arg5 stateChanged:(BOOL)arg6 connectReason:(unsigned char)arg7 configNumber:(id)arg8 category:(id)arg9 setupHash:(id)arg10 connectionIdleTime:(unsigned char)arg11 browser:(id)arg12 keyStore:(id)arg13 ;
-(unsigned char)connectReason;
-(void)setConnectionIdleTime:(unsigned char)arg1 ;
-(void)updatePeripheral:(id)arg1 ;
-(unsigned char)connectionIdleTime;
-(BOOL)updatePeripheralIdentifier:(id*)arg1 ;
-(BOOL)updateResumeSessionID:(unsigned long long)arg1 ;
-(unsigned long long)hapBLEProtocolVersion;
-(void)generateBroadcastKey:(unsigned char)arg1 queue:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)configureCharacteristics:(id)arg1 queue:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setConnectReason:(unsigned char)arg1 ;
@end

