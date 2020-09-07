/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKRegion;

@interface SKRegion : NSObject <NSCopying, NSSecureCoding> {

	PKRegion* _region;

}

@property (nonatomic,readonly) const CGPathRef path; 
+(BOOL)supportsSecureCoding;
+(id)infiniteRegion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(const CGPathRef)path;
-(id)initWithPath:(CGPathRef)arg1 ;
-(id)initWithSize:(CGSize)arg1 ;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(id)initWithRadius:(float)arg1 ;
-(id)inverseRegion;
-(id)regionByUnionWithRegion:(id)arg1 ;
-(id)regionByDifferenceFromRegion:(id)arg1 ;
-(id)regionByIntersectionWithRegion:(id)arg1 ;
-(void)containsPoints:(const float*)arg1 locationStride:(long long)arg2 results:(char*)arg3 resultsStride:(long long)arg4 count:(int)arg5 ;
-(BOOL)isEqualToRegion:(id)arg1 ;
-(BOOL)isInfinite;
@end
