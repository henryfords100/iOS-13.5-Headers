/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NTFeedTransforming.h>

@class NSDictionary, NSString;

@interface NTCostAwareLimitTransformation : NSObject <NTFeedTransforming> {

	double _costOfFeedItemsForLastTransformation;
	NSDictionary* _costByFeedItemIDsForLastTransformation;
	double _budget;
	/*^block*/id _appraiser;

}

@property (nonatomic,readonly) double budget;                                                  //@synthesize budget=_budget - In the implementation block
@property (nonatomic,copy,readonly) id appraiser;                                              //@synthesize appraiser=_appraiser - In the implementation block
@property (assign,nonatomic) double costOfFeedItemsForLastTransformation;                      //@synthesize costOfFeedItemsForLastTransformation=_costOfFeedItemsForLastTransformation - In the implementation block
@property (nonatomic,copy) NSDictionary * costByFeedItemIDsForLastTransformation;              //@synthesize costByFeedItemIDsForLastTransformation=_costByFeedItemIDsForLastTransformation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(double)budget;
-(id)transformFeedItems:(id)arg1 ;
-(id)initWithBudget:(double)arg1 appraiser:(/*^block*/id)arg2 ;
-(double)costOfFeedItemsForLastTransformation;
-(NSDictionary *)costByFeedItemIDsForLastTransformation;
-(id)appraiser;
-(void)setCostOfFeedItemsForLastTransformation:(double)arg1 ;
-(void)setCostByFeedItemIDsForLastTransformation:(NSDictionary *)arg1 ;
@end

