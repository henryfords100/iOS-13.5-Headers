/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIAction.h>

@class NSString, UIView;

@interface VUIActionShareSheet : VUIAction {

	NSString* _urlString;
	NSString* _title;
	NSString* _subtitle;
	NSString* _imageURLStr;
	UIView* _sourceView;

}

@property (nonatomic,retain) NSString * urlString;                //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,retain) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                 //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSString * imageURLStr;              //@synthesize imageURLStr=_imageURLStr - In the implementation block
@property (nonatomic,retain) UIView * sourceView;                 //@synthesize sourceView=_sourceView - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(UIView *)sourceView;
-(void)setSourceView:(UIView *)arg1 ;
-(NSString *)urlString;
-(void)setUrlString:(NSString *)arg1 ;
-(void)performWithTargetResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithContextData:(id)arg1 viewElement:(id)arg2 sourceView:(id)arg3 ;
-(NSString *)imageURLStr;
-(void)setImageURLStr:(NSString *)arg1 ;
@end

