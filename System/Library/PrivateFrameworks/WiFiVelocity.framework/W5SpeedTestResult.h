/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLLocation, NSError;

@interface W5SpeedTestResult : NSObject <NSCopying, NSSecureCoding> {

	long long _direction;
	long long _size;
	CLLocation* _location;
	NSError* _error;
	double _speed;

}

@property (assign,nonatomic) long long direction;              //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) long long size;                   //@synthesize size=_size - In the implementation block
@property (nonatomic,copy) CLLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSError * error;                    //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) double speed;                     //@synthesize speed=_speed - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)size;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(CLLocation *)location;
-(void)setSize:(long long)arg1 ;
-(long long)direction;
-(void)setDirection:(long long)arg1 ;
-(double)speed;
-(void)setSpeed:(double)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
@end

