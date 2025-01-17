/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsUI/_UIDocumentPickerURLContainerModel.h>

@class NSArray, BRContainer;

@interface _UIDocumentPickerAllContainersModel : _UIDocumentPickerURLContainerModel {

	NSArray* _scopes;
	BRContainer* _sourceContainer;

}
-(id)scopes;
-(id)displayTitle;
-(id)initWithURL:(id)arg1 pickableTypes:(id)arg2 mode:(unsigned long long)arg3 ;
-(void)startMonitoringChanges;
-(BOOL)shouldShowTopLevelContainers;
-(id)_createObserver;
-(id)initWithFoldersForPickableTypes:(id)arg1 mode:(unsigned long long)arg2 sourceContainer:(id)arg3 ;
-(void)updateScopes;
@end

