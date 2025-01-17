/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <JITAppKit/MCLURLRequestRewriteRule.h>

@class NSRegularExpression, NSString, NSSet;

@interface MCLURLRewriteRule : MCLURLRequestRewriteRule {

	NSRegularExpression* _replacePattern;
	NSString* _replaceTemplate;
	NSSet* _ignoreHosts;

}
+(id)urlRewriteRuleFromHost:(id)arg1 toHost:(id)arg2 ignoreHosts:(id)arg3 ;
-(id)initWithMatchPattern:(id)arg1 replacePattern:(id)arg2 replaceTemplate:(id)arg3 ignoreHosts:(id)arg4 ;
-(void)rewriteURLRequest:(id)arg1 ;
@end

