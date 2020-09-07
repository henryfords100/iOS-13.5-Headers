/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NotesUI/NotesUI-Structs.h>
@interface ICGalleryAttachmentUtilities : NSObject
+(id)imageForSubAttachment:(id)arg1 rotateForMacImageGallery:(BOOL)arg2 allowCached:(BOOL)arg3 ;
+(id)createSubAttachmentFromDocument:(id)arg1 imageCache:(id)arg2 galleryAttachment:(id)arg3 ;
+(id)imageForSubAttachment:(id)arg1 allowCached:(BOOL)arg2 ;
+(double)requiredWidthForAttachment:(id)arg1 viewHeight:(double)arg2 maxWidth:(double)arg3 ;
+(CGSize)sizeOfSubAttachment:(id)arg1 forHeight:(double)arg2 ;
+(id)createAndAddSubAttachmentsToGalleryAttachment:(id)arg1 fromDocuments:(id)arg2 imageCache:(id)arg3 ;
+(id)imageForSubAttachment:(id)arg1 ;
+(CGSize)sizeOfViewForAttachment:(id)arg1 textViewContentWidth:(double)arg2 ;
@end
