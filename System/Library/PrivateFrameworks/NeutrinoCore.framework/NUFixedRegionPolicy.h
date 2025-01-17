/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NURegionPolicy.h>

@class NURegion, NSString;

@interface NUFixedRegionPolicy : NSObject <NURegionPolicy> {

	long long _roundingPolicy;
	NURegion* _region;
	SCD_Struct_NU7 _scale;

}

@property (assign) SCD_Struct_NU7 scale;                            //@synthesize scale=_scale - In the implementation block
@property (assign) long long roundingPolicy;                        //@synthesize roundingPolicy=_roundingPolicy - In the implementation block
@property (readonly) NURegion * region;                             //@synthesize region=_region - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(SCD_Struct_NU7)scale;
-(NURegion *)region;
-(id)initWithRect:(SCD_Struct_NU8)arg1 ;
-(void)setScale:(SCD_Struct_NU7)arg1 ;
-(id)initWithRegion:(id)arg1 ;
-(long long)roundingPolicy;
-(void)setRoundingPolicy:(long long)arg1 ;
-(id)regionForGeometry:(id)arg1 ;
@end

