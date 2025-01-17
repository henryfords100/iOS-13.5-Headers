/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKTranscriptBalloonCell.h>

@class CKSpeakerButton;

@interface CKTranscriptSpeakerBalloonCell : CKTranscriptBalloonCell {

	BOOL _speakerEnabled;
	BOOL _adjustSpeakerForAcknowledgment;
	BOOL _shouldShowText;
	CKSpeakerButton* _speakerButton;

}

@property (nonatomic,retain) CKSpeakerButton * speakerButton;                          //@synthesize speakerButton=_speakerButton - In the implementation block
@property (assign,nonatomic) BOOL shouldShowText;                                      //@synthesize shouldShowText=_shouldShowText - In the implementation block
@property (assign,getter=isSpeakerEnabled,nonatomic) BOOL speakerEnabled;              //@synthesize speakerEnabled=_speakerEnabled - In the implementation block
@property (assign,getter=isSpeakerHidden,nonatomic) BOOL speakerHidden; 
@property (assign,nonatomic) BOOL adjustSpeakerForAcknowledgment;                      //@synthesize adjustSpeakerForAcknowledgment=_adjustSpeakerForAcknowledgment - In the implementation block
-(void)setOrientation:(char)arg1 ;
-(void)layoutSubviewsForAlignmentContents;
-(CKSpeakerButton *)speakerButton;
-(void)setSpeakerHidden:(BOOL)arg1 ;
-(void)setSpeakerEnabled:(BOOL)arg1 ;
-(void)setAdjustSpeakerForAcknowledgment:(BOOL)arg1 ;
-(BOOL)adjustSpeakerForAcknowledgment;
-(BOOL)isSpeakerHidden;
-(BOOL)isSpeakerEnabled;
-(void)setSpeakerButton:(CKSpeakerButton *)arg1 ;
-(BOOL)shouldShowText;
-(void)setShouldShowText:(BOOL)arg1 ;
@end

