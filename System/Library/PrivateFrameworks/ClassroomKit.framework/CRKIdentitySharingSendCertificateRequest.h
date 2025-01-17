/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@class NSSet, NSData;

@interface CRKIdentitySharingSendCertificateRequest : CATTaskRequest {

	NSSet* _recipients;
	NSData* _activeCertificateData;
	NSData* _stagedCertificateData;

}

@property (nonatomic,retain) NSSet * recipients;                          //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,retain) NSData * activeCertificateData;              //@synthesize activeCertificateData=_activeCertificateData - In the implementation block
@property (nonatomic,retain) NSData * stagedCertificateData;              //@synthesize stagedCertificateData=_stagedCertificateData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)recipients;
-(void)setRecipients:(NSSet *)arg1 ;
-(NSData *)activeCertificateData;
-(NSData *)stagedCertificateData;
-(void)setActiveCertificateData:(NSData *)arg1 ;
-(void)setStagedCertificateData:(NSData *)arg1 ;
@end

