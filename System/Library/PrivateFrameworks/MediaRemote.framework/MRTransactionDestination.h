/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class MRTransactionPacketizer, NSObject, _MRNowPlayingPlayerPathProtobuf;

@interface MRTransactionDestination : NSObject {

	MRTransactionPacketizer* _packetizer;
	NSObject*<OS_dispatch_queue> _serialQueue;
	unsigned long long _name;
	_MRNowPlayingPlayerPathProtobuf* _playerPath;

}

@property (nonatomic,readonly) unsigned long long name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) _MRNowPlayingPlayerPathProtobuf * playerPath;              //@synthesize playerPath=_playerPath - In the implementation block
-(unsigned long long)name;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(void)unpacketize:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithName:(unsigned long long)arg1 playerPath:(id)arg2 ;
-(void)packetsFromMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

