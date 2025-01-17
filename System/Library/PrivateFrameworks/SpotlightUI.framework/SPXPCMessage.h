/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_os_transaction;
@class SPXPCConnection, NSObject, NSString, NSDictionary;

@interface SPXPCMessage : NSObject {

	SPXPCConnection* _receivingConnection;
	NSObject*<OS_xpc_object> _x_reply_connection;
	NSObject*<OS_xpc_object> _x_message;
	NSObject*<OS_xpc_object> _x_rootObject;
	NSObject*<OS_xpc_object> _x_Objects;
	NSObject*<OS_xpc_object> _x_reply;
	NSObject*<OS_xpc_object> _x_feedbackData;
	NSObject*<OS_os_transaction> _replyTransaction;
	NSString* _name;
	NSDictionary* _info;

}

@property (nonatomic,readonly) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> feedbackData; 
@property (nonatomic,copy) NSDictionary * info;                                    //@synthesize info=_info - In the implementation block
-(NSString *)name;
-(void)setObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithName:(id)arg1 ;
-(void)setRootObject:(id)arg1 ;
-(NSDictionary *)info;
-(void)sendReply:(id)arg1 ;
-(void)setInfo:(NSDictionary *)arg1 ;
-(BOOL)needsReply;
-(id)_createXPCMessage;
-(id)_initWithXPCMessage:(id)arg1 onConnection:(id)arg2 ;
-(void)setRootObjectForFeedback:(id)arg1 ;
-(id)rootObjectOfClasses:(id)arg1 ;
-(id)objectsOfClasses:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithName:(id)arg1 batchSize:(unsigned long long)arg2 ;
-(id)rootObjectOfClassesForFeedback:(id)arg1 ;
-(NSObject*<OS_xpc_object>)feedbackData;
@end

