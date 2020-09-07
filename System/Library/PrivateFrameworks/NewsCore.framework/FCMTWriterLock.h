/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFLocking.h>

@protocol NFLocking;
@interface FCMTWriterLock : NSObject <NFLocking> {

	id<NFLocking> _underlyingLock;

}

@property (nonatomic,retain) id<NFLocking> underlyingLock;              //@synthesize underlyingLock=_underlyingLock - In the implementation block
-(id)init;
-(void)lock;
-(void)unlock;
-(void)performWriteSync:(/*^block*/id)arg1 ;
-(void)performReadSync:(/*^block*/id)arg1 ;
-(id<NFLocking>)underlyingLock;
-(void)setUnderlyingLock:(id<NFLocking>)arg1 ;
-(id)initWithUnderlyingLock:(id)arg1 ;
@end
