/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleHIDTransportSupport.framework/AppleHIDTransportSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AHTDevice : NSObject {

	unsigned _service;
	unsigned _connect;
	NSString* _name;

}

@property (assign,nonatomic) unsigned service;               //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) unsigned connect;               //@synthesize connect=_connect - In the implementation block
@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
+(id)allDevices;
+(id)withService:(unsigned)arg1 ;
+(id)withName:(id)arg1 ;
+(id)deviceWithParentRegistryId:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(BOOL)open;
-(void)close;
-(BOOL)reset;
-(unsigned long long)registryID;
-(BOOL)setPower:(long long)arg1 ;
-(unsigned)service;
-(unsigned)connect;
-(void)setService:(unsigned)arg1 ;
-(id)initWithService:(unsigned)arg1 ;
-(void)setConnect:(unsigned)arg1 ;
-(id)getInterfaces;
-(id)getBootLoader;
-(id)getInterface:(unsigned char)arg1 ;
-(BOOL)getPower:(long long*)arg1 ;
-(id)reporterResults;
@end

