/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PGMoodVector : NSObject <NSCopying> {

	double _vector[10];

}
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2 ;
-(void)enumerateWithBlock:(/*^block*/id)arg1 ;
-(void)normalize;
-(double)sum;
-(double)valueForMood:(unsigned long long)arg1 ;
-(void)addValue:(double)arg1 forMoods:(unsigned long long)arg2 ;
-(void)addValue:(double)arg1 forMood:(unsigned long long)arg2 ;
-(void)setValue:(double)arg1 forMood:(unsigned long long)arg2 ;
-(void)multiplyByWeight:(double)arg1 forMood:(unsigned long long)arg2 ;
-(void)addMoodVector:(id)arg1 ;
-(void)substractMoodVector:(id)arg1 ;
-(void)multiplyMoodVector:(id)arg1 ;
-(void)multiplyByWeight:(double)arg1 ;
-(void)filterWithMoods:(unsigned long long)arg1 ;
-(unsigned long long)moodsWithThreshold:(double)arg1 ;
-(unsigned long long)weightedRandomMoodWithSeed:(unsigned long long)arg1 ;
-(id)moodArray;
@end

