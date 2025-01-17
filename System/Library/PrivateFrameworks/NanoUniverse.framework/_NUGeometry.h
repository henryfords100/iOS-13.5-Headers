/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:55:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NanoUniverse.framework/NanoUniverse
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NanoUniverse/NanoUniverse-Structs.h>
@interface _NUGeometry : NSObject {

	NUVertexRef _vertices;
	unsigned short* _indices;
	int _vcount;
	int _icount;

}

@property (nonatomic,readonly) const NUVertexRef vertices;                 //@synthesize vertices=_vertices - In the implementation block
@property (nonatomic,readonly) const unsigned short* indices;              //@synthesize indices=_indices - In the implementation block
@property (nonatomic,readonly) int vcount;                                 //@synthesize vcount=_vcount - In the implementation block
@property (nonatomic,readonly) int icount;                                 //@synthesize icount=_icount - In the implementation block
-(void)dealloc;
-(const unsigned short*)indices;
-(const NUVertexRef)vertices;
-(int)addVertices:(const NUVertexRef)arg1 count:(int)arg2 ;
-(int)addIndices:(const unsigned short*)arg1 count:(int)arg2 vbase:(int)arg3 ;
-(int)vcount;
-(int)icount;
@end

