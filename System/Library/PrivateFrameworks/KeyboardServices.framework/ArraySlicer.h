/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface ArraySlicer : NSObject {

	unsigned long long _sliceSize;
	unsigned long long _count;
	unsigned long long _offset;
	NSArray* _array;

}

@property (nonatomic,readonly) unsigned long long remaining; 
-(unsigned long long)remaining;
-(id)initWithArray:(id)arg1 sliceSize:(unsigned long long)arg2 ;
-(id)nextSlice;
-(id)unconsumed;
-(id)consumed;
@end

