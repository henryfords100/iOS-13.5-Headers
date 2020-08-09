/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUICore/CNUIUserActionItem.h>

@class NSUserActivity;

@interface _CNUIUserActionUserActivityItem : CNUIUserActionItem {

	NSUserActivity* _userActivity;

}

@property (nonatomic,readonly) NSUserActivity * userActivity;              //@synthesize userActivity=_userActivity - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSUserActivity *)userActivity;
-(id)performActionWithContext:(id)arg1 ;
-(BOOL)_isIntent:(id)arg1 equalToOther:(id)arg2 ;
-(unsigned long long)_hashForIntent:(id)arg1 ;
-(id)_personFromIntent:(id)arg1 ;
-(id)initWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 userActivity:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6 ;
@end
