/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXConditionValidating.h>

@protocol SXRenderingConfigurationProvider;
@class NSString;

@interface SXConfiguredConditionValidator : NSObject <SXConditionValidating> {

	id<SXRenderingConfigurationProvider> _renderingConfigurationProvider;

}

@property (nonatomic,readonly) id<SXRenderingConfigurationProvider> renderingConfigurationProvider;              //@synthesize renderingConfigurationProvider=_renderingConfigurationProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)validateCondition:(id)arg1 context:(id)arg2 ;
-(id)initWithRenderingConfigurationProvider:(id)arg1 ;
-(id<SXRenderingConfigurationProvider>)renderingConfigurationProvider;
@end
