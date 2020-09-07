/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol CCUIContentModule;
@class CCSModuleMetadata;

@interface CCUIModuleInstance : NSObject <NSCopying> {

	CCSModuleMetadata* _metadata;
	id<CCUIContentModule> _module;
	CCUILayoutSize _prototypeModuleSize;

}

@property (nonatomic,readonly) CCSModuleMetadata * metadata;                    //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) id<CCUIContentModule> module;                    //@synthesize module=_module - In the implementation block
@property (nonatomic,readonly) CCUILayoutSize prototypeModuleSize;              //@synthesize prototypeModuleSize=_prototypeModuleSize - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(CCSModuleMetadata *)metadata;
-(id<CCUIContentModule>)module;
-(CCUILayoutSize)prototypeModuleSize;
-(id)initWithMetadata:(id)arg1 module:(id)arg2 prototypeModuleSize:(CCUILayoutSize)arg3 ;
@end
