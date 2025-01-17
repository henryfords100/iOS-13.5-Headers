/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSNumber, EDAMContact;

@interface EDAMIdentity : FATObject {

	NSNumber* _id;
	EDAMContact* _contact;
	NSNumber* _userId;
	NSNumber* _deactivated;
	NSNumber* _sameBusiness;
	NSNumber* _blocked;
	NSNumber* _userConnected;
	NSNumber* _eventId;

}

@property (nonatomic,retain) NSNumber * id;                         //@synthesize id=_id - In the implementation block
@property (nonatomic,retain) EDAMContact * contact;                 //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) NSNumber * userId;                     //@synthesize userId=_userId - In the implementation block
@property (nonatomic,retain) NSNumber * deactivated;                //@synthesize deactivated=_deactivated - In the implementation block
@property (nonatomic,retain) NSNumber * sameBusiness;               //@synthesize sameBusiness=_sameBusiness - In the implementation block
@property (nonatomic,retain) NSNumber * blocked;                    //@synthesize blocked=_blocked - In the implementation block
@property (nonatomic,retain) NSNumber * userConnected;              //@synthesize userConnected=_userConnected - In the implementation block
@property (nonatomic,retain) NSNumber * eventId;                    //@synthesize eventId=_eventId - In the implementation block
+(id)structName;
+(id)structFields;
-(EDAMContact *)contact;
-(void)setContact:(EDAMContact *)arg1 ;
-(NSNumber *)deactivated;
-(NSNumber *)eventId;
-(void)setEventId:(NSNumber *)arg1 ;
-(NSNumber *)blocked;
-(void)setBlocked:(NSNumber *)arg1 ;
-(NSNumber *)userId;
-(void)setUserId:(NSNumber *)arg1 ;
-(NSNumber *)id;
-(void)setId:(NSNumber *)arg1 ;
-(void)setDeactivated:(NSNumber *)arg1 ;
-(NSNumber *)sameBusiness;
-(void)setSameBusiness:(NSNumber *)arg1 ;
-(NSNumber *)userConnected;
-(void)setUserConnected:(NSNumber *)arg1 ;
@end

