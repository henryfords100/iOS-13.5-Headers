/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVMetadataItemValueRequestInternal, AVMetadataItem;

@interface AVMetadataItemValueRequest : NSObject {

	AVMetadataItemValueRequestInternal* _valueRequest;

}

@property (__weak,readonly) AVMetadataItem * metadataItem; 
+(id)metadataItemValueRequestWithMetadataItem:(id)arg1 ;
-(void)dealloc;
-(id)error;
-(id)value;
-(id)dataType;
-(void)respondWithError:(id)arg1 ;
-(AVMetadataItem *)metadataItem;
-(id)initWithMetadataItem:(id)arg1 ;
-(void)respondWithValue:(id)arg1 dataType:(id)arg2 ;
-(void)respondWithValue:(id)arg1 ;
@end
