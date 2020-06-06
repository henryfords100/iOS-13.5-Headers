/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSUDuration : NSObject <NSCopying> {

	double mTimeInterval;

}
+(id)durationWithTimeInterval:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)timeInterval;
-(id)initWithTimeInterval:(double)arg1 ;
@end
