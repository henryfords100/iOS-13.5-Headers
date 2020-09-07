/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKLibrary
@property (readonly,nonatomic) id<PKSubscriptionController> subscriptionController; 
@required
-(id<PKSubscriptionController>)subscriptionController;
-(void)fetchMatchesFor:(id)arg1 limit:(long long)arg2 resultsHandler:(/*^block*/id)arg3;
-(void)fetchAllShowsWithResultsHandler:(/*^block*/id)arg1;

@end
