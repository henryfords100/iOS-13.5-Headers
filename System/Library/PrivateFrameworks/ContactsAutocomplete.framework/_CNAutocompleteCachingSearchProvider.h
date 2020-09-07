/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompleteSearchProvider.h>

@protocol CNFuture;
@class NSString;

@interface _CNAutocompleteCachingSearchProvider : NSObject <CNAutocompleteSearchProvider> {

	id<CNFuture> _localSearchFuture;
	id<CNFuture> _recentsSearchFuture;
	id<CNFuture> _suggestionsSearchFuture;
	id<CNFuture> _duetSearchFuture;
	id<CNFuture> _localExtensionSearchesFuture;
	id<CNFuture> _directoryServerSearchFuture;
	id<CNFuture> _calendarServerSearchFuture;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)localSearch;
-(id)initWithSearchProvider:(id)arg1 ;
-(id)recentsSearch;
-(id)suggestionsSearch;
-(id)duetSearch;
-(id)localExtensionSearches;
-(id)directoryServerSearch;
-(id)calendarServerSearch;
@end
