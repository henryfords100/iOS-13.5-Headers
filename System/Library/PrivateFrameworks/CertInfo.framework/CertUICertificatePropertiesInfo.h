/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CertInfo/CertInfo-Structs.h>
@class NSArray;

@interface CertUICertificatePropertiesInfo : NSObject {

	NSArray* _sections;
	NSArray* _sectionTitles;

}

@property (nonatomic,retain) NSArray * sections;                   //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) NSArray * sectionTitles;              //@synthesize sectionTitles=_sectionTitles - In the implementation block
-(id)initWithCertificate:(SecCertificateRef)arg1 ;
-(id)initWithTrust:(SecTrustRef)arg1 ;
-(NSArray *)sections;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sectionTitles;
-(void)_setup:(id)arg1 ;
-(id)initWithCertificateProperties:(id)arg1 ;
-(id)initWithSendableCertificateProperties:(id)arg1 ;
-(id)_cellInfosForSection:(id)arg1 ;
-(id)_sectionInfoForCertSection:(id)arg1 title:(id)arg2 ;
-(id)_sectionsFromProperties:(id)arg1 ;
-(id)_sendablePropertiesFromProperties:(id)arg1 ;
-(id)_sendablePropertiesFromTrust:(SecTrustRef)arg1 ;
-(id)_sendablePropertyFromProperty:(id)arg1 ;
-(id)_copyPropertiesFromTrust:(SecTrustRef)arg1 ;
-(void)setSectionTitles:(NSArray *)arg1 ;
@end

