/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface PLSearchResultSection : NSObject {

	unsigned long long _resultTypes;
	unsigned long long _categoryMask;
	NSArray* _searchResults;

}

@property (nonatomic,readonly) unsigned long long resultTypes;               //@synthesize resultTypes=_resultTypes - In the implementation block
@property (nonatomic,readonly) unsigned long long categoryMask;              //@synthesize categoryMask=_categoryMask - In the implementation block
@property (nonatomic,readonly) NSArray * searchResults;                      //@synthesize searchResults=_searchResults - In the implementation block
-(NSArray *)searchResults;
-(unsigned long long)categoryMask;
-(id)initWithResultTypes:(unsigned long long)arg1 categoryMask:(unsigned long long)arg2 searchResults:(id)arg3 ;
-(unsigned long long)resultTypes;
@end
