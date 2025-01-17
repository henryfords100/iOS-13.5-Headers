/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPassColorAttachmentDescriptor.h>

@interface MTLRenderPassColorAttachmentDescriptorInternal : MTLRenderPassColorAttachmentDescriptor {

	MTLRenderPassAttachmentDescriptorPrivate _private;

}
+(id)attachmentDescriptor;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)slice;
-(unsigned long long)level;
-(SCD_Struct_MT58)clearColor;
-(void)setTexture:(id)arg1 ;
-(void)setStoreAction:(unsigned long long)arg1 ;
-(void)setLoadAction:(unsigned long long)arg1 ;
-(id)texture;
-(void)setLevel:(unsigned long long)arg1 ;
-(void)setClearColor:(SCD_Struct_MT58)arg1 ;
-(unsigned long long)storeAction;
-(void)setResolveTexture:(id)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(const MTLRenderPassAttachmentDescriptorPrivate*)_descriptorPrivate;
-(id)resolveTexture;
-(void)setSlice:(unsigned long long)arg1 ;
-(void)setDepthPlane:(unsigned long long)arg1 ;
-(unsigned long long)depthPlane;
-(void)setResolveLevel:(unsigned long long)arg1 ;
-(unsigned long long)resolveLevel;
-(void)setResolveSlice:(unsigned long long)arg1 ;
-(unsigned long long)resolveSlice;
-(void)setResolveDepthPlane:(unsigned long long)arg1 ;
-(unsigned long long)resolveDepthPlane;
-(void)setYInvert:(BOOL)arg1 ;
-(BOOL)yInvert;
-(unsigned long long)loadAction;
-(unsigned long long)storeActionOptions;
-(void)setStoreActionOptions:(unsigned long long)arg1 ;
@end

