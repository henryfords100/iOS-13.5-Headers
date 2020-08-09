/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/_CUIRawDataRendition.h>

@interface _CUIRecognitionObjectRendition : _CUIRawDataRendition {

	int _objectVersion;
	SCD_Struct_CS10 _transformation;

}
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(int)objectVersion;
-(SCD_Struct_CS10)transformation;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(long long)arg3 ;
-(void)_initalizeMetadataFromCSIData:(const csiheader*)arg1 ;
@end
