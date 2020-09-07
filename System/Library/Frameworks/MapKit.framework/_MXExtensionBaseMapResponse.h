/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet;

@interface _MXExtensionBaseMapResponse : NSObject <NSSecureCoding> {

	NSSet* _namedImages;
	NSSet* _features;

}

@property (nonatomic,copy) NSSet * namedImages;              //@synthesize namedImages=_namedImages - In the implementation block
@property (nonatomic,copy) NSSet * features;                 //@synthesize features=_features - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)features;
-(void)setFeatures:(NSSet *)arg1 ;
-(void)setNamedImages:(NSSet *)arg1 ;
-(NSSet *)namedImages;
@end
