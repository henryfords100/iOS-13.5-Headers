/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSActionResponse.h>

@interface SBUIRemoteAlertButtonActionResponse : BSActionResponse

@property (nonatomic,readonly) unsigned long long unHandledEvents; 
-(id)settings:(id)arg1 keyDescriptionForSetting:(unsigned long long)arg2 ;
-(id)settings:(id)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4 ;
-(unsigned long long)unHandledEvents;
-(id)initWithUnHandledEvents:(unsigned long long)arg1 ;
@end
