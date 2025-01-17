/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCancellable.h>

@protocol BROperationClient;
@class NSObject, NSString;

@interface _BRCFrameworkOperation : _BRCOperation <BRCancellable> {

	BOOL _startedFinish;
	BOOL _ignoreMissingRemoteClientProxy;
	NSObject*<BROperationClient> _remoteClientProxy;

}

@property (nonatomic,retain) NSObject*<BROperationClient> remoteClientProxy;              //@synthesize remoteClientProxy=_remoteClientProxy - In the implementation block
@property (assign,nonatomic) BOOL ignoreMissingRemoteClientProxy;                         //@synthesize ignoreMissingRemoteClientProxy=_ignoreMissingRemoteClientProxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(oneway void)invalidate;
-(void)start;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)setRemoteClientProxy:(NSObject*<BROperationClient>)arg1 ;
-(id)descriptionAdditionalStringWithContext:(id)arg1 ;
-(NSObject*<BROperationClient>)remoteClientProxy;
-(BOOL)ignoreMissingRemoteClientProxy;
-(void)setIgnoreMissingRemoteClientProxy:(BOOL)arg1 ;
@end

