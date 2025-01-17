/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCROHandlerProtocol
@required
-(int)handleRegisterCallbackForKey:(int)arg1 trusted:(BOOL)arg2;
-(int)handleSetValue:(id)arg1 forKey:(int)arg2 trusted:(BOOL)arg3;
-(int)handleGetValue:(id*)arg1 forKey:(int)arg2 withObject:(id)arg3 trusted:(BOOL)arg4;
-(int)handlePerformActionForKey:(int)arg1 trusted:(BOOL)arg2;
-(int)handleGetValue:(id*)arg1 forKey:(int)arg2 trusted:(BOOL)arg3;

@end

