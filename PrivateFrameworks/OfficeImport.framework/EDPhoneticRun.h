/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EDPhoneticRun : NSObject {

	unsigned mCharIndex;
	unsigned mBaseCharIndex;
	unsigned mBaseCharCount;

}
-(id)init;
-(id)description;
-(unsigned)charIndex;
-(void)adjustIndex:(unsigned long long)arg1 ;
-(void)setCharIndex:(unsigned)arg1 ;
-(unsigned)charBaseIndex;
-(void)setCharBaseIndex:(unsigned)arg1 ;
-(unsigned)charBaseCount;
-(void)setCharBaseCount:(unsigned)arg1 ;
@end
