/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol INVCVoiceShortcutClient <NSObject>
@required
-(void)getVoiceShortcutsWithCompletion:(/*^block*/id)arg1;
-(void)getVoiceShortcutWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setShortcutSuggestions:(id)arg1 forAppWithBundleIdentifier:(id)arg2;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 inDomain:(id)arg3 completionHandler:(/*^block*/id)arg4;

@end
