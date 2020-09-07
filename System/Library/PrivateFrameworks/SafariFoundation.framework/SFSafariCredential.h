/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol SFSafariPasswordCredential;
@class NSString, NSDate;

@interface SFSafariCredential : NSObject <NSSecureCoding> {

	NSString* _user;
	NSString* _password;
	NSString* _site;
	NSDate* _creationDate;
	id<SFSafariPasswordCredential> _externalCredential;

}

@property (nonatomic,readonly) id<SFSafariPasswordCredential> externalCredential;              //@synthesize externalCredential=_externalCredential - In the implementation block
@property (nonatomic,readonly) NSString * user;                                                //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) NSString * password;                                            //@synthesize password=_password - In the implementation block
@property (nonatomic,readonly) NSString * site;                                                //@synthesize site=_site - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                                          //@synthesize creationDate=_creationDate - In the implementation block
@property (getter=isExternal,nonatomic,readonly) BOOL external; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)user;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)password;
-(NSDate *)creationDate;
-(BOOL)isExternal;
-(NSString *)site;
-(id<SFSafariPasswordCredential>)externalCredential;
-(id)initWithUser:(id)arg1 password:(id)arg2 site:(id)arg3 creationDate:(id)arg4 ;
-(id)initWithExternalCredential:(id)arg1 ;
@end
