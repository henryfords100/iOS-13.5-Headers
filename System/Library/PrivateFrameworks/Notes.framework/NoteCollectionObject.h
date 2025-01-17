/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/ICNoteVisibilityTesting.h>

@class NSString;

@interface NoteCollectionObject : NSManagedObject <ICNoteVisibilityTesting>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isAllNotesContainer; 
-(id)collectionInfo;
-(id)predicateForNotes;
-(BOOL)supportsVisibilityTestingType:(long long)arg1 ;
-(id)predicateForSearchableNotes;
-(id)predicateForSearchableAttachments;
-(id)noteVisibilityTestingForSearchingAccount;
-(id)basicAccountIdentifier;
-(BOOL)isAllNotesContainer;
@end

