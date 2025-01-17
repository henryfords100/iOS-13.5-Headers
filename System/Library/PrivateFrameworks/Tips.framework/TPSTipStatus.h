/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Tips.framework/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tips/Tips-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, NSDate, NSArray;

@interface TPSTipStatus : NSObject <NSSecureCoding, NSCopying> {

	NSString* _lastDisplayContext;
	NSMutableArray* _hintDisplayedDates;
	NSMutableArray* _desiredOutcomePerformedDates;
	NSMutableArray* _hintNotDisplayedDueToFrequencyControlDates;
	BOOL _expired;
	BOOL _preconditionMatched;
	long long _hintIneligibleReason;
	unsigned long long _displayType;
	NSString* _identifier;
	NSString* _universalIdentifier;
	NSDate* _dateForTriggerRestartTracking;
	NSDate* _hintEligibleDate;
	NSDate* _hintWouldHaveBeenDisplayedDate;
	NSDate* _hintDismissalDate;
	NSDate* _contentViewedDate;

}

@property (nonatomic,copy) NSString * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * universalIdentifier;                                       //@synthesize universalIdentifier=_universalIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * hintDisplayedDates; 
@property (nonatomic,copy) NSArray * desiredOutcomePerformedDates; 
@property (nonatomic,copy) NSArray * hintNotDisplayedDueToFrequencyControlDates; 
@property (assign,nonatomic) long long hintIneligibleReason;                                     //@synthesize hintIneligibleReason=_hintIneligibleReason - In the implementation block
@property (assign,nonatomic) unsigned long long displayType;                                     //@synthesize displayType=_displayType - In the implementation block
@property (assign,getter=isExpired,nonatomic) BOOL expired;                                      //@synthesize expired=_expired - In the implementation block
@property (assign,getter=isPreconditionMatched,nonatomic) BOOL preconditionMatched;              //@synthesize preconditionMatched=_preconditionMatched - In the implementation block
@property (nonatomic,copy) NSDate * dateForTriggerRestartTracking;                               //@synthesize dateForTriggerRestartTracking=_dateForTriggerRestartTracking - In the implementation block
@property (nonatomic,copy) NSDate * hintEligibleDate;                                            //@synthesize hintEligibleDate=_hintEligibleDate - In the implementation block
@property (nonatomic,copy) NSDate * hintWouldHaveBeenDisplayedDate;                              //@synthesize hintWouldHaveBeenDisplayedDate=_hintWouldHaveBeenDisplayedDate - In the implementation block
@property (nonatomic,copy) NSDate * hintDismissalDate;                                           //@synthesize hintDismissalDate=_hintDismissalDate - In the implementation block
@property (nonatomic,copy) NSDate * contentViewedDate;                                           //@synthesize contentViewedDate=_contentViewedDate - In the implementation block
@property (nonatomic,copy) NSString * lastDisplayContext;                                        //@synthesize lastDisplayContext=_lastDisplayContext - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(unsigned long long)displayType;
-(void)setDisplayType:(unsigned long long)arg1 ;
-(BOOL)isExpired;
-(void)setExpired:(BOOL)arg1 ;
-(NSArray *)hintDisplayedDates;
-(NSArray *)hintNotDisplayedDueToFrequencyControlDates;
-(NSString *)lastDisplayContext;
-(long long)hintIneligibleReason;
-(NSDate *)hintWouldHaveBeenDisplayedDate;
-(NSArray *)desiredOutcomePerformedDates;
-(void)setPreconditionMatched:(BOOL)arg1 ;
-(void)setHintIneligibleReason:(long long)arg1 ;
-(void)setUniversalIdentifier:(NSString *)arg1 ;
-(void)setDateForTriggerRestartTracking:(NSDate *)arg1 ;
-(void)setHintEligibleDate:(NSDate *)arg1 ;
-(void)setLastDisplayContext:(NSString *)arg1 ;
-(void)setHintDisplayedDates:(NSArray *)arg1 ;
-(void)setHintWouldHaveBeenDisplayedDate:(NSDate *)arg1 ;
-(void)setHintDismissalDate:(NSDate *)arg1 ;
-(void)setContentViewedDate:(NSDate *)arg1 ;
-(void)setDesiredOutcomePerformedDates:(NSArray *)arg1 ;
-(void)setHintNotDisplayedDueToFrequencyControlDates:(NSArray *)arg1 ;
-(void)removeHintEligibleDateStatus;
-(void)addHintDisplayedDate:(id)arg1 ;
-(void)addHintNotDisplayedDueToFrequencyControlDate:(id)arg1 ;
-(void)addDesiredOutcomePerformedDate:(id)arg1 ;
-(BOOL)isUserKnew;
-(BOOL)reenrollIfAllowed;
-(BOOL)isPreconditionMatched;
-(NSString *)universalIdentifier;
-(NSDate *)dateForTriggerRestartTracking;
-(NSDate *)hintEligibleDate;
-(NSDate *)hintDismissalDate;
-(NSDate *)contentViewedDate;
@end

