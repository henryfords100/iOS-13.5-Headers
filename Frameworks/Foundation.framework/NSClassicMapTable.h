/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSMapTable.h>

@interface NSClassicMapTable : NSMapTable {

	SCD_Struct_NS36* _keyCallBacks;
	SCD_Struct_NS37* _valueCallBacks;
	CFBasicHashRef _ht;

}
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copy;
-(unsigned long long)count;
-(id)allKeys;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)allValues;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)removeAllItems;
-(void)setItem:(const void*)arg1 forKnownAbsentKey:(const void*)arg2 ;
-(void*)existingItemForSetItem:(const void*)arg1 forAbsentKey:(const void*)arg2 ;
-(BOOL)mapMember:(const void*)arg1 originalKey:(const void*)arg2 value:(const void*)arg3 ;
-(unsigned long long)getKeys:(const void*)arg1 values:(const void*)arg2 ;
@end
