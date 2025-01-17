/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class BBBulletinUpdate;

@interface BBBulletinUpdateTransaction : NSObject <NSCopying, NSSecureCoding> {

	BBBulletinUpdate* _bulletinUpdate;
	unsigned long long _transactionID;

}

@property (nonatomic,copy,readonly) BBBulletinUpdate * bulletinUpdate;              //@synthesize bulletinUpdate=_bulletinUpdate - In the implementation block
@property (nonatomic,readonly) unsigned long long transactionID;                    //@synthesize transactionID=_transactionID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)transactionWithBulletinUpdate:(id)arg1 transactionID:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)transactionID;
-(BBBulletinUpdate *)bulletinUpdate;
-(id)_initWithBulletinUpdate:(id)arg1 transactionID:(unsigned long long)arg2 ;
@end

