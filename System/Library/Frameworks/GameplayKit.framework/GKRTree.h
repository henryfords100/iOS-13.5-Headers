/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameplayKit/GameplayKit-Structs.h>
@interface GKRTree : NSObject {

	GKCRTree<NSObject, float __attribute__((ext_vector_type(2)))>* _cRTree;
	unsigned long long _queryReserve;

}

@property (assign) unsigned long long queryReserve;              //@synthesize queryReserve=_queryReserve - In the implementation block
+(id)treeWithMaxNumberOfChildren:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithMaxNumberOfChildren:(unsigned long long)arg1 ;
-(void)setQueryReserve:(unsigned long long)arg1 ;
-(unsigned long long)queryReserve;
-(void)addElement:(id)arg1 boundingRectMin:(long long)arg2 ;
-(void)removeElement:(id)arg1 ;
-(id)elementsInBoundingRectMin:rectMax:;
@end
