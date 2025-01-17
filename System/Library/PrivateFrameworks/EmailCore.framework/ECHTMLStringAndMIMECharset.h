/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol ECMIMECharset;
@class NSString;

@interface ECHTMLStringAndMIMECharset : NSObject <NSSecureCoding> {

	NSString* _string;
	id<ECMIMECharset> _charset;

}

@property (nonatomic,copy,readonly) NSString * string;                 //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) id<ECMIMECharset> charset;              //@synthesize charset=_charset - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)mf_utf8HTMLStringWithString:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)string;
-(id<ECMIMECharset>)charset;
-(id)initWithString:(id)arg1 charset:(id)arg2 ;
@end

