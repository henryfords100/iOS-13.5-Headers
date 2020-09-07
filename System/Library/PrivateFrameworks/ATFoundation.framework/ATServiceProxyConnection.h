/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATFoundation/ATServiceProxyConnection.h>

@protocol ATServiceProxyConnection <NSObject>
@required
-(void)connectWithCompletion:(/*^block*/id)arg1;
-(void)fetchMessageLinksWithCompletion:(/*^block*/id)arg1;

@end

#import <ATFoundation/ATServiceObserver.h>

@class ATService, NSXPCConnection, NSString;

@interface ATServiceProxyConnection : NSObject <ATServiceProxyConnection, ATServiceObserver> {

	ATService* _service;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) ATService * service;                //@synthesize service=_service - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(ATService *)service;
-(void)setService:(ATService *)arg1 ;
-(void)connectWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchMessageLinksWithCompletion:(/*^block*/id)arg1 ;
-(void)service:(id)arg1 willOpenMessageLink:(id)arg2 ;
-(id)initWithService:(id)arg1 connection:(id)arg2 ;
@end
