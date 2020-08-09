/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIAlertAction.h>

@interface TPAlertAction : UIAlertAction {

	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;              //@synthesize handler=_handler - In the implementation block
+(id)actionWithType:(unsigned long long)arg1 ;
+(id)actionWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
+(id)preferencesURLForClassName:(id)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
@end
