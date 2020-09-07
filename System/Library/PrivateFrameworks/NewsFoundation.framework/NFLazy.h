/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NFUnfairLock;

@interface NFLazy : NSObject {

	id _value;
	/*^block*/id _constructor;
	NFUnfairLock* _lock;

}

@property (nonatomic,copy,readonly) id constructor;                   //@synthesize constructor=_constructor - In the implementation block
@property (nonatomic,copy,readonly) NFUnfairLock * lock;              //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) id value;                              //@synthesize value=_value - In the implementation block
-(NFUnfairLock *)lock;
-(id)value;
-(id)initWithConstructor:(/*^block*/id)arg1 ;
-(id)constructor;
@end
