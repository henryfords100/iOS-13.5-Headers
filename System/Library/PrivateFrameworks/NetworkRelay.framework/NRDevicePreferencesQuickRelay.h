/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NetworkRelay.framework/NetworkRelay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_nw_path, OS_nw_path_evaluator;
@class NSObject, NSUUID;

@interface NRDevicePreferencesQuickRelay : NSObject {

	BOOL _needsReassert;
	NSObject*<OS_dispatch_queue> _queue;
	NSUUID* _nrUUID;
	NSUUID* _agentUUID;
	NSObject*<OS_nw_path> _path;
	NSObject*<OS_nw_path_evaluator> _pathEvaluator;
	unsigned long long _assertCount;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSUUID * nrUUID;                                            //@synthesize nrUUID=_nrUUID - In the implementation block
@property (nonatomic,retain) NSUUID * agentUUID;                                         //@synthesize agentUUID=_agentUUID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_path> path;                                 //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_path_evaluator> pathEvaluator;              //@synthesize pathEvaluator=_pathEvaluator - In the implementation block
@property (assign,nonatomic) unsigned long long assertCount;                             //@synthesize assertCount=_assertCount - In the implementation block
@property (assign,nonatomic) BOOL needsReassert;                                         //@synthesize needsReassert=_needsReassert - In the implementation block
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSObject*<OS_nw_path>)path;
-(void)setPath:(NSObject*<OS_nw_path>)arg1 ;
-(NSObject*<OS_nw_path_evaluator>)pathEvaluator;
-(void)setPathEvaluator:(NSObject*<OS_nw_path_evaluator>)arg1 ;
-(NSUUID *)agentUUID;
-(void)setAgentUUID:(NSUUID *)arg1 ;
-(void)setAssertCount:(unsigned long long)arg1 ;
-(void)resetInner;
-(void)updateAgentUUID:(id)arg1 ;
-(unsigned long long)assertCount;
-(BOOL)needsReassert;
-(void)setNeedsReassert:(BOOL)arg1 ;
-(void)addQuickRelayRequest;
-(void)removeQuickRelayRequest;
-(id)initWithNRUUID:(id)arg1 ;
-(NSUUID *)nrUUID;
-(void)setNrUUID:(NSUUID *)arg1 ;
@end

