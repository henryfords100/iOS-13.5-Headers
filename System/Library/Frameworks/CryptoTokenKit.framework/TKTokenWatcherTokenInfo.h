/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:55:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TKTokenWatcherTokenInfo : NSObject {

	NSString* _tokenID;
	NSString* _driverName;
	NSString* _slotName;

}

@property (nonatomic,readonly) NSString * tokenID;                 //@synthesize tokenID=_tokenID - In the implementation block
@property (nonatomic,readonly) NSString * driverName;              //@synthesize driverName=_driverName - In the implementation block
@property (nonatomic,readonly) NSString * slotName;                //@synthesize slotName=_slotName - In the implementation block
-(NSString *)slotName;
-(NSString *)tokenID;
-(NSString *)driverName;
-(id)initWithTokenInfo:(id)arg1 ;
@end
