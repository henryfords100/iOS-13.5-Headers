/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLItemFetcher.h>

@class NSData, NSString, NSURL, QLItem;

@interface QLDataFetcher : QLItemFetcher {

	NSData* _data;
	NSString* _contentType;
	NSString* _previewItemTitle;
	NSURL* _temporaryURL;
	QLItem* _item;

}
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)itemSize;
-(id)shareableItem;
-(void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_deleteTempraryFileIfNeeded;
-(void)loadDataIfNeeded;
-(id)_createTemporaryFileIfNeeded;
-(id)_temporaryFilename;
-(id)initWithItem:(id)arg1 contentType:(id)arg2 ;
-(id)initWithData:(id)arg1 contentType:(id)arg2 previewItemTitle:(id)arg3 ;
-(void)prepareShareableItem:(/*^block*/id)arg1 ;
-(id)fetchedContent;
-(id)newItemProvider;
@end
