/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSDictionary, NSSet;

@interface CRKAnnotatedCredentialManifest : NSObject <NSSecureCoding> {

	BOOL _modified;
	NSMutableDictionary* _annotationsByPersistentID;

}

@property (nonatomic,readonly) NSMutableDictionary * annotationsByPersistentID;              //@synthesize annotationsByPersistentID=_annotationsByPersistentID - In the implementation block
@property (assign,nonatomic) BOOL modified;                                                  //@synthesize modified=_modified - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * debugInfo; 
@property (nonatomic,copy,readonly) NSSet * persistentIDs; 
+(BOOL)supportsSecureCoding;
+(id)manifestWithData:(id)arg1 ;
-(id)init;
-(BOOL)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dataRepresentation;
-(void)setModified:(BOOL)arg1 ;
-(BOOL)modified;
-(NSDictionary *)debugInfo;
-(NSSet *)persistentIDs;
-(void)removePersistentID:(id)arg1 ;
-(void)addPersistentID:(id)arg1 withAnnotation:(id)arg2 ;
-(id)annotationForPersistentID:(id)arg1 ;
-(NSMutableDictionary *)annotationsByPersistentID;
@end

