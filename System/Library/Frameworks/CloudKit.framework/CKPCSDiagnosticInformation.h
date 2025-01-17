/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableDictionary, NSMutableArray;

@interface CKPCSDiagnosticInformation : NSObject <NSSecureCoding> {

	NSString* _identityInfo;
	NSString* _serviceIdentityInfo;
	NSMutableDictionary* _pcsInfoByZoneID;
	NSMutableArray* _notFoundZoneIDs;

}

@property (nonatomic,retain) NSString * identityInfo;                            //@synthesize identityInfo=_identityInfo - In the implementation block
@property (nonatomic,retain) NSString * serviceIdentityInfo;                     //@synthesize serviceIdentityInfo=_serviceIdentityInfo - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pcsInfoByZoneID;              //@synthesize pcsInfoByZoneID=_pcsInfoByZoneID - In the implementation block
@property (nonatomic,retain) NSMutableArray * notFoundZoneIDs;                   //@synthesize notFoundZoneIDs=_notFoundZoneIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identityInfo;
-(NSString *)serviceIdentityInfo;
-(NSMutableDictionary *)pcsInfoByZoneID;
-(NSMutableArray *)notFoundZoneIDs;
-(void)setIdentityInfo:(NSString *)arg1 ;
-(void)setServiceIdentityInfo:(NSString *)arg1 ;
-(void)setPcsInfoByZoneID:(NSMutableDictionary *)arg1 ;
-(void)setNotFoundZoneIDs:(NSMutableArray *)arg1 ;
@end

