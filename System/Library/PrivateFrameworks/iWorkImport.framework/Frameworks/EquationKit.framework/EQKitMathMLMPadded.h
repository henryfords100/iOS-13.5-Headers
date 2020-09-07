/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/EquationKit.framework/EquationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EquationKit/EquationKit-Structs.h>
#import <TSReading/EQKitMathMLUnaryNode.h>
#import <libobjc.A.dylib/EQKitLayoutSchemataPadded.h>

@class NSString;

@interface EQKitMathMLMPadded : EQKitMathMLUnaryNode <EQKitLayoutSchemataPadded>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(Schemata*)layoutSchemata;
-(BOOL)isEmbellishedOperator;
-(id)operatorCore;
-(id)schemataNode;
-(const set<EQKitTypes::Attributes::Enum, std::__1::less<EQKitTypes::Attributes::Enum>, std::__1::allocator<EQKitTypes::Attributes::Enum> >*)mathMLAttributes;
@end
