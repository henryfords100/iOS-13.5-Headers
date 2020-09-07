/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/VoiceServices/PlugIns/VoiceDial.vsplugin/VoiceDial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VSRecognitionResultValidator.h>

@class VoiceDialNameDataSource, NSString;

@interface VoiceDialResultValidator : NSObject <VSRecognitionResultValidator> {

	void* _addressBook;
	VoiceDialNameDataSource* _nameSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void*)_addressBook;
-(id)_nameSource;
-(id)validRecognitionResultFromRecognitionResult:(id)arg1 ;
-(id)validRecognitionResultFromRecognitionResult:(id)arg1 knownDisambiguationValues:(id)arg2 ;
@end
