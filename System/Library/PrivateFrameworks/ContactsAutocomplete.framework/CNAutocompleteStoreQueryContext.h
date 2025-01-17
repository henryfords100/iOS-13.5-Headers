/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNCache;

@interface CNAutocompleteStoreQueryContext : NSObject {

	CNCache* _directoryServerReuseCache;
	CNCache* _calendarServerReuseCache;

}

@property (readonly) CNCache * directoryServerReuseCache;              //@synthesize directoryServerReuseCache=_directoryServerReuseCache - In the implementation block
@property (readonly) CNCache * calendarServerReuseCache;               //@synthesize calendarServerReuseCache=_calendarServerReuseCache - In the implementation block
+(id)cacheBoundaryStrategies;
-(id)init;
-(CNCache *)directoryServerReuseCache;
-(CNCache *)calendarServerReuseCache;
@end

