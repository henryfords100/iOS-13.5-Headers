/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSFetchedResultsSectionInfo.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSArray;

@interface RadioTrackHistorySectionInfo : NSObject <NSCopying, NSFetchedResultsSectionInfo, NSMutableCopying> {

	NSString* _indexTitle;
	NSString* _name;
	unsigned long long _numberOfObjects;
	NSArray* _objects;

}

@property (nonatomic,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * indexTitle;                           //@synthesize indexTitle=_indexTitle - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfObjects;              //@synthesize numberOfObjects=_numberOfObjects - In the implementation block
@property (nonatomic,readonly) NSArray * objects;                               //@synthesize objects=_objects - In the implementation block
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSArray *)objects;
-(unsigned long long)numberOfObjects;
-(NSString *)indexTitle;
@end

