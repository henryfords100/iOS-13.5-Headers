/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSString, NSDate, NSTimeZone, UIButton;


@protocol PLTitled <NSObject,PLContentSizeCategoryAdjusting>
@property (nonatomic,copy) NSArray * icons; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSDate * date; 
@property (assign,getter=isDateAllDay,nonatomic) BOOL dateAllDay; 
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (assign,nonatomic) long long dateFormatStyle; 
@property (nonatomic,readonly) NSArray * iconButtons; 
@property (nonatomic,readonly) UIButton * utilityButton; 
@required
-(void)setTimeZone:(id)arg1;
-(NSDate *)date;
-(NSTimeZone *)timeZone;
-(NSArray *)icons;
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(void)setDate:(id)arg1;
-(void)setIcons:(id)arg1;
-(long long)dateFormatStyle;
-(void)setDateFormatStyle:(long long)arg1;
-(NSArray *)iconButtons;
-(UIButton *)utilityButton;
-(BOOL)isDateAllDay;
-(void)setDateAllDay:(BOOL)arg1;

@end

