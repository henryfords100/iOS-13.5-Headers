/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface MapsSuggestionsSignalPackCache : NSObject {

	NSMutableArray* _mapItems;
	NSMutableArray* _signalPacks;
	NSMutableArray* _entries;

}
-(id)init;
-(unsigned long long)_count;
-(BOOL)insertMapItem:(id)arg1 signalPack:(id)arg2 entry:(id)arg3 ;
-(id)signalPackForMapItem:(id)arg1 ;
-(void)_removeExpiredEntries;
-(BOOL)_popRow;
-(id)_containsSignalPackForMapItem:(id)arg1 ;
-(void)_removeObjectsAtIndex:(unsigned long long)arg1 ;
@end
