/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFReader.h>

@class WMFPlayer, NSString;

@interface WMFReader : NSObject <MFReader> {

	int m_recordsRead;
	WMFPlayer* m_player;
	unsigned m_length;
	const char* m_pBuffer;
	unsigned m_cursor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)play:(id)arg1 ;
-(id)initWithWMFPlayer:(id)arg1 ;
-(int)playHeaders;
-(int)playRecord;
-(int)checkBytesAvailable:(unsigned)arg1 ;
-(int)moveDataCursor:(unsigned)arg1 ;
@end
