/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NUArticleContentSizeManager.h>

@protocol NUArticleContentSizeManager <NSObject>
@required
-(id)contentSizeCategoryForArticle:(id)arg1;
-(void)updateContentSizeCategory:(id)arg1 forArticle:(id)arg2;
-(long long)contentScaleForArticle:(id)arg1;
-(void)updateContentScale:(long long)arg1 forArticle:(id)arg2;

@end


@class FCTagSettings, NSString;

@interface NUArticleContentSizeManager : NSObject <NUArticleContentSizeManager> {

	FCTagSettings* _tagSettings;

}

@property (nonatomic,readonly) FCTagSettings * tagSettings;              //@synthesize tagSettings=_tagSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FCTagSettings *)tagSettings;
-(id)contentSizeCategoryForArticle:(id)arg1 ;
-(void)updateContentSizeCategory:(id)arg1 forArticle:(id)arg2 ;
-(long long)contentScaleForArticle:(id)arg1 ;
-(void)updateContentScale:(long long)arg1 forArticle:(id)arg2 ;
-(id)initWithTagSettings:(id)arg1 ;
-(id)contentSizeCategoryForSize:(long long)arg1 ;
-(long long)textSizeForContentSizeCategory:(id)arg1 ;
@end
