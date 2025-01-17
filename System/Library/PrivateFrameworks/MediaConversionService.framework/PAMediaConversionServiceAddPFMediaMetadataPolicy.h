/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaConversionService/PAMediaConversionServiceImageMetadataPolicy.h>

@interface PAMediaConversionServiceAddPFMediaMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy {

	unsigned char _type;
	id _value;

}

@property (assign) unsigned char type;              //@synthesize type=_type - In the implementation block
@property (retain) id value;                        //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)policyWithType:(unsigned char)arg1 value:(id)arg2 ;
-(unsigned char)type;
-(void)setType:(unsigned char)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id)processMetadata:(id)arg1 ;
-(BOOL)metadataNeedsProcessing:(id)arg1 ;
@end

