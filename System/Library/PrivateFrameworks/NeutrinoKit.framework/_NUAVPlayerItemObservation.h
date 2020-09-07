/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVPlayerItem;

@interface _NUAVPlayerItemObservation : NSObject {

	BOOL _registeredKVO;
	AVPlayerItem* _playerItem;

}

@property (nonatomic,retain) AVPlayerItem * playerItem;              //@synthesize playerItem=_playerItem - In the implementation block
@property (assign,nonatomic) BOOL registeredKVO;                     //@synthesize registeredKVO=_registeredKVO - In the implementation block
-(AVPlayerItem *)playerItem;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(BOOL)registeredKVO;
-(void)setRegisteredKVO:(BOOL)arg1 ;
@end
