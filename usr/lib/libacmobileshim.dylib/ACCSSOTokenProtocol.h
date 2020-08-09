/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:05:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class ACFPrincipal, NSDate, NSString, NSNumber, ACFMessage;


@protocol ACCSSOTokenProtocol <NSObject>
@property (nonatomic,retain) ACFPrincipal * principal; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) NSDate * expirationDate; 
@property (nonatomic,retain) NSString * nonce; 
@property (nonatomic,retain) NSString * sessionToken; 
@property (nonatomic,retain) NSDate * recentAuthenticationDate; 
@property (nonatomic,retain) NSNumber * personID; 
@property (nonatomic,retain) NSNumber * isTwoStepVerificationRequired; 
@property (nonatomic,retain) ACFMessage * initialRequest; 
@property (nonatomic,retain) NSString * userPreferences; 
@property (nonatomic,retain) NSDate * recentUnlockDate; 
@property (nonatomic,retain) NSString * clientSecret; 
@property (nonatomic,retain) NSNumber * clientSecretCreationTimestamp; 
@property (nonatomic,retain) NSNumber * isUserEnrolledFor2SV; 
@property (assign,nonatomic) BOOL longLiveSession; 
@optional
-(void)setUserPreferences:(id)arg1;
-(NSString *)userPreferences;
-(ACFMessage *)initialRequest;
-(NSString *)clientSecret;
-(void)setClientSecret:(id)arg1;
-(NSDate *)recentUnlockDate;
-(void)setRecentUnlockDate:(id)arg1;
-(void)setInitialRequest:(id)arg1;
-(void)setClientSecretCreationTimestamp:(id)arg1;
-(NSNumber *)isUserEnrolledFor2SV;
-(void)setIsUserEnrolledFor2SV:(id)arg1;
-(BOOL)longLiveSession;
-(void)setLongLiveSession:(BOOL)arg1;
-(NSNumber *)clientSecretCreationTimestamp;

@required
-(NSDate *)expirationDate;
-(void)setExpirationDate:(id)arg1;
-(NSDate *)creationDate;
-(void)setCreationDate:(id)arg1;
-(NSString *)nonce;
-(void)setNonce:(id)arg1;
-(NSNumber *)personID;
-(void)setPersonID:(id)arg1;
-(void)setSessionToken:(id)arg1;
-(NSString *)sessionToken;
-(void)setPrincipal:(id)arg1;
-(ACFPrincipal *)principal;
-(NSDate *)recentAuthenticationDate;
-(void)setRecentAuthenticationDate:(id)arg1;
-(NSNumber *)isTwoStepVerificationRequired;
-(void)setIsTwoStepVerificationRequired:(id)arg1;

@end
