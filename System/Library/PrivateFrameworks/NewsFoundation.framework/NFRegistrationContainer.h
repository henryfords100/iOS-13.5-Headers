/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NFRegistrationContainer <NSObject>
@required
-(id)registerClass:(Class)arg1 name:(id)arg2 factory:(/*^block*/id)arg3;
-(id)registerProtocol:(id)arg1 name:(id)arg2 factory:(/*^block*/id)arg3;
-(id)registerKey:(id)arg1 factory:(/*^block*/id)arg2;
-(id)registerClass:(Class)arg1 factory:(/*^block*/id)arg2;
-(id)registerProtocol:(id)arg1 factory:(/*^block*/id)arg2;
-(id)unsafeRegisterForKey:(id)arg1 name:(id)arg2 factory:(/*^block*/id)arg3;

@end
