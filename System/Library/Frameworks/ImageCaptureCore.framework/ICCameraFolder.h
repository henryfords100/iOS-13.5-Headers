/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageCaptureCore/ImageCaptureCore-Structs.h>
#import <ImageCaptureCore/ICCameraItem.h>

@class NSMutableArray, NSArray;

@interface ICCameraFolder : ICCameraItem {

	NSMutableArray* _files;
	NSMutableArray* _folders;
	os_unfair_lock_s _filesLock;
	os_unfair_lock_s _foldersLock;

}

@property (nonatomic,retain) NSMutableArray * files;                //@synthesize files=_files - In the implementation block
@property (nonatomic,retain) NSMutableArray * folders;              //@synthesize folders=_folders - In the implementation block
@property (nonatomic,readonly) NSArray * contents; 
-(void)dealloc;
-(id)description;
-(NSArray *)contents;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)addFile:(id)arg1 ;
-(BOOL)hasThumbnail;
-(id)metadata;
-(void)setFolders:(NSMutableArray *)arg1 ;
-(void)addFolder:(id)arg1 ;
-(NSMutableArray *)files;
-(void)setFiles:(NSMutableArray *)arg1 ;
-(NSMutableArray *)folders;
-(CGImageRef)thumbnail;
-(void)deleteFile:(id)arg1 ;
-(void)deleteItem:(id)arg1 ;
-(id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 ;
-(void)requestThumbnail;
-(void)requestMetadata;
-(void)lockFiles;
-(void)unlockFiles;
-(void)lockFolders;
-(void)unlockFolders;
-(void)deleteFolder:(id)arg1 ;
-(BOOL)containsItem:(id)arg1 ;
@end

