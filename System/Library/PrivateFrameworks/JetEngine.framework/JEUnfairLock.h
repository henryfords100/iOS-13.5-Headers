/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/JetEngine.framework/JetEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <JetEngine/JetEngine-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@interface JEUnfairLock : NSObject <NSLocking> {

	os_unfair_lock_s _unfairLock;

}
+(void)initialize;
-(id)init;
-(void)lock;
-(void)unlock;
@end

