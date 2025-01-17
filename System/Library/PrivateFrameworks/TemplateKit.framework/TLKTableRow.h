/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TLKObject.h>

@class NSArray;

@interface TLKTableRow : TLKObject {

	BOOL _isSubHeader;
	NSArray* _data;

}

@property (nonatomic,retain) NSArray * data;                //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) BOOL isSubHeader;              //@synthesize isSubHeader=_isSubHeader - In the implementation block
-(NSArray *)data;
-(void)setData:(NSArray *)arg1 ;
-(BOOL)isSubHeader;
-(void)setIsSubHeader:(BOOL)arg1 ;
@end

