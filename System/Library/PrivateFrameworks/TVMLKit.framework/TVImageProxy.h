/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol IKNetworkRequestLoader;
@class TVImageDecorator, _TVDecoratorRequest;

@interface TVImageProxy : NSObject <NSCopying> {

	BOOL _cacheOnLoad;
	BOOL _allowsSubstitutionForOriginal;
	BOOL _imageAvailable;
	BOOL _isLoading;
	BOOL _loadSynchronouslyIfCached;
	BOOL _writeToAssetLibrary;
	id _object;
	id _imageLoader;
	TVImageDecorator* _decorator;
	/*^block*/id _completionHandler;
	/*^block*/id _writeCompletionHandler;
	long long _imageDirection;
	long long _groupType;
	id _requestToken;
	_TVDecoratorRequest* _decoratorRequestToken;
	id _imageDidWriteObserver;
	id<IKNetworkRequestLoader> _requestLoader;

}

@property (nonatomic,retain) id imageLoader;                                               //@synthesize imageLoader=_imageLoader - In the implementation block
@property (assign,nonatomic) long long groupType;                                          //@synthesize groupType=_groupType - In the implementation block
@property (nonatomic,retain) id requestToken;                                              //@synthesize requestToken=_requestToken - In the implementation block
@property (nonatomic,retain) _TVDecoratorRequest * decoratorRequestToken;                  //@synthesize decoratorRequestToken=_decoratorRequestToken - In the implementation block
@property (assign,nonatomic) BOOL isLoading;                                               //@synthesize isLoading=_isLoading - In the implementation block
@property (nonatomic,retain) id imageDidWriteObserver;                                     //@synthesize imageDidWriteObserver=_imageDidWriteObserver - In the implementation block
@property (assign,nonatomic,__weak) id<IKNetworkRequestLoader> requestLoader;              //@synthesize requestLoader=_requestLoader - In the implementation block
@property (assign,nonatomic) BOOL loadSynchronouslyIfCached;                               //@synthesize loadSynchronouslyIfCached=_loadSynchronouslyIfCached - In the implementation block
@property (assign,nonatomic) BOOL writeToAssetLibrary;                                     //@synthesize writeToAssetLibrary=_writeToAssetLibrary - In the implementation block
@property (nonatomic,readonly) id object;                                                  //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) CGSize expectedSize; 
@property (assign,nonatomic) BOOL cacheOnLoad;                                             //@synthesize cacheOnLoad=_cacheOnLoad - In the implementation block
@property (assign,nonatomic) BOOL allowsSubstitutionForOriginal;                           //@synthesize allowsSubstitutionForOriginal=_allowsSubstitutionForOriginal - In the implementation block
@property (nonatomic,retain) TVImageDecorator * decorator;                                 //@synthesize decorator=_decorator - In the implementation block
@property (copy) id completionHandler;                                                     //@synthesize completionHandler=_completionHandler - In the implementation block
@property (copy) id writeCompletionHandler;                                                //@synthesize writeCompletionHandler=_writeCompletionHandler - In the implementation block
@property (assign,getter=isImageAvailable,nonatomic) BOOL imageAvailable;                  //@synthesize imageAvailable=_imageAvailable - In the implementation block
@property (assign,nonatomic) long long imageDirection;                                     //@synthesize imageDirection=_imageDirection - In the implementation block
+(id)_imageDecoratorQueue;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)load;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)object;
-(void)cancel;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(BOOL)isLoading;
-(void)setIsLoading:(BOOL)arg1 ;
-(TVImageDecorator *)decorator;
-(long long)groupType;
-(id)requestToken;
-(void)setRequestToken:(id)arg1 ;
-(void)setGroupType:(long long)arg1 ;
-(void)setImageDirection:(long long)arg1 ;
-(long long)imageDirection;
-(id<IKNetworkRequestLoader>)requestLoader;
-(CGSize)expectedSize;
-(id)imageLoader;
-(void)setCacheOnLoad:(BOOL)arg1 ;
-(void)setLoadSynchronouslyIfCached:(BOOL)arg1 ;
-(void)setDecorator:(TVImageDecorator *)arg1 ;
-(void)setRequestLoader:(id<IKNetworkRequestLoader>)arg1 ;
-(id)initWithObject:(id)arg1 imageLoader:(id)arg2 groupType:(long long)arg3 ;
-(BOOL)cacheOnLoad;
-(BOOL)loadSynchronouslyIfCached;
-(BOOL)writeToAssetLibrary;
-(void)setWriteToAssetLibrary:(BOOL)arg1 ;
-(void)setDecoratorRequestToken:(_TVDecoratorRequest *)arg1 ;
-(id)_decoratedImageAssetPath;
-(id)_imageLoaderKey;
-(id)_originalImageAssetPath;
-(void)_callCompletionHandlerWithImage:(id)arg1 error:(id)arg2 finished:(BOOL)arg3 ;
-(void)_callWriteCompletionHandlerWithPath:(id)arg1 error:(id)arg2 finished:(BOOL)arg3 ;
-(void)_completeImageLoadWithImage:(id)arg1 imagePath:(id)arg2 error:(id)arg3 assetKey:(id)arg4 expiryDate:(id)arg5 tags:(id)arg6 requestRecord:(id)arg7 ;
-(id)_originalImageAssetKey;
-(id)_decoratedImageAssetKey;
-(void)_decorateAndWriteImage:(id)arg1 imagePath:(id)arg2 scaleToSize:(CGSize)arg3 cropToFit:(BOOL)arg4 scalingResult:(unsigned long long)arg5 assetKey:(id)arg6 expiryDate:(id)arg7 tags:(id)arg8 requestRecord:(id)arg9 ;
-(id)writeCompletionHandler;
-(void)_imageDidWriteHandler:(id)arg1 ;
-(id)_assetKeyWithImageLoaderKey:(id)arg1 decoratorIdentifier:(id)arg2 ;
-(BOOL)allowsSubstitutionForOriginal;
-(id)_imageAssetPathWithAssetKey:(id)arg1 ;
-(id)_decoratorIdentifier;
-(_TVDecoratorRequest *)decoratorRequestToken;
-(BOOL)isOfSameOriginAs:(id)arg1 ;
-(BOOL)isImageAvailable;
-(void)setImageLoader:(id)arg1 ;
-(void)setAllowsSubstitutionForOriginal:(BOOL)arg1 ;
-(void)setWriteCompletionHandler:(id)arg1 ;
-(void)setImageAvailable:(BOOL)arg1 ;
-(id)imageDidWriteObserver;
-(void)setImageDidWriteObserver:(id)arg1 ;
-(void)loadWithWeakObject:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

