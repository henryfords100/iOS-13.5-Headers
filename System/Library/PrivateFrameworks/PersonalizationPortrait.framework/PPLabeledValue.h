/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCopyingNSSecureCoding;
@class NSString, NSObject;

@interface PPLabeledValue : NSObject <NSSecureCoding, NSCopying> {

	NSString* _label;
	NSObject*<NSCopying>*<NSSecureCoding> _value;

}

@property (nonatomic,readonly) NSString * label;                                         //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSObject*<NSCopying>*<NSSecureCoding> value;              //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)labeledValueWithLabel:(id)arg1 value:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSObject*<NSCopying>*<NSSecureCoding>)value;
-(NSString *)label;
-(id)initWithLabel:(id)arg1 value:(id)arg2 ;
-(BOOL)isEqualToLabeledValue:(id)arg1 ;
@end

