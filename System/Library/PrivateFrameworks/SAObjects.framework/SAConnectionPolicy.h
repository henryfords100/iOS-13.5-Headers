/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString, NSArray;

@interface SAConnectionPolicy : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * disableMPTCP; 
@property (nonatomic,copy) NSNumber * enableOptimisticDNS; 
@property (nonatomic,copy) NSNumber * enableTLS13; 
@property (nonatomic,copy) NSNumber * enableTLS13ZeroRTT; 
@property (nonatomic,copy) NSNumber * enableTcpFastOpen; 
@property (assign,nonatomic) BOOL enabled; 
@property (nonatomic,copy) NSNumber * globalTimeout; 
@property (nonatomic,copy) NSNumber * mptcpFallbackPort; 
@property (nonatomic,copy) NSString * policyId; 
@property (nonatomic,copy) NSArray * routes; 
@property (nonatomic,copy) NSNumber * timeToLive; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)connectionPolicy;
+(id)connectionPolicyWithDictionary:(id)arg1 context:(id)arg2 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id)groupIdentifier;
-(NSNumber *)timeToLive;
-(NSArray *)routes;
-(void)setRoutes:(NSArray *)arg1 ;
-(id)encodedClassName;
-(void)setTimeToLive:(NSNumber *)arg1 ;
-(NSNumber *)disableMPTCP;
-(void)setDisableMPTCP:(NSNumber *)arg1 ;
-(NSNumber *)enableOptimisticDNS;
-(void)setEnableOptimisticDNS:(NSNumber *)arg1 ;
-(NSNumber *)enableTLS13;
-(void)setEnableTLS13:(NSNumber *)arg1 ;
-(NSNumber *)enableTLS13ZeroRTT;
-(void)setEnableTLS13ZeroRTT:(NSNumber *)arg1 ;
-(NSNumber *)enableTcpFastOpen;
-(void)setEnableTcpFastOpen:(NSNumber *)arg1 ;
-(NSNumber *)globalTimeout;
-(void)setGlobalTimeout:(NSNumber *)arg1 ;
-(NSNumber *)mptcpFallbackPort;
-(void)setMptcpFallbackPort:(NSNumber *)arg1 ;
-(NSString *)policyId;
-(void)setPolicyId:(NSString *)arg1 ;
@end

