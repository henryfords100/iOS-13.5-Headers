/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Navigation/Navigation-Structs.h>
@interface _MNMapPointWithIndex : NSObject {

	BOOL _isStartOfSegment;
	BOOL _isPolylineA;
	BOOL _isFlipped;
	unsigned long long _index;
	Matrix<double, 2, 1> _point;
	LineSegment<double, 2> _segment;

}

@property (assign,nonatomic) Matrix<double point;                     //@synthesize point=_point - In the implementation block
@property (assign,nonatomic) unsigned long long index;                //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) BOOL isStartOfSegment;                   //@synthesize isStartOfSegment=_isStartOfSegment - In the implementation block
@property (assign,nonatomic) BOOL isPolylineA;                        //@synthesize isPolylineA=_isPolylineA - In the implementation block
@property (assign,nonatomic) BOOL isFlipped;                          //@synthesize isFlipped=_isFlipped - In the implementation block
@property (assign,nonatomic) LineSegment<double segment;              //@synthesize segment=_segment - In the implementation block
-(unsigned long long)index;
-(BOOL)isFlipped;
-(Matrix<double)point;
-(void)setPoint:(Matrix<double)arg1 ;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)setSegment:(LineSegment<double)arg1 ;
-(LineSegment<double)segment;
-(void)setIsFlipped:(BOOL)arg1 ;
-(BOOL)isStartOfSegment;
-(void)setIsStartOfSegment:(BOOL)arg1 ;
-(BOOL)isPolylineA;
-(void)setIsPolylineA:(BOOL)arg1 ;
@end
