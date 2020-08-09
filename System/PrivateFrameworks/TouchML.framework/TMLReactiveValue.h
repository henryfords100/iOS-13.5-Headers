/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TMLBinder.h>
#import <libobjc.A.dylib/TMLValue.h>

@class NSArray, NSString;

@interface TMLReactiveValue : NSObject <TMLBinder, TMLValue> {

	NSArray* _bindings;
	id _targetWeak;
	id _targetUnsafe;
	NSString* _keyPath;
	unsigned long long _valueType;

}

@property (nonatomic,readonly) NSArray * bindings;                  //@synthesize bindings=_bindings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long bindingOrder; 
+(id)valueForTarget:(id)arg1 withKeyPath:(id)arg2 ;
+(void)removeReactiveValuesForTarget:(id)arg1 ;
-(id)value;
-(unsigned long long)valueType;
-(void)bindingValueChanged:(id)arg1 ;
-(long long)bindingOrder;
-(void)unassign;
-(void)assignToTarget:(id)arg1 withKeyPath:(id)arg2 ;
-(id)initWithBindings:(id)arg1 valueType:(unsigned long long)arg2 ;
-(NSArray *)bindings;
@end
