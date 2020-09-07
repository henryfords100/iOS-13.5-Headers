/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUGLTexture.h>

@class NUIOSurface;

@interface _NUGLIOSurfaceTexture : NUGLTexture {

	NUIOSurface* _surface;

}

@property (nonatomic,readonly) NUIOSurface * surface;              //@synthesize surface=_surface - In the implementation block
-(id)initWithIOSurface:(id)arg1 ;
-(NUIOSurface *)surface;
-(id)initWithSize:(SCD_Struct_NU7)arg1 format:(id)arg2 ;
-(BOOL)isSurface;
-(void)allocateStorage:(id)arg1 ;
@end
