/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSNumber;

@interface _DASPriorityQueue : NSObject {

	unsigned long long _count;
	NSMutableDictionary* _objects;
	NSNumber* _lowestPriority;
	NSNumber* _highestPriority;

}

@property (nonatomic,retain) NSMutableDictionary * objects;              //@synthesize objects=_objects - In the implementation block
@property (assign,nonatomic) unsigned long long count;                   //@synthesize count=_count - In the implementation block
@property (nonatomic,retain) NSNumber * lowestPriority;                  //@synthesize lowestPriority=_lowestPriority - In the implementation block
@property (nonatomic,retain) NSNumber * highestPriority;                 //@synthesize highestPriority=_highestPriority - In the implementation block
+(id)priorityQueue;
-(id)init;
-(id)description;
-(unsigned long long)count;
-(id)allObjects;
-(void)setCount:(unsigned long long)arg1 ;
-(NSMutableDictionary *)objects;
-(void)setObjects:(NSMutableDictionary *)arg1 ;
-(NSNumber *)highestPriority;
-(void)addObject:(id)arg1 withPriority:(unsigned long long)arg2 ;
-(void)removeObject:(id)arg1 atPriority:(unsigned long long)arg2 ;
-(id)popFirst;
-(id)popLast;
-(NSNumber *)lowestPriority;
-(void)setLowestPriority:(NSNumber *)arg1 ;
-(void)setHighestPriority:(NSNumber *)arg1 ;
@end
