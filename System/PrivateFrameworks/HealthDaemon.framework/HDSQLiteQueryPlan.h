/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface HDSQLiteQueryPlan : NSObject {

	BOOL _includesTableScan;
	BOOL _usesIndex;
	BOOL _usesCoveringIndex;
	NSArray* _queryPlanRows;
	NSArray* _indices;

}

@property (nonatomic,copy,readonly) NSArray * queryPlanRows;              //@synthesize queryPlanRows=_queryPlanRows - In the implementation block
@property (nonatomic,readonly) BOOL includesTableScan;                    //@synthesize includesTableScan=_includesTableScan - In the implementation block
@property (nonatomic,readonly) BOOL usesIndex;                            //@synthesize usesIndex=_usesIndex - In the implementation block
@property (nonatomic,readonly) BOOL usesCoveringIndex;                    //@synthesize usesCoveringIndex=_usesCoveringIndex - In the implementation block
@property (nonatomic,readonly) NSArray * indices;                         //@synthesize indices=_indices - In the implementation block
-(id)description;
-(NSArray *)indices;
-(id)initWithQueryPlanRows:(id)arg1 ;
-(NSArray *)queryPlanRows;
-(BOOL)includesTableScan;
-(BOOL)usesIndex;
-(BOOL)usesCoveringIndex;
@end
