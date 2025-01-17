/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOUserSessionEntity;

@interface GEOUserSessionSnapshot : NSObject {

	GEOUserSessionEntity* _shortSessionEntity;
	GEOUserSessionEntity* _longSessionEntity;
	GEOUserSessionEntity* _thirtyDayCountsSessionEntity;
	GEOUserSessionEntity* _navSessionEntity;
	GEOUserSessionEntity* _cohortSessionEntity;
	double _usageEventTime;

}

@property (nonatomic,retain) GEOUserSessionEntity * shortSessionEntity;                        //@synthesize shortSessionEntity=_shortSessionEntity - In the implementation block
@property (nonatomic,retain) GEOUserSessionEntity * longSessionEntity;                         //@synthesize longSessionEntity=_longSessionEntity - In the implementation block
@property (nonatomic,retain) GEOUserSessionEntity * thirtyDayCountsSessionEntity;              //@synthesize thirtyDayCountsSessionEntity=_thirtyDayCountsSessionEntity - In the implementation block
@property (nonatomic,retain) GEOUserSessionEntity * navSessionEntity;                          //@synthesize navSessionEntity=_navSessionEntity - In the implementation block
@property (nonatomic,retain) GEOUserSessionEntity * cohortSessionEntity;                       //@synthesize cohortSessionEntity=_cohortSessionEntity - In the implementation block
@property (assign,nonatomic) double usageEventTime;                                            //@synthesize usageEventTime=_usageEventTime - In the implementation block
-(id)initWithShortSessionEntity:(id)arg1 longSessionEntity:(id)arg2 thirtyDayCountsSessionEntity:(id)arg3 navSessionEntity:(id)arg4 cohortSessionEntity:(id)arg5 ;
-(GEOUserSessionEntity *)shortSessionEntity;
-(void)setShortSessionEntity:(GEOUserSessionEntity *)arg1 ;
-(GEOUserSessionEntity *)longSessionEntity;
-(void)setLongSessionEntity:(GEOUserSessionEntity *)arg1 ;
-(GEOUserSessionEntity *)thirtyDayCountsSessionEntity;
-(void)setThirtyDayCountsSessionEntity:(GEOUserSessionEntity *)arg1 ;
-(GEOUserSessionEntity *)navSessionEntity;
-(void)setNavSessionEntity:(GEOUserSessionEntity *)arg1 ;
-(GEOUserSessionEntity *)cohortSessionEntity;
-(void)setCohortSessionEntity:(GEOUserSessionEntity *)arg1 ;
-(double)usageEventTime;
-(void)setUsageEventTime:(double)arg1 ;
@end

