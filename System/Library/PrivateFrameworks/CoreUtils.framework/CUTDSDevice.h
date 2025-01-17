/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSData;

@interface CUTDSDevice : NSObject {

	BOOL _paired;
	NSUUID* _identifier;
	NSData* _bloomFilterData;
	NSData* _deviceAddress;
	unsigned long long _lastSeenTicks;

}

@property (nonatomic,copy) NSUUID * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSData * bloomFilterData;                        //@synthesize bloomFilterData=_bloomFilterData - In the implementation block
@property (nonatomic,copy) NSData * deviceAddress;                          //@synthesize deviceAddress=_deviceAddress - In the implementation block
@property (assign,nonatomic) unsigned long long lastSeenTicks;              //@synthesize lastSeenTicks=_lastSeenTicks - In the implementation block
@property (assign,nonatomic) BOOL paired;                                   //@synthesize paired=_paired - In the implementation block
-(id)description;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(BOOL)paired;
-(void)setPaired:(BOOL)arg1 ;
-(NSData *)deviceAddress;
-(void)setDeviceAddress:(NSData *)arg1 ;
-(void)setBloomFilterData:(NSData *)arg1 ;
-(NSData *)bloomFilterData;
-(void)setLastSeenTicks:(unsigned long long)arg1 ;
-(unsigned long long)lastSeenTicks;
@end

