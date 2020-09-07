/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMPreviewGeneratorProtocol
@required
+(BOOL)shouldScaleUpPreview;
+(double)maxUpScale;
+(CGImageRef)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 error:(id*)arg3;
+(CGSize*)sizePreviewAtSourceURL:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 error:(id*)arg3;
+(BOOL)shouldShadePreview;
+(id)previewExtension;
+(BOOL)writesToDisk;
+(id)generateAndPersistPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 outSize:(CGSize*)arg3 error:(id*)arg4;

@end
