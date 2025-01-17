/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVAudioSessionPortDescription.h>

@class NSString, NSArray;

@interface AXTestingOutputPort : AVAudioSessionPortDescription {

	NSString* portType;
	NSString* portName;
	NSString* UID;
	NSArray* _ttsChannels;

}

@property (retain) NSString * portType; 
@property (retain) NSString * portName; 
@property (retain) NSString * UID; 
@property (retain) NSArray * ttsChannels;              //@synthesize ttsChannels=_ttsChannels - In the implementation block
-(NSString *)portType;
-(NSString *)portName;
-(id)channels;
-(void)setUID:(NSString *)arg1 ;
-(void)setPortName:(NSString *)arg1 ;
-(NSString *)UID;
-(NSArray *)ttsChannels;
-(void)setPortType:(NSString *)arg1 ;
-(void)setTtsChannels:(NSArray *)arg1 ;
@end

