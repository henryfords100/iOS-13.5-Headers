/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEORelatedSearchSuggestion, NSString;

@interface GEOMapItemChildActionSearch : NSObject {

	GEORelatedSearchSuggestion* _relatedSearchSuggestion;

}

@property (nonatomic,retain) GEORelatedSearchSuggestion * relatedSearchSuggestion;              //@synthesize relatedSearchSuggestion=_relatedSearchSuggestion - In the implementation block
@property (nonatomic,readonly) NSString * displayString; 
-(NSString *)displayString;
-(GEORelatedSearchSuggestion *)relatedSearchSuggestion;
-(void)setRelatedSearchSuggestion:(GEORelatedSearchSuggestion *)arg1 ;
-(id)initWithChildActionSearch:(id)arg1 ;
@end

