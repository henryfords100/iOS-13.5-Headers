/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSError;

@interface IDSLocalPairingIdentityDataErrorPair : NSObject <NSSecureCoding> {

	NSData* _identityData;
	NSError* _error;

}

@property (nonatomic,retain) NSData * identityData;              //@synthesize identityData=_identityData - In the implementation block
@property (nonatomic,retain) NSError * error;                    //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)initWithError:(id)arg1 ;
-(id)initWithIdentityData:(id)arg1 error:(id)arg2 ;
-(NSData *)identityData;
-(id)initWithIdentityData:(id)arg1 ;
-(void)setIdentityData:(NSData *)arg1 ;
@end

