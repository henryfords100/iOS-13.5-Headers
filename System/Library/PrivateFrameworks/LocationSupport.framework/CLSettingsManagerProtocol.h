/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLSettingsManagerProtocol <CLIntersiloServiceProtocol>
@required
-(void)refresh;
-(void)flush;
-(id)syncgetSettingsAndRegisterForUpdates:(byref id)arg1;
-(void)unregisterForUpdates:(byref id)arg1;
-(id)syncgetSetValue:(id)arg1 forKey:(id)arg2 withoutNotifying:(byref id)arg3;

@end

