/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface NotificationSender : NSObject {

	NSString* _name;
	NSDictionary* _userInfo;

}

@property (readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (retain) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(NSDictionary *)userInfo;
-(id)initWithName:(id)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
@end

