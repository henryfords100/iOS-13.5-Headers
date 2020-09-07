/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <IMCore/IMBalloonPluginDataSource.h>

@class CKBalloonView, CKMediaObject;

@interface CKImageBalloonPluginDatasource : IMBalloonPluginDataSource {

	CKBalloonView* _balloonView;
	CKMediaObject* _mediaObject;

}

@property (nonatomic,retain) CKBalloonView * balloonView;              //@synthesize balloonView=_balloonView - In the implementation block
@property (nonatomic,retain) CKMediaObject * mediaObject;              //@synthesize mediaObject=_mediaObject - In the implementation block
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithPluginPayload:(id)arg1 ;
-(CKBalloonView *)balloonView;
-(void)setBalloonView:(CKBalloonView *)arg1 ;
-(CKMediaObject *)mediaObject;
-(void)setMediaObject:(CKMediaObject *)arg1 ;
-(void)previewDidChange:(id)arg1 ;
-(id)imageBalloon;
@end
