/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString;

@interface IMNicknameEncryptionTag : NSObject {

	NSData* _dataRepresentation;

}

@property (nonatomic,readonly) NSString * stringRepresentation; 
@property (nonatomic,readonly) NSData * dataRepresentation;                  //@synthesize dataRepresentation=_dataRepresentation - In the implementation block
+(id)_tagWithDataRepresentation:(id)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)_tagWithStringRepresentation:(id)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSData *)dataRepresentation;
-(id)initWithDataRepresentation:(id)arg1 ;
-(NSString *)stringRepresentation;
-(BOOL)isEqualToTag:(id)arg1 error:(id*)arg2 ;
@end
