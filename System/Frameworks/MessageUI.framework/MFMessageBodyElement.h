/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFMessageBodyElement_Private.h>

@class MFMessageBodyParser, NSArray, NSString;

@interface MFMessageBodyElement : NSObject <MFMessageBodyElement_Private> {

	MFMessageBodyParser* _parser;
	NSArray* _nodes;
	unsigned long long _quoteLevel;
	unsigned long long _externalRetainCount;
	int _validAttributes;
	int _attributes;

}

@property (assign,nonatomic,__weak) MFMessageBodyParser * parser;              //@synthesize parser=_parser - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSArray * nodes; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)reset;
-(NSArray *)nodes;
-(void)setNodes:(NSArray *)arg1 ;
-(MFMessageBodyParser *)parser;
-(void)setParser:(MFMessageBodyParser *)arg1 ;
-(id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg1 ;
-(void)releaseExternally;
-(int)valueForAttributes:(int)arg1 ;
-(unsigned long long)quoteLevel;
-(id)retainExternally;
-(BOOL)isExternallyRetained;
-(BOOL)_hasValueForAttributes:(int)arg1 ;
-(void)_setValue:(int)arg1 forAttributes:(int)arg2 ;
-(unsigned long long)getQuoteLevel;
@end
