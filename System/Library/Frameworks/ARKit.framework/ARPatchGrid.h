/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ARKit/ARKit-Structs.h>
@interface ARPatchGrid : NSObject {

	vector<ARPatch, std::__1::allocator<ARPatch> >* _patchesVector;
	float _angle;

}

@property (nonatomic,readonly) unsigned long long size; 
@property (nonatomic,readonly) const compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >* patches; 
@property (nonatomic,readonly) float pivot; 
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)size;
-(float)pivot;
-(id)initWithPatchesVector:(vector<ARPatch, std::__1::allocator<ARPatch> >*)arg1 pivotAngle:(float)arg2 ;
-(const compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >*)patches;
@end
