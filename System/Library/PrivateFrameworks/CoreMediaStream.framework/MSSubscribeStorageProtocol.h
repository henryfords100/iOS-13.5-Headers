/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSSubscribeStorageProtocol <MSStorageProtocol>
@property (assign,nonatomic) id<MSSubscribeStorageProtocolDelegate> delegate; 
@required
-(id<MSSubscribeStorageProtocolDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)abort;
-(void)retrieveAssets:(id)arg1;

@end
