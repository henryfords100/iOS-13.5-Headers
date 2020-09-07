/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchML/TMLReactiveValue.h>

@class NSString, TMLContext, NSArray;

@interface TMLExpressionReactiveValue : TMLReactiveValue {

	NSString* _expression;
	TMLContext* _context;
	NSArray* _bindings;

}
-(id)value;
-(id)initWithExpression:(id)arg1 context:(id)arg2 bindings:(id)arg3 valueType:(unsigned long long)arg4 ;
@end
