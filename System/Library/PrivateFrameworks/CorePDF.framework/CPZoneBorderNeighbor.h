/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CPCopying.h>

@class CPShape;

@interface CPZoneBorderNeighbor : NSObject <NSCopying, CPCopying> {

	CPShape* neighborShape;
	int shapeSide;

}
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initSuper;
-(id)neighborShape;
-(int)shapeSide;
-(void)setNeighborShape:(id)arg1 ;
-(void)setShapeSide:(int)arg1 ;
@end
