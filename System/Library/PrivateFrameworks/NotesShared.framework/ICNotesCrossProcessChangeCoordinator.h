/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPersistentStoreCoordinator, NSManagedObjectContext;

@interface ICNotesCrossProcessChangeCoordinator : NSObject {

	NSPersistentStoreCoordinator* _sourceCoordinator;
	NSManagedObjectContext* _destinationContext;

}

@property (nonatomic,retain) NSPersistentStoreCoordinator * sourceCoordinator;              //@synthesize sourceCoordinator=_sourceCoordinator - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * destinationContext;                   //@synthesize destinationContext=_destinationContext - In the implementation block
-(void)dealloc;
-(NSManagedObjectContext *)destinationContext;
-(void)registerForAccountNotifications;
-(id)initWithSourceCoordinator:(id)arg1 destinationContext:(id)arg2 ;
-(void)registerForPasswordStatusDidChangeNotifications;
-(void)registerForCrossProcessNotificationName:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)postCrossProcessNotificationName:(id)arg1 ;
-(void)postAccountDidChangeNotification;
-(void)postNotesPasswordStatusDidChangeNotification;
-(NSPersistentStoreCoordinator *)sourceCoordinator;
-(void)setSourceCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(void)setDestinationContext:(NSManagedObjectContext *)arg1 ;
@end

