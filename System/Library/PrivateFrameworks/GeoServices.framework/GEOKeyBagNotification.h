/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEOKeyBagNotification : NSObject {

	int _currentState;
	int _notifyToken;

}

@property (nonatomic,readonly) int state; 
+(id)sharedObject;
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(int)state;
-(BOOL)canAccessFilesWithProtection:(unsigned long long)arg1 ;
-(void)updateState;
-(void)_statusChanged;
-(BOOL)addDataDidBecomeAvailableObserver:(id)arg1 ifTypeIsNotCurrentlyAccessible:(unsigned long long)arg2 ;
@end

