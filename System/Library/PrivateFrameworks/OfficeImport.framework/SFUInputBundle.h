/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFUInputBundle <NSObject>
@required
-(BOOL)hasEntryWithName:(id)arg1;
-(id)inputStreamForEntry:(id)arg1;
-(id)bufferedInputStreamForEntry:(id)arg1;
-(long long)lengthOfEntry:(id)arg1;
-(unsigned)crc32ForEntry:(id)arg1;
-(void)copyEntry:(id)arg1 toFile:(id)arg2;

@end
