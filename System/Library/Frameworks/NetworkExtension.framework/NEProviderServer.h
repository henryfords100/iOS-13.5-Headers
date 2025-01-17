/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSMutableArray, NEExtensionProviderContext, NSString;

@interface NEProviderServer : NSObject <NSXPCListenerDelegate> {

	NSMutableArray* _listeners;
	NSMutableArray* _contexts;

}

@property (nonatomic,readonly) NSMutableArray * listeners;                   //@synthesize listeners=_listeners - In the implementation block
@property (nonatomic,readonly) NSMutableArray * contexts;                    //@synthesize contexts=_contexts - In the implementation block
@property (readonly) NEExtensionProviderContext * firstContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServer;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)start;
-(NSMutableArray *)listeners;
-(NSMutableArray *)contexts;
-(void)removeProviderContext:(id)arg1 ;
-(id)getListenerForExtensionPoint:(id)arg1 ;
-(void)generateProviderEndpointInfoInMessage:(id)arg1 extensionPoint:(id)arg2 ;
-(NEExtensionProviderContext *)firstContext;
@end

