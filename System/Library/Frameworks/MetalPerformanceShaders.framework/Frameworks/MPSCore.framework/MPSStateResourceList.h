/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MPSCore/MPSCore-Structs.h>
@interface MPSStateResourceList : NSObject {

	ResourceListNode* _list;

}
+(id)resourceList;
+(id)resourceListWithTextureDescriptors:(id)arg1 ;
+(id)resourceListWithBufferSizes:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id)debugDescription;
-(void)appendTexture:(id)arg1 ;
-(void)appendBuffer:(unsigned long long)arg1 ;
-(void)appendTexture:(id)arg1 format:(unsigned long long)arg2 ;
@end

