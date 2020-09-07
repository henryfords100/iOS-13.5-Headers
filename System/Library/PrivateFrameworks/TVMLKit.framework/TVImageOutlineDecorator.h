/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVImageScaleDecorator.h>

@class UIColor;

@interface TVImageOutlineDecorator : TVImageScaleDecorator {

	UIColor* _outlineColor;
	UIEdgeInsets _outlineWidths;

}

@property (nonatomic,copy,readonly) UIColor * outlineColor;              //@synthesize outlineColor=_outlineColor - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets outlineWidths;               //@synthesize outlineWidths=_outlineWidths - In the implementation block
+(id)decoratorWithOutlineColor:(id)arg1 outlineWidths:(UIEdgeInsets)arg2 ;
-(UIColor *)outlineColor;
-(void)drawInContext:(id)arg1 imageRect:(CGRect)arg2 ;
-(id)decoratorIdentifier;
-(id)initWithOutlineColor:(id)arg1 outlineWidths:(UIEdgeInsets)arg2 ;
-(UIEdgeInsets)outlineWidths;
@end
