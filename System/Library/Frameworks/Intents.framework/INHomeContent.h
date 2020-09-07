/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INHomeFilter, NSArray, NSString;

@interface INHomeContent : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	INHomeFilter* _filter;
	NSArray* _actions;

}

@property (nonatomic,copy,readonly) INHomeFilter * filter;              //@synthesize filter=_filter - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actions;                  //@synthesize actions=_actions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(INHomeFilter *)filter;
-(id)_dictionaryRepresentation;
-(NSArray *)actions;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)initWithFilter:(id)arg1 actions:(id)arg2 ;
@end
