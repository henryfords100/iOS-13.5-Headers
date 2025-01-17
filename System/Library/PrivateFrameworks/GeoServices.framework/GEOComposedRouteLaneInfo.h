/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSArray;

@interface GEOComposedRouteLaneInfo : NSObject <NSSecureCoding> {

	NSMutableArray* _directions;
	BOOL _good;
	BOOL _hov;
	BOOL _preferred;

}

@property (nonatomic,readonly) BOOL hasDirections; 
@property (nonatomic,readonly) NSArray * directions; 
@property (nonatomic,readonly) BOOL isLaneForManeuver; 
@property (nonatomic,readonly) BOOL isHOVLane; 
@property (nonatomic,readonly) BOOL isPreferredLaneForManeuver; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)directions;
-(BOOL)isLaneForManeuver;
-(BOOL)isHOVLane;
-(BOOL)isPreferredLaneForManeuver;
-(id)initWithLaneInfo:(id)arg1 ;
-(BOOL)hasDirections;
@end

