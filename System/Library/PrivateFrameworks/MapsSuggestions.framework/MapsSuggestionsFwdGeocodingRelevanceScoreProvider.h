/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestionsRelevanceScoreProvider.h>

@protocol MapsSuggestionsNetworkRequester, MapsSuggestionsRelevanceScoreProvider;
@class NSString;

@interface MapsSuggestionsFwdGeocodingRelevanceScoreProvider : NSObject <MapsSuggestionsRelevanceScoreProvider> {

	id<MapsSuggestionsNetworkRequester> _networkRequester;
	id<MapsSuggestionsRelevanceScoreProvider> _wrappedScoreProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
-(NSString *)uniqueName;
-(BOOL)relevanceScoreForNames:(id)arg1 addresses:(id)arg2 mapItems:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)preLoad;
-(id)initDecoratingRelevanceScoreProvider:(id)arg1 networkRequester:(id)arg2 ;
@end
