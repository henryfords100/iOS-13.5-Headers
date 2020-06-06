/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UICollectionLayoutSolveResult.h>

@class NSMutableIndexSet, NSMutableDictionary, NSString, NSIndexSet, NSSet;

@interface _UICollectionLayoutSolveParameters : NSObject <_UICollectionLayoutSolveResult> {

	NSMutableIndexSet* _invalidatedIndexes;
	NSMutableDictionary* _invalidatedAuxillaryDict;
	BOOL _isFullResolve;

}

@property (nonatomic,readonly) BOOL isFullResolve; 
@property (nonatomic,readonly) BOOL hasInvalidatedItems; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSIndexSet * invalidatedIndexes; 
@property (nonatomic,readonly) NSSet * invalidatedAuxillaryKinds; 
+(id)parametersForFullResolve;
-(id)init;
-(NSSet *)invalidatedAuxillaryKinds;
-(void)addItemIndex:(long long)arg1 ;
-(void)addAuxillaryIndex:(long long)arg1 elementKind:(id)arg2 ;
-(NSIndexSet *)invalidatedIndexes;
-(id)indexesForInvalidatedAuxillariesOfKind:(id)arg1 ;
-(BOOL)hasInvalidatedItems;
-(id)invalidatedAuxillaryOffsets;
-(BOOL)isFullResolve;
-(id)initWithInvalidatedIndexes:(id)arg1 isFullResolve:(BOOL)arg2 ;
-(id)initWithInvalidatedIndexes:(id)arg1 ;
@end
