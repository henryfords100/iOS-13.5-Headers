/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
@class NSString, AXElement, NSDictionary;

@interface CACTextInsertionSpecifier : NSObject {

	NSString* _insertedString;
	AXElement* _axElement;
	NSString* _commandIdentifier;
	NSDictionary* _recognizedParams;
	NSString* _insertedCategoryID;
	NSRange _insertedRange;

}

@property (retain) NSString * insertedString;                    //@synthesize insertedString=_insertedString - In the implementation block
@property (assign) NSRange insertedRange;                        //@synthesize insertedRange=_insertedRange - In the implementation block
@property (retain) AXElement * axElement;                        //@synthesize axElement=_axElement - In the implementation block
@property (retain) NSString * commandIdentifier;                 //@synthesize commandIdentifier=_commandIdentifier - In the implementation block
@property (retain) NSDictionary * recognizedParams;              //@synthesize recognizedParams=_recognizedParams - In the implementation block
@property (retain) NSString * insertedCategoryID;                //@synthesize insertedCategoryID=_insertedCategoryID - In the implementation block
-(AXElement *)axElement;
-(void)setCommandIdentifier:(NSString *)arg1 ;
-(NSString *)commandIdentifier;
-(NSRange)insertedRange;
-(void)setRecognizedParams:(NSDictionary *)arg1 ;
-(void)setInsertedString:(NSString *)arg1 ;
-(void)setInsertedRange:(NSRange)arg1 ;
-(void)setAxElement:(AXElement *)arg1 ;
-(void)setInsertedCategoryID:(NSString *)arg1 ;
-(NSString *)insertedString;
-(NSDictionary *)recognizedParams;
-(NSString *)insertedCategoryID;
@end
