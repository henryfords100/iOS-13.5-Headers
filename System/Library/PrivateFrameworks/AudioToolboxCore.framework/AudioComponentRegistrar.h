/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSString;

@interface AudioComponentRegistrar : NSObject <NSXPCListenerDelegate> {

	AudioComponentRegistrarImpl* _impl;

}

@property (nonatomic,readonly) AudioComponentRegistrarImpl* impl;              //@synthesize impl=_impl - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(AudioComponentRegistrarImpl*)impl;
-(id)initForMode:(BOOL)arg1 ;
-(void)resumeListeners;
@end

