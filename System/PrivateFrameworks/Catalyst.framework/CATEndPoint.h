/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, CATAddress;

@interface CATEndPoint : NSObject {

	unsigned _port;
	NSData* _data;
	CATAddress* _address;

}

@property (nonatomic,readonly) NSData * data;                     //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) CATAddress * address;              //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) unsigned port;                     //@synthesize port=_port - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithData:(id)arg1 ;
-(unsigned)port;
-(NSData *)data;
-(CATAddress *)address;
-(id)initWithAddress:(id)arg1 port:(unsigned)arg2 ;
-(BOOL)isEqualToEndPoint:(id)arg1 ;
@end
