/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMShapeBuilder.h>

@class OADStroke;

@interface CMLineShapeBuilder : CMShapeBuilder {

	OADStroke* _stroke;

}
-(void)setStroke:(id)arg1 ;
-(CGPathRef)copyShapeWithTransform:(CGAffineTransform)arg1 ;
-(void)_renderBentConnector2InPath:(CGPathRef)arg1 withTransform:(CGAffineTransform)arg2 andOrientedBounds:(id)arg3 headSrc:(CGPoint*)arg4 headDst:(CGPoint*)arg5 tailSrc:(CGPoint*)arg6 tailDst:(CGPoint*)arg7 ;
-(void)_renderBentConnector3InPath:(CGPathRef)arg1 withTransform:(CGAffineTransform)arg2 andOrientedBounds:(id)arg3 headSrc:(CGPoint*)arg4 headDst:(CGPoint*)arg5 tailSrc:(CGPoint*)arg6 tailDst:(CGPoint*)arg7 ;
-(void)_renderStraightConnector1InPath:(CGPathRef)arg1 withTransform:(CGAffineTransform)arg2 andOrientedBounds:(id)arg3 headSrc:(CGPoint*)arg4 headDst:(CGPoint*)arg5 tailSrc:(CGPoint*)arg6 tailDst:(CGPoint*)arg7 ;
-(float)_getRotationFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 withBounds:(id)arg3 ;
-(void)_renderLineEnd:(id)arg1 atPoint:(CGPoint)arg2 withOrientation:(float)arg3 inPath:(CGPathRef)arg4 ;
-(float)_adjustedCoefAtIndex:(int)arg1 ;
-(CGRect)_boundingBoxForLineEnd:(id)arg1 ;
@end

