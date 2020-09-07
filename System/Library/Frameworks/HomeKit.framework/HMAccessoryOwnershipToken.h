/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface HMAccessoryOwnershipToken : NSObject <NSSecureCoding> {

	NSData* _internalData;

}

@property (nonatomic,retain) NSData * internalData;              //@synthesize internalData=_internalData - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSData *)internalData;
-(void)setInternalData:(NSData *)arg1 ;
@end
