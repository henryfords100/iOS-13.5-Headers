/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSUUID, NSObject;

@interface HMDCloudAccountOperation : NSOperation {

	NSUUID* _identifier;
	NSObject*<OS_dispatch_queue> _clientQueue;
	/*^block*/id _operationBlock;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,copy) id operationBlock;                                         //@synthesize operationBlock=_operationBlock - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
-(id)description;
-(NSUUID *)identifier;
-(void)main;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(id)operationBlock;
-(void)setOperationBlock:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 clientQueue:(id)arg2 ;
@end

