/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libwebrtc.dylib/libwebrtc.dylib-Structs.h>
#import <libobjc.A.dylib/RTCVideoEncoder.h>

@class NSString;

@interface WK_RTCWrappedNativeVideoEncoder : NSObject <RTCVideoEncoder> {

	unique_ptr<webrtc::VideoEncoder, std::__1::default_delete<webrtc::VideoEncoder> >* _wrappedEncoder;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCallback:(/*^block*/id)arg1 ;
-(id)implementationName;
-(unique_ptr<webrtc::VideoEncoder, std::__1::default_delete<webrtc::VideoEncoder> >*)releaseWrappedEncoder;
-(long long)startEncodeWithSettings:(id)arg1 numberOfCores:(int)arg2 ;
-(long long)releaseEncoder;
-(long long)encode:(id)arg1 codecSpecificInfo:(id)arg2 frameTypes:(id)arg3 ;
-(int)setBitrate:(unsigned)arg1 framerate:(unsigned)arg2 ;
-(id)scalingSettings;
-(id)initWithNativeEncoder:(unique_ptr<webrtc::VideoEncoder, std::__1::default_delete<webrtc::VideoEncoder> >*)arg1 ;
@end
