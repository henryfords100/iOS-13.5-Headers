/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@interface NSObservation : NSObject
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)remove;
-(id)initWithObservable:(id)arg1 blockSink:(/*^block*/id)arg2 tag:(int)arg3 ;
-(id)initWithObservable:(id)arg1 observer:(id)arg2 ;
-(void*)_observerStorageOfSize:(unsigned long long)arg1 ;
-(id*)_observerStorage;
@end

