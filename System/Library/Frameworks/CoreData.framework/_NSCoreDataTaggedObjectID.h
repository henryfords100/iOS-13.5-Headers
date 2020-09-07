/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/_NSScalarObjectID.h>

@interface _NSCoreDataTaggedObjectID : _NSScalarObjectID
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(unsigned)allocateBatch:(id*)arg1 count:(unsigned)arg2 ;
+(id)_storeInfo1;
+(void)_setStoreInfo1:(id)arg1 ;
+(void)setObjectStoreIdentifier:(id)arg1 ;
+(Class)classWithStore:(id)arg1 andEntity:(id)arg2 ;
+(id)managedObjectIDFromURIRepresentation:(id)arg1 ;
+(void)_storeDeallocated;
-(unsigned long long)retainCount;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(id)initWithObject:(id)arg1 ;
-(id)entityName;
-(id)entity;
-(id)initWithPK64:(long long)arg1 ;
-(id)_storeInfo1;
-(long long)_referenceData64;
-(id)persistentStore;
-(id)_storeIdentifier;
-(BOOL)isTemporaryID;
-(id)_retainedURIString;
-(BOOL)_isPersistentStoreAlive;
@end
