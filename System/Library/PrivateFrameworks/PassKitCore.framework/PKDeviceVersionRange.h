/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface PKDeviceVersionRange : NSObject <NSSecureCoding, NSCopying> {

	NSString* _minimum;
	NSString* _maximum;
	NSArray* _models;
	PKDeviceVersionRange* _companion;

}

@property (nonatomic,readonly) NSString * minimum;                            //@synthesize minimum=_minimum - In the implementation block
@property (nonatomic,readonly) NSString * maximum;                            //@synthesize maximum=_maximum - In the implementation block
@property (nonatomic,readonly) NSArray * models;                              //@synthesize models=_models - In the implementation block
@property (nonatomic,readonly) PKDeviceVersionRange * companion;              //@synthesize companion=_companion - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)minimum;
-(NSString *)maximum;
-(NSArray *)models;
-(id)asDictionary;
-(PKDeviceVersionRange *)companion;
-(BOOL)isEqualToDeviceVersionRange:(id)arg1 ;
-(BOOL)_matchesDeviceVersion:(id)arg1 ;
@end

