/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/CNScheduler.h>

@class CNSuspendableSchedulerDecorator, NSString;

@interface CNUIAfterCACommitScheduler : NSObject <CNScheduler> {

	CNSuspendableSchedulerDecorator* _scheduler;
	CFRunLoopObserverRef _runLoopObserver;

}

@property (nonatomic,readonly) CNSuspendableSchedulerDecorator * scheduler;              //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,readonly) CFRunLoopObserverRef runLoopObserver;                     //@synthesize runLoopObserver=_runLoopObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) double timestamp; 
-(id)init;
-(void)dealloc;
-(void)performBlock:(/*^block*/id)arg1 ;
-(double)timestamp;
-(CNSuspendableSchedulerDecorator *)scheduler;
-(void)performBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 qualityOfService:(unsigned long long)arg3 ;
-(id)initWithSchedulerProvider:(id)arg1 ;
-(CFRunLoopObserverRef)runLoopObserver;
@end
