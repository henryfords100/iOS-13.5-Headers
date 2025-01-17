/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNFaceLandmarkRegion.h>

@interface VNFaceLandmarkRegion3D : VNFaceLandmarkRegion {

	const * _points;

}

@property (assign) const * points;              //@synthesize points=_points - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(const *)points;
-(void)setPoints:(const *)arg1 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 faceBoundingBox:(CGRect)arg2 ;
-(2)pointAtIndex:(unsigned long long)arg1 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 faceBoundingBox:(CGRect)arg2 points:(5*)arg3 pointCount:(unsigned long long)arg4 ;
@end

