/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTAgentNotificationListener.h>

@protocol MTAgentDiagnosticDelegate;
@class NSString;

@interface MTAgentDiagnosticListener : NSObject <MTAgentNotificationListener> {

	id<MTAgentDiagnosticDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MTAgentDiagnosticDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MTAgentDiagnosticDelegate>)delegate;
-(void)setDelegate:(id<MTAgentDiagnosticDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)handlesNotification:(id)arg1 ofType:(long long)arg2 ;
-(void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_addStateHandler;
@end
