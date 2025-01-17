/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@interface NSMergePolicy : NSObject {

	unsigned long long _type;
	void* _reserved2;
	void* _reserved3;

}

@property (readonly) unsigned long long mergeType; 
+(void)initialize;
+(BOOL)accessInstanceVariablesDirectly;
+(id)errorMergePolicy;
+(id)mergeByPropertyStoreTrumpMergePolicy;
+(id)mergeByPropertyObjectTrumpMergePolicy;
+(id)overwriteMergePolicy;
+(id)rollbackMergePolicy;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 ;
-(unsigned long long)mergeType;
-(BOOL)resolveConflicts:(id)arg1 error:(id*)arg2 ;
-(id)initWithMergeType:(unsigned long long)arg1 ;
-(BOOL)_valuesOnObject:(id)arg1 matchAgainstValues:(id)arg2 ;
-(void)_mergeToManyUnionRelationshipsForObject:(id)arg1 andObject:(id)arg2 ;
-(void)_mergeToManyUnionRelationshipsForConstraintConflict:(id)arg1 ;
-(void)_mergeToManyRelationshipsForObject:(id)arg1 ontoObject:(id)arg2 ;
-(void)_mergeToManyRelationshipsForConstraintConflict:(id)arg1 withDesignatedOriginal:(id)arg2 ;
-(BOOL)_byPropertyObjectTrumpMergeObject:(id)arg1 ontoObject:(id)arg2 writeAll:(BOOL)arg3 ;
-(id)_electPreexistingDesignatedOriginalFrom:(id)arg1 ;
-(id)_electNewlyInsertedDesignatedOriginalFrom:(id)arg1 ;
-(void)_mergeValuesForObject:(id)arg1 ontoObject:(id)arg2 ;
-(id)_electDesignatedOriginalForConflict:(id)arg1 ;
-(BOOL)_mergeContendersResolveConstraintConflict:(id)arg1 withKeeper:(id)arg2 ;
-(BOOL)_eliminateContendersResolveConstraintConflict:(id)arg1 withKeeper:(id)arg2 ;
-(BOOL)_didSomethingElseResolveDBConflict:(id)arg1 ;
-(id)_unresolvedObjectsForContextConflict:(id)arg1 ;
-(id)_unresolvedConflictFor:(id)arg1 ;
-(BOOL)_byPropertyStoreTrumpResolveConstraintConflict:(id)arg1 ;
-(BOOL)_byPropertyObjectTrumpResolveConstraintConflict:(id)arg1 ;
-(BOOL)_rollbackResolveConstraintConflict:(id)arg1 ;
-(BOOL)_overwriteResolveConstraintConflict:(id)arg1 ;
-(BOOL)_resolveContextConstraintConflict:(id)arg1 ;
-(void)_mergeChangesStoreUpdatesTrumpForObject:(id)arg1 withRecord:(id)arg2 ;
-(void)_mergeChangesObjectUpdatesTrumpForObject:(id)arg1 withRecord:(id)arg2 ;
-(void)mergeToManyRelationshipForSourceObject:(id)arg1 withOldSnapshot:(id)arg2 newSnapshot:(id)arg3 andAncestor:(id)arg4 andLegacyPath:(BOOL)arg5 ;
-(void)_mergeDeletionWithStoreChangesForObject:(id)arg1 withRecord:(id)arg2 ;
-(BOOL)resolveOptimisticLockingVersionConflicts:(id)arg1 error:(id*)arg2 ;
-(BOOL)resolveConstraintConflicts:(id)arg1 error:(id*)arg2 ;
-(BOOL)resolveConstraintConflict:(id)arg1 error:(id*)arg2 ;
-(BOOL)resolveConflict:(id)arg1 ;
@end

