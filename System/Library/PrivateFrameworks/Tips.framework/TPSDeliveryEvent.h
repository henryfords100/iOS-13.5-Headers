/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Tips.framework/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tips/Tips-Structs.h>
#import <Tips/TPSDeliveryObject.h>

@class NSDate, NSString, NSMutableDictionary, NSMutableSet;

@interface TPSDeliveryEvent : TPSDeliveryObject {

	unsigned _minObservationCount;
	unsigned long long _status;
	long long _type;
	NSDate* _matchedDate;
	NSDate* _eventSinceDate;
	NSString* _key;
	NSString* _identifier;
	TPSDeliveryEvent* _state;
	NSMutableDictionary* _observationMap;
	NSMutableSet* _observerIdentifiers;

}

@property (assign,nonatomic) unsigned long long status;                         //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) long long type;                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) TPSDeliveryEvent * state;                            //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * observationMap;              //@synthesize observationMap=_observationMap - In the implementation block
@property (nonatomic,retain) NSMutableSet * observerIdentifiers;                //@synthesize observerIdentifiers=_observerIdentifiers - In the implementation block
@property (nonatomic,readonly) unsigned currentObservationCount; 
@property (assign,nonatomic) unsigned minObservationCount;                      //@synthesize minObservationCount=_minObservationCount - In the implementation block
@property (nonatomic,copy) NSDate * matchedDate;                                //@synthesize matchedDate=_matchedDate - In the implementation block
@property (nonatomic,copy) NSDate * eventSinceDate;                             //@synthesize eventSinceDate=_eventSinceDate - In the implementation block
@property (nonatomic,copy) NSString * key;                                      //@synthesize key=_key - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
+(long long)typeFromEventDictionary:(id)arg1 ;
+(id)identifierFromEventInfoDictionary:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(TPSDeliveryEvent *)state;
-(unsigned long long)status;
-(void)setKey:(NSString *)arg1 ;
-(void)setState:(TPSDeliveryEvent *)arg1 ;
-(void)setStatus:(unsigned long long)arg1 ;
-(void)setMatchedDate:(NSDate *)arg1 ;
-(NSDate *)matchedDate;
-(unsigned)currentObservationCount;
-(void)removeObserverIdentifiers:(id)arg1 ;
-(void)setObservationMap:(NSMutableDictionary *)arg1 ;
-(unsigned)minObservationCount;
-(NSDate *)eventSinceDate;
-(void)setMinObservationCount:(unsigned)arg1 ;
-(void)setEventSinceDate:(NSDate *)arg1 ;
-(void)removeAllObservations;
-(void)addObserverIdentifier:(id)arg1 ;
-(NSMutableDictionary *)observationMap;
-(BOOL)observedWithResults:(id)arg1 ;
-(NSMutableSet *)observerIdentifiers;
-(BOOL)canBeRemoved;
-(id)newStateFromStateDictionary:(id)arg1 ;
-(void)removeOutdatedObservationDates;
-(void)setObserverIdentifiers:(NSMutableSet *)arg1 ;
@end

