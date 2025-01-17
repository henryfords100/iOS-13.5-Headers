/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BBObserverDelegate <NSObject>
@optional
-(void)observer:(id)arg1 processData:(id)arg2 forAttachment:(id)arg3 bulletin:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(id)observer:(id)arg1 thumbnailSizeConstraintsForAttachment:(id)arg2 bulletin:(id)arg3;
-(id)observer:(id)arg1 thumbnailSizeConstraintsForAttachmentType:(long long)arg2;
-(void)observer:(id)arg1 composedImageFromThumbnailData:(id)arg2 forAttachment:(id)arg3 bulletin:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(id)observer:(id)arg1 composedAttachmentImageForType:(long long)arg2 thumbnailData:(id)arg3 key:(id)arg4;
-(CGSize*)observer:(id)arg1 composedImageSizeForAttachment:(id)arg2 bulletin:(id)arg3 thumbnailSize:(CGSize)arg4;
-(CGSize*)observer:(id)arg1 composedAttachmentSizeForType:(long long)arg2 thumbnailWidth:(float)arg3 height:(float)arg4 key:(id)arg5;
-(void)observer:(id)arg1 purgeReferencesToBulletinID:(id)arg2;
-(void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2;
-(void)observer:(id)arg1 noteServerConnectionStateChanged:(BOOL)arg2;
-(void)observer:(id)arg1 prepareAttachment:(id)arg2 beforeDeliveringBulletin:(id)arg3 withCompletionHandler:(/*^block*/id)arg4;
-(BOOL)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)arg1;
-(BOOL)observerShouldFetchAttachmentSizeBeforeBulletinDelivery:(id)arg1;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(BOOL)arg4 withReply:(/*^block*/id)arg5;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3;
-(void)observer:(id)arg1 modifyBulletin:(id)arg2 forFeed:(unsigned long long)arg3;
-(void)observer:(id)arg1 modifyBulletin:(id)arg2;
-(void)observer:(id)arg1 removeBulletin:(id)arg2 forFeed:(unsigned long long)arg3;
-(void)observer:(id)arg1 removeBulletin:(id)arg2;
-(void)observer:(id)arg1 updateSectionInfo:(id)arg2;
-(void)observer:(id)arg1 noteSectionParametersChanged:(id)arg2 forSectionID:(id)arg3;
-(void)observer:(id)arg1 removeSection:(id)arg2;
-(void)observer:(id)arg1 updateGlobalSettings:(id)arg2;
-(void)observer:(id)arg1 noteServerReceivedResponseForBulletin:(id)arg2;

@end

