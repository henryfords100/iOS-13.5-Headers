/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface TVRCPINEntryAttributes : NSObject <NSSecureCoding> {

	NSArray* _groupLengths;

}

@property (nonatomic,readonly) unsigned long long totalDigitCount; 
@property (nonatomic,readonly) unsigned long long numberOfDigitGroups; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDigitCount:(unsigned long long)arg1 ;
-(unsigned long long)numberOfDigitGroups;
-(unsigned long long)numberOfDigitsInGroup:(unsigned long long)arg1 ;
-(unsigned long long)totalDigitCount;
-(id)initWithGroupLengths:(id)arg1 ;
@end
