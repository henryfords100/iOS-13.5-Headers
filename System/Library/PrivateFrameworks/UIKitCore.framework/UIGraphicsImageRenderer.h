/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGraphicsRenderer.h>

@interface UIGraphicsImageRenderer : UIGraphicsRenderer
+(Class)rendererContextClass;
+(CGContextRef)contextWithFormat:(id)arg1 ;
+(void)prepareCGContext:(CGContextRef)arg1 withRendererContext:(id)arg2 ;
-(id)init;
-(id)initWithSize:(CGSize)arg1 ;
-(id)initWithSize:(CGSize)arg1 format:(id)arg2 ;
-(id)imageWithActions:(/*^block*/id)arg1 ;
-(id)initWithBounds:(CGRect)arg1 format:(id)arg2 ;
-(void)pushContext:(id)arg1 ;
-(void)_prepareContextForReuse:(CGContextRef)arg1 ;
-(id)initWithBounds:(CGRect)arg1 ;
-(BOOL)allowsImageOutput;
-(id)PNGDataWithActions:(/*^block*/id)arg1 ;
-(id)JPEGDataWithCompressionQuality:(double)arg1 actions:(/*^block*/id)arg2 ;
@end
