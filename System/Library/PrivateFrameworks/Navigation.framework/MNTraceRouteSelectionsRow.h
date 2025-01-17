/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface MNTraceRouteSelectionsRow : NSObject {

	double _startTimestamp;
	double _endTimestamp;
	NSData* _routeID;
	unsigned long long _selectedRouteIndex;

}

@property (assign,nonatomic) double startTimestamp;                              //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (assign,nonatomic) double endTimestamp;                                //@synthesize endTimestamp=_endTimestamp - In the implementation block
@property (nonatomic,copy) NSData * routeID;                                     //@synthesize routeID=_routeID - In the implementation block
@property (assign,nonatomic) unsigned long long selectedRouteIndex;              //@synthesize selectedRouteIndex=_selectedRouteIndex - In the implementation block
-(void)setStartTimestamp:(double)arg1 ;
-(double)startTimestamp;
-(NSData *)routeID;
-(void)setRouteID:(NSData *)arg1 ;
-(double)endTimestamp;
-(unsigned long long)selectedRouteIndex;
-(void)setSelectedRouteIndex:(unsigned long long)arg1 ;
-(void)setEndTimestamp:(double)arg1 ;
@end

