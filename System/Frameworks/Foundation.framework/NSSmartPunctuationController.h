/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSSmartPunctuationClient;
#import <Foundation/Foundation-Structs.h>
@class NSSmartQuoteOptions;

@interface NSSmartPunctuationController : NSObject {

	id<NSSmartPunctuationClient> _client;
	NSSmartQuoteOptions* _options;
	unsigned long long _types;

}

@property (assign) id<NSSmartPunctuationClient> client; 
@property (copy) NSSmartQuoteOptions * smartQuoteOptions; 
@property (assign) BOOL smartQuotesEnabled; 
@property (assign) BOOL smartDashesEnabled; 
-(id)init;
-(void)dealloc;
-(BOOL)smartQuotesEnabled;
-(NSSmartQuoteOptions *)smartQuoteOptions;
-(void)setSmartQuoteOptions:(NSSmartQuoteOptions *)arg1 ;
-(void)setSmartQuotesEnabled:(BOOL)arg1 ;
-(BOOL)smartDashesEnabled;
-(void)setSmartDashesEnabled:(BOOL)arg1 ;
-(id<NSSmartPunctuationClient>)client;
-(void)setClient:(id<NSSmartPunctuationClient>)arg1 ;
-(void)clientDidReplaceRange:(NSRange)arg1 changeInLength:(long long)arg2 ;
@end
