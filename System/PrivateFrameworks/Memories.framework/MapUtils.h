/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Memories/Memories-Structs.h>
@interface MapUtils : NSObject
+(id)locationWithImageURL:(id)arg1 ;
+(float)bestEndingLongitude:(float)arg1 forShortestTripFromLongitude:(float)arg2 ;
+(CGPoint)pixelFromLatitude:(float)arg1 longitude:(float)arg2 onEquirectangularMapWithSize:(CGSize)arg3 geographicBounds:(CGRect)arg4 ;
+(CGRect)geographicRectFromPixelRect:(CGRect)arg1 onEquirectangularMapWithSize:(CGSize)arg2 geographicBounds:(CGRect)arg3 ;
@end
