/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXResource.h>
#import <libobjc.A.dylib/SXHTMLResource.h>
@class NSString, NSURL;


@protocol SXHTMLResource <SXResource>
@property (nonatomic,readonly) NSString * HTML; 
@property (nonatomic,readonly) NSURL * baseURL; 
@required
-(NSURL *)baseURL;
-(NSString *)HTML;

@end


@class NSString, NSURL;

@interface SXHTMLResource : SXResource <SXHTMLResource>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSString * HTML; 
@property (nonatomic,readonly) NSURL * baseURL; 
-(NSURL *)baseURL;
-(NSString *)HTML;
@end

