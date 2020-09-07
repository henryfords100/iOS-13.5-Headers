/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSMutableDictionary, VCMasterKeyIndex, NSObject, NSMutableArray;

@interface VCSecurityKeyManager : NSObject {

	NSMutableDictionary* _sendKeys;
	NSMutableDictionary* _receiveKeys;
	VCMasterKeyIndex* _latestSendKeyIndex;
	VCMasterKeyIndex* _latestReceiveKeyIndex;
	VCMasterKeyIndex* _keyIndexNotReceived;
	BOOL _isSendKeysCleanUpPending;
	BOOL _isReceiveKeysCleanUpPending;
	id _delegate;
	NSObject*<OS_dispatch_queue> _keyManagerQueue;
	BOOL _isKeyIndexNotReceivedReported;
	double _lastKeyIndexNotReceived;
	id _reportingAgentWeak;
	NSMutableArray* _unknownKeyIndexList;

}
-(void)dealloc;
-(id)delegate;
-(opaqueRTCReportingRef)reportingAgent;
-(id)initWithDelegate:(id)arg1 reportingAgent:(opaqueRTCReportingRef)arg2 ;
-(BOOL)addSecurityKeyMaterial:(id)arg1 ;
-(void)pruneSendKeyMaterialWithDelay:(double)arg1 ;
-(void)pruneRecvKeyMaterialWithDelay:(double)arg1 ;
-(id)getRecvKeyMaterialWithIndex:(id)arg1 ;
-(id)getSendKeyMaterialWithIndex:(id)arg1 ;
-(id)getLatestSendKeyMaterial;
-(id)getLatestRecvKeyMaterial;
@end
