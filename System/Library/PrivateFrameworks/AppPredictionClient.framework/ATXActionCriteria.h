/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSPredicate, NSDateInterval;

@interface ATXActionCriteria : NSObject <NSCopying, NSSecureCoding> {

	BOOL _lockScreenEligible;
	NSDate* _startDate;
	NSDate* _endDate;
	NSPredicate* _predicate;

}

@property (nonatomic,readonly) NSDate * startDate;                         //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                           //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) BOOL lockScreenEligible;                    //@synthesize lockScreenEligible=_lockScreenEligible - In the implementation block
@property (nonatomic,readonly) NSDateInterval * dateInterval; 
@property (nonatomic,readonly) NSPredicate * predicate;                    //@synthesize predicate=_predicate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSPredicate *)predicate;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSDateInterval *)dateInterval;
-(id)json;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 lockScreenEligible:(BOOL)arg3 predicate:(id)arg4 ;
-(BOOL)isRelevant:(id)arg1 ;
-(BOOL)lockScreenEligible;
@end

