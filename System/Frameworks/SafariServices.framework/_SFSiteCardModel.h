/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIImage, NSString;


@protocol _SFSiteCardModel <NSObject>
@property (nonatomic,retain) UIImage * badge; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) NSString * source; 
@property (nonatomic,retain) UIImage * sourceIcon; 
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,retain) NSString * title; 
@required
-(void)setSource:(id)arg1;
-(NSString *)source;
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(void)setBadge:(id)arg1;
-(UIImage *)image;
-(void)setImage:(id)arg1;
-(NSString *)subtitle;
-(void)setSubtitle:(id)arg1;
-(UIImage *)badge;
-(void)setSourceIcon:(id)arg1;
-(UIImage *)sourceIcon;

@end
