/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UITargetedProxy.h>
#import <UIKitCore/_UIViewServiceDeputy.h>
#import <UIKitCore/_UIViewServiceUIBehaviorInterface.h>

@class NSString;

@interface _UIViewControllerControlMessageDeputy : _UITargetedProxy <_UIViewServiceDeputy, _UIViewServiceUIBehaviorInterface>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)proxyWithTarget:(id)arg1 ;
+(id)XPCInterface;
-(id)invalidate;
-(void)__prepareForDisconnectionWithCompletionHandler:(/*^block*/id)arg1 ;
@end

