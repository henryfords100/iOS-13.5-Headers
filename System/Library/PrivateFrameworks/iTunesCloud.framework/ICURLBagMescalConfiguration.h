/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface ICURLBagMescalConfiguration : NSObject {

	BOOL _shouldSignBody;
	NSArray* _fields;
	NSArray* _headers;

}

@property (assign,nonatomic) BOOL shouldSignBody;              //@synthesize shouldSignBody=_shouldSignBody - In the implementation block
@property (nonatomic,copy) NSArray * fields;                   //@synthesize fields=_fields - In the implementation block
@property (nonatomic,copy) NSArray * headers;                  //@synthesize headers=_headers - In the implementation block
-(id)description;
-(NSArray *)fields;
-(void)setHeaders:(NSArray *)arg1 ;
-(NSArray *)headers;
-(void)setFields:(NSArray *)arg1 ;
-(BOOL)shouldSignBody;
-(void)setShouldSignBody:(BOOL)arg1 ;
@end
