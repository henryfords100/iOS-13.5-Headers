/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFApplicationContextProvider.h>

@class NSString;

@interface WFDaemonApplicationContextProvider : NSObject <WFApplicationContextProvider> {

	NSString* _userInterfaceType;

}

@property (nonatomic,readonly) NSString * userInterfaceType;              //@synthesize userInterfaceType=_userInterfaceType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL wfIdleTimerDisabled; 
-(id)init;
-(BOOL)shouldReverseLayoutDirection;
-(long long)currentApplicationStateForWFApplicationContext:(id)arg1 ;
-(id)bundleForWFApplicationContext:(id)arg1 ;
-(id)currentUserInterfaceTypeForWFApplicationContext:(id)arg1 ;
-(id)notificationNameForApplicationStateEvent:(long long)arg1 applicationContext:(id)arg2 ;
-(id)keyWindowForWFApplicationContext:(id)arg1 ;
-(id)applicationForWFApplicationContext:(id)arg1 ;
-(id)initWithUserInterfaceType:(id)arg1 ;
-(NSString *)userInterfaceType;
@end
