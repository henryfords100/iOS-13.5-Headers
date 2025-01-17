/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIRuntimeConnection.h>

@interface UIRuntimeEventConnection : UIRuntimeConnection {

	unsigned long long eventMask;

}

@property (assign) unsigned long long eventMask; 
@property (readonly) SEL action; 
@property (readonly) id target; 
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)target;
-(SEL)action;
-(void)connect;
-(void)connectForSimulator;
-(unsigned long long)eventMask;
-(void)setEventMask:(unsigned long long)arg1 ;
@end

