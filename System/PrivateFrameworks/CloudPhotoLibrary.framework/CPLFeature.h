/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CPLFeature : NSObject
+(id)featureWithName:(id)arg1 ;
-(BOOL)disableFeatureInStore:(id)arg1 error:(id*)arg2 ;
-(BOOL)enableFeatureInStore:(id)arg1 error:(id*)arg2 ;
-(BOOL)handleScopeWhenFeatureIsDisabled:(id)arg1 scopeType:(long long)arg2 store:(id)arg3 error:(id*)arg4 ;
-(BOOL)shouldDisableScopeWhenFeatureIsDisabled:(id)arg1 ;
@end
