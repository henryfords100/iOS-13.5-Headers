/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVAsynchronousVideoCompositionRequest, CIImage;

@interface AVAsynchronousCIImageFilteringRequestInternal : NSObject {

	AVAsynchronousVideoCompositionRequest* _compositingRequest;
	/*^block*/id _cancellationTest;
	/*^block*/id _defaultCIContextProvider;
	/*^block*/id _completionHandler;
	CIImage* _sourceCIImage;
	CVBufferRef _sourcePBuf;

}

@property (nonatomic,retain) AVAsynchronousVideoCompositionRequest * compositingRequest;              //@synthesize compositingRequest=_compositingRequest - In the implementation block
@property (nonatomic,copy) id cancellationTest;                                                       //@synthesize cancellationTest=_cancellationTest - In the implementation block
@property (nonatomic,copy) id defaultCIContextProvider;                                               //@synthesize defaultCIContextProvider=_defaultCIContextProvider - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) CIImage * sourceCIImage;                                                 //@synthesize sourceCIImage=_sourceCIImage - In the implementation block
@property (nonatomic,retain) CVBufferRef sourcePBuf;                                                  //@synthesize sourcePBuf=_sourcePBuf - In the implementation block
-(void)dealloc;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)_willDeallocOrFinalize;
-(AVAsynchronousVideoCompositionRequest *)compositingRequest;
-(void)setCompositingRequest:(AVAsynchronousVideoCompositionRequest *)arg1 ;
-(id)cancellationTest;
-(void)setCancellationTest:(id)arg1 ;
-(id)defaultCIContextProvider;
-(void)setDefaultCIContextProvider:(id)arg1 ;
-(CIImage *)sourceCIImage;
-(void)setSourceCIImage:(CIImage *)arg1 ;
-(CVBufferRef)sourcePBuf;
-(void)setSourcePBuf:(CVBufferRef)arg1 ;
@end

