/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FamilyCircleUI/FAFamilyRequest.h>

@class NSString;

@interface FAInviteFamilyMemberRequest : FAFamilyRequest {

	NSString* _inviteeEmail;
	NSString* _inviteeCompositeName;
	NSString* _inviteeShortName;

}

@property (nonatomic,copy) NSString * inviteeEmail;                      //@synthesize inviteeEmail=_inviteeEmail - In the implementation block
@property (nonatomic,copy) NSString * inviteeCompositeName;              //@synthesize inviteeCompositeName=_inviteeCompositeName - In the implementation block
@property (nonatomic,copy) NSString * inviteeShortName;                  //@synthesize inviteeShortName=_inviteeShortName - In the implementation block
-(id)_queryString;
-(id)_endpoint;
-(BOOL)isUserInitiated;
-(NSString *)inviteeEmail;
-(void)setInviteeEmail:(NSString *)arg1 ;
-(NSString *)inviteeCompositeName;
-(void)setInviteeCompositeName:(NSString *)arg1 ;
-(NSString *)inviteeShortName;
-(void)setInviteeShortName:(NSString *)arg1 ;
@end

