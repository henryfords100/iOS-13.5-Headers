/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompleteObservableBuilder.h>

@protocol CNAutocompleteObservableBuilder <NSObject>
@required
-(void)addContactsObservable:(id)arg1;
-(void)addCoreRecentsObservable:(id)arg1;
-(void)addSuggestionsObservable:(id)arg1;
-(void)addLocalExtensionObservable:(id)arg1;
-(void)addSupplementalObservable:(id)arg1;
-(void)addCachedDirectoryServerObservable:(id)arg1;
-(void)addDirectoryServerObservable:(id)arg1;
-(void)addCachedCalendarServerObservable:(id)arg1;
-(void)addCalendarServerObservable:(id)arg1;
-(void)setSupplementalResultsUseNetwork:(BOOL)arg1;
-(void)addDuetObservable:(id)arg1 doOnTimeout:(/*^block*/id)arg2;
-(void)setNetworkActivityStartDelay:(double)arg1;
-(void)setNetworkActivityDidStartHandler:(/*^block*/id)arg1;
-(void)setNetworkActivityDidStopHandler:(/*^block*/id)arg1;
-(id)makeObservable;

@end


@protocol CNAutocompleteObservableBuilderBatchingHelper, CNAutocompleteProbeProvider, CNScheduler;
@class NSString;

@interface CNAutocompleteObservableBuilder : NSObject <CNAutocompleteObservableBuilder> {

	BOOL _supplementalResultsUseNetwork;
	id<CNAutocompleteObservableBuilderBatchingHelper> _batchingHelper;
	id<CNAutocompleteProbeProvider> _probeProvider;
	double _networkActivityStartDelay;
	/*^block*/id _networkActivityDidStartHandler;
	/*^block*/id _networkActivityDidStopHandler;
	id<CNScheduler> _scheduler;

}

@property (nonatomic,readonly) id<CNAutocompleteObservableBuilderBatchingHelper> batchingHelper;              //@synthesize batchingHelper=_batchingHelper - In the implementation block
@property (nonatomic,readonly) id<CNAutocompleteProbeProvider> probeProvider;                                 //@synthesize probeProvider=_probeProvider - In the implementation block
@property (assign,nonatomic) double networkActivityStartDelay;                                                //@synthesize networkActivityStartDelay=_networkActivityStartDelay - In the implementation block
@property (assign,nonatomic) BOOL supplementalResultsUseNetwork;                                              //@synthesize supplementalResultsUseNetwork=_supplementalResultsUseNetwork - In the implementation block
@property (nonatomic,copy) id networkActivityDidStartHandler;                                                 //@synthesize networkActivityDidStartHandler=_networkActivityDidStartHandler - In the implementation block
@property (nonatomic,copy) id networkActivityDidStopHandler;                                                  //@synthesize networkActivityDidStopHandler=_networkActivityDidStopHandler - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> scheduler;                                                     //@synthesize scheduler=_scheduler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supplementalResultsUseNetwork:(unsigned long long)arg1 ;
+(id)builderWithSearchType:(unsigned long long)arg1 scheduler:(id)arg2 probeProvider:(id)arg3 ;
-(id<CNScheduler>)scheduler;
-(id<CNAutocompleteProbeProvider>)probeProvider;
-(void)addContactsObservable:(id)arg1 ;
-(void)addCoreRecentsObservable:(id)arg1 ;
-(void)addSuggestionsObservable:(id)arg1 ;
-(void)addLocalExtensionObservable:(id)arg1 ;
-(void)addSupplementalObservable:(id)arg1 ;
-(void)addCachedDirectoryServerObservable:(id)arg1 ;
-(void)addDirectoryServerObservable:(id)arg1 ;
-(void)addCachedCalendarServerObservable:(id)arg1 ;
-(void)addCalendarServerObservable:(id)arg1 ;
-(id)initWithBatchingHelper:(id)arg1 probeProvider:(id)arg2 scheduler:(id)arg3 ;
-(void)setSupplementalResultsUseNetwork:(BOOL)arg1 ;
-(id)probeObservable:(id)arg1 forPerformanceWithBlock:(/*^block*/id)arg2 ;
-(id<CNAutocompleteObservableBuilderBatchingHelper>)batchingHelper;
-(BOOL)supplementalResultsUseNetwork;
-(id)networkActivityDidStartHandler;
-(id)networkActivityDidStopHandler;
-(double)networkActivityStartDelay;
-(id)combineObservablesInBatch:(id)arg1 scheduler:(id)arg2 ;
-(void)addDuetObservable:(id)arg1 doOnTimeout:(/*^block*/id)arg2 ;
-(void)setNetworkActivityStartDelay:(double)arg1 ;
-(void)setNetworkActivityDidStartHandler:(id)arg1 ;
-(void)setNetworkActivityDidStopHandler:(id)arg1 ;
-(id)makeObservable;
@end

