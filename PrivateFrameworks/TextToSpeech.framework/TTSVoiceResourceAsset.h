/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextToSpeech/TTSAssetBase.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSURL, NSDictionary;

@interface TTSVoiceResourceAsset : TTSAssetBase <NSSecureCoding> {

	NSArray* _languages;
	NSArray* _resourceList;
	NSURL* _searchPathURL;
	NSDictionary* _voiceConfig;

}

@property (nonatomic,copy) NSDictionary * voiceConfig;              //@synthesize voiceConfig=_voiceConfig - In the implementation block
@property (nonatomic,copy) NSArray * languages;                     //@synthesize languages=_languages - In the implementation block
@property (nonatomic,copy) NSArray * resourceList;                  //@synthesize resourceList=_resourceList - In the implementation block
@property (nonatomic,copy) NSURL * searchPathURL;                   //@synthesize searchPathURL=_searchPathURL - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)legacyPlatforms;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)languages;
-(void)setLanguages:(NSArray *)arg1 ;
-(id)defaultVoice;
-(void)setSearchPathURL:(NSURL *)arg1 ;
-(NSURL *)searchPathURL;
-(NSDictionary *)voiceConfig;
-(NSArray *)resourceList;
-(id)defaultTypeString;
-(id)defaultFootprintString;
-(void)setVoiceConfig:(NSDictionary *)arg1 ;
-(void)setResourceList:(NSArray *)arg1 ;
-(void)syncWithConfigFile:(id)arg1 ;
@end
