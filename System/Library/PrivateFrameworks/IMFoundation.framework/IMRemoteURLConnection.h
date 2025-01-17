/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSURLRequest, NSString, NSObject;

@interface IMRemoteURLConnection : NSObject {

	NSURLRequest* _request;
	NSString* _bundleIdentifierForDataUsage;
	/*^block*/id _block;
	NSObject*<OS_xpc_object> _connection;
	BOOL _cancelled;
	BOOL _loading;
	BOOL _forceCellularIfPossible;
	BOOL _requireIDSHost;
	int _retries;
	BOOL _shouldUsePipelining;
	int _concurrentConnections;
	BOOL _disableKeepAlive;
	int _keepAliveWifi;
	int _keepAliveCell;
	BOOL _shouldReturnTimingData;

}

@property (assign) BOOL requireIDSHost;                                  //@synthesize requireIDSHost=_requireIDSHost - In the implementation block
@property (assign) BOOL forceCellularIfPossible;                         //@synthesize forceCellularIfPossible=_forceCellularIfPossible - In the implementation block
@property (retain) NSString * bundleIdentifierForDataUsage;              //@synthesize bundleIdentifierForDataUsage=_bundleIdentifierForDataUsage - In the implementation block
@property (assign) BOOL shouldUsePipelining;                             //@synthesize shouldUsePipelining=_shouldUsePipelining - In the implementation block
@property (assign) int concurrentConnections;                            //@synthesize concurrentConnections=_concurrentConnections - In the implementation block
@property (assign) BOOL disableKeepAlive;                                //@synthesize disableKeepAlive=_disableKeepAlive - In the implementation block
@property (assign) int keepAliveWifi;                                    //@synthesize keepAliveWifi=_keepAliveWifi - In the implementation block
@property (assign) int keepAliveCell;                                    //@synthesize keepAliveCell=_keepAliveCell - In the implementation block
@property (assign) BOOL shouldReturnTimingData;                          //@synthesize shouldReturnTimingData=_shouldReturnTimingData - In the implementation block
@property (retain) NSURLRequest * request;                               //@synthesize request=_request - In the implementation block
@property (copy) id block;                                               //@synthesize block=_block - In the implementation block
-(void)dealloc;
-(void)load;
-(void)cancel;
-(id)block;
-(void)_disconnected;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(NSURLRequest *)request;
-(void)setBlock:(id)arg1 ;
-(BOOL)_disconnect;
-(BOOL)_connect;
-(id)initWithURLRequest:(id)arg1 completionBlockWithTimingData:(/*^block*/id)arg2 ;
-(NSString *)bundleIdentifierForDataUsage;
-(BOOL)forceCellularIfPossible;
-(BOOL)requireIDSHost;
-(BOOL)shouldUsePipelining;
-(int)concurrentConnections;
-(BOOL)disableKeepAlive;
-(int)keepAliveWifi;
-(int)keepAliveCell;
-(BOOL)shouldReturnTimingData;
-(id)initWithURLRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setForceCellularIfPossible:(BOOL)arg1 ;
-(void)setBundleIdentifierForDataUsage:(NSString *)arg1 ;
-(void)setRequireIDSHost:(BOOL)arg1 ;
-(void)setShouldUsePipelining:(BOOL)arg1 ;
-(void)setConcurrentConnections:(int)arg1 ;
-(void)setDisableKeepAlive:(BOOL)arg1 ;
-(void)setKeepAliveWifi:(int)arg1 ;
-(void)setKeepAliveCell:(int)arg1 ;
-(void)setShouldReturnTimingData:(BOOL)arg1 ;
@end

