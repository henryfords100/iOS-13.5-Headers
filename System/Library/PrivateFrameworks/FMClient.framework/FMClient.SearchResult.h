/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface FMClient.SearchResult : NSObject <NSSecureCoding> {

	 devices;
	 resultCode;

}

@property (copy,nonatomic) NSArray * devices; 
@property (assign,nonatomic) long long resultCode; 
@property (readonly,nonatomic) NSString * debugDescription; 
@property (readonly,nonatomic) NSString * description; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)devices;
-(void)setDevices:(NSArray *)arg1 ;
-(void)setResultCode:(long long)arg1 ;
-(long long)resultCode;
@end
