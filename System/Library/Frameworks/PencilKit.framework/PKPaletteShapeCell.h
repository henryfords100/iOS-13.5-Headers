/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView, PKPaletteShape;

@interface PKPaletteShapeCell : UICollectionViewCell {

	UIImageView* _imageView;
	PKPaletteShape* _shape;

}

@property (nonatomic,readonly) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) PKPaletteShape * shape;                 //@synthesize shape=_shape - In the implementation block
-(PKPaletteShape *)shape;
-(void)setShape:(PKPaletteShape *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
@end
