/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, WiFiAwareDiscoveryResult;

@interface CUNANEndpoint : NSObject {

	int _port;
	NSString* _identifier;
	NSString* _name;
	NSString* _serviceType;
	NSDictionary* _textInfo;
	WiFiAwareDiscoveryResult* _discoveryResult;

}

@property (nonatomic,retain) WiFiAwareDiscoveryResult * discoveryResult;              //@synthesize discoveryResult=_discoveryResult - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) int port;                                                //@synthesize port=_port - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                    //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * textInfo;                          //@synthesize textInfo=_textInfo - In the implementation block
-(id)description;
-(NSString *)name;
-(int)port;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setPort:(int)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)serviceType;
-(void)setServiceType:(NSString *)arg1 ;
-(NSDictionary *)textInfo;
-(id)descriptionWithLevel:(int)arg1 ;
-(WiFiAwareDiscoveryResult *)discoveryResult;
-(unsigned)updateWithDiscoveryResult:(id)arg1 ;
-(void)setDiscoveryResult:(WiFiAwareDiscoveryResult *)arg1 ;
@end

