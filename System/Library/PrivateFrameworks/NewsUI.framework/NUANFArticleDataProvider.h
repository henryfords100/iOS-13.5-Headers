/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NUArticleDataProvider.h>

@protocol FCContentContext, NUFontRegistration, SXHost, NUEmbedDataManager;
@class NSString, FCArticle, NUANFFontLoader, NUANFContextLoader, NUANFAssetLoader, NFEventManager;

@interface NUANFArticleDataProvider : NSObject <NUArticleDataProvider> {

	FCArticle* _article;
	NSString* _articleID;
	id<FCContentContext> _contentContext;
	id<NUFontRegistration> _fontRegistration;
	id<SXHost> _host;
	NUANFFontLoader* _fontLoader;
	NUANFContextLoader* _contextLoader;
	NUANFAssetLoader* _assetLoader;
	id<NUEmbedDataManager> _embedDataManger;
	NFEventManager* _eventManager;

}

@property (nonatomic,copy) NSString * articleID;                                     //@synthesize articleID=_articleID - In the implementation block
@property (nonatomic,readonly) id<FCContentContext> contentContext;                  //@synthesize contentContext=_contentContext - In the implementation block
@property (nonatomic,readonly) id<NUFontRegistration> fontRegistration;              //@synthesize fontRegistration=_fontRegistration - In the implementation block
@property (nonatomic,readonly) id<SXHost> host;                                      //@synthesize host=_host - In the implementation block
@property (nonatomic,retain) FCArticle * article;                                    //@synthesize article=_article - In the implementation block
@property (nonatomic,retain) NUANFFontLoader * fontLoader;                           //@synthesize fontLoader=_fontLoader - In the implementation block
@property (nonatomic,retain) NUANFContextLoader * contextLoader;                     //@synthesize contextLoader=_contextLoader - In the implementation block
@property (nonatomic,retain) NUANFAssetLoader * assetLoader;                         //@synthesize assetLoader=_assetLoader - In the implementation block
@property (nonatomic,retain) id<NUEmbedDataManager> embedDataManger;                 //@synthesize embedDataManger=_embedDataManger - In the implementation block
@property (nonatomic,retain) NFEventManager * eventManager;                          //@synthesize eventManager=_eventManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<SXHost>)host;
-(NSString *)articleID;
-(void)setArticleID:(NSString *)arg1 ;
-(id<FCContentContext>)contentContext;
-(FCArticle *)article;
-(void)setArticle:(FCArticle *)arg1 ;
-(NUANFAssetLoader *)assetLoader;
-(void)setAssetLoader:(NUANFAssetLoader *)arg1 ;
-(id<NUFontRegistration>)fontRegistration;
-(NFEventManager *)eventManager;
-(void)prefetchAssets;
-(void)cancelAssetPrefetch;
-(void)loadContextWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setupAssetPrefetchRequestEventsWithEvents:(id)arg1 ;
-(NUANFFontLoader *)fontLoader;
-(NUANFContextLoader *)contextLoader;
-(id<NUEmbedDataManager>)embedDataManger;
-(void)loadArticleWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)reloadArticleIfNeeded;
-(void)setContextLoader:(NUANFContextLoader *)arg1 ;
-(void)setFontLoader:(NUANFFontLoader *)arg1 ;
-(void)setEventManager:(NFEventManager *)arg1 ;
-(void)setupAssetPrefetchCancellationWithOperation:(id)arg1 ;
-(id)initWithArticle:(id)arg1 contentContext:(id)arg2 fontRegistration:(id)arg3 host:(id)arg4 embedDataManager:(id)arg5 ;
-(void)setEmbedDataManger:(id<NUEmbedDataManager>)arg1 ;
@end

