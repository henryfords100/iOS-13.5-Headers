/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CXProvider.h>

@class NSXPCConnection;

@interface CXXPCProvider : CXProvider {

	int _notifyToken;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) int notifyToken;                           //@synthesize notifyToken=_notifyToken - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(int)notifyToken;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(id)hostProtocolDelegate;
-(BOOL)requiresProxyingAVAudioSessionState;
-(void)setNotifyToken:(int)arg1 ;
@end

