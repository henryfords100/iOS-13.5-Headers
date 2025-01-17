/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Weather/Weather-Structs.h>
@class NSHashTable, NSOperationQueue, WAForecastModel, NSDate, WFServiceConnection;

@interface WATodayModel : NSObject {

	NSHashTable* _observers;
	NSOperationQueue* _modelOperationQueue;
	BOOL _hasPendingUpdates;
	WAForecastModel* _forecastModel;
	NSDate* _lastUpdateDate;
	WFServiceConnection* _connection;
	ct_green_tea_logger_sRef _greenTeaLogger;

}

@property (nonatomic,retain) WFServiceConnection * connection;                     //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) ct_green_tea_logger_sRef greenTeaLogger;              //@synthesize greenTeaLogger=_greenTeaLogger - In the implementation block
@property (assign,nonatomic) BOOL hasPendingUpdates;                               //@synthesize hasPendingUpdates=_hasPendingUpdates - In the implementation block
@property (nonatomic,retain) WAForecastModel * forecastModel;                      //@synthesize forecastModel=_forecastModel - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdateDate;                              //@synthesize lastUpdateDate=_lastUpdateDate - In the implementation block
+(id)autoupdatingLocationModelWithPreferences:(id)arg1 effectiveBundleIdentifier:(id)arg2 ;
+(id)modelWithLocation:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(WFServiceConnection *)connection;
-(void)setConnection:(WFServiceConnection *)arg1 ;
-(id)location;
-(id)initWithLocation:(id)arg1 ;
-(NSDate *)lastUpdateDate;
-(void)setLastUpdateDate:(NSDate *)arg1 ;
-(ct_green_tea_logger_sRef)greenTeaLogger;
-(void)setHasPendingUpdates:(BOOL)arg1 ;
-(WAForecastModel *)forecastModel;
-(void)_locationUpdateCompleted:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_executeLocationUpdateWithCompletion:(/*^block*/id)arg1 ;
-(void)_forecastUpdateCompleted:(id)arg1 forecastModel:(id)arg2 error:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_executeForecastRetrievalForLocation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setForecastModel:(WAForecastModel *)arg1 ;
-(void)_willDeliverForecastModel:(id)arg1 ;
-(void)_fireTodayModelForecastWasUpdated:(id)arg1 ;
-(void)_persistStateWithModel:(id)arg1 ;
-(BOOL)hasPendingUpdates;
-(void)performDelayedUpdatesForObserver:(id)arg1 ;
-(BOOL)executeModelUpdateWithCompletion:(/*^block*/id)arg1 ;
-(void)checkIfNeedsToUpdate;
-(BOOL)hasCrossedHourlyBoundary;
-(void)clearLocationUpdateState;
-(void)_fireTodayModelWantsUpdate;
-(void)setGreenTeaLogger:(ct_green_tea_logger_sRef)arg1 ;
@end

