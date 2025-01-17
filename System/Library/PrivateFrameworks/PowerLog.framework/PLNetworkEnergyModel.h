/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PowerLog.framework/PowerLog
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface PLNetworkEnergyModel : NSObject {

	unsigned char _linkType;
	unsigned _updateCount;
	double _powerlevel1Duration;
	double _powerlevel2Duration;
	double _powerlevel3Duration;
	double _overallBytes;
	double _overallDuration;
	NSString* _taskUUID;
	NSArray* _linkCost;
	NSArray* _linkDuration;
	NSArray* _linkLevel1Parameters;

}

@property (assign) double powerlevel1Duration;                  //@synthesize powerlevel1Duration=_powerlevel1Duration - In the implementation block
@property (assign) double powerlevel2Duration;                  //@synthesize powerlevel2Duration=_powerlevel2Duration - In the implementation block
@property (assign) double powerlevel3Duration;                  //@synthesize powerlevel3Duration=_powerlevel3Duration - In the implementation block
@property (assign) unsigned char linkType;                      //@synthesize linkType=_linkType - In the implementation block
@property (assign) double overallBytes;                         //@synthesize overallBytes=_overallBytes - In the implementation block
@property (assign) double overallDuration;                      //@synthesize overallDuration=_overallDuration - In the implementation block
@property (assign) unsigned updateCount;                        //@synthesize updateCount=_updateCount - In the implementation block
@property (retain) NSString * taskUUID;                         //@synthesize taskUUID=_taskUUID - In the implementation block
@property (retain) NSArray * linkCost;                          //@synthesize linkCost=_linkCost - In the implementation block
@property (retain) NSArray * linkDuration;                      //@synthesize linkDuration=_linkDuration - In the implementation block
@property (retain) NSArray * linkLevel1Parameters;              //@synthesize linkLevel1Parameters=_linkLevel1Parameters - In the implementation block
-(id)description;
-(NSString *)taskUUID;
-(unsigned char)linkType;
-(void)setLinkType:(unsigned char)arg1 ;
-(id)initWithLinkType:(unsigned char)arg1 ;
-(double)powerlevel1Duration;
-(double)powerlevel2Duration;
-(double)powerlevel3Duration;
-(double)overallBytes;
-(double)overallDuration;
-(double)getEnergy;
-(unsigned)updateCount;
-(void)setUpdateCount:(unsigned)arg1 ;
-(void)setOverallDuration:(double)arg1 ;
-(void)setOverallBytes:(double)arg1 ;
-(double)computeLevel1TimeWithBytes:(double)arg1 ;
-(void)updateAllLevelTimesWithLevel1Time:(double)arg1 withUpdateDuration:(double)arg2 ;
-(NSArray *)linkCost;
-(NSArray *)linkLevel1Parameters;
-(NSArray *)linkDuration;
-(void)setPowerlevel1Duration:(double)arg1 ;
-(void)setPowerlevel2Duration:(double)arg1 ;
-(void)setPowerlevel3Duration:(double)arg1 ;
-(id)initWithLinkType:(unsigned char)arg1 withTaskUUID:(id)arg2 ;
-(void)updateWithBytes:(double)arg1 withDuration:(double)arg2 ;
-(void)reportEnergyToPowerlogWithClientID:(short)arg1 ;
-(void)setTaskUUID:(NSString *)arg1 ;
-(void)setLinkCost:(NSArray *)arg1 ;
-(void)setLinkDuration:(NSArray *)arg1 ;
-(void)setLinkLevel1Parameters:(NSArray *)arg1 ;
@end

