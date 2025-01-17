/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAStateElement.h>

@class NSString;

@interface CAStateRemoveElement : CAStateElement {

	NSString* _keyPath;
	id _object;

}

@property (nonatomic,copy) NSString * keyPath;              //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,retain) id object;                     //@synthesize object=_object - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)object;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setObject:(id)arg1 ;
-(NSString *)keyPath;
-(BOOL)matches:(id)arg1 ;
-(void)apply:(id)arg1 ;
-(void)setKeyPath:(NSString *)arg1 ;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(BOOL)CAMLTypeSupportedForKey:(id)arg1 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
@end

