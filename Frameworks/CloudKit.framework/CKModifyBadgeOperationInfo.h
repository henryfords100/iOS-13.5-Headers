/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CKModifyBadgeOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	unsigned long long _badgeValue;

}

@property (assign,nonatomic) unsigned long long badgeValue;              //@synthesize badgeValue=_badgeValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setBadgeValue:(unsigned long long)arg1 ;
-(unsigned long long)badgeValue;
@end
