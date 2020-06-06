/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AVTAvatarSettingKindValue : NSObject <NSCopying> {

	SCD_Struct_AV4 _settingKind;

}

@property (nonatomic,readonly) SCD_Struct_AV4 settingKind;              //@synthesize settingKind=_settingKind - In the implementation block
+(id)valueWithSettingKind:(SCD_Struct_AV4)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_AV4)settingKind;
-(id)initWithSettingKind:(SCD_Struct_AV4)arg1 ;
@end
