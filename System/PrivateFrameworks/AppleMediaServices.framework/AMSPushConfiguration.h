/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSSet;

@interface AMSPushConfiguration : NSObject {

	NSString* _userNotificationExtensionId;
	NSSet* _enabledActionTypes;

}

@property (nonatomic,retain) NSString * userNotificationExtensionId;              //@synthesize userNotificationExtensionId=_userNotificationExtensionId - In the implementation block
@property (nonatomic,retain) NSSet * enabledActionTypes;                          //@synthesize enabledActionTypes=_enabledActionTypes - In the implementation block
-(id)initWithEnabledActionTypes:(id)arg1 ;
-(NSString *)userNotificationExtensionId;
-(void)setUserNotificationExtensionId:(NSString *)arg1 ;
-(NSSet *)enabledActionTypes;
-(void)setEnabledActionTypes:(NSSet *)arg1 ;
@end
