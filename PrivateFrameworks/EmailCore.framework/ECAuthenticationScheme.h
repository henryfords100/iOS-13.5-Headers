/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ECAuthenticationScheme : NSObject

@property (nonatomic,readonly) BOOL hasEncryption; 
@property (nonatomic,readonly) BOOL requiresPassword; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * humanReadableName; 
+(void)initialize;
+(id)knownSchemes;
+(id)schemeWithName:(id)arg1 ;
+(id)authenticationSchemesForAccount:(id)arg1 connection:(id)arg2 ;
+(void)registerSchemeClass:(Class)arg1 ;
-(NSString *)name;
-(NSString *)humanReadableName;
-(BOOL)requiresPassword;
-(BOOL)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2 ;
-(Class)connectionClassForAccountClass:(Class)arg1 ;
-(BOOL)hasEncryption;
-(id)authenticatorForAccount:(id)arg1 connection:(id)arg2 ;
-(Class)authenticatorClass;
@end
