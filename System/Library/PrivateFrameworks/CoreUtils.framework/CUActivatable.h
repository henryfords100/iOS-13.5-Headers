/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CUActivatable
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue; 
@property (nonatomic,copy) id invalidationHandler; 
@required
-(void)invalidate;
-(void)setInvalidationHandler:(/*^block*/id)arg1;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(id)arg1;
-(void)activateWithCompletion:(/*^block*/id)arg1;

@end
