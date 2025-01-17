/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WiFiAnalyticsAWDWiFiNWActivityBtCoexReqestReason : PBCodable <NSCopying> {

	unsigned _a2dp;
	unsigned _acl;
	unsigned _ble;
	unsigned _blescan;
	unsigned _esco;
	unsigned _inquiry;
	unsigned _inquiryscan;
	unsigned _mss;
	unsigned _other;
	unsigned _page;
	unsigned _pagescan;
	unsigned _park;
	unsigned _sco;
	unsigned _sniff;
	SCD_Struct_Wi12 _has;

}

@property (assign,nonatomic) BOOL hasAcl; 
@property (assign,nonatomic) unsigned acl;                      //@synthesize acl=_acl - In the implementation block
@property (assign,nonatomic) BOOL hasSco; 
@property (assign,nonatomic) unsigned sco;                      //@synthesize sco=_sco - In the implementation block
@property (assign,nonatomic) BOOL hasEsco; 
@property (assign,nonatomic) unsigned esco;                     //@synthesize esco=_esco - In the implementation block
@property (assign,nonatomic) BOOL hasA2dp; 
@property (assign,nonatomic) unsigned a2dp;                     //@synthesize a2dp=_a2dp - In the implementation block
@property (assign,nonatomic) BOOL hasSniff; 
@property (assign,nonatomic) unsigned sniff;                    //@synthesize sniff=_sniff - In the implementation block
@property (assign,nonatomic) BOOL hasPagescan; 
@property (assign,nonatomic) unsigned pagescan;                 //@synthesize pagescan=_pagescan - In the implementation block
@property (assign,nonatomic) BOOL hasInquiryscan; 
@property (assign,nonatomic) unsigned inquiryscan;              //@synthesize inquiryscan=_inquiryscan - In the implementation block
@property (assign,nonatomic) BOOL hasPage; 
@property (assign,nonatomic) unsigned page;                     //@synthesize page=_page - In the implementation block
@property (assign,nonatomic) BOOL hasInquiry; 
@property (assign,nonatomic) unsigned inquiry;                  //@synthesize inquiry=_inquiry - In the implementation block
@property (assign,nonatomic) BOOL hasMss; 
@property (assign,nonatomic) unsigned mss;                      //@synthesize mss=_mss - In the implementation block
@property (assign,nonatomic) BOOL hasPark; 
@property (assign,nonatomic) unsigned park;                     //@synthesize park=_park - In the implementation block
@property (assign,nonatomic) BOOL hasBle; 
@property (assign,nonatomic) unsigned ble;                      //@synthesize ble=_ble - In the implementation block
@property (assign,nonatomic) BOOL hasBlescan; 
@property (assign,nonatomic) unsigned blescan;                  //@synthesize blescan=_blescan - In the implementation block
@property (assign,nonatomic) BOOL hasOther; 
@property (assign,nonatomic) unsigned other;                    //@synthesize other=_other - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)park;
-(unsigned)page;
-(void)setPage:(unsigned)arg1 ;
-(unsigned)acl;
-(void)setAcl:(unsigned)arg1 ;
-(BOOL)hasPage;
-(void)setOther:(unsigned)arg1 ;
-(unsigned)other;
-(void)setHasAcl:(BOOL)arg1 ;
-(BOOL)hasAcl;
-(void)setSco:(unsigned)arg1 ;
-(void)setHasSco:(BOOL)arg1 ;
-(BOOL)hasSco;
-(void)setEsco:(unsigned)arg1 ;
-(void)setHasEsco:(BOOL)arg1 ;
-(BOOL)hasEsco;
-(void)setA2dp:(unsigned)arg1 ;
-(void)setHasA2dp:(BOOL)arg1 ;
-(BOOL)hasA2dp;
-(void)setSniff:(unsigned)arg1 ;
-(void)setHasSniff:(BOOL)arg1 ;
-(BOOL)hasSniff;
-(void)setPagescan:(unsigned)arg1 ;
-(void)setHasPagescan:(BOOL)arg1 ;
-(BOOL)hasPagescan;
-(void)setInquiryscan:(unsigned)arg1 ;
-(void)setHasInquiryscan:(BOOL)arg1 ;
-(BOOL)hasInquiryscan;
-(void)setHasPage:(BOOL)arg1 ;
-(void)setInquiry:(unsigned)arg1 ;
-(void)setHasInquiry:(BOOL)arg1 ;
-(BOOL)hasInquiry;
-(void)setMss:(unsigned)arg1 ;
-(void)setHasMss:(BOOL)arg1 ;
-(BOOL)hasMss;
-(void)setPark:(unsigned)arg1 ;
-(void)setHasPark:(BOOL)arg1 ;
-(BOOL)hasPark;
-(void)setBle:(unsigned)arg1 ;
-(void)setHasBle:(BOOL)arg1 ;
-(BOOL)hasBle;
-(void)setBlescan:(unsigned)arg1 ;
-(void)setHasBlescan:(BOOL)arg1 ;
-(BOOL)hasBlescan;
-(void)setHasOther:(BOOL)arg1 ;
-(BOOL)hasOther;
-(unsigned)sco;
-(unsigned)esco;
-(unsigned)a2dp;
-(unsigned)sniff;
-(unsigned)pagescan;
-(unsigned)inquiryscan;
-(unsigned)inquiry;
-(unsigned)mss;
-(unsigned)ble;
-(unsigned)blescan;
@end

