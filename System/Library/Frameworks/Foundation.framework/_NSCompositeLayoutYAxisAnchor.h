/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSLayoutYAxisAnchor.h>
#import <libobjc.A.dylib/NSCompositeLayoutAnchor.h>

@class NSLayoutYAxisAnchor, NSLayoutDimension, NSArray;

@interface _NSCompositeLayoutYAxisAnchor : NSLayoutYAxisAnchor <NSCompositeLayoutAnchor> {

	NSLayoutYAxisAnchor* _yAxisAnchor;
	double _constant;
	double _dimensionMultiplier;
	NSLayoutDimension* _dimension;

}

@property (readonly) NSArray * _childAnchors; 
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_expressionInContext:(SCD_Struct_NS53)arg1 ;
-(id)initWithAnchor:(id)arg1 ;
-(NSArray *)_childAnchors;
-(id)equationDescription;
-(double)_valueInEngine:(id)arg1 ;
-(id)initWithAnchor:(id)arg1 plusDimension:(id)arg2 times:(double)arg3 plus:(double)arg4 ;
@end

