/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSSettingsDiff.h>

@interface FBSSceneClientSettingsDiff : FBSSettingsDiff
+(id)diffFromSettings:(id)arg1 toSettings:(id)arg2 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(void)evaluateWithInspector:(id)arg1 context:(void*)arg2 ;
-(id)settingsByApplyingToMutableCopyOfSettings:(id)arg1 ;
@end
