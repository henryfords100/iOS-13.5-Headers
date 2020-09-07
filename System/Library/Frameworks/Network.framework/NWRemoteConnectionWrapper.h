/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NWConnection;

@interface NWRemoteConnectionWrapper : NSObject {

	NSUUID* _clientID;
	NWConnection* _connection;

}

@property (retain) NSUUID * clientID;                      //@synthesize clientID=_clientID - In the implementation block
@property (retain) NWConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(NWConnection *)connection;
-(void)setConnection:(NWConnection *)arg1 ;
-(void)setClientID:(NSUUID *)arg1 ;
-(NSUUID *)clientID;
@end
