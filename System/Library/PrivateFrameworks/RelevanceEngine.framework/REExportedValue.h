/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface REExportedValue : NSObject
+(id)exportedValueForObject:(id)arg1 ;
+(id)_exportedValueForTable:(id)arg1 ;
+(id)exportedValueForString:(id)arg1 ;
+(id)exportedValueForNumber:(id)arg1 ;
+(id)exportedValueForArray:(id)arg1 ;
+(id)exportedValueForDictionary:(id)arg1 ;
+(id)exportedValueForDate:(id)arg1 ;
-(unsigned long long)type;
-(id)stringValue;
-(id)dateValue;
-(id)dictionaryValue;
-(id)objectValue;
-(id)arrayValue;
-(id)numberValue;
-(unsigned long long)propertyCount;
-(void)enumerateValuesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)shouldEncodeProperty:(id)arg1 ;
-(id)exportedValueForKey:(id)arg1 ;
@end
