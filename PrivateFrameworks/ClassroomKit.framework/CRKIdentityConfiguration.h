/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface CRKIdentityConfiguration : NSObject <NSCopying, NSSecureCoding> {

	BOOL _createsCertificateAuthority;
	BOOL _addsClientAuthAndServerAuthEKUs;
	unsigned _hashingAlgorithm;
	NSString* _commonName;
	long long _keySizeInBits;
	NSString* _emailAddress;

}

@property (nonatomic,copy,readonly) NSString * commonName;                      //@synthesize commonName=_commonName - In the implementation block
@property (nonatomic,copy,readonly) NSData * dataRepresentation; 
@property (assign,nonatomic) long long keySizeInBits;                           //@synthesize keySizeInBits=_keySizeInBits - In the implementation block
@property (assign,nonatomic) BOOL createsCertificateAuthority;                  //@synthesize createsCertificateAuthority=_createsCertificateAuthority - In the implementation block
@property (assign,nonatomic) unsigned hashingAlgorithm;                         //@synthesize hashingAlgorithm=_hashingAlgorithm - In the implementation block
@property (assign,nonatomic) BOOL addsClientAuthAndServerAuthEKUs;              //@synthesize addsClientAuthAndServerAuthEKUs=_addsClientAuthAndServerAuthEKUs - In the implementation block
@property (nonatomic,copy) NSString * emailAddress;                             //@synthesize emailAddress=_emailAddress - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)defaultKeySizeInBits;
+(BOOL)defaultCreatesCertificateAuthority;
+(unsigned)defaultHashingAlgorithm;
+(id)configurationWithData:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)dataRepresentation;
-(NSString *)emailAddress;
-(void)setEmailAddress:(NSString *)arg1 ;
-(NSString *)commonName;
-(id)initWithCommonName:(id)arg1 ;
-(unsigned)hashingAlgorithm;
-(long long)keySizeInBits;
-(BOOL)createsCertificateAuthority;
-(BOOL)addsClientAuthAndServerAuthEKUs;
-(void)setKeySizeInBits:(long long)arg1 ;
-(void)setCreatesCertificateAuthority:(BOOL)arg1 ;
-(void)setHashingAlgorithm:(unsigned)arg1 ;
-(void)setAddsClientAuthAndServerAuthEKUs:(BOOL)arg1 ;
@end
