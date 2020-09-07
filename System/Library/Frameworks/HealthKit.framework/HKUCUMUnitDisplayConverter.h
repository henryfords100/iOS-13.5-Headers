/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface HKUCUMUnitDisplayConverter : NSObject {

	NSDictionary* _synonymLookupTable;
	NSDictionary* _hkUnitNameLookupTable;

}

@property (nonatomic,copy) NSDictionary * synonymLookupTable;                 //@synthesize synonymLookupTable=_synonymLookupTable - In the implementation block
@property (nonatomic,copy) NSDictionary * hkUnitNameLookupTable;              //@synthesize hkUnitNameLookupTable=_hkUnitNameLookupTable - In the implementation block
+(id)sharedConverter;
-(id)init;
-(id)hkUnitNameForUCUMUnitCode:(id)arg1 ;
-(id)synonymForUCUMUnitString:(id)arg1 ;
-(void)setSynonymLookupTable:(NSDictionary *)arg1 ;
-(void)setHkUnitNameLookupTable:(NSDictionary *)arg1 ;
-(NSDictionary *)synonymLookupTable;
-(NSDictionary *)hkUnitNameLookupTable;
@end
