/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SHMatcher.h>

@protocol SHMatcherDelegate, SHNetworkRecognitionRequester;
@class SHPartnerConfiguration, NSString;

@interface SHPartnerAPISignatureMatcher : NSObject <SHMatcher> {

	id<SHMatcherDelegate> _delegate;
	SHPartnerConfiguration* _configuration;
	id<SHNetworkRecognitionRequester> _networkRequester;

}

@property (nonatomic,retain) SHPartnerConfiguration * configuration;                          //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) id<SHNetworkRecognitionRequester> networkRequester;              //@synthesize networkRequester=_networkRequester - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SHMatcherDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
-(void)match:(id)arg1 ;
-(id<SHMatcherDelegate>)delegate;
-(void)setDelegate:(id<SHMatcherDelegate>)arg1 ;
-(void)setConfiguration:(SHPartnerConfiguration *)arg1 ;
-(SHPartnerConfiguration *)configuration;
-(void)setNetworkRequester:(id<SHNetworkRecognitionRequester>)arg1 ;
-(id<SHNetworkRecognitionRequester>)networkRequester;
-(id)initWithPartnerConfiguration:(id)arg1 networkRequester:(id)arg2 ;
-(id)partnerURLRequestForSignature:(id)arg1 endpoint:(id)arg2 apiKey:(id)arg3 ;
-(void)responseForServerData:(id)arg1 signature:(id)arg2 ;
-(id)buildURLForSignature:(id)arg1 endpoint:(id)arg2 ;
-(id)initWithPartnerConfiguration:(id)arg1 ;
@end

