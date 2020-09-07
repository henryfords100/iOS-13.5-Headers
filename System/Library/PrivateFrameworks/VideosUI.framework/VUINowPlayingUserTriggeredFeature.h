/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VUINowPlayingUserTriggeredFeature.h>

@protocol VUINowPlayingUserTriggeredFeature <VUINowPlayingFeature>
@end


@class NSString;

@interface VUINowPlayingUserTriggeredFeature : NSObject <VUINowPlayingUserTriggeredFeature> {

	BOOL _active;
	BOOL _autoRemove;
	id _userInfo;
	unsigned long long _type;

}

@property (assign,nonatomic) unsigned long long type;                              //@synthesize type=_type - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                          //@synthesize active=_active - In the implementation block
@property (assign,getter=shouldAutoRemove,nonatomic) BOOL autoRemove;              //@synthesize autoRemove=_autoRemove - In the implementation block
@property (nonatomic,retain) id userInfo;                                          //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(id)userInfo;
-(BOOL)isActive;
-(void)setUserInfo:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(id)initWithType:(unsigned long long)arg1 ;
-(BOOL)shouldAutoRemove;
-(void)setAutoRemove:(BOOL)arg1 ;
@end
