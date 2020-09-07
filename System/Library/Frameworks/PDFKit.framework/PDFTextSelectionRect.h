/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <UIKitCore/UITextSelectionRect.h>

@class PDFPage;

@interface PDFTextSelectionRect : UITextSelectionRect {

	PDFPage* _page;
	CGRect _rect;
	BOOL _isStartingRect;
	BOOL _isEndingRect;

}
-(id)description;
-(BOOL)isVertical;
-(BOOL)containsStart;
-(BOOL)containsEnd;
-(CGRect)rect;
-(long long)writingDirection;
-(id)initWithRect:(CGRect)arg1 onPage:(id)arg2 ;
-(void)setIsStartingRect:(BOOL)arg1 ;
-(void)setIsEndingRect:(BOOL)arg1 ;
@end
