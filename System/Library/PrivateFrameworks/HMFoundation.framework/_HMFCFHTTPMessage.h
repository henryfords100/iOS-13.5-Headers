/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>

@class NSDictionary, NSData;

@interface _HMFCFHTTPMessage : HMFObject {

	CFHTTPMessageRef _message;

}

@property (nonatomic,readonly) CFHTTPMessageRef message;                 //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) NSDictionary * headerFields; 
@property (nonatomic,copy) NSData * body; 
+(id)dateFormatter;
+(id)requestWithMethod:(id)arg1 url:(id)arg2 protocolVersion:(long long)arg3 ;
+(id)responseWithStatusCode:(long long)arg1 statusDescription:(id)arg2 protocolVersion:(long long)arg3 ;
-(id)init;
-(void)dealloc;
-(id)date;
-(id)contentType;
-(void)setContentType:(id)arg1 ;
-(CFHTTPMessageRef)message;
-(void)setDate:(id)arg1 ;
-(void)setBody:(NSData *)arg1 ;
-(NSData *)body;
-(NSDictionary *)headerFields;
-(long long)contentLength;
-(id)initWithMessageRef:(CFHTTPMessageRef)arg1 ;
-(id)valueForHeaderField:(id)arg1 ;
-(void)setValue:(id)arg1 forHeaderField:(id)arg2 ;
-(void)setContentLength:(long long)arg1 ;
@end
