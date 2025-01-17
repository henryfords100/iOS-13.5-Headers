/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface DEValidationEntry : NSObject {

	NSString* _text;
	NSString* _textWithLineNumber;
	NSNumber* _lineNumber;
	NSString* _filename;

}

@property (nonatomic,retain) NSString * text;                            //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSString * textWithLineNumber;              //@synthesize textWithLineNumber=_textWithLineNumber - In the implementation block
@property (nonatomic,retain) NSNumber * lineNumber;                      //@synthesize lineNumber=_lineNumber - In the implementation block
@property (nonatomic,retain) NSString * filename;                        //@synthesize filename=_filename - In the implementation block
-(NSNumber *)lineNumber;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setLineNumber:(NSNumber *)arg1 ;
-(NSString *)textWithLineNumber;
-(void)setTextWithLineNumber:(NSString *)arg1 ;
@end

