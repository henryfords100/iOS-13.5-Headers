/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSNumber, NSSet;

@interface _DKHistogramMO : NSManagedObject

@property (nonatomic,copy) NSString * deviceIdentifier; 
@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,copy) NSDate * startDate; 
@property (nonatomic,copy) NSString * streamName; 
@property (nonatomic,copy) NSNumber * streamTypeCode; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * customIdentifier; 
@property (nonatomic,retain) NSSet * value; 
+(id)fetchRequest;
@end
