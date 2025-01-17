/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HAPMetadataConstraints, NSString;

@interface HAPCharacteristicMetadata : HMFObject <NSCopying, NSSecureCoding> {

	HAPMetadataConstraints* _constraints;
	NSString* _manufacturerDescription;
	NSString* _format;
	NSString* _units;

}

@property (nonatomic,retain) HAPMetadataConstraints * constraints;              //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,copy) NSString * manufacturerDescription;                  //@synthesize manufacturerDescription=_manufacturerDescription - In the implementation block
@property (nonatomic,retain) NSString * format;                                 //@synthesize format=_format - In the implementation block
@property (nonatomic,retain) NSString * units;                                  //@synthesize units=_units - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HAPMetadataConstraints *)constraints;
-(NSString *)format;
-(void)setFormat:(NSString *)arg1 ;
-(void)setConstraints:(HAPMetadataConstraints *)arg1 ;
-(NSString *)units;
-(void)setUnits:(NSString *)arg1 ;
-(NSString *)manufacturerDescription;
-(void)setManufacturerDescription:(NSString *)arg1 ;
-(id)initWithConstraints:(id)arg1 description:(id)arg2 format:(id)arg3 units:(id)arg4 ;
-(BOOL)isEqualToCharacteristicMetadata:(id)arg1 ;
-(id)_generateValidConstraints:(id)arg1 ;
@end

