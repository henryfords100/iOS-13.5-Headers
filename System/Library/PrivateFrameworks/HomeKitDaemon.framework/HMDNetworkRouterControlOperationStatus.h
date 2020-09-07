/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HMDTLVProtocol.h>

@class NSString;

@interface HMDNetworkRouterControlOperationStatus : NSObject <NSCopying, HMDTLVProtocol> {

	long long _status;

}

@property (assign,nonatomic) long long status;                      //@synthesize status=_status - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(id)initWithStatus:(long long)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
@end
