/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDTCPConnectionInfo : PBCodable <NSCopying> {

	unsigned _dnsResolutionLatency;
	int _interfaceType;
	unsigned _tcpHandshakeLatency;
	unsigned _tcpRetransmissions;
	unsigned _tcpRxBytes;
	unsigned _tcpTxBytes;
	unsigned _tlsLatency;
	SCD_Struct_AW17 _has;

}

@property (assign,nonatomic) BOOL hasDnsResolutionLatency; 
@property (assign,nonatomic) unsigned dnsResolutionLatency;              //@synthesize dnsResolutionLatency=_dnsResolutionLatency - In the implementation block
@property (assign,nonatomic) BOOL hasTcpHandshakeLatency; 
@property (assign,nonatomic) unsigned tcpHandshakeLatency;               //@synthesize tcpHandshakeLatency=_tcpHandshakeLatency - In the implementation block
@property (assign,nonatomic) BOOL hasTlsLatency; 
@property (assign,nonatomic) unsigned tlsLatency;                        //@synthesize tlsLatency=_tlsLatency - In the implementation block
@property (assign,nonatomic) BOOL hasInterfaceType; 
@property (assign,nonatomic) int interfaceType;                          //@synthesize interfaceType=_interfaceType - In the implementation block
@property (assign,nonatomic) BOOL hasTcpRetransmissions; 
@property (assign,nonatomic) unsigned tcpRetransmissions;                //@synthesize tcpRetransmissions=_tcpRetransmissions - In the implementation block
@property (assign,nonatomic) BOOL hasTcpTxBytes; 
@property (assign,nonatomic) unsigned tcpTxBytes;                        //@synthesize tcpTxBytes=_tcpTxBytes - In the implementation block
@property (assign,nonatomic) BOOL hasTcpRxBytes; 
@property (assign,nonatomic) unsigned tcpRxBytes;                        //@synthesize tcpRxBytes=_tcpRxBytes - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setInterfaceType:(int)arg1 ;
-(void)setHasInterfaceType:(BOOL)arg1 ;
-(BOOL)hasInterfaceType;
-(int)interfaceType;
-(id)interfaceTypeAsString:(int)arg1 ;
-(int)StringAsInterfaceType:(id)arg1 ;
-(void)setDnsResolutionLatency:(unsigned)arg1 ;
-(void)setHasDnsResolutionLatency:(BOOL)arg1 ;
-(BOOL)hasDnsResolutionLatency;
-(void)setTcpHandshakeLatency:(unsigned)arg1 ;
-(void)setHasTcpHandshakeLatency:(BOOL)arg1 ;
-(BOOL)hasTcpHandshakeLatency;
-(void)setTlsLatency:(unsigned)arg1 ;
-(void)setHasTlsLatency:(BOOL)arg1 ;
-(BOOL)hasTlsLatency;
-(void)setTcpRetransmissions:(unsigned)arg1 ;
-(void)setHasTcpRetransmissions:(BOOL)arg1 ;
-(BOOL)hasTcpRetransmissions;
-(void)setTcpTxBytes:(unsigned)arg1 ;
-(void)setHasTcpTxBytes:(BOOL)arg1 ;
-(BOOL)hasTcpTxBytes;
-(void)setTcpRxBytes:(unsigned)arg1 ;
-(void)setHasTcpRxBytes:(BOOL)arg1 ;
-(BOOL)hasTcpRxBytes;
-(unsigned)dnsResolutionLatency;
-(unsigned)tcpHandshakeLatency;
-(unsigned)tlsLatency;
-(unsigned)tcpRetransmissions;
-(unsigned)tcpTxBytes;
-(unsigned)tcpRxBytes;
@end

