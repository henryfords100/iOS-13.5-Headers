/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface MIDICIProfile : NSObject <NSSecureCoding> {

	NSString* name;
	NSData* profileID;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSData * profileID; 
+(id)description;
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(const void*)rawData;
-(NSData *)profileID;
-(id)initWithData:(id)arg1 name:(id)arg2 ;
@end

