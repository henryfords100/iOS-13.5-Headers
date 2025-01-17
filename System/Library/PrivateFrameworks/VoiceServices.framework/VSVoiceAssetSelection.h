/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VSVoiceAsset, MAAsset, NSString;

@interface VSVoiceAssetSelection : NSObject {

	VSVoiceAsset* _voiceData;
	MAAsset* _asset;
	NSString* _builtInVoicePath;
	NSString* _voicePath;

}

@property (retain) VSVoiceAsset * voiceData;                    //@synthesize voiceData=_voiceData - In the implementation block
@property (retain) MAAsset * asset;                             //@synthesize asset=_asset - In the implementation block
@property (retain) NSString * builtInVoicePath;                 //@synthesize builtInVoicePath=_builtInVoicePath - In the implementation block
@property (nonatomic,retain) NSString * voicePath;              //@synthesize voicePath=_voicePath - In the implementation block
-(id)key;
-(unsigned long long)size;
-(BOOL)isInstalled;
-(MAAsset *)asset;
-(void)setAsset:(MAAsset *)arg1 ;
-(BOOL)isDownloading;
-(VSVoiceAsset *)voiceData;
-(id)descriptiveKey;
-(NSString *)voicePath;
-(double)preferenceScore;
-(void)setVoiceData:(VSVoiceAsset *)arg1 ;
-(NSString *)builtInVoicePath;
-(void)setBuiltInVoicePath:(NSString *)arg1 ;
-(void)setVoicePath:(NSString *)arg1 ;
@end

