/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:03:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface RTObserverRecord : NSObject {

	id _observer;
	SEL _selector;

}

@property (assign,nonatomic,__weak) id observer;              //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) SEL selector;                    //@synthesize selector=_selector - In the implementation block
-(SEL)selector;
-(id)observer;
-(void)setSelector:(SEL)arg1 ;
-(void)setObserver:(id)arg1 ;
-(id)initWithObserver:(id)arg1 selector:(SEL)arg2 ;
@end
