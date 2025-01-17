/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHChangeRequest.h>
#import <libobjc.A.dylib/PHInsertChangeRequest.h>
#import <libobjc.A.dylib/PHUpdateChangeRequest.h>

@class NSMutableArray, NSString, NSMutableSet, PHPerson, PHRelationshipChangeRequestHelper, PHObjectPlaceholder, NSDictionary, NSManagedObjectID;

@interface PHPersonChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest> {

	NSMutableArray* _personUUIDsToMerge;
	NSString* _nominalMergeTargetUUID;
	NSMutableSet* _faceUUIDsRequiringFaceCropGeneration;
	NSMutableSet* _rejectedMergeCandidatePersonUUIDs;
	NSMutableSet* _graphDedupePersonUUIDs;
	PHPerson* _targetPerson;
	NSString* _identifier;
	PHRelationshipChangeRequestHelper* _facesHelper;
	PHRelationshipChangeRequestHelper* _keyFaceHelper;
	PHRelationshipChangeRequestHelper* _rejectedFacesHelper;
	PHRelationshipChangeRequestHelper* _mergeCandidatesHelper;
	PHRelationshipChangeRequestHelper* _invalidMergeCandidatesHelper;

}

@property (assign,nonatomic) short keyFacePickSource; 
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * facesHelper;                               //@synthesize facesHelper=_facesHelper - In the implementation block
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * keyFaceHelper;                             //@synthesize keyFaceHelper=_keyFaceHelper - In the implementation block
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * rejectedFacesHelper;                       //@synthesize rejectedFacesHelper=_rejectedFacesHelper - In the implementation block
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * mergeCandidatesHelper;                     //@synthesize mergeCandidatesHelper=_mergeCandidatesHelper - In the implementation block
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * invalidMergeCandidatesHelper;              //@synthesize invalidMergeCandidatesHelper=_invalidMergeCandidatesHelper - In the implementation block
@property (nonatomic,retain) PHPerson * targetPerson;                                                         //@synthesize targetPerson=_targetPerson - In the implementation block
@property (nonatomic,readonly) PHObjectPlaceholder * placeholderForCreatedPerson; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,copy) NSString * identifier;                                                             //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) unsigned long long manualOrder; 
@property (nonatomic,copy) NSString * personUri; 
@property (assign,getter=isInPersonNamingModel,nonatomic) BOOL inPersonNamingModel; 
@property (assign,getter=isVerified,nonatomic) BOOL verified; 
@property (assign,nonatomic) long long verifiedType; 
@property (assign,nonatomic) unsigned short questionType; 
@property (assign,nonatomic) unsigned short ageType; 
@property (assign,nonatomic) unsigned short genderType; 
@property (nonatomic,copy) NSDictionary * contactMatchingDictionary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * managedEntityName; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (getter=isClientEntitled,nonatomic,readonly) BOOL clientEntitled; 
@property (nonatomic,readonly) NSString * clientName; 
@property (readonly) BOOL isNewRequest; 
@property (nonatomic,readonly) id concurrentWorkBlock; 
@property (getter=isMutated,readonly) BOOL mutated; 
+(BOOL)canGenerateUUIDWithoutEntitlements;
+(id)creationRequestForPerson;
+(id)changeRequestForPerson:(id)arg1 ;
+(void)deletePersons:(id)arg1 ;
+(id)changeRequestForMergingPersons:(id)arg1 ;
+(id)changeRequestForMergingPersons:(id)arg1 nominalTargetIdentifier:(id)arg2 ;
+(id)changeRequestsForMergeCandidatePersons:(id)arg1 ;
+(id)changeRequestForDedupingGraphPersons:(id)arg1 ;
-(NSString *)name;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSDictionary *)contactMatchingDictionary;
-(BOOL)isVerified;
-(id)personUUID;
-(void)setManualOrder:(unsigned long long)arg1 ;
-(void)setKeyFacePickSource:(short)arg1 ;
-(void)setPersonUUID:(id)arg1 ;
-(long long)verifiedType;
-(NSString *)personUri;
-(void)setPersonUri:(NSString *)arg1 ;
-(void)setContactMatchingDictionary:(NSDictionary *)arg1 ;
-(void)setVerifiedType:(long long)arg1 ;
-(short)keyFacePickSource;
-(unsigned long long)manualOrder;
-(void)setKeyFace:(id)arg1 ;
-(void)setGenderType:(unsigned short)arg1 ;
-(unsigned short)genderType;
-(void)setAgeType:(unsigned short)arg1 ;
-(unsigned short)ageType;
-(BOOL)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3 ;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(BOOL)prepareForServicePreflightCheck:(id*)arg1 ;
-(BOOL)prepareForPhotoLibraryCheck:(id)arg1 error:(id*)arg2 ;
-(NSString *)managedEntityName;
-(id)initForNewObject;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(id)_existentFaceObjectIDs;
-(void)_prepareKeyFaceHelperIfNeeded;
-(id)_mutableKeyFaceObjectIDsAndUUIDs;
-(void)addFaces:(id)arg1 ;
-(void)removeFaces:(id)arg1 ;
-(PHRelationshipChangeRequestHelper *)facesHelper;
-(PHRelationshipChangeRequestHelper *)keyFaceHelper;
-(id)_mutableFaceObjectIDsAndUUIDs;
-(PHObjectPlaceholder *)placeholderForCreatedPerson;
-(BOOL)isInPersonNamingModel;
-(void)setInPersonNamingModel:(BOOL)arg1 ;
-(unsigned short)questionType;
-(void)setQuestionType:(unsigned short)arg1 ;
-(void)setVerified:(BOOL)arg1 ;
-(BOOL)_containsUserMutations;
-(BOOL)_hasMutationForVerifiedType:(int*)arg1 ;
-(BOOL)_shouldPromotePerson:(id)arg1 toVerifiedType:(int*)arg2 ;
-(id)_existentRejectedFaceObjectIDs;
-(id)_noMinimumFaceCountPersonFetchOptions;
-(id)_existentMergeCandidateObjectIDs;
-(id)_existentInvalidMergeCandidateObjectIDs;
-(id)_mutableRejectedFacesObjectIDsAndUUIDs;
-(id)_mutableMergeCandidateObjectIDsAndUUIDs;
-(id)_mutableInvalidMergeCandidateObjectIDsAndUUIDs;
-(id)_mutableRequiringFaceCropGenerationFacesUUIDs;
-(void)_setKeyFace:(id)arg1 forCluster:(BOOL)arg2 pickSource:(short)arg3 ;
-(void)setKeyFaceForUserPick:(id)arg1 ;
-(void)setKeyFaceForUserPick:(id)arg1 forCluster:(BOOL)arg2 ;
-(void)setKeyFace:(id)arg1 forCluster:(BOOL)arg2 ;
-(void)addRejectedFaces:(id)arg1 forCluster:(BOOL)arg2 ;
-(void)addRejectedFaces:(id)arg1 ;
-(void)removeRejectedFaces:(id)arg1 ;
-(void)_setNominalMergeTargetUUID:(id)arg1 ;
-(void)mergePersons:(id)arg1 ;
-(void)addMergeCandidatePersons:(id)arg1 ;
-(void)removeMergeCandidatePersons:(id)arg1 ;
-(void)rejectMergeCandidatePersons:(id)arg1 ;
-(void)addInvalidMergeCandidatePersons:(id)arg1 ;
-(void)_setGraphDedupePersons:(id)arg1 ;
-(PHPerson *)targetPerson;
-(void)setTargetPerson:(PHPerson *)arg1 ;
-(PHRelationshipChangeRequestHelper *)rejectedFacesHelper;
-(PHRelationshipChangeRequestHelper *)mergeCandidatesHelper;
-(PHRelationshipChangeRequestHelper *)invalidMergeCandidatesHelper;
@end

