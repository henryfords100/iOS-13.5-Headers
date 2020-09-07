/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DEWriter.h>

@protocol DEWriter;
@class NSObject;

@interface DEMultipartWriter : NSObject <DEWriter> {

	BOOL _partClosed;
	NSObject*<DEWriter> _writer;

}

@property (nonatomic,retain) NSObject*<DEWriter> writer;              //@synthesize writer=_writer - In the implementation block
@property (assign,nonatomic) BOOL partClosed;                         //@synthesize partClosed=_partClosed - In the implementation block
-(id)init;
-(void)dealloc;
-(void)close;
-(void)writeData:(id)arg1 ;
-(void)setWriter:(NSObject*<DEWriter>)arg1 ;
-(NSObject*<DEWriter>)writer;
-(id)initWithWriter:(id)arg1 ;
-(void)closeMessage;
-(void)newPart;
-(BOOL)partClosed;
-(void)setPartClosed:(BOOL)arg1 ;
@end
