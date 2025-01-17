/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKStrokedAnnotation.h>
#import <libobjc.A.dylib/AKRectangularAnnotationProtocol.h>

@class NSData, NSString;

@interface AKLoupeAnnotation : AKStrokedAnnotation <AKRectangularAnnotationProtocol> {

	double _magnification;
	NSData* _imageData;
	CGRect _rectangle;

}

@property (assign) CGRect rectangle;                                //@synthesize rectangle=_rectangle - In the implementation block
@property (assign) double magnification;                            //@synthesize magnification=_magnification - In the implementation block
@property (nonatomic,retain) NSData * imageData;                    //@synthesize imageData=_imageData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingHitTestBounds;
+(id)keyPathsForValuesAffectingDrawingBounds;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)displayName;
-(NSData *)imageData;
-(void)setImageData:(NSData *)arg1 ;
-(void)setRectangle:(CGRect)arg1 ;
-(id)keysForValuesToObserveForUndo;
-(CGRect)rectangle;
-(double)magnification;
-(id)keysForValuesToObserveForRedrawing;
-(void)adjustModelToCompensateForOriginalExif;
-(CGRect)hitTestBounds;
-(void)flattenModelExifOrientation:(long long)arg1 withModelSize:(CGSize)arg2 ;
-(void)translateBy:(CGPoint)arg1 ;
-(id)keysForValuesToObserveForAdornments;
-(void)setMagnification:(double)arg1 ;
@end

