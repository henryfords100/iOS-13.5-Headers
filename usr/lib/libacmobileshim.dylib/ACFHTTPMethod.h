/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:05:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSData;

@interface ACFHTTPMethod : NSObject {

	NSString* _name;
	NSDictionary* _headerFields;
	NSData* _body;

}

@property (retain) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (retain) NSDictionary * headerFields;              //@synthesize headerFields=_headerFields - In the implementation block
@property (retain) NSData * body;                            //@synthesize body=_body - In the implementation block
+(id)method;
+(id)methodWithName:(id)arg1 headerFields:(id)arg2 bodyPropertyList:(id)arg3 error:(id*)arg4 ;
+(id)methodWithName:(id)arg1 headerFields:(id)arg2 body:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setBody:(NSData *)arg1 ;
-(NSData *)body;
-(NSDictionary *)headerFields;
-(void)setHeaderFields:(NSDictionary *)arg1 ;
-(id)initWithName:(id)arg1 headerFields:(id)arg2 body:(id)arg3 ;
@end
