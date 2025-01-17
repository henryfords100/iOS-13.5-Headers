/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDLayout.h>

@protocol EQKitLayout, EQKitLayoutContext;
@class TSDShadow;

@interface TSWPEquationLayout : TSDLayout {

	BOOL _equationIsValid;
	id<EQKitLayout> _equationLayout;
	id<EQKitLayoutContext> _equationLayoutContext;
	CGColorRef _textColor;
	TSDShadow* _textShadow;

}

@property (nonatomic,retain) id<EQKitLayoutContext> equationLayoutContext;              //@synthesize equationLayoutContext=_equationLayoutContext - In the implementation block
@property (nonatomic,readonly) id<EQKitLayout> equationLayout;                          //@synthesize equationLayout=_equationLayout - In the implementation block
@property (nonatomic,readonly) BOOL equationIsValid;                                    //@synthesize equationIsValid=_equationIsValid - In the implementation block
@property (nonatomic,readonly) CGColorRef textColor;                                    //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,readonly) TSDShadow * textShadow;                                  //@synthesize textShadow=_textShadow - In the implementation block
-(void)dealloc;
-(CGColorRef)textColor;
-(void)validate;
-(TSDShadow *)textShadow;
-(id)computeLayoutGeometry;
-(double)inlineVerticalOffset;
-(double)inlineCenteredAlignmentOffset;
-(void)willLayoutInlineWithTextAttributes:(CFDictionaryRef)arg1 columnWidth:(double)arg2 ;
-(BOOL)wantsRoundedInlinePosition;
-(CGRect)frameForCulling;
-(BOOL)equationIsValid;
-(id<EQKitLayout>)equationLayout;
-(id<EQKitLayoutContext>)equationLayoutContext;
-(void)setEquationLayoutContext:(id<EQKitLayoutContext>)arg1 ;
@end

