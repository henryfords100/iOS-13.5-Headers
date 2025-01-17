/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightUI/SpotlightUI-Structs.h>
#import <SpotlightUI/SPUILegibilitySceneSettings.h>
#import <libobjc.A.dylib/SPUISearchBarSceneSettings.h>

@protocol SPUISearchBarSceneSettings <NSObject>
@property (nonatomic,readonly) double scrollProgress; 
@property (nonatomic,readonly) BOOL animated; 
@required
-(BOOL)animated;
-(double)scrollProgress;

@end


@class NSString;

@interface SPUISearchBarSceneSettings : SPUILegibilitySceneSettings <SPUISearchBarSceneSettings>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double scrollProgress; 
@property (nonatomic,readonly) BOOL animated; 
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)animated;
-(double)scrollProgress;
@end

