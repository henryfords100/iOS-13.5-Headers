/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableOrderedSet, NSMutableDictionary;

@interface ICSearchResultSection : NSObject {

	NSMutableOrderedSet* _searchResults;
	NSMutableDictionary* _identifierToSearchResult;
	NSMutableDictionary* _hiddenSearchResults;

}

@property (nonatomic,retain) NSMutableOrderedSet * searchResults;                         //@synthesize searchResults=_searchResults - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * identifierToSearchResult;              //@synthesize identifierToSearchResult=_identifierToSearchResult - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * hiddenSearchResults;                   //@synthesize hiddenSearchResults=_hiddenSearchResults - In the implementation block
-(id)init;
-(id)description;
-(id)identifiers;
-(void)setSearchResults:(NSMutableOrderedSet *)arg1 ;
-(NSMutableOrderedSet *)searchResults;
-(void)addSearchResults:(id)arg1 ;
-(void)setIdentifierToSearchResult:(NSMutableDictionary *)arg1 ;
-(void)setHiddenSearchResults:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)identifierToSearchResult;
-(NSMutableDictionary *)hiddenSearchResults;
-(id)hiddenIdentifiers;
-(BOOL)removeSearchResultForIdentifier:(id)arg1 forHiding:(BOOL)arg2 ;
-(void)resetToSearchResults:(id)arg1 ;
@end
