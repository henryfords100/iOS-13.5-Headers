/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SKRange : NSObject <NSSecureCoding, NSCopying> {

	double _lowerLimit;
	double _upperLimit;

}

@property (assign) double lowerLimit;              //@synthesize lowerLimit=_lowerLimit - In the implementation block
@property (assign) double upperLimit;              //@synthesize upperLimit=_upperLimit - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)rangeWithLowerLimit:(double)arg1 upperLimit:(double)arg2 ;
+(id)rangeWithNoLimits;
+(id)rangeWithLowerLimit:(double)arg1 ;
+(id)rangeWithUpperLimit:(double)arg1 ;
+(id)rangeWithConstantValue:(double)arg1 ;
+(id)rangeWithValue:(double)arg1 variance:(double)arg2 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)lowerLimit;
-(double)upperLimit;
-(id)initWithLowerLimit:(double)arg1 upperLimit:(double)arg2 ;
-(void)setLowerLimit:(double)arg1 ;
-(void)setUpperLimit:(double)arg1 ;
-(BOOL)isEqualToRange:(id)arg1 ;
@end

