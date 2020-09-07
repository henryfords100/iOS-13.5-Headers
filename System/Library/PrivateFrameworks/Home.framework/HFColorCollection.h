/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NAIdentifiable.h>

@class HFRGBColor, HFTemperatureColor, NSString;

@interface HFColorCollection : NSObject <NAIdentifiable> {

	HFRGBColor* _RGBColor;
	HFTemperatureColor* _temperatureColor;

}

@property (nonatomic,copy,readonly) HFRGBColor * RGBColor;                                     //@synthesize RGBColor=_RGBColor - In the implementation block
@property (nonatomic,copy,readonly) HFTemperatureColor * temperatureColor;                     //@synthesize temperatureColor=_temperatureColor - In the implementation block
@property (nonatomic,copy,readonly) id<HFColorPrimitive> preferredColorPrimitive; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(HFTemperatureColor *)temperatureColor;
-(HFRGBColor *)RGBColor;
-(id)initWithPrimitiveColors:(id)arg1 ;
-(id)colorPrimitives;
-(id<HFColorPrimitive>)preferredColorPrimitive;
-(id)initWithPrimitiveColor:(id)arg1 ;
-(id)colorByAdjustingForProfile:(id)arg1 ;
@end
