/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:45 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface WFPEMEncoding : NSObject {

	NSString* _type;
	NSData* _data;

}

@property (nonatomic,copy) NSString * type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSData * data;                //@synthesize data=_data - In the implementation block
+(id)decodePEM:(id)arg1 error:(id*)arg2 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)initWithType:(id)arg1 data:(id)arg2 ;
-(id)encodedPEM;
@end
