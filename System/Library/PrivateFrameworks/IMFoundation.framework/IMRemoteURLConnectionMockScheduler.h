/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface IMRemoteURLConnectionMockScheduler : NSObject {

	NSObject*<OS_xpc_object> _connection;

}
-(id)init;
-(BOOL)_connect;
-(void)scheduleMockResponse:(id)arg1 forURL:(id)arg2 ;
-(void)scheduleMockResponse:(id)arg1 ;
@end
