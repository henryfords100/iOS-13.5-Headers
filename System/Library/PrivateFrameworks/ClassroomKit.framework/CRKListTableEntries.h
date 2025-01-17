/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKTableEntries.h>

@class NSArray, NSString;

@interface CRKListTableEntries : NSObject <CRKTableEntries> {

	NSArray* mArray;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithArray:(id)arg1 ;
-(unsigned long long)rowCount;
-(unsigned long long)columnCount;
-(id)entryAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2 ;
@end

