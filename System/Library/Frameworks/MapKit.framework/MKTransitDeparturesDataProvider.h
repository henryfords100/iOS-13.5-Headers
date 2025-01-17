/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MKTransitMapItemUpdaterDelegate.h>

@protocol MKTransitDeparturesDataProviderDelegate;
@class NSSet, NSMutableArray, NSMutableDictionary, MKTransitItemIncidentsController, NSMutableSet, NSMapTable, MKTransitMapItemUpdater, NSDate, MKMapItem, NSString, NSArray;

@interface MKTransitDeparturesDataProvider : NSObject <MKTransitMapItemUpdaterDelegate> {

	NSSet* _disabledSections;
	NSMutableArray* _sections;
	NSMutableDictionary* _sectionControllers;
	MKTransitItemIncidentsController* _incidentsController;
	NSMutableSet* _hiddenSections;
	NSMutableSet* _pagedSectionIdentifiers;
	BOOL _wantsSystemSectionCollapsing;
	NSMutableDictionary* _cachedSequencesForSection;
	NSMapTable* _cachedDirectionsForSystem;
	NSMapTable* _cachedSystemHasInactiveLines;
	MKTransitMapItemUpdater* _mapItemUpdater;
	long long _lastFailureDiagnosis;
	BOOL _active;
	BOOL _supportSystemSectionCollapsing;
	BOOL _refreshing;
	NSDate* _departureCutoffDate;
	NSDate* _lastCutoffDateWithValidSchedule;
	id<MKTransitDeparturesDataProviderDelegate> _delegate;
	MKMapItem* _mapItem;
	NSDate* _lastInfoRefreshDate;
	NSString* _lastInfoRefreshErrorDescription;

}

@property (nonatomic,retain) MKMapItem * mapItem;                                                                     //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) id<GEOMapItemTransitInfo> transitInfo; 
@property (assign,nonatomic,__weak) id<MKTransitDeparturesDataProviderDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                                             //@synthesize active=_active - In the implementation block
@property (assign,getter=supportsSystemSectionCollapsing,nonatomic) BOOL supportSystemSectionCollapsing;              //@synthesize supportSystemSectionCollapsing=_supportSystemSectionCollapsing - In the implementation block
@property (getter=allowsSystemSectionCollapsing,nonatomic,readonly) BOOL allowsSystemSectionCollapsing; 
@property (nonatomic,copy) NSSet * disabledSections;                                                                  //@synthesize disabledSections=_disabledSections - In the implementation block
@property (nonatomic,retain) NSDate * departureCutoffDate;                                                            //@synthesize departureCutoffDate=_departureCutoffDate - In the implementation block
@property (nonatomic,retain) NSDate * lastCutoffDateWithValidSchedule;                                                //@synthesize lastCutoffDateWithValidSchedule=_lastCutoffDateWithValidSchedule - In the implementation block
@property (getter=isRefreshing,nonatomic,readonly) BOOL refreshing;                                                   //@synthesize refreshing=_refreshing - In the implementation block
@property (nonatomic,readonly) NSDate * lastInfoRefreshDate;                                                          //@synthesize lastInfoRefreshDate=_lastInfoRefreshDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastInfoRefreshErrorDescription;                                       //@synthesize lastInfoRefreshErrorDescription=_lastInfoRefreshErrorDescription - In the implementation block
@property (nonatomic,readonly) NSArray * incidents; 
@property (nonatomic,readonly) NSArray * sectionControllers; 
@property (nonatomic,readonly) BOOL isStuckWithExpiredInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MKTransitDeparturesDataProviderDelegate>)delegate;
-(void)setDelegate:(id<MKTransitDeparturesDataProviderDelegate>)arg1 ;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(void)reloadData;
-(long long)numberOfSections;
-(long long)numberOfRowsInSection:(long long)arg1 ;
-(BOOL)isRefreshing;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(id<GEOMapItemTransitInfo>)transitInfo;
-(NSArray *)incidents;
-(id)initWithMapItem:(id)arg1 ;
-(id)possibleActions;
-(id)incidentsForSystem:(id)arg1 ;
-(id)_blockedIncidentEntities;
-(NSDate *)departureCutoffDate;
-(void)setDepartureCutoffDate:(NSDate *)arg1 ;
-(void)setSupportSystemSectionCollapsing:(BOOL)arg1 ;
-(BOOL)allowsSystemSectionCollapsing;
-(void)refreshSections;
-(id)sectionControllerForSection:(long long)arg1 ;
-(void)showNextPageInSection:(long long)arg1 ;
-(id)systemForSection:(long long)arg1 ;
-(long long)sectionTypeAtIndex:(long long)arg1 ;
-(NSArray *)sectionControllers;
-(BOOL)isHidingDeparturesForSystem:(id)arg1 ;
-(id)inactiveLinesForSection:(long long)arg1 ;
-(BOOL)isStuckWithExpiredInfo;
-(id)departuresControllerForSection:(long long)arg1 ;
-(id)dominantIncidentForDepartureSequence:(id)arg1 ;
-(void)showDeparturesForSystem:(id)arg1 insertedIndices:(out id*)arg2 ;
-(void)hideDeparturesForSystem:(id)arg1 removedIndices:(out id*)arg2 ;
-(NSString *)lastInfoRefreshErrorDescription;
-(id)incidentsForIncidentsSection;
-(id)identifierForSection:(long long)arg1 ;
-(id)directionForSection:(long long)arg1 ;
-(long long)sectionForIdentifier:(id)arg1 ;
-(long long)departureSequenceFrequencyTypeForSection:(long long)arg1 ;
-(BOOL)supportsSystemSectionCollapsing;
-(BOOL)_isSectionTypeEnabled:(long long)arg1 ;
-(BOOL)_hasIncidentsSection;
-(BOOL)_hasPlaceCardMessageSection;
-(long long)_numberOfDeparturesSectionsForSystem:(id)arg1 ;
-(BOOL)_systemHasInactiveLines:(id)arg1 ;
-(id)_identifierForSystem:(id)arg1 ;
-(BOOL)_hasConnectionsSection;
-(id)_controllerForSection:(long long)arg1 ;
-(id)_identifierForSection:(long long)arg1 ;
-(long long)_sectionForIdentifier:(id)arg1 ;
-(NSSet *)disabledSections;
-(id)_indexSetForHidingShowingSystem:(id)arg1 ;
-(id)_systemForSection:(long long)arg1 directionIndex:(out long long*)arg2 ;
-(id)_directionsForSystem:(id)arg1 hasSequencesWithNoDirection:(out BOOL*)arg2 ;
-(id)_departureCutoffDateForSequence:(id)arg1 ;
-(NSDate *)lastCutoffDateWithValidSchedule;
-(id)_departureSequencesForSection:(long long)arg1 ;
-(id)_departureCutoffDateForLine:(id)arg1 ;
-(id)_inactiveLinesControllerForSection:(long long)arg1 ;
-(id)_inactiveLinesForSystem:(id)arg1 ;
-(void)setLastCutoffDateWithValidSchedule:(NSDate *)arg1 ;
-(void)_updateRefreshFailureErrorDescription;
-(void)transitItemReferenceDateUpdater:(id)arg1 didUpdateToReferenceDate:(id)arg2 ;
-(id)ticketForTransitMapItemUpdater:(id)arg1 ;
-(void)transitMapItemUpdater:(id)arg1 willUpdateMapItem:(id)arg2 ;
-(void)transitMapItemUpdater:(id)arg1 updatedMapItem:(id)arg2 error:(id)arg3 ;
-(long long)indexOfFirstSectionWithType:(long long)arg1 ;
-(BOOL)isLastSectionForSystem:(id)arg1 ;
-(BOOL)_systemHasIncidents:(id)arg1 ;
-(id)_identifierForSequence:(id)arg1 ;
-(void)setDisabledSections:(NSSet *)arg1 ;
-(NSDate *)lastInfoRefreshDate;
@end

