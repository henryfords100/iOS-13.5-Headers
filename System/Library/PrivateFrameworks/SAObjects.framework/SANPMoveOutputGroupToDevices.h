/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSArray;

@interface SANPMoveOutputGroupToDevices : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * groupID; 
@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
+(id)moveOutputGroupToDevices;
+(id)moveOutputGroupToDevicesWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)groupIdentifier;
-(NSString *)groupID;
-(void)setGroupID:(NSString *)arg1 ;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
@end

