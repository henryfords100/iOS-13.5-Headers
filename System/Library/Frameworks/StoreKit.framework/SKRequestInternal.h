/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKRequestDelegate;
@class SKPaymentQueueClient, SKXPCConnection;

@interface SKRequestInternal : NSObject {

	long long _backgroundTaskIdentifier;
	SKPaymentQueueClient* _client;
	SKXPCConnection* _connection;
	id<SKRequestDelegate> _delegate;
	long long _state;

}
-(id)init;
-(void)dealloc;
@end
