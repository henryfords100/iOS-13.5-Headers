/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDateInterval;

@interface RTStoredLocationOfInterestEnumerationOptions : NSObject <NSCopying> {

	BOOL _ascendingVisitEntryDate;
	BOOL _singleVisit;
	unsigned long long _batchSize;
	NSDateInterval* _dateInterval;

}

@property (nonatomic,readonly) BOOL ascendingVisitEntryDate;                    //@synthesize ascendingVisitEntryDate=_ascendingVisitEntryDate - In the implementation block
@property (nonatomic,readonly) unsigned long long batchSize;                    //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,copy,readonly) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,readonly) BOOL singleVisit;                                //@synthesize singleVisit=_singleVisit - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)batchSize;
-(NSDateInterval *)dateInterval;
-(id)initWithAscendingVisitEntryDate:(BOOL)arg1 batchSize:(unsigned long long)arg2 dateInterval:(id)arg3 singleVisit:(BOOL)arg4 ;
-(BOOL)singleVisit;
-(BOOL)ascendingVisitEntryDate;
@end

