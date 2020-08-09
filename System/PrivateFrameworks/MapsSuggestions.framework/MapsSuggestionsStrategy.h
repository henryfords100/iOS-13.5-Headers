/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MapsSuggestionsManager;


@protocol MapsSuggestionsStrategy <MapsSuggestionsObject>
@property (assign,nonatomic,__weak) MapsSuggestionsManager * manager; 
@required
-(MapsSuggestionsManager *)manager;
-(void)setManager:(id)arg1;
-(void)clearData;
-(id)topSuggestionsWithSourceEntries:(id)arg1 error:(id*)arg2;
-(BOOL)preFiltersKept:(id)arg1;
-(BOOL)postFiltersKept:(id)arg1;
-(void)addPreFilter:(id)arg1;
-(void)addPostFilter:(id)arg1;
-(void)removeFilter:(id)arg1;
-(void)removeAllFilters;
-(void)addImprover:(id)arg1;
-(void)removeAllImprovers;
-(void)addDeduper:(id)arg1;
-(void)removeAllDedupers;

@end
