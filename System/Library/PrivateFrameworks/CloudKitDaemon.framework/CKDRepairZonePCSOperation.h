/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKDRepairZonePCSOperation : CKDDatabaseOperation {

	/*^block*/id _zonePCSRepairProgressBlock;
	NSArray* _zoneIDs;
	NSMutableArray* _fetchedZones;
	NSMutableArray* _fixedZones;
	NSMutableDictionary* _pcsInfoByZoneID;

}

@property (nonatomic,retain) NSArray * zoneIDs;                                  //@synthesize zoneIDs=_zoneIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * fetchedZones;                      //@synthesize fetchedZones=_fetchedZones - In the implementation block
@property (nonatomic,retain) NSMutableArray * fixedZones;                        //@synthesize fixedZones=_fixedZones - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pcsInfoByZoneID;              //@synthesize pcsInfoByZoneID=_pcsInfoByZoneID - In the implementation block
@property (nonatomic,copy) id zonePCSRepairProgressBlock;                        //@synthesize zonePCSRepairProgressBlock=_zonePCSRepairProgressBlock - In the implementation block
-(void)main;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(NSArray *)zoneIDs;
-(void)setZoneIDs:(NSArray *)arg1 ;
-(NSMutableDictionary *)pcsInfoByZoneID;
-(void)setPcsInfoByZoneID:(NSMutableDictionary *)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setZonePCSRepairProgressBlock:(id)arg1 ;
-(id)nameForState:(unsigned long long)arg1 ;
-(BOOL)makeStateTransition;
-(void)_fetchZones;
-(NSMutableArray *)fetchedZones;
-(void)setFetchedZones:(NSMutableArray *)arg1 ;
-(void)_checkZonePCS;
-(void)_uploadRepairedZones;
-(NSMutableArray *)fixedZones;
-(id)zonePCSRepairProgressBlock;
-(id)_checkPCSDataForZone:(id)arg1 ;
-(void)setFixedZones:(NSMutableArray *)arg1 ;
@end

