/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppSupportUI/AppSupportUI-Structs.h>
#import <libobjc.A.dylib/NUIGridDimension.h>
@class NSArray;


@protocol NUIGridDimension <NSObject>
@property (nonatomic,copy) NSArray * arrangedSubviews; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (assign,nonatomic) double length; 
@property (assign,nonatomic) double spacingAfter; 
@property (assign,nonatomic) long long alignment; 
@required
-(double)length;
-(void)setLength:(double)arg1;
-(BOOL)isHidden;
-(long long)alignment;
-(void)setAlignment:(long long)arg1;
-(void)setHidden:(BOOL)arg1;
-(NSArray *)arrangedSubviews;
-(void)setArrangedSubviews:(id)arg1;
-(double)spacingAfter;
-(void)setSpacingAfter:(double)arg1;

@end


@class NSArray, NUIContainerGridView, NSString;

@interface NUIGridDimension : NSObject <NUIGridDimension> {

	NUIContainerGridView* _gridView;
	NSArray* _arrangedSubviews;
	NSArray* _visibleArrangedSubviews;
	double _length;
	double _spacing;
	struct {
		unsigned align : 8;
		unsigned isRow : 1;
		unsigned hidden : 1;
		unsigned wasDetached : 1;
	}  _flags;

}

@property (nonatomic,copy) NSArray * visibleArrangedSubviews;              //@synthesize visibleArrangedSubviews=_visibleArrangedSubviews - In the implementation block
@property (assign,nonatomic) double length; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * arrangedSubviews; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (assign,nonatomic) double spacingAfter; 
@property (assign,nonatomic) long long alignment; 
-(void)dealloc;
-(double)length;
-(void)setLength:(double)arg1 ;
-(BOOL)isHidden;
-(long long)alignment;
-(void)setAlignment:(long long)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(NSArray *)arrangedSubviews;
-(NSArray *)visibleArrangedSubviews;
-(void)invalidateArrangedSubviews;
-(id)initWithContainerGridView:(id)arg1 isRow:(BOOL)arg2 ;
-(double)spacingAfter;
-(void)setSpacingAfter:(double)arg1 ;
-(void)setVisibleArrangedSubviews:(NSArray *)arg1 ;
@end

