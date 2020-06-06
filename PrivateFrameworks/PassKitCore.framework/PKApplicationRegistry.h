/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSMutableSet, NSURL, NSObject, NSString;

@interface PKApplicationRegistry : NSObject <LSApplicationWorkspaceObserverProtocol> {

	NSMutableSet* _registeredBundleIdentifiers;
	NSURL* _archiveFileURL;
	NSObject*<OS_dispatch_semaphore> _archiveSemaphore;
	NSObject*<OS_dispatch_queue> _applicationRegistryQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)applicationsDidUninstall:(id)arg1 ;
-(id)initWithArchiveFileURL:(id)arg1 ;
-(BOOL)applicationIsRegisteredWithBundleIdentifier:(id)arg1 ;
-(BOOL)registerApplicationWithBundleIdentifier:(id)arg1 ;
-(void)_validateRegisteredApplications;
-(void)_requestArchiveToDisk;
@end
