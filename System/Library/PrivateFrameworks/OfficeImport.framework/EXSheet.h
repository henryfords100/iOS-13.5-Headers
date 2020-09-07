/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXSheet : NSObject
+(void)readFrom:(xmlNode*)arg1 state:(id)arg2 ;
+(Class)exSheetClassFromXmlSheetType:(id)arg1 location:(id)arg2 ;
+(void)readCommonSheetElementsFrom:(xmlTextReaderRef)arg1 state:(id)arg2 ;
+(void)readAllDrawablesWithState:(id)arg1 ;
+(void)readSheetProperties:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readLegacyDrawablesWithState:(id)arg1 ;
+(void)readDrawablesWithState:(id)arg1 ;
+(void)readDelayedSheeWithLocation:(id)arg1 sheetXmlType:(id)arg2 state:(id)arg3 ;
@end
