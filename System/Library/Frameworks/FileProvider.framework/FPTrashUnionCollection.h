/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPUnionCollection.h>

@protocol OS_dispatch_queue;
@class FPQueryCollection, NSObject;

@interface FPTrashUnionCollection : FPUnionCollection {

	id _providerDomainChangesToken;
	FPQueryCollection* _trashQueryCollection;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) FPQueryCollection * trashQueryCollection; 
-(id)scopedSearchQuery;
-(void)setDesiredNumberOfItems:(id)arg1 ;
-(void)setAllowedFileTypes:(id)arg1 ;
-(void)setExcludedFileTypes:(id)arg1 ;
-(id)filterDomains:(id)arg1 ;
-(void)updateCollectionsForDomains:(id)arg1 ;
-(void)fetchTrashItemsFromProvider:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithQueryCollection:(id)arg1 ;
-(FPQueryCollection *)trashQueryCollection;
@end
